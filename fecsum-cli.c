/* Copyright (c) 2015, Robert Escriva
 * All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 * 
 *     * Redistributions of source code must retain the above copyright notice,
 *       this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of this project nor the names of its contributors may
 *       be used to endorse or promote products derived from this software
 *       without specific prior written permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/* C */
#include <assert.h>
#include <math.h>
#include <string.h>

/* popt */
#include <popt.h>

/* redupe */
#include <redupe.h>

int
main(int argc, const char* argv[])
{
    int rc;

    double overhead = 12.549;
    struct poptOption redupe_args[] = {
        POPT_AUTOHELP
        {"overhead", 'o', POPT_ARG_DOUBLE, &overhead, 0, "overhead as a % (default 12.5%)", "0-100"},
        POPT_TABLEEND
    };

    poptContext ctx;
    ctx = poptGetContext(NULL, argc, argv, redupe_args,
                         POPT_CONTEXT_POSIXMEHARDER);

    while ((rc = poptGetNextOpt(ctx)) != -1)
    {
        if (rc <= 0)
        {
            switch (rc)
            {
                case POPT_ERROR_NOARG:
                case POPT_ERROR_BADOPT:
                case POPT_ERROR_BADNUMBER:
                case POPT_ERROR_OVERFLOW:
                    fprintf(stderr, "%s %s\n", poptStrerror(rc), poptBadOption(ctx, 0));
                    poptPrintUsage(ctx, stderr, 0);
                    return EXIT_FAILURE;
                case POPT_ERROR_OPTSTOODEEP:
                case POPT_ERROR_BADQUOTE:
                case POPT_ERROR_ERRNO:
                default:
                    fprintf(stderr, "logic error in argument parsing\n");
                    poptPrintUsage(ctx, stderr, 0);
                    return EXIT_FAILURE;
            }

            continue;
        }
    }

    if (overhead < 1 || overhead >= 95)
    {
        fprintf(stderr, "overhead %% must be in the range [1, 95)\n");
        poptPrintUsage(ctx, stderr, 0);
        return EXIT_FAILURE;
    }

    unsigned code_sz = 32;
    unsigned msg_sz = 223;
    code_sz = ceil(2.55 * overhead);
    msg_sz = 255 - code_sz;
    assert(code_sz < 255);
    assert(code_sz > 0);
    assert(msg_sz <= 255);
    assert(msg_sz > 0);
    const char** args = poptGetArgs(ctx);
    const char** tmp = args;

    while (tmp && *tmp)
    {
        ++tmp;
    }

    const size_t args_sz = tmp - args;

    if (args_sz < 1)
    {
        fprintf(stderr, "please specify a task: create, check, or correct\n");
        poptPrintUsage(ctx, stderr, 0);
        return EXIT_FAILURE;
    }

    if (strcmp(args[0], "create") == 0)
    {
        if (args_sz != 3)
        {
            fprintf(stderr, "command takes two arguments\n");
            poptPrintUsage(ctx, stderr, 0);
            return EXIT_FAILURE;
        }

        return fecsum_create(args[1], args[2], code_sz) == 0 ? EXIT_SUCCESS : EXIT_FAILURE;
    }
    else if (strcmp(args[0], "check") == 0)
    {
        if (args_sz != 3)
        {
            fprintf(stderr, "command takes two arguments\n");
            poptPrintUsage(ctx, stderr, 0);
            return EXIT_FAILURE;
        }

        return fecsum_check(args[1], args[2]) == 0 ? EXIT_SUCCESS : EXIT_FAILURE;
    }
    else if (strcmp(args[0], "correct") == 0)
    {
        if (args_sz != 4)
        {
            fprintf(stderr, "command takes three arguments\n");
            poptPrintUsage(ctx, stderr, 0);
            return EXIT_FAILURE;
        }

        return fecsum_correct(args[1], args[2], args[3]) == 0 ? EXIT_SUCCESS : EXIT_FAILURE;
    }
    else
    {
        fprintf(stderr, "unknown task %s\n", args[0]);
        poptPrintUsage(ctx, stderr, 0);
        return EXIT_FAILURE;
    }
}
