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

/* Written with heavy reliance upon the demo Python implementation provided
 * here: https://en.wikiversity.org/wiki/Reed%E2%80%93Solomon_codes_for_coders
 * Demo implementation and accompanying text licenced under Creative Commons
 */

/* C */
#include <assert.h>
#include <string.h>

/* POSIX */
#include <errno.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>

/* redupe */
#include "redupe.h"
#include "redupe-internal.h"

#define GENERATOR 2
#define PRIMEPOLY 285

#define REDUPE_API __attribute__ ((visibility ("default")))

unsigned char gf_log[] = {0, 0, 1, 25, 2, 50, 26, 198, 3, 223, 51, 238, 27, 104, 199,
    75, 4, 100, 224, 14, 52, 141, 239, 129, 28, 193, 105, 248, 200, 8, 76, 113,
    5, 138, 101, 47, 225, 36, 15, 33, 53, 147, 142, 218, 240, 18, 130, 69, 29,
    181, 194, 125, 106, 39, 249, 185, 201, 154, 9, 120, 77, 228, 114, 166, 6,
    191, 139, 98, 102, 221, 48, 253, 226, 152, 37, 179, 16, 145, 34, 136, 54,
    208, 148, 206, 143, 150, 219, 189, 241, 210, 19, 92, 131, 56, 70, 64, 30,
    66, 182, 163, 195, 72, 126, 110, 107, 58, 40, 84, 250, 133, 186, 61, 202,
    94, 155, 159, 10, 21, 121, 43, 78, 212, 229, 172, 115, 243, 167, 87, 7, 112,
    192, 247, 140, 128, 99, 13, 103, 74, 222, 237, 49, 197, 254, 24, 227, 165,
    153, 119, 38, 184, 180, 124, 17, 68, 146, 217, 35, 32, 137, 46, 55, 63, 209,
    91, 149, 188, 207, 205, 144, 135, 151, 178, 220, 252, 190, 97, 242, 86, 211,
    171, 20, 42, 93, 158, 132, 60, 57, 83, 71, 109, 65, 162, 31, 45, 67, 216,
    183, 123, 164, 118, 196, 23, 73, 236, 127, 12, 111, 246, 108, 161, 59, 82,
    41, 157, 85, 170, 251, 96, 134, 177, 187, 204, 62, 90, 203, 89, 95, 176,
    156, 169, 160, 81, 11, 245, 22, 235, 122, 117, 44, 215, 79, 174, 213, 233,
    230, 231, 173, 232, 116, 214, 244, 234, 168, 80, 88, 175};
#define GF_LOG_TABLE_SZ (sizeof(gf_log) / sizeof(unsigned char))
unsigned char gf_exp[] = {1, 2, 4, 8, 16, 32, 64, 128, 29, 58, 116, 232, 205, 135, 19,
    38, 76, 152, 45, 90, 180, 117, 234, 201, 143, 3, 6, 12, 24, 48, 96, 192,
    157, 39, 78, 156, 37, 74, 148, 53, 106, 212, 181, 119, 238, 193, 159, 35,
    70, 140, 5, 10, 20, 40, 80, 160, 93, 186, 105, 210, 185, 111, 222, 161, 95,
    190, 97, 194, 153, 47, 94, 188, 101, 202, 137, 15, 30, 60, 120, 240, 253,
    231, 211, 187, 107, 214, 177, 127, 254, 225, 223, 163, 91, 182, 113, 226,
    217, 175, 67, 134, 17, 34, 68, 136, 13, 26, 52, 104, 208, 189, 103, 206,
    129, 31, 62, 124, 248, 237, 199, 147, 59, 118, 236, 197, 151, 51, 102, 204,
    133, 23, 46, 92, 184, 109, 218, 169, 79, 158, 33, 66, 132, 21, 42, 84, 168,
    77, 154, 41, 82, 164, 85, 170, 73, 146, 57, 114, 228, 213, 183, 115, 230,
    209, 191, 99, 198, 145, 63, 126, 252, 229, 215, 179, 123, 246, 241, 255,
    227, 219, 171, 75, 150, 49, 98, 196, 149, 55, 110, 220, 165, 87, 174, 65,
    130, 25, 50, 100, 200, 141, 7, 14, 28, 56, 112, 224, 221, 167, 83, 166, 81,
    162, 89, 178, 121, 242, 249, 239, 195, 155, 43, 86, 172, 69, 138, 9, 18, 36,
    72, 144, 61, 122, 244, 245, 247, 243, 251, 235, 203, 139, 11, 22, 44, 88,
    176, 125, 250, 233, 207, 131, 27, 54, 108, 216, 173, 71, 142, 1, 2, 4, 8,
    16, 32, 64, 128, 29, 58, 116, 232, 205, 135, 19, 38, 76, 152, 45, 90, 180,
    117, 234, 201, 143, 3, 6, 12, 24, 48, 96, 192, 157, 39, 78, 156, 37, 74,
    148, 53, 106, 212, 181, 119, 238, 193, 159, 35, 70, 140, 5, 10, 20, 40, 80,
    160, 93, 186, 105, 210, 185, 111, 222, 161, 95, 190, 97, 194, 153, 47, 94,
    188, 101, 202, 137, 15, 30, 60, 120, 240, 253, 231, 211, 187, 107, 214, 177,
    127, 254, 225, 223, 163, 91, 182, 113, 226, 217, 175, 67, 134, 17, 34, 68,
    136, 13, 26, 52, 104, 208, 189, 103, 206, 129, 31, 62, 124, 248, 237, 199,
    147, 59, 118, 236, 197, 151, 51, 102, 204, 133, 23, 46, 92, 184, 109, 218,
    169, 79, 158, 33, 66, 132, 21, 42, 84, 168, 77, 154, 41, 82, 164, 85, 170,
    73, 146, 57, 114, 228, 213, 183, 115, 230, 209, 191, 99, 198, 145, 63, 126,
    252, 229, 215, 179, 123, 246, 241, 255, 227, 219, 171, 75, 150, 49, 98, 196,
    149, 55, 110, 220, 165, 87, 174, 65, 130, 25, 50, 100, 200, 141, 7, 14, 28,
    56, 112, 224, 221, 167, 83, 166, 81, 162, 89, 178, 121, 242, 249, 239, 195,
    155, 43, 86, 172, 69, 138, 9, 18, 36, 72, 144, 61, 122, 244, 245, 247, 243,
    251, 235, 203, 139, 11, 22, 44, 88, 176, 125, 250, 233, 207, 131, 27, 54,
    108, 216, 173, 71, 142};
