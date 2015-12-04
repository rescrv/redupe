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

#ifndef redupe_h_
#define redupe_h_

/* C */
#include <stdio.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */

/* streaming in-line forward error correction */
struct redupe_encode_file;
struct redupe_encode_file* redupe_encode_open(const char* path, unsigned nsym);
struct redupe_encode_file* redupe_encode_from_file(FILE*, unsigned nsym);
ssize_t redupe_encode_write(struct redupe_encode_file*, const unsigned char* buf, size_t buf_sz);
int redupe_encode_close(struct redupe_encode_file*);

struct redupe_correct_file;
struct redupe_correct_file* redupe_correct_open(const char* path);
struct redupe_correct_file* redupe_correct_from_file(FILE*);
ssize_t redupe_correct_read(struct redupe_correct_file*, unsigned char* buf, size_t buf_sz);
int redupe_correct_close(struct redupe_correct_file*);

/* fecsum */
int fecsum_create(const char* file, const char* fecsum, unsigned nsym);
int fecsum_check(const char* file, const char* fecsum);
int fecsum_correct(const char* file, const char* fecsum, const char* corrected);

/* low level routines */
void redupe_encode_msg(const unsigned char* msg, unsigned msg_sz,
                       unsigned nsym, unsigned char* code);
int redupe_correct_msg(unsigned char* msg, unsigned msg_sz,
                       unsigned nsym, unsigned char* code);

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */
#endif /* redupe_h_ */
