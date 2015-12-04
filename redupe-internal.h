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

#ifndef redupe_internal_h_
#define redupe_internal_h_

#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */

unsigned redupe_gf_sub(unsigned x, unsigned y);
unsigned redupe_gf_mul(unsigned x, unsigned y);
unsigned redupe_gf_div(unsigned x, unsigned y);
unsigned redupe_gf_inv(unsigned x);
unsigned redupe_gf_pow(unsigned x, int power);
void redupe_gf_poly_add(const unsigned char* p, unsigned p_sz,
                        const unsigned char* q, unsigned q_sz,
                        unsigned char* r, unsigned* r_sz);
void redupe_gf_poly_mul(const unsigned char* p, unsigned p_sz,
                        const unsigned char* q, unsigned q_sz,
                        unsigned char* r, unsigned* r_sz);
void redupe_gf_poly_div(const unsigned char* dividend, unsigned dividend_sz,
                        const unsigned char* divisor, unsigned divisor_sz,
                        unsigned char* quotient, unsigned* quotient_sz,
                        unsigned char* remainder, unsigned* remainder_sz);
void redupe_gf_poly_scale(unsigned char* poly, unsigned poly_sz, unsigned x);
unsigned redupe_gf_poly_eval(const unsigned char* poly, unsigned poly_sz, unsigned x);
void redupe_generator_poly(unsigned nsym, unsigned char* p);
void redupe_calc_syndromes(const unsigned char* msg, unsigned msg_sz,
                           unsigned nsym,
                           unsigned char* buf, unsigned* buf_sz);
int redupe_find_error_locator(const unsigned char* synd, unsigned synd_sz,
                              unsigned nsym,
                              unsigned char* err_loc, unsigned* err_loc_sz);
int redupe_find_errors(const unsigned char* err_loc, unsigned err_loc_sz,
                       unsigned nmess, unsigned char* err_pos, unsigned* err_pos_sz);
void redupe_find_errata_locator(const unsigned char* err_pos, unsigned err_pos_sz,
                                unsigned char* err_loc, unsigned* err_loc_sz);
void redupe_find_error_evaluator(const unsigned char* synd, unsigned synd_sz,
                                 const unsigned char* err_loc, unsigned err_loc_sz,
                                 unsigned nsym,
                                 unsigned char* err_eval, unsigned* err_eval_sz);
void redupe_correct_errata(unsigned char* msg, unsigned msg_sz,
                           const unsigned char* synd, unsigned synd_sz,
                           const unsigned char* err_pos, unsigned err_pos_sz);
int redupe_correct_msg(unsigned char* msg, unsigned msg_sz,
                       unsigned nsym, unsigned char* code);

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */
#endif /* redupe_internal_h_ */