#define GF_EXP_TABLE_SZ (sizeof(gf_exp) / sizeof(unsigned char))

unsigned
redupe_gf_sub(unsigned x, unsigned y)
{
    return x ^ y;
}

unsigned
redupe_gf_mul(unsigned x, unsigned y)
{
    assert((x & 0xff) == x);
    assert((y & 0xff) == y);

    if (x == 0 || y == 0)
    {
        return 0;
    }

    return gf_exp[(gf_log[x] + gf_log[y]) % 255];
}

unsigned
redupe_gf_div(unsigned x, unsigned y)
{
    assert(y != 0);

    if (x == 0)
    {
        return 0;
    }

    return gf_exp[(gf_log[x] + 255 - gf_log[y]) % 255];
}

unsigned
redupe_gf_inv(unsigned x)
{
    return gf_exp[255 - gf_log[x]];
}

unsigned
redupe_gf_pow(unsigned x, int power)
{
    int idx = (gf_log[x] * power) % 255;

    if (idx < 0)
    {
        idx += 255;
    }

    return gf_exp[idx];
}

void
redupe_gf_poly_add(const unsigned char* p, unsigned p_sz,
                   const unsigned char* q, unsigned q_sz,
                   unsigned char* r, unsigned* r_sz)
{
    *r_sz = p_sz > q_sz ? p_sz : q_sz;
    memset(r, 0, sizeof(unsigned char) * *r_sz);
    const unsigned p_diff = *r_sz - p_sz;
    const unsigned q_diff = *r_sz - q_sz;

    for (unsigned i = 0; i < p_sz; ++i)
    {
        r[i + p_diff] = p[i];
    }

    for (unsigned i = 0; i < q_sz; ++i)
    {
        r[i + q_diff] ^= q[i];
    }
}

void
redupe_gf_poly_mul(const unsigned char* p, unsigned p_sz,
                   const unsigned char* q, unsigned q_sz,
                   unsigned char* r, unsigned* r_sz)
{
    *r_sz = p_sz + q_sz - 1;
    memset(r, 0, sizeof(unsigned char) * *r_sz);

    for (unsigned i = 0; i < p_sz; ++i)
    {
        for (unsigned j = 0; j < q_sz; ++j)
        {
            r[i + j] ^= redupe_gf_mul(p[i], q[j]);
        }
    }
}

/* polynomials must be biggest-lowest degree */
void
redupe_gf_poly_div(const unsigned char* dividend, unsigned dividend_sz,
                   const unsigned char* divisor, unsigned divisor_sz,
                   unsigned char* quotient, unsigned* quotient_sz,
                   unsigned char* remainder, unsigned* remainder_sz)
{
    unsigned char buf[256];
    memmove(buf, dividend, dividend_sz);

    for (unsigned i = 0; i < dividend_sz - divisor_sz + 1; ++i)
    {
        if (buf[i] == 0)
        {
            continue;
        }

        for (unsigned j = 1; j < divisor_sz; ++j)
        {
            if (divisor[j] == 0)
            {
                continue;
            }

            buf[i + j] ^= redupe_gf_mul(divisor[j], buf[i]);
        }
    }

    unsigned sep = dividend_sz - divisor_sz + 1;
    assert(sep < dividend_sz);
    memmove(quotient, buf, sep);
    *quotient_sz = sep;
    memmove(remainder, buf + sep, dividend_sz - sep);
    *remainder_sz = dividend_sz - sep;
}

void
redupe_gf_poly_scale(unsigned char* poly, unsigned poly_sz, unsigned x)
{
    for (unsigned i = 0; i < poly_sz; ++i)
    {
        poly[i] = redupe_gf_mul(poly[i], x);
    }
}

unsigned
redupe_gf_poly_eval(const unsigned char* poly, unsigned poly_sz, unsigned x)
{
    if (poly_sz == 0)
    {
        return 0;
    }

    unsigned y = poly[0];

    for (unsigned i = 1; i < poly_sz; ++i)
    {
        y = redupe_gf_mul(y, x) ^ poly[i];
    }

    return y;
}

void
redupe_generator_poly(unsigned nsym, unsigned char* gen)
{
    assert(nsym > 0);
    unsigned char poly1[256];
    unsigned char poly2[256];
    unsigned char tmp[2];
    unsigned poly1_sz = 1;
    unsigned poly2_sz = 0;
    poly1[0] = 1;

    for (unsigned i = 0; i < nsym; ++i)
    {
        if ((i & 0x1) == 0)
        {
            tmp[0] = 1;
            tmp[1] = redupe_gf_pow(GENERATOR, i);
            redupe_gf_poly_mul(poly1, poly1_sz, tmp, GENERATOR, poly2, &poly2_sz);
        }
        else
        {
            tmp[0] = 1;
            tmp[1] = redupe_gf_pow(GENERATOR, i);
            redupe_gf_poly_mul(poly2, poly2_sz, tmp, GENERATOR, poly1, &poly1_sz);
        }
    }

    if ((nsym & 0x1))
    {
        memmove(gen, poly2, poly2_sz * sizeof(unsigned char));
        assert(nsym + 1 == poly2_sz);
    }
    else
    {
        memmove(gen, poly1, poly1_sz * sizeof(unsigned char));
        assert(nsym + 1 == poly1_sz);
    }
}

REDUPE_API void
redupe_encode_msg(const unsigned char* msg, unsigned msg_sz,
                  unsigned nsym, unsigned char* code)
{
    assert(msg_sz + nsym < 256);
    unsigned char generator[256];
    unsigned char logs[256];
    unsigned char out[256];

    memset(generator, 0, sizeof(generator));
    memset(logs, 0, sizeof(logs));
    memset(out, 0, sizeof(out));
    memmove(out, msg, msg_sz);
    redupe_generator_poly(nsym, generator);

    for (unsigned i = 0; i < nsym + 1; ++i)
    {
        logs[i] = gf_log[generator[i]];
    }

    for (unsigned i = 0; i < msg_sz; ++i)
    {
        if (out[i] == 0)
        {
            continue;
        }

        unsigned char log = gf_log[out[i]];

        for (unsigned j = 0; j < nsym + 1; ++j)
        {
            out[i + j] ^= gf_exp[log + logs[j]];
        }
    }

    for (unsigned i = 0; i < nsym; ++i)
    {
        code[i] = out[msg_sz + i];
    }
}

void
redupe_calc_syndromes(const unsigned char* msg, unsigned msg_sz,
                      unsigned nsym,
                      unsigned char* buf, unsigned* buf_sz)
{
    buf[0] = 0;
    *buf_sz = nsym + 1;

    for (unsigned i = 0; i < nsym; ++i)
    {
        buf[i + 1] = redupe_gf_poly_eval(msg, msg_sz, redupe_gf_pow(GENERATOR, i));
    }
}

int
redupe_find_error_locator(const unsigned char* synd, unsigned synd_sz,
                          unsigned nsym,
                          unsigned char* out_err_loc, unsigned* out_err_loc_sz)
{
    unsigned char old_loc[256];
    unsigned old_loc_sz = 1;
    old_loc[0] = 1;
    unsigned char err_loc[256];
    unsigned err_loc_sz = 1;
    err_loc[0] = 1;
    unsigned synd_shift = 0;

    if (synd_sz > nsym)
    {
        synd_shift = synd_sz - nsym;
    }

    for (unsigned i = 0; i < nsym; ++i)
    {
        unsigned K = i + synd_shift;
        unsigned char delta = synd[K];

        for (unsigned j = 1; j < err_loc_sz; ++j)
        {
            delta ^= redupe_gf_mul(err_loc[err_loc_sz - (j + 1)], synd[K - j]);
        }

        old_loc[old_loc_sz] = 0;
        ++old_loc_sz;

        if (delta != 0)
        {
            if (old_loc_sz > err_loc_sz)
            {
                unsigned char new_loc[256];
                unsigned new_loc_sz = old_loc_sz;
                memmove(new_loc, old_loc, sizeof(old_loc));
                redupe_gf_poly_scale(new_loc, new_loc_sz, delta);

                old_loc_sz = err_loc_sz;
                memmove(old_loc, err_loc, new_loc_sz);
                unsigned char inv = redupe_gf_inv(delta);
                redupe_gf_poly_scale(old_loc, old_loc_sz, inv);

                err_loc_sz = new_loc_sz;
                memmove(err_loc, new_loc, new_loc_sz);
            }

            unsigned char tmp[256];
            unsigned tmp_sz = old_loc_sz;
            unsigned char tmp2[256];
            unsigned tmp2_sz = 0;
            memmove(tmp, old_loc, old_loc_sz);
            redupe_gf_poly_scale(tmp, tmp_sz, delta);
            redupe_gf_poly_add(err_loc, err_loc_sz, tmp, tmp_sz, tmp2, &tmp2_sz);
            err_loc_sz = tmp2_sz;
            memmove(err_loc, tmp2, tmp2_sz);
        }
    }

    unsigned shift;

    for (shift = 0; shift < err_loc_sz && err_loc[shift] == 0; ++shift)
        ;

    for (unsigned i = 0; i + shift < err_loc_sz; ++i)
    {
        out_err_loc[i] = err_loc[i + shift];
    }

    *out_err_loc_sz = err_loc_sz - shift;
    return (*out_err_loc_sz - 1) * 2 <= nsym ? 0 : -1;
}

int
redupe_find_errors(const unsigned char* err_loc, unsigned err_loc_sz,
                   unsigned nmess, unsigned char* err_pos, unsigned* err_pos_sz)
{
    const unsigned errs = err_loc_sz - 1;
    *err_pos_sz = 0;

    for (unsigned i = 0; i < nmess; ++i)
    {
        if (redupe_gf_poly_eval(err_loc, err_loc_sz, redupe_gf_pow(2, i)) == 0)
        {
            err_pos[*err_pos_sz] = nmess - 1 - i;
            ++*err_pos_sz;
        }
    }

    if (*err_pos_sz != errs)
    {
        return -1;
    }

    return 0;
}

void
redupe_find_errata_locator(const unsigned char* err_pos, unsigned err_pos_sz,
                           unsigned char* err_loc, unsigned* err_loc_sz)
{
    *err_loc_sz = 1;
    err_loc[0] = 1;

    for (unsigned i = 0; i < err_pos_sz; ++i)
    {
        unsigned char A[] = {1};
        unsigned char B[] = {redupe_gf_pow(2, err_pos[i]), 0};
        unsigned char tmpa[256];
        unsigned tmpa_sz = 0;
        redupe_gf_poly_add(A, 1, B, 2, tmpa, &tmpa_sz);

        unsigned char tmpe[256];
        unsigned tmpe_sz = *err_loc_sz;
        memmove(tmpe, err_loc, tmpe_sz);
        redupe_gf_poly_mul(tmpe, tmpe_sz, tmpa, tmpa_sz, err_loc, err_loc_sz);
    }
}

void
redupe_find_error_evaluator(const unsigned char* synd, unsigned synd_sz,
                            const unsigned char* err_loc, unsigned err_loc_sz,
                            unsigned nsym,
                            unsigned char* err_eval, unsigned* err_eval_sz)
{
    unsigned char dividend[256];
    unsigned dividend_sz;
    unsigned char divisor[256];
    unsigned divisor_sz;
    unsigned char quotient[256];
    unsigned quotient_sz;
    redupe_gf_poly_mul(synd, synd_sz, err_loc, err_loc_sz, dividend, &dividend_sz);
    divisor_sz = nsym + 2;
    memset(divisor, 0, sizeof(divisor));
    divisor[0] = 1;
    redupe_gf_poly_div(dividend, dividend_sz,
                       divisor, divisor_sz,
                       quotient, &quotient_sz,
                       err_eval, err_eval_sz);
}

void
redupe_correct_errata(unsigned char* msg, unsigned msg_sz,
                      const unsigned char* synd, unsigned synd_sz,
                      const unsigned char* err_pos, unsigned err_pos_sz)
{
    unsigned char coef_pos[256];
    unsigned coef_pos_sz = err_pos_sz;

    for (unsigned i = 0; i < coef_pos_sz; ++i)
    {
        coef_pos[i] = msg_sz - 1 - err_pos[i];
    }

    unsigned char err_loc[256];
    unsigned err_loc_sz = 0;
    redupe_find_errata_locator(coef_pos, coef_pos_sz, err_loc, &err_loc_sz);

    unsigned char tmp[256];
    unsigned tmp_sz = synd_sz;

    for (unsigned i = 0; i < synd_sz; ++i)
    {
        tmp[synd_sz - i - 1] = synd[i];
    }

    unsigned char err_eval[256];
    unsigned err_eval_sz = 0;
    redupe_find_error_evaluator(tmp, tmp_sz, err_loc, err_loc_sz, err_loc_sz - 1, err_eval, &err_eval_sz);

    for (unsigned i = 0; i < err_eval_sz / 2; ++i)
    {
        unsigned char t = err_eval[i];
        err_eval[i] = err_eval[err_eval_sz - i - 1];
        err_eval[err_eval_sz - i - 1] = t;
    }

    unsigned char X[256];
    unsigned X_sz = coef_pos_sz;

    for (unsigned i = 0; i < coef_pos_sz; ++i)
    {
        int l = 255 - coef_pos[i];
        X[i] = redupe_gf_pow(2, -l);
    }

    unsigned char E[256];
    unsigned E_sz = msg_sz;
    memset(E, 0, sizeof(E));

    for (unsigned i = 0; i < X_sz; ++i)
    {
        unsigned char xinv = redupe_gf_inv(X[i]);
        unsigned char err_loc_prime = 1;

        for (unsigned j = 0; j < X_sz; ++j)
        {
            if (j == i)
            {
                continue;
            }

            unsigned char t = redupe_gf_mul(xinv, X[j]);
            t = redupe_gf_sub(1, t);
            err_loc_prime = redupe_gf_mul(err_loc_prime, t);
        }

        tmp_sz = err_eval_sz;

        for (unsigned j = 0; j < err_eval_sz; ++j)
        {
            tmp[tmp_sz - j - 1] = err_eval[j];
        }

        unsigned char y = redupe_gf_poly_eval(tmp, tmp_sz, xinv);
        y = redupe_gf_mul(redupe_gf_pow(X[i], 1), y);
        E[err_pos[i]] = redupe_gf_div(y, err_loc_prime);
    }

    tmp_sz = msg_sz;
    memmove(tmp, msg, msg_sz);
    redupe_gf_poly_add(tmp, tmp_sz, E, E_sz, msg, &tmp_sz);
}

REDUPE_API int
redupe_correct_msg(unsigned char* msg, unsigned msg_sz,
                   unsigned nsym, unsigned char* code)
{
    assert(msg_sz + nsym < 256);
    unsigned char buf[256];
    const unsigned buf_sz = msg_sz + nsym;
    unsigned char synd[256];
    unsigned synd_sz = 0;
    unsigned synd_sum = 0;
    unsigned char err_loc[256];
    unsigned err_loc_sz = 0;
    unsigned char err_pos[256];
    unsigned err_pos_sz = 0;

    for (unsigned i = 0; i < msg_sz; ++i)
    {
        buf[i] = msg[i];
    }

    for (unsigned i = 0; i < nsym; ++i)
    {
        buf[msg_sz + i] = code[i];
    }

    redupe_calc_syndromes(buf, buf_sz, nsym, synd, &synd_sz);

    for (unsigned i = 0; i < synd_sz; ++i)
    {
        synd_sum += synd[i];
    }

    if (synd_sum == 0)
    {
        return 0;
    }

    if (redupe_find_error_locator(synd, synd_sz, nsym, err_loc, &err_loc_sz) < 0)
    {
        return -1;
    }

    for (unsigned i = 0; i < err_loc_sz / 2; ++i)
    {
        unsigned char tmp = err_loc[i];
        err_loc[i] = err_loc[err_loc_sz - i - 1];
        err_loc[err_loc_sz - i - 1] = tmp;
    }

    if (redupe_find_errors(err_loc, err_loc_sz, buf_sz, err_pos, &err_pos_sz) < 0)
    {
        return -1;
    }

    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    redupe_calc_syndromes(buf, buf_sz, nsym, synd, &synd_sz);
    synd_sum = 0;

    for (unsigned i = 0; i < synd_sz; ++i)
    {
        synd_sum += synd[i];
    }

    if (synd_sum != 0)
    {
        return -1;
    }

    memmove(msg, buf, msg_sz);
    memmove(code, buf + msg_sz, nsym);
    return 0;
}

/* changing these constants changes breaks backwards compatibility */
#define BLOCK_SIZE 4096
#define CHUNK_SIZE (255 * BLOCK_SIZE)
#define HEADER_SIZE 16

void
create_header(unsigned long long amt,
              unsigned msg_sz,
              unsigned code_sz,
              unsigned char* buf)
{
    memset(buf, 0, HEADER_SIZE);
    buf[0] = (amt >> 56) & 0xff;
    buf[1] = (amt >> 48) & 0xff;
    buf[2] = (amt >> 40) & 0xff;
    buf[3] = (amt >> 32) & 0xff;
    buf[4] = (amt >> 24) & 0xff;
    buf[5] = (amt >> 16) & 0xff;
    buf[6] = (amt >> 8) & 0xff;
    buf[7] = amt & 0xff;
    buf[8] = msg_sz;
    buf[9] = code_sz;
}

void
parse_header(const unsigned char* buf,
             unsigned long long* amt,
             unsigned* msg_sz,
             unsigned* code_sz)
{
    *amt = (unsigned long long)buf[0] << 56
         | (unsigned long long)buf[1] << 48
         | (unsigned long long)buf[2] << 40
         | (unsigned long long)buf[3] << 32
         | (unsigned long long)buf[4] << 24
         | (unsigned long long)buf[5] << 16
         | (unsigned long long)buf[6] << 8
         | (unsigned long long)buf[7];
    *msg_sz = buf[8];
    *code_sz = buf[9];
}

void
scatter(unsigned char chunk[CHUNK_SIZE], const unsigned char encoded[255], unsigned idx)
{
    assert(idx < BLOCK_SIZE);

    for (unsigned i = 0; i < 255; ++i)
    {
        chunk[BLOCK_SIZE * i + idx] = encoded[i];
    }
}

void
gather(const unsigned char chunk[CHUNK_SIZE], unsigned char encoded[255], unsigned idx)
{
    assert(idx < BLOCK_SIZE);

    for (unsigned i = 0; i < 255; ++i)
    {
        encoded[i] = chunk[BLOCK_SIZE * i + idx];
    }
}

struct redupe_encode_file
{
    FILE* out;
    unsigned nsym;
    unsigned chunk_idx;
    unsigned chunk_amt;
    unsigned buf_sz;
    unsigned char chunk[CHUNK_SIZE];
    unsigned char buf[255];
};

REDUPE_API struct redupe_encode_file*
redupe_encode_open(const char* path, unsigned nsym)
{
    FILE* out = fopen(path, "w");

    if (!out)
    {
        return NULL;
    }

    struct redupe_encode_file* ret = redupe_encode_from_file(out, nsym);

    if (!ret)
    {
        fclose(out);
        return NULL;
    }

    return ret;
}

REDUPE_API struct redupe_encode_file*
redupe_encode_from_file(FILE* out, unsigned nsym)
{
    struct redupe_encode_file* ret = malloc(sizeof(struct redupe_encode_file));

    if (!ret)
    {
        return NULL;
    }

    memset(ret, 0, sizeof(*ret));
    ret->out = out;
    ret->nsym = nsym;
    ret->chunk_idx = 0;
    ret->chunk_amt = 0;
    ret->buf_sz = 0;
    return ret;
}

REDUPE_API ssize_t
redupe_encode_write(struct redupe_encode_file* out, const unsigned char* buf, size_t buf_sz)
{
    const unsigned msg_sz = 255 - out->nsym;
    ssize_t written = 0;

    while (buf_sz > 0)
    {
        const unsigned avail = msg_sz - out->buf_sz;
        const unsigned to_copy = avail < buf_sz ? avail : buf_sz;
        assert(to_copy <= buf_sz);
        assert(out->buf_sz + to_copy <= msg_sz);
        memmove(out->buf + out->buf_sz, buf, to_copy);
        out->buf_sz += to_copy;
        buf += to_copy;
        buf_sz -= to_copy;
        written += to_copy;

        if (out->buf_sz < msg_sz)
        {
            continue;
        }

        redupe_encode_msg(out->buf, msg_sz, out->nsym, out->buf + msg_sz);
        scatter(out->chunk, out->buf, out->chunk_idx);
        ++out->chunk_idx;
        out->chunk_amt += msg_sz;
        out->buf_sz = 0;
        memset(out->buf, 0, sizeof(out->buf));

        if (out->chunk_idx + 1 < BLOCK_SIZE)
        {
            continue;
        }

        unsigned char header[256];
        memset(header, 0, sizeof(header));
        create_header(out->chunk_amt, msg_sz, out->nsym, header);
        redupe_encode_msg(header, HEADER_SIZE, 255 - HEADER_SIZE, header + HEADER_SIZE);
        scatter(out->chunk, header, BLOCK_SIZE - 1);

        if (fwrite(out->chunk, 1, CHUNK_SIZE, out->out) != CHUNK_SIZE)
        {
            return -1;
        }

        out->chunk_idx = 0;
        out->chunk_amt = 0;
        memset(out->chunk, 0, sizeof(out->chunk));
    }

    return written;
}

REDUPE_API int
redupe_encode_close(struct redupe_encode_file* out)
{
    const unsigned msg_sz = 255 - out->nsym;
    memset(out->buf + out->buf_sz, 0, 255 - out->buf_sz);
    redupe_encode_msg(out->buf, out->buf_sz, out->nsym, out->buf + msg_sz);
    scatter(out->chunk, out->buf, out->chunk_idx);
    unsigned char header[256];
    memset(header, 0, sizeof(header));

    for (unsigned i = out->chunk_idx + 1; i < BLOCK_SIZE; ++i)
    {
        scatter(out->chunk, header, i);
    }

    create_header(out->chunk_amt + out->buf_sz, msg_sz, out->nsym, header);
    redupe_encode_msg(header, HEADER_SIZE, 255 - HEADER_SIZE, header + HEADER_SIZE);
    scatter(out->chunk, header, BLOCK_SIZE - 1);
    int ret = 0;

    if (fwrite(out->chunk, 1, CHUNK_SIZE, out->out) != CHUNK_SIZE)
    {
        ret = -1;
    }

    if (fclose(out->out) == EOF)
    {
        ret = -1;
    }

    free(out);
    return ret;
}

struct redupe_correct_file
{
    FILE* in;
    unsigned msg_sz;
    unsigned code_sz;
    unsigned chunk_idx;
    unsigned chunk_amt;
    unsigned offset;
    unsigned char chunk[CHUNK_SIZE];
};

REDUPE_API struct redupe_correct_file*
redupe_correct_open(const char* path)
{
    FILE* in = fopen(path, "r");

    if (!in)
    {
        return NULL;
    }

    struct redupe_correct_file* ret = redupe_correct_from_file(in);

    if (!ret)
    {
        fclose(in);
        return NULL;
    }

    return ret;
}

REDUPE_API struct redupe_correct_file*
redupe_correct_from_file(FILE* in)
{
    struct redupe_correct_file* ret = malloc(sizeof(struct redupe_correct_file));

    if (!ret)
    {
        return NULL;
    }

    memset(ret, 0, sizeof(*ret));
    ret->in = in;
    ret->msg_sz = 0;
    ret->code_sz = 0;
    ret->chunk_idx = BLOCK_SIZE - 1;
    ret->chunk_amt = CHUNK_SIZE;
    return ret;
}

REDUPE_API ssize_t
redupe_correct_read(struct redupe_correct_file* in, unsigned char* buf, size_t buf_sz)
{
    ssize_t amt = 0;

    while (buf_sz > 0)
    {
        if (in->chunk_idx == BLOCK_SIZE - 1)
        {
            size_t x = fread(in->chunk, 1, CHUNK_SIZE, in->in);

            if (x == 0)
            {
                break;
            }

            if (x != CHUNK_SIZE || ferror(in->in))
            {
                return -1;
            }

            in->chunk_idx = 0;
            in->offset = 0;
            unsigned char header[256];
            gather(in->chunk, header, BLOCK_SIZE - 1);
            unsigned long long chunk_amt;
            parse_header(header, &chunk_amt, &in->msg_sz, &in->code_sz);
            in->chunk_amt = chunk_amt;
            assert(in->chunk_amt == chunk_amt);
        }

        const unsigned chunk_start = in->chunk_idx * in->msg_sz;
        assert(chunk_start <= in->offset);
        assert(chunk_start + in->msg_sz > in->offset);
        const unsigned remain_block = chunk_start + in->msg_sz - in->offset;
        const unsigned remain_chunk = in->chunk_amt - in->offset;
        const unsigned remain = remain_block < remain_chunk ? remain_block : remain_chunk;
        const unsigned need = buf_sz < in->msg_sz ? buf_sz : in->msg_sz;
        const unsigned to_copy = need < remain ? need : remain;

        if (to_copy == 0)
        {
            break;
        }

        unsigned char tmp[256];
        gather(in->chunk, tmp, in->chunk_idx);
        const unsigned this_msg_sz = chunk_start + in->msg_sz <= in->chunk_amt ? in->msg_sz : in->chunk_amt - chunk_start;

        if (redupe_correct_msg(tmp, this_msg_sz, in->code_sz, tmp + in->msg_sz) < 0)
        {
            return -1;
        }

        memmove(buf, tmp + in->msg_sz - remain_block, to_copy);
        in->offset += to_copy;
        buf += to_copy;
        buf_sz -= to_copy;
        amt += to_copy;

        if (chunk_start + in->msg_sz == in->offset)
        {
            ++in->chunk_idx;
        }

        if (feof(in->in))
        {
            break;
        }
    }

    return amt;
}

REDUPE_API int
redupe_correct_close(struct redupe_correct_file* in)
{
    int ret = 0;

    if (fclose(in->in) == EOF)
    {
        ret = -1;
    }

    free(in);
    return ret;
}

REDUPE_API int
fecsum_create(const char* file, const char* fec, unsigned nsym)
{
    const unsigned msg_sz = 255 - nsym;
    const unsigned code_sz = nsym;
    assert(msg_sz <= 255);
    assert(code_sz < 255);
    FILE* input = fopen(file, "r");

    if (!input)
    {
        return -1;
    }

    struct stat start_stat;

    if (fstat(fileno(input), &start_stat) < 0)
    {
        fclose(input);
        return -1;
    }

    struct redupe_encode_file* output = redupe_encode_open(fec, nsym);

    if (!output)
    {
        fclose(input);
        return -1;
    }

    int ret = 0;

    {
        unsigned char header[HEADER_SIZE];
        create_header(start_stat.st_size, msg_sz, code_sz, header);

        if (redupe_encode_write(output, header, HEADER_SIZE) != HEADER_SIZE)
        {
            ret = -1;
        }
    }

    while (ret == 0)
    {
        unsigned char inbuf[CHUNK_SIZE];
        memset(inbuf, 0, sizeof(inbuf));
        size_t amt = fread(inbuf, 1, CHUNK_SIZE, input);

        if (ferror(input))
        {
            ret = -1;
            break;
        }

        if (amt == 0)
        {
            break;
        }

        unsigned char outbuf[512];
        size_t outbuf_sz = 0;

        for (unsigned i = 0; ret == 0 && i < BLOCK_SIZE; ++i)
        {
            gather(inbuf, outbuf + outbuf_sz, i);
            outbuf_sz += 255;

            while (outbuf_sz >= msg_sz || (i + 1 == BLOCK_SIZE && outbuf_sz > 0))
            {
                const unsigned sz = outbuf_sz < msg_sz ? outbuf_sz : msg_sz;
                unsigned char code[256];
                memset(code, 0, sizeof(code));
                redupe_encode_msg(outbuf, sz, code_sz, code);

                if (redupe_encode_write(output, code, code_sz) != code_sz)
                {
                    ret = -1;
                    break;
                }

                outbuf_sz -= sz;
                memmove(outbuf, outbuf + sz, outbuf_sz);
            }
        }

        if (feof(input))
        {
            break;
        }
    }

    struct stat end_stat;

    if (fstat(fileno(input), &end_stat) < 0)
    {
        ret = -1;
    }

    if (start_stat.st_mtime != end_stat.st_mtime ||
        start_stat.st_ctime != end_stat.st_ctime)
    {
        errno = EIO;
        ret = -1;
    }

    if (redupe_encode_close(output) < 0)
    {
        ret = -1;
    }

    fclose(input);
    return ret;
}

REDUPE_API int
fecsum_check(const char* file, const char* fec)
{
    return fecsum_correct(file, fec, "/dev/null");
}

REDUPE_API int
fecsum_correct(const char* file, const char* fec, const char* corrected)
{
    FILE* input = fopen(file, "r");

    if (!input)
    {
        return -1;
    }

    FILE* output = fopen(corrected, "w");

    if (!output)
    {
        fclose(input);
        return -1;
    }

    struct redupe_correct_file* fecsum = redupe_correct_open(fec);

    if (!fecsum)
    {
        fclose(input);
        fclose(output);
        return -1;
    }

    unsigned long long file_size;
    unsigned msg_sz;
    unsigned code_sz;

    {
        unsigned char header[HEADER_SIZE];

        if (redupe_correct_read(fecsum, header, HEADER_SIZE) != HEADER_SIZE)
        {
            goto fecsum_correct_error;
        }

        parse_header(header, &file_size, &msg_sz, &code_sz);

        if (msg_sz + code_sz > 255)
        {
            goto fecsum_correct_error;
        }
    }

    unsigned long long total = 0;
    // bytes buffered for output that haven't yet been encoded
    unsigned char outbuf[512];
    size_t outbuf_sz = 0;

    while (1)
    {
        unsigned char inbuf[CHUNK_SIZE];
        memset(inbuf, 0, sizeof(inbuf));
        size_t amt = fread(inbuf, 1, CHUNK_SIZE, input);

        if (ferror(input))
        {
            goto fecsum_correct_error;
        }

        if (amt == 0)
        {
            break;
        }

        unsigned char outbuf[CHUNK_SIZE];
        unsigned char* tmp = outbuf;
        size_t tmp_sz = 0;

        for (unsigned i = 0; i < BLOCK_SIZE; ++i)
        {
            gather(inbuf, tmp + tmp_sz, i);
            tmp_sz += 255;

            while (tmp_sz >= msg_sz || (i + 1 == BLOCK_SIZE && tmp_sz > 0))
            {
                const unsigned sz = tmp_sz < msg_sz ? tmp_sz : msg_sz;
                unsigned char code[256];

                if (redupe_correct_read(fecsum, code, code_sz) != code_sz)
                {
                    goto fecsum_correct_error;
                }

                if (redupe_correct_msg(tmp, sz, code_sz, code) < 0)
                {
                    goto fecsum_correct_error;
                }

                tmp += sz;
                tmp_sz -= sz;
            }
        }

        for (unsigned i = 0; i < BLOCK_SIZE; ++i)
        {
            scatter(inbuf, outbuf + i * 255, i);
        }

        if (fwrite(inbuf, 1, amt, output) != amt)
        {
            goto fecsum_correct_error;
        }

        total += amt;

        if (feof(input))
        {
            break;
        }
    }

    fclose(input);
    fclose(output);
    redupe_correct_close(fecsum);
    return file_size == total ? 0 : -1;

fecsum_correct_error:
    fclose(input);
    fclose(output);
    redupe_correct_close(fecsum);
    return -1;
}
