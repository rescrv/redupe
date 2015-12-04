// Copyright (c) 2015, Robert Escriva
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
//     * Redistributions of source code must retain the above copyright notice,
//       this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above copyright
//       notice, this list of conditions and the following disclaimer in the
//       documentation and/or other materials provided with the distribution.
//     * Neither the name of this project nor the names of its contributors may
//       be used to endorse or promote products derived from this software
//       without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
// DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE
// FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
// DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
// SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
// CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
// OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

// Generated test vectors against the demo Python implementation provided here:
// https://en.wikiversity.org/wiki/Reed%E2%80%93Solomon_codes_for_coders
// Demo implementation and accompanying text licenced under Creative Commons
// Attribution-ShareAlike License.

// redupe
#include "redupe.h"
#include "redupe-internal.h"

// testing
#include "th.h"

TEST(GfPolyAdd, Test0)
{
    unsigned char p[] = {16, 0};
    const unsigned p_sz = 2;
    unsigned char q[] = {1};
    const unsigned q_sz = 1;
    unsigned char r[] = {16, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test1)
{
    unsigned char p[] = {16, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {74, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {90, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test2)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char q[] = {90, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {90, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test3)
{
    unsigned char p[] = {92, 68, 134, 57, 253, 198, 54, 221, 40, 182, 109, 201, 89, 38, 64, 184, 47, 208, 98, 4, 19, 38, 159, 167, 80, 144, 236, 245, 84, 195};
    const unsigned p_sz = 30;
    unsigned char q[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned q_sz = 30;
    unsigned char r[] = {92, 68, 134, 57, 253, 198, 54, 221, 40, 182, 125, 201, 89, 38, 64, 184, 47, 208, 98, 4, 19, 38, 159, 167, 80, 144, 236, 245, 84, 195};
    const unsigned r_sz = 30;
    unsigned char buf[30];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test4)
{
    unsigned char p[] = {139, 0};
    const unsigned p_sz = 2;
    unsigned char q[] = {1};
    const unsigned q_sz = 1;
    unsigned char r[] = {139, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test5)
{
    unsigned char p[] = {139, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {84, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {223, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test6)
{
    unsigned char p[] = {119, 0, 0};
    const unsigned p_sz = 3;
    unsigned char q[] = {223, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {119, 223, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test7)
{
    unsigned char p[] = {119, 223, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {157, 141, 0};
    const unsigned q_sz = 3;
    unsigned char r[] = {234, 82, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test8)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char q[] = {8, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {8, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test9)
{
    unsigned char p[] = {92, 68, 134, 57, 253, 198, 54, 221, 40, 182, 109, 201, 89, 38, 64, 184, 47, 208, 98, 4, 19, 38, 159, 167, 80, 144, 119, 245, 84, 195};
    const unsigned p_sz = 30;
    unsigned char q[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0};
    const unsigned q_sz = 30;
    unsigned char r[] = {92, 68, 134, 57, 253, 198, 54, 221, 40, 182, 125, 201, 89, 38, 64, 184, 47, 208, 98, 4, 19, 38, 159, 167, 80, 144, 236, 245, 84, 195};
    const unsigned r_sz = 30;
    unsigned char buf[30];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test10)
{
    unsigned char p[] = {68, 0};
    const unsigned p_sz = 2;
    unsigned char q[] = {1};
    const unsigned q_sz = 1;
    unsigned char r[] = {68, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test11)
{
    unsigned char p[] = {68, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {51, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {119, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test12)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char q[] = {119, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {119, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test13)
{
    unsigned char p[] = {9, 38, 158, 183, 140, 146, 208, 25, 33, 215, 160, 43, 133, 252, 97, 233, 147, 219, 155, 44, 96, 25, 242, 187, 243, 66, 135, 132, 91, 51, 25, 226, 213, 241, 109, 190, 97, 149, 183, 255, 179, 60, 212, 74, 59, 250, 140, 59, 229, 162, 61, 105, 113, 177, 190, 113, 0, 208, 65, 44, 43, 148, 15, 33, 80, 135, 166, 123, 237, 185, 15, 247, 207, 86, 159, 3, 191, 193, 90, 189, 67, 8, 101, 209, 198, 81, 216, 88, 124, 9, 69, 248, 108, 229, 53, 227, 133, 130, 225, 135, 190, 70, 62, 193, 251, 137, 133, 2, 178, 245, 64, 76, 51, 198, 63, 165, 55, 140, 171, 31, 70, 99, 38, 94, 194, 137};
    const unsigned p_sz = 126;
    unsigned char q[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned q_sz = 126;
    unsigned char r[] = {9, 38, 158, 183, 140, 146, 208, 25, 33, 215, 160, 43, 133, 252, 97, 233, 147, 219, 155, 44, 96, 25, 242, 187, 243, 66, 135, 132, 91, 51, 25, 226, 213, 241, 109, 190, 97, 149, 183, 255, 179, 60, 212, 74, 59, 250, 140, 59, 229, 162, 61, 105, 113, 177, 190, 113, 0, 208, 65, 44, 43, 148, 15, 33, 80, 135, 166, 123, 237, 185, 15, 247, 207, 86, 159, 3, 191, 193, 90, 189, 67, 8, 33, 209, 198, 81, 216, 88, 124, 9, 69, 248, 108, 229, 53, 227, 133, 130, 225, 135, 190, 70, 62, 193, 251, 137, 133, 2, 178, 245, 64, 76, 51, 198, 63, 165, 55, 140, 171, 31, 70, 99, 38, 94, 194, 137};
    const unsigned r_sz = 126;
    unsigned char buf[126];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test14)
{
    unsigned char p[] = {26, 0};
    const unsigned p_sz = 2;
    unsigned char q[] = {1};
    const unsigned q_sz = 1;
    unsigned char r[] = {26, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test15)
{
    unsigned char p[] = {26, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {31, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {5, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test16)
{
    unsigned char p[] = {127, 0, 0};
    const unsigned p_sz = 3;
    unsigned char q[] = {5, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {127, 5, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test17)
{
    unsigned char p[] = {127, 5, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {61, 171, 0};
    const unsigned q_sz = 3;
    unsigned char r[] = {66, 174, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test18)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char q[] = {217, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {217, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test19)
{
    unsigned char p[] = {9, 38, 158, 183, 140, 146, 208, 25, 33, 215, 160, 43, 133, 252, 97, 233, 147, 219, 155, 44, 96, 25, 242, 187, 243, 66, 135, 132, 91, 109, 25, 226, 213, 241, 109, 190, 97, 149, 183, 255, 179, 60, 212, 74, 59, 250, 140, 59, 229, 162, 61, 105, 113, 177, 190, 113, 0, 208, 65, 44, 43, 148, 15, 33, 80, 135, 166, 123, 237, 185, 15, 247, 207, 86, 159, 3, 191, 193, 90, 189, 67, 8, 101, 209, 198, 81, 216, 88, 124, 9, 69, 248, 108, 229, 53, 227, 133, 130, 225, 135, 190, 70, 62, 193, 251, 137, 133, 2, 178, 245, 64, 76, 51, 198, 63, 165, 55, 140, 171, 31, 70, 99, 38, 94, 194, 137};
    const unsigned p_sz = 126;
    unsigned char q[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned q_sz = 126;
    unsigned char r[] = {9, 38, 158, 183, 140, 146, 208, 25, 33, 215, 160, 43, 133, 252, 97, 233, 147, 219, 155, 44, 96, 25, 242, 187, 243, 66, 135, 132, 91, 51, 25, 226, 213, 241, 109, 190, 97, 149, 183, 255, 179, 60, 212, 74, 59, 250, 140, 59, 229, 162, 61, 105, 113, 177, 190, 113, 0, 208, 65, 44, 43, 148, 15, 33, 80, 135, 166, 123, 237, 185, 15, 247, 207, 86, 159, 3, 191, 193, 90, 189, 67, 8, 33, 209, 198, 81, 216, 88, 124, 9, 69, 248, 108, 229, 53, 227, 133, 130, 225, 135, 190, 70, 62, 193, 251, 137, 133, 2, 178, 245, 64, 76, 51, 198, 63, 165, 55, 140, 171, 31, 70, 99, 38, 94, 194, 137};
    const unsigned r_sz = 126;
    unsigned char buf[126];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test20)
{
    unsigned char p[] = {132, 0};
    const unsigned p_sz = 2;
    unsigned char q[] = {1};
    const unsigned q_sz = 1;
    unsigned char r[] = {132, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test21)
{
    unsigned char p[] = {132, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {148, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {16, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test22)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char q[] = {16, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {16, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test23)
{
    unsigned char p[] = {186, 141, 206, 13, 104, 21, 7, 15, 1, 4};
    const unsigned p_sz = 10;
    unsigned char q[] = {0, 0, 0, 0, 0, 132, 0, 0, 0, 0};
    const unsigned q_sz = 10;
    unsigned char r[] = {186, 141, 206, 13, 104, 145, 7, 15, 1, 4};
    const unsigned r_sz = 10;
    unsigned char buf[10];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test24)
{
    unsigned char p[] = {10, 0};
    const unsigned p_sz = 2;
    unsigned char q[] = {1};
    const unsigned q_sz = 1;
    unsigned char r[] = {10, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test25)
{
    unsigned char p[] = {10, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {239, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {229, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test26)
{
    unsigned char p[] = {182, 0, 0};
    const unsigned p_sz = 3;
    unsigned char q[] = {229, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {182, 229, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test27)
{
    unsigned char p[] = {182, 229, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {54, 253, 0};
    const unsigned q_sz = 3;
    unsigned char r[] = {128, 24, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test28)
{
    unsigned char p[] = {186, 141, 206, 13, 104, 21, 137, 15, 1, 4};
    const unsigned p_sz = 10;
    unsigned char q[] = {0, 0, 0, 0, 0, 132, 142, 0, 0, 0};
    const unsigned q_sz = 10;
    unsigned char r[] = {186, 141, 206, 13, 104, 145, 7, 15, 1, 4};
    const unsigned r_sz = 10;
    unsigned char buf[10];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test29)
{
    unsigned char p[] = {137, 0};
    const unsigned p_sz = 2;
    unsigned char q[] = {1};
    const unsigned q_sz = 1;
    unsigned char r[] = {137, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test30)
{
    unsigned char p[] = {137, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {88, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {209, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test31)
{
    unsigned char p[] = {18, 0, 0};
    const unsigned p_sz = 3;
    unsigned char q[] = {209, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {18, 209, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test32)
{
    unsigned char p[] = {18, 209, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {84, 139, 0};
    const unsigned q_sz = 3;
    unsigned char r[] = {70, 90, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test33)
{
    unsigned char p[] = {11, 60, 0, 0};
    const unsigned p_sz = 4;
    unsigned char q[] = {70, 90, 1};
    const unsigned q_sz = 3;
    unsigned char r[] = {11, 122, 90, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test34)
{
    unsigned char p[] = {11, 122, 90, 1};
    const unsigned p_sz = 4;
    unsigned char q[] = {140, 180, 2, 0};
    const unsigned q_sz = 4;
    unsigned char r[] = {135, 206, 88, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test35)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char q[] = {64, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {64, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test36)
{
    unsigned char p[] = {186, 141, 206, 142, 104, 21, 137, 15, 1, 4};
    const unsigned p_sz = 10;
    unsigned char q[] = {0, 0, 0, 131, 0, 132, 142, 0, 0, 0};
    const unsigned q_sz = 10;
    unsigned char r[] = {186, 141, 206, 13, 104, 145, 7, 15, 1, 4};
    const unsigned r_sz = 10;
    unsigned char buf[10];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test37)
{
    unsigned char p[] = {95, 0};
    const unsigned p_sz = 2;
    unsigned char q[] = {1};
    const unsigned q_sz = 1;
    unsigned char r[] = {95, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test38)
{
    unsigned char p[] = {95, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {239, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {176, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test39)
{
    unsigned char p[] = {141, 0, 0};
    const unsigned p_sz = 3;
    unsigned char q[] = {176, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {141, 176, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test40)
{
    unsigned char p[] = {141, 176, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {96, 119, 0};
    const unsigned q_sz = 3;
    unsigned char r[] = {237, 199, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test41)
{
    unsigned char p[] = {228, 229, 0, 0};
    const unsigned p_sz = 4;
    unsigned char q[] = {237, 199, 1};
    const unsigned q_sz = 3;
    unsigned char r[] = {228, 8, 199, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test42)
{
    unsigned char p[] = {228, 8, 199, 1};
    const unsigned p_sz = 4;
    unsigned char q[] = {99, 198, 159, 0};
    const unsigned q_sz = 4;
    unsigned char r[] = {135, 206, 88, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test43)
{
    unsigned char p[] = {186, 141, 206, 142, 104, 195, 137, 15, 1, 4};
    const unsigned p_sz = 10;
    unsigned char q[] = {0, 0, 0, 131, 0, 82, 142, 0, 0, 0};
    const unsigned q_sz = 10;
    unsigned char r[] = {186, 141, 206, 13, 104, 145, 7, 15, 1, 4};
    const unsigned r_sz = 10;
    unsigned char buf[10];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test44)
{
    unsigned char p[] = {34, 0};
    const unsigned p_sz = 2;
    unsigned char q[] = {1};
    const unsigned q_sz = 1;
    unsigned char r[] = {34, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test45)
{
    unsigned char p[] = {34, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {210, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {240, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test46)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char q[] = {240, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {240, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test47)
{
    unsigned char p[] = {174, 83, 145, 125, 4, 135, 185, 73, 116, 193, 157, 227, 208, 68, 218, 107, 242, 57, 25, 138, 242, 162, 51, 84, 30, 28, 25, 60, 160, 120, 243, 204, 247, 58, 76, 229, 26, 178, 239, 40, 38, 122, 117, 64, 43, 154, 85, 95, 46, 248, 109, 107, 143, 230, 59, 251, 123, 123, 158, 216, 219, 210, 188, 142, 94, 184, 159, 232, 9, 87, 154, 47, 248, 75, 86, 222, 150, 221, 194, 225, 251, 217, 110, 145, 174, 94, 187, 16, 93, 57, 18, 121, 161, 174, 48, 101, 17, 222, 244, 244, 215, 27, 58, 196, 104, 6, 106, 141, 178, 28, 252, 106, 226, 136};
    const unsigned p_sz = 114;
    unsigned char q[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned q_sz = 114;
    unsigned char r[] = {174, 83, 145, 125, 4, 135, 185, 73, 116, 193, 157, 227, 208, 68, 218, 107, 242, 57, 25, 138, 242, 162, 51, 84, 30, 28, 25, 60, 160, 120, 243, 204, 247, 58, 110, 229, 26, 178, 239, 40, 38, 122, 117, 64, 43, 154, 85, 95, 46, 248, 109, 107, 143, 230, 59, 251, 123, 123, 158, 216, 219, 210, 188, 142, 94, 184, 159, 232, 9, 87, 154, 47, 248, 75, 86, 222, 150, 221, 194, 225, 251, 217, 110, 145, 174, 94, 187, 16, 93, 57, 18, 121, 161, 174, 48, 101, 17, 222, 244, 244, 215, 27, 58, 196, 104, 6, 106, 141, 178, 28, 252, 106, 226, 136};
    const unsigned r_sz = 114;
    unsigned char buf[114];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test48)
{
    unsigned char p[] = {252, 0};
    const unsigned p_sz = 2;
    unsigned char q[] = {1};
    const unsigned q_sz = 1;
    unsigned char r[] = {252, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test49)
{
    unsigned char p[] = {252, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {40, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {212, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test50)
{
    unsigned char p[] = {251, 0, 0};
    const unsigned p_sz = 3;
    unsigned char q[] = {212, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {251, 212, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test51)
{
    unsigned char p[] = {251, 212, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {62, 202, 0};
    const unsigned q_sz = 3;
    unsigned char r[] = {197, 30, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test52)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char q[] = {238, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {238, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test53)
{
    unsigned char p[] = {174, 83, 145, 125, 4, 135, 185, 73, 116, 193, 157, 227, 208, 68, 218, 107, 242, 57, 25, 138, 242, 162, 51, 84, 30, 28, 25, 60, 160, 120, 243, 204, 247, 58, 76, 229, 26, 178, 239, 40, 38, 122, 117, 64, 43, 154, 85, 95, 46, 248, 109, 107, 143, 230, 59, 251, 123, 123, 158, 216, 219, 210, 188, 142, 94, 184, 159, 232, 9, 137, 154, 47, 248, 75, 86, 222, 150, 221, 194, 225, 251, 217, 110, 145, 174, 94, 187, 16, 93, 57, 18, 121, 161, 174, 48, 101, 17, 222, 244, 244, 215, 27, 58, 196, 104, 6, 106, 141, 178, 28, 252, 106, 226, 136};
    const unsigned p_sz = 114;
    unsigned char q[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned q_sz = 114;
    unsigned char r[] = {174, 83, 145, 125, 4, 135, 185, 73, 116, 193, 157, 227, 208, 68, 218, 107, 242, 57, 25, 138, 242, 162, 51, 84, 30, 28, 25, 60, 160, 120, 243, 204, 247, 58, 110, 229, 26, 178, 239, 40, 38, 122, 117, 64, 43, 154, 85, 95, 46, 248, 109, 107, 143, 230, 59, 251, 123, 123, 158, 216, 219, 210, 188, 142, 94, 184, 159, 232, 9, 87, 154, 47, 248, 75, 86, 222, 150, 221, 194, 225, 251, 217, 110, 145, 174, 94, 187, 16, 93, 57, 18, 121, 161, 174, 48, 101, 17, 222, 244, 244, 215, 27, 58, 196, 104, 6, 106, 141, 178, 28, 252, 106, 226, 136};
    const unsigned r_sz = 114;
    unsigned char buf[114];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test54)
{
    unsigned char p[] = {27, 0};
    const unsigned p_sz = 2;
    unsigned char q[] = {1};
    const unsigned q_sz = 1;
    unsigned char r[] = {27, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test55)
{
    unsigned char p[] = {27, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {239, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {244, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test56)
{
    unsigned char p[] = {150, 0, 0};
    const unsigned p_sz = 3;
    unsigned char q[] = {244, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {150, 244, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test57)
{
    unsigned char p[] = {150, 244, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {89, 235, 0};
    const unsigned q_sz = 3;
    unsigned char r[] = {207, 31, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test58)
{
    unsigned char p[] = {157, 186, 0, 0};
    const unsigned p_sz = 4;
    unsigned char q[] = {207, 31, 1};
    const unsigned q_sz = 3;
    unsigned char r[] = {157, 117, 31, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test59)
{
    unsigned char p[] = {157, 117, 31, 1};
    const unsigned p_sz = 4;
    unsigned char q[] = {49, 70, 174, 0};
    const unsigned q_sz = 4;
    unsigned char r[] = {172, 51, 177, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test60)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char q[] = {175, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {175, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test61)
{
    unsigned char p[] = {174, 83, 145, 125, 4, 135, 185, 73, 116, 193, 157, 227, 208, 68, 218, 107, 21, 57, 25, 138, 242, 162, 51, 84, 30, 28, 25, 60, 160, 120, 243, 204, 247, 58, 76, 229, 26, 178, 239, 40, 38, 122, 117, 64, 43, 154, 85, 95, 46, 248, 109, 107, 143, 230, 59, 251, 123, 123, 158, 216, 219, 210, 188, 142, 94, 184, 159, 232, 9, 137, 154, 47, 248, 75, 86, 222, 150, 221, 194, 225, 251, 217, 110, 145, 174, 94, 187, 16, 93, 57, 18, 121, 161, 174, 48, 101, 17, 222, 244, 244, 215, 27, 58, 196, 104, 6, 106, 141, 178, 28, 252, 106, 226, 136};
    const unsigned p_sz = 114;
    unsigned char q[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned q_sz = 114;
    unsigned char r[] = {174, 83, 145, 125, 4, 135, 185, 73, 116, 193, 157, 227, 208, 68, 218, 107, 242, 57, 25, 138, 242, 162, 51, 84, 30, 28, 25, 60, 160, 120, 243, 204, 247, 58, 110, 229, 26, 178, 239, 40, 38, 122, 117, 64, 43, 154, 85, 95, 46, 248, 109, 107, 143, 230, 59, 251, 123, 123, 158, 216, 219, 210, 188, 142, 94, 184, 159, 232, 9, 87, 154, 47, 248, 75, 86, 222, 150, 221, 194, 225, 251, 217, 110, 145, 174, 94, 187, 16, 93, 57, 18, 121, 161, 174, 48, 101, 17, 222, 244, 244, 215, 27, 58, 196, 104, 6, 106, 141, 178, 28, 252, 106, 226, 136};
    const unsigned r_sz = 114;
    unsigned char buf[114];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test62)
{
    unsigned char p[] = {166, 0};
    const unsigned p_sz = 2;
    unsigned char q[] = {1};
    const unsigned q_sz = 1;
    unsigned char r[] = {166, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test63)
{
    unsigned char p[] = {166, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {225, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {71, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test64)
{
    unsigned char p[] = {13, 0, 0};
    const unsigned p_sz = 3;
    unsigned char q[] = {71, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {13, 71, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test65)
{
    unsigned char p[] = {13, 71, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {255, 219, 0};
    const unsigned q_sz = 3;
    unsigned char r[] = {242, 156, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test66)
{
    unsigned char p[] = {140, 10, 0, 0};
    const unsigned p_sz = 4;
    unsigned char q[] = {242, 156, 1};
    const unsigned q_sz = 3;
    unsigned char r[] = {140, 248, 156, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test67)
{
    unsigned char p[] = {140, 248, 156, 1};
    const unsigned p_sz = 4;
    unsigned char q[] = {171, 1, 172, 0};
    const unsigned q_sz = 4;
    unsigned char r[] = {39, 249, 48, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test68)
{
    unsigned char p[] = {236, 14, 198, 0, 0};
    const unsigned p_sz = 5;
    unsigned char q[] = {39, 249, 48, 1};
    const unsigned q_sz = 4;
    unsigned char r[] = {236, 41, 63, 48, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test69)
{
    unsigned char p[] = {236, 41, 63, 48, 1};
    const unsigned p_sz = 5;
    unsigned char q[] = {115, 214, 114, 102, 0};
    const unsigned q_sz = 5;
    unsigned char r[] = {159, 255, 77, 86, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test70)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char q[] = {231, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {231, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test71)
{
    unsigned char p[] = {174, 83, 145, 125, 4, 135, 185, 73, 116, 193, 157, 227, 208, 68, 218, 107, 21, 57, 25, 138, 242, 162, 51, 84, 30, 28, 25, 60, 160, 120, 243, 204, 74, 58, 76, 229, 26, 178, 239, 40, 38, 122, 117, 64, 43, 154, 85, 95, 46, 248, 109, 107, 143, 230, 59, 251, 123, 123, 158, 216, 219, 210, 188, 142, 94, 184, 159, 232, 9, 137, 154, 47, 248, 75, 86, 222, 150, 221, 194, 225, 251, 217, 110, 145, 174, 94, 187, 16, 93, 57, 18, 121, 161, 174, 48, 101, 17, 222, 244, 244, 215, 27, 58, 196, 104, 6, 106, 141, 178, 28, 252, 106, 226, 136};
    const unsigned p_sz = 114;
    unsigned char q[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned q_sz = 114;
    unsigned char r[] = {174, 83, 145, 125, 4, 135, 185, 73, 116, 193, 157, 227, 208, 68, 218, 107, 242, 57, 25, 138, 242, 162, 51, 84, 30, 28, 25, 60, 160, 120, 243, 204, 247, 58, 110, 229, 26, 178, 239, 40, 38, 122, 117, 64, 43, 154, 85, 95, 46, 248, 109, 107, 143, 230, 59, 251, 123, 123, 158, 216, 219, 210, 188, 142, 94, 184, 159, 232, 9, 87, 154, 47, 248, 75, 86, 222, 150, 221, 194, 225, 251, 217, 110, 145, 174, 94, 187, 16, 93, 57, 18, 121, 161, 174, 48, 101, 17, 222, 244, 244, 215, 27, 58, 196, 104, 6, 106, 141, 178, 28, 252, 106, 226, 136};
    const unsigned r_sz = 114;
    unsigned char buf[114];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test72)
{
    unsigned char p[] = {42, 0};
    const unsigned p_sz = 2;
    unsigned char q[] = {1};
    const unsigned q_sz = 1;
    unsigned char r[] = {42, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test73)
{
    unsigned char p[] = {42, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {172, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {134, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test74)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char q[] = {134, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {134, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test75)
{
    unsigned char p[] = {223, 89, 156, 3, 11, 234, 149, 219, 161, 42, 82, 81, 134, 73, 186, 253, 212, 220, 17, 118, 249, 255, 146, 226, 144, 47, 113, 193, 237, 204, 191, 201, 244, 104, 229, 83, 40, 199, 255, 254, 83, 158, 181, 201, 160, 12, 207, 66, 116, 42, 249, 200, 138, 1, 203, 157, 108, 35, 65, 53, 139, 44, 6, 175, 45, 250, 172, 154, 144, 161, 125, 200, 2, 194, 82, 156, 244, 67, 102, 213, 29, 176, 134, 56, 115, 14, 228, 199, 85, 225, 69, 204, 236, 116, 238, 2, 179, 251, 48, 116, 186, 30, 243, 184, 177, 111, 227, 243, 206, 158, 206, 74, 149, 61, 57, 145, 20, 243, 101, 115, 39, 121, 8, 137, 61, 120, 233, 94, 184, 25, 8, 74, 170, 198, 102, 128, 158, 203, 113, 81, 216, 236, 215, 168, 196, 36, 74, 250, 235, 38, 56, 208, 0, 215, 84, 219, 118, 149, 22, 52, 100, 184, 5, 249, 50, 52, 223, 221, 122, 124, 41, 240};
    const unsigned p_sz = 172;
    unsigned char q[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned q_sz = 172;
    unsigned char r[] = {223, 89, 156, 3, 11, 234, 149, 219, 161, 42, 82, 81, 134, 73, 186, 253, 212, 220, 17, 118, 249, 255, 146, 226, 144, 47, 113, 193, 237, 204, 191, 201, 244, 104, 229, 83, 40, 199, 255, 254, 83, 158, 181, 201, 160, 12, 207, 66, 116, 42, 249, 200, 138, 1, 203, 157, 108, 35, 65, 53, 139, 44, 6, 175, 45, 250, 172, 154, 144, 161, 125, 200, 40, 194, 82, 156, 244, 67, 102, 213, 29, 176, 134, 56, 115, 14, 228, 199, 85, 225, 69, 204, 236, 116, 238, 2, 179, 251, 48, 116, 186, 30, 243, 184, 177, 111, 227, 243, 206, 158, 206, 74, 149, 61, 57, 145, 20, 243, 101, 115, 39, 121, 8, 137, 61, 120, 233, 94, 184, 25, 8, 74, 170, 198, 102, 128, 158, 203, 113, 81, 216, 236, 215, 168, 196, 36, 74, 250, 235, 38, 56, 208, 0, 215, 84, 219, 118, 149, 22, 52, 100, 184, 5, 249, 50, 52, 223, 221, 122, 124, 41, 240};
    const unsigned r_sz = 172;
    unsigned char buf[172];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test76)
{
    unsigned char p[] = {233, 0};
    const unsigned p_sz = 2;
    unsigned char q[] = {1};
    const unsigned q_sz = 1;
    unsigned char r[] = {233, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test77)
{
    unsigned char p[] = {233, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {198, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {47, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test78)
{
    unsigned char p[] = {200, 0, 0};
    const unsigned p_sz = 3;
    unsigned char q[] = {47, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {200, 47, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test79)
{
    unsigned char p[] = {200, 47, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {210, 233, 0};
    const unsigned q_sz = 3;
    unsigned char r[] = {26, 198, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test80)
{
    unsigned char p[] = {223, 89, 156, 3, 11, 234, 149, 219, 161, 42, 82, 81, 134, 73, 186, 253, 212, 220, 17, 118, 249, 255, 146, 226, 144, 47, 113, 193, 237, 204, 191, 201, 244, 104, 229, 83, 40, 199, 255, 254, 83, 158, 181, 201, 160, 12, 207, 66, 116, 42, 249, 200, 138, 1, 203, 157, 108, 35, 65, 53, 139, 44, 6, 175, 45, 250, 172, 154, 144, 161, 125, 200, 2, 194, 82, 156, 244, 67, 102, 213, 29, 176, 134, 56, 115, 14, 228, 199, 85, 225, 69, 204, 236, 116, 238, 2, 179, 251, 48, 116, 186, 30, 243, 184, 177, 111, 227, 243, 206, 158, 206, 74, 149, 61, 57, 145, 20, 243, 101, 115, 39, 121, 8, 137, 61, 120, 233, 94, 184, 25, 8, 74, 170, 198, 102, 128, 158, 203, 113, 81, 216, 236, 215, 168, 196, 36, 74, 250, 235, 38, 56, 208, 0, 215, 84, 219, 118, 149, 22, 52, 100, 184, 5, 249, 50, 247, 223, 221, 122, 124, 41, 240};
    const unsigned p_sz = 172;
    unsigned char q[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0};
    const unsigned q_sz = 172;
    unsigned char r[] = {223, 89, 156, 3, 11, 234, 149, 219, 161, 42, 82, 81, 134, 73, 186, 253, 212, 220, 17, 118, 249, 255, 146, 226, 144, 47, 113, 193, 237, 204, 191, 201, 244, 104, 229, 83, 40, 199, 255, 254, 83, 158, 181, 201, 160, 12, 207, 66, 116, 42, 249, 200, 138, 1, 203, 157, 108, 35, 65, 53, 139, 44, 6, 175, 45, 250, 172, 154, 144, 161, 125, 200, 40, 194, 82, 156, 244, 67, 102, 213, 29, 176, 134, 56, 115, 14, 228, 199, 85, 225, 69, 204, 236, 116, 238, 2, 179, 251, 48, 116, 186, 30, 243, 184, 177, 111, 227, 243, 206, 158, 206, 74, 149, 61, 57, 145, 20, 243, 101, 115, 39, 121, 8, 137, 61, 120, 233, 94, 184, 25, 8, 74, 170, 198, 102, 128, 158, 203, 113, 81, 216, 236, 215, 168, 196, 36, 74, 250, 235, 38, 56, 208, 0, 215, 84, 219, 118, 149, 22, 52, 100, 184, 5, 249, 50, 52, 223, 221, 122, 124, 41, 240};
    const unsigned r_sz = 172;
    unsigned char buf[172];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test81)
{
    unsigned char p[] = {84, 0};
    const unsigned p_sz = 2;
    unsigned char q[] = {1};
    const unsigned q_sz = 1;
    unsigned char r[] = {84, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test82)
{
    unsigned char p[] = {84, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {120, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {44, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test83)
{
    unsigned char p[] = {25, 0, 0};
    const unsigned p_sz = 3;
    unsigned char q[] = {44, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {25, 44, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test84)
{
    unsigned char p[] = {25, 44, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {156, 5, 0};
    const unsigned q_sz = 3;
    unsigned char r[] = {133, 41, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test85)
{
    unsigned char p[] = {152, 157, 0, 0};
    const unsigned p_sz = 4;
    unsigned char q[] = {133, 41, 1};
    const unsigned q_sz = 3;
    unsigned char r[] = {152, 24, 41, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test86)
{
    unsigned char p[] = {152, 24, 41, 1};
    const unsigned p_sz = 4;
    unsigned char q[] = {175, 248, 18, 0};
    const unsigned q_sz = 4;
    unsigned char r[] = {55, 224, 59, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test87)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char q[] = {253, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {253, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test88)
{
    unsigned char p[] = {223, 89, 156, 3, 11, 234, 149, 219, 161, 42, 82, 81, 134, 73, 186, 253, 212, 220, 17, 118, 249, 255, 146, 226, 144, 47, 113, 193, 237, 204, 191, 201, 244, 104, 229, 83, 40, 199, 255, 254, 83, 158, 181, 201, 160, 12, 207, 66, 116, 42, 249, 200, 138, 1, 203, 157, 108, 35, 65, 53, 139, 44, 6, 175, 45, 250, 172, 154, 144, 161, 125, 200, 2, 194, 82, 156, 244, 67, 102, 213, 29, 176, 134, 56, 115, 14, 228, 199, 85, 225, 69, 113, 236, 116, 238, 2, 179, 251, 48, 116, 186, 30, 243, 184, 177, 111, 227, 243, 206, 158, 206, 74, 149, 61, 57, 145, 20, 243, 101, 115, 39, 121, 8, 137, 61, 120, 233, 94, 184, 25, 8, 74, 170, 198, 102, 128, 158, 203, 113, 81, 216, 236, 215, 168, 196, 36, 74, 250, 235, 38, 56, 208, 0, 215, 84, 219, 118, 149, 22, 52, 100, 184, 5, 249, 50, 247, 223, 221, 122, 124, 41, 240};
    const unsigned p_sz = 172;
    unsigned char q[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0};
    const unsigned q_sz = 172;
    unsigned char r[] = {223, 89, 156, 3, 11, 234, 149, 219, 161, 42, 82, 81, 134, 73, 186, 253, 212, 220, 17, 118, 249, 255, 146, 226, 144, 47, 113, 193, 237, 204, 191, 201, 244, 104, 229, 83, 40, 199, 255, 254, 83, 158, 181, 201, 160, 12, 207, 66, 116, 42, 249, 200, 138, 1, 203, 157, 108, 35, 65, 53, 139, 44, 6, 175, 45, 250, 172, 154, 144, 161, 125, 200, 40, 194, 82, 156, 244, 67, 102, 213, 29, 176, 134, 56, 115, 14, 228, 199, 85, 225, 69, 204, 236, 116, 238, 2, 179, 251, 48, 116, 186, 30, 243, 184, 177, 111, 227, 243, 206, 158, 206, 74, 149, 61, 57, 145, 20, 243, 101, 115, 39, 121, 8, 137, 61, 120, 233, 94, 184, 25, 8, 74, 170, 198, 102, 128, 158, 203, 113, 81, 216, 236, 215, 168, 196, 36, 74, 250, 235, 38, 56, 208, 0, 215, 84, 219, 118, 149, 22, 52, 100, 184, 5, 249, 50, 52, 223, 221, 122, 124, 41, 240};
    const unsigned r_sz = 172;
    unsigned char buf[172];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test89)
{
    unsigned char p[] = {15, 0};
    const unsigned p_sz = 2;
    unsigned char q[] = {1};
    const unsigned q_sz = 1;
    unsigned char r[] = {15, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test90)
{
    unsigned char p[] = {15, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {237, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {226, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test91)
{
    unsigned char p[] = {109, 0, 0};
    const unsigned p_sz = 3;
    unsigned char q[] = {226, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {109, 226, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test92)
{
    unsigned char p[] = {109, 226, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {171, 187, 0};
    const unsigned q_sz = 3;
    unsigned char r[] = {198, 89, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test93)
{
    unsigned char p[] = {246, 120, 0, 0};
    const unsigned p_sz = 4;
    unsigned char q[] = {198, 89, 1};
    const unsigned q_sz = 3;
    unsigned char r[] = {246, 190, 89, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test94)
{
    unsigned char p[] = {246, 190, 89, 1};
    const unsigned p_sz = 4;
    unsigned char q[] = {183, 221, 54, 0};
    const unsigned q_sz = 4;
    unsigned char r[] = {65, 99, 111, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test95)
{
    unsigned char p[] = {43, 58, 80, 0, 0};
    const unsigned p_sz = 5;
    unsigned char q[] = {65, 99, 111, 1};
    const unsigned q_sz = 4;
    unsigned char r[] = {43, 123, 51, 111, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test96)
{
    unsigned char p[] = {43, 123, 51, 111, 1};
    const unsigned p_sz = 5;
    unsigned char q[] = {115, 92, 48, 9, 0};
    const unsigned q_sz = 5;
    unsigned char r[] = {88, 39, 3, 102, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test97)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char q[] = {93, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {93, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test98)
{
    unsigned char p[] = {223, 89, 156, 3, 11, 234, 149, 219, 161, 42, 82, 81, 134, 73, 186, 253, 212, 220, 17, 118, 249, 255, 146, 226, 144, 47, 113, 193, 237, 204, 191, 201, 244, 104, 229, 83, 40, 199, 255, 254, 83, 158, 181, 201, 160, 12, 207, 66, 116, 42, 249, 200, 138, 1, 203, 157, 108, 35, 65, 53, 139, 44, 6, 175, 45, 250, 172, 154, 144, 161, 125, 200, 2, 194, 82, 156, 244, 67, 102, 213, 29, 176, 134, 56, 115, 14, 228, 199, 85, 225, 69, 113, 236, 116, 238, 2, 179, 251, 48, 116, 186, 30, 243, 184, 177, 111, 227, 243, 206, 158, 206, 74, 149, 61, 57, 202, 20, 243, 101, 115, 39, 121, 8, 137, 61, 120, 233, 94, 184, 25, 8, 74, 170, 198, 102, 128, 158, 203, 113, 81, 216, 236, 215, 168, 196, 36, 74, 250, 235, 38, 56, 208, 0, 215, 84, 219, 118, 149, 22, 52, 100, 184, 5, 249, 50, 247, 223, 221, 122, 124, 41, 240};
    const unsigned p_sz = 172;
    unsigned char q[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0};
    const unsigned q_sz = 172;
    unsigned char r[] = {223, 89, 156, 3, 11, 234, 149, 219, 161, 42, 82, 81, 134, 73, 186, 253, 212, 220, 17, 118, 249, 255, 146, 226, 144, 47, 113, 193, 237, 204, 191, 201, 244, 104, 229, 83, 40, 199, 255, 254, 83, 158, 181, 201, 160, 12, 207, 66, 116, 42, 249, 200, 138, 1, 203, 157, 108, 35, 65, 53, 139, 44, 6, 175, 45, 250, 172, 154, 144, 161, 125, 200, 40, 194, 82, 156, 244, 67, 102, 213, 29, 176, 134, 56, 115, 14, 228, 199, 85, 225, 69, 204, 236, 116, 238, 2, 179, 251, 48, 116, 186, 30, 243, 184, 177, 111, 227, 243, 206, 158, 206, 74, 149, 61, 57, 145, 20, 243, 101, 115, 39, 121, 8, 137, 61, 120, 233, 94, 184, 25, 8, 74, 170, 198, 102, 128, 158, 203, 113, 81, 216, 236, 215, 168, 196, 36, 74, 250, 235, 38, 56, 208, 0, 215, 84, 219, 118, 149, 22, 52, 100, 184, 5, 249, 50, 52, 223, 221, 122, 124, 41, 240};
    const unsigned r_sz = 172;
    unsigned char buf[172];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test99)
{
    unsigned char p[] = {227, 0};
    const unsigned p_sz = 2;
    unsigned char q[] = {1};
    const unsigned q_sz = 1;
    unsigned char r[] = {227, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test100)
{
    unsigned char p[] = {227, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {169, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {74, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test101)
{
    unsigned char p[] = {197, 0, 0};
    const unsigned p_sz = 3;
    unsigned char q[] = {74, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {197, 74, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test102)
{
    unsigned char p[] = {197, 74, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {241, 158, 0};
    const unsigned q_sz = 3;
    unsigned char r[] = {52, 212, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test103)
{
    unsigned char p[] = {5, 135, 0, 0};
    const unsigned p_sz = 4;
    unsigned char q[] = {52, 212, 1};
    const unsigned q_sz = 3;
    unsigned char r[] = {5, 179, 212, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test104)
{
    unsigned char p[] = {5, 179, 212, 1};
    const unsigned p_sz = 4;
    unsigned char q[] = {167, 132, 134, 0};
    const unsigned q_sz = 4;
    unsigned char r[] = {162, 55, 82, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test105)
{
    unsigned char p[] = {103, 193, 16, 0, 0};
    const unsigned p_sz = 5;
    unsigned char q[] = {162, 55, 82, 1};
    const unsigned q_sz = 4;
    unsigned char r[] = {103, 99, 39, 82, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test106)
{
    unsigned char p[] = {103, 99, 39, 82, 1};
    const unsigned p_sz = 5;
    unsigned char q[] = {229, 77, 208, 239, 0};
    const unsigned q_sz = 5;
    unsigned char r[] = {130, 46, 247, 189, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test107)
{
    unsigned char p[] = {120, 80, 152, 151, 0, 0};
    const unsigned p_sz = 6;
    unsigned char q[] = {130, 46, 247, 189, 1};
    const unsigned q_sz = 5;
    unsigned char r[] = {120, 210, 182, 96, 189, 1};
    const unsigned r_sz = 6;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test108)
{
    unsigned char p[] = {120, 210, 182, 96, 189, 1};
    const unsigned p_sz = 6;
    unsigned char q[] = {10, 250, 163, 9, 62, 0};
    const unsigned q_sz = 6;
    unsigned char r[] = {114, 40, 21, 105, 131, 1};
    const unsigned r_sz = 6;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test109)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char q[] = {229, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {229, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test110)
{
    unsigned char p[] = {223, 89, 112, 3, 11, 234, 149, 219, 161, 42, 82, 81, 134, 73, 186, 253, 212, 220, 17, 118, 249, 255, 146, 226, 144, 47, 113, 193, 237, 204, 191, 201, 244, 104, 229, 83, 40, 199, 255, 254, 83, 158, 181, 201, 160, 12, 207, 66, 116, 42, 249, 200, 138, 1, 203, 157, 108, 35, 65, 53, 139, 44, 6, 175, 45, 250, 172, 154, 144, 161, 125, 200, 2, 194, 82, 156, 244, 67, 102, 213, 29, 176, 134, 56, 115, 14, 228, 199, 85, 225, 69, 113, 236, 116, 238, 2, 179, 251, 48, 116, 186, 30, 243, 184, 177, 111, 227, 243, 206, 158, 206, 74, 149, 61, 57, 202, 20, 243, 101, 115, 39, 121, 8, 137, 61, 120, 233, 94, 184, 25, 8, 74, 170, 198, 102, 128, 158, 203, 113, 81, 216, 236, 215, 168, 196, 36, 74, 250, 235, 38, 56, 208, 0, 215, 84, 219, 118, 149, 22, 52, 100, 184, 5, 249, 50, 247, 223, 221, 122, 124, 41, 240};
    const unsigned p_sz = 172;
    unsigned char q[] = {0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0};
    const unsigned q_sz = 172;
    unsigned char r[] = {223, 89, 156, 3, 11, 234, 149, 219, 161, 42, 82, 81, 134, 73, 186, 253, 212, 220, 17, 118, 249, 255, 146, 226, 144, 47, 113, 193, 237, 204, 191, 201, 244, 104, 229, 83, 40, 199, 255, 254, 83, 158, 181, 201, 160, 12, 207, 66, 116, 42, 249, 200, 138, 1, 203, 157, 108, 35, 65, 53, 139, 44, 6, 175, 45, 250, 172, 154, 144, 161, 125, 200, 40, 194, 82, 156, 244, 67, 102, 213, 29, 176, 134, 56, 115, 14, 228, 199, 85, 225, 69, 204, 236, 116, 238, 2, 179, 251, 48, 116, 186, 30, 243, 184, 177, 111, 227, 243, 206, 158, 206, 74, 149, 61, 57, 145, 20, 243, 101, 115, 39, 121, 8, 137, 61, 120, 233, 94, 184, 25, 8, 74, 170, 198, 102, 128, 158, 203, 113, 81, 216, 236, 215, 168, 196, 36, 74, 250, 235, 38, 56, 208, 0, 215, 84, 219, 118, 149, 22, 52, 100, 184, 5, 249, 50, 52, 223, 221, 122, 124, 41, 240};
    const unsigned r_sz = 172;
    unsigned char buf[172];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test111)
{
    unsigned char p[] = {59, 0};
    const unsigned p_sz = 2;
    unsigned char q[] = {1};
    const unsigned q_sz = 1;
    unsigned char r[] = {59, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test112)
{
    unsigned char p[] = {59, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {40, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {19, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test113)
{
    unsigned char p[] = {148, 0, 0};
    const unsigned p_sz = 3;
    unsigned char q[] = {19, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {148, 19, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test114)
{
    unsigned char p[] = {148, 19, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {250, 244, 0};
    const unsigned q_sz = 3;
    unsigned char r[] = {110, 231, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test115)
{
    unsigned char p[] = {191, 82, 0, 0};
    const unsigned p_sz = 4;
    unsigned char q[] = {110, 231, 1};
    const unsigned q_sz = 3;
    unsigned char r[] = {191, 60, 231, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test116)
{
    unsigned char p[] = {191, 60, 231, 1};
    const unsigned p_sz = 4;
    unsigned char q[] = {237, 205, 110, 0};
    const unsigned q_sz = 4;
    unsigned char r[] = {82, 241, 137, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test117)
{
    unsigned char p[] = {217, 207, 145, 0, 0};
    const unsigned p_sz = 5;
    unsigned char q[] = {82, 241, 137, 1};
    const unsigned q_sz = 4;
    unsigned char r[] = {217, 157, 96, 137, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test118)
{
    unsigned char p[] = {217, 157, 96, 137, 1};
    const unsigned p_sz = 5;
    unsigned char q[] = {122, 1, 114, 231, 0};
    const unsigned q_sz = 5;
    unsigned char r[] = {163, 156, 18, 110, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test119)
{
    unsigned char p[] = {127, 31, 135, 50, 0, 0};
    const unsigned p_sz = 6;
    unsigned char q[] = {163, 156, 18, 110, 1};
    const unsigned q_sz = 5;
    unsigned char r[] = {127, 188, 27, 32, 110, 1};
    const unsigned r_sz = 6;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test120)
{
    unsigned char p[] = {127, 188, 27, 32, 110, 1};
    const unsigned p_sz = 6;
    unsigned char q[] = {4, 56, 169, 175, 63, 0};
    const unsigned q_sz = 6;
    unsigned char r[] = {123, 132, 178, 143, 81, 1};
    const unsigned r_sz = 6;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test121)
{
    unsigned char p[] = {246, 237, 10, 135, 211, 0, 0};
    const unsigned p_sz = 7;
    unsigned char q[] = {123, 132, 178, 143, 81, 1};
    const unsigned q_sz = 6;
    unsigned char r[] = {246, 150, 142, 53, 92, 81, 1};
    const unsigned r_sz = 7;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test122)
{
    unsigned char p[] = {246, 150, 142, 53, 92, 81, 1};
    const unsigned p_sz = 7;
    unsigned char q[] = {143, 131, 161, 92, 185, 104, 0};
    const unsigned q_sz = 7;
    unsigned char r[] = {121, 21, 47, 105, 229, 57, 1};
    const unsigned r_sz = 7;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test123)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char q[] = {186, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {186, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test124)
{
    unsigned char p[] = {223, 89, 112, 3, 11, 234, 149, 219, 161, 42, 82, 81, 134, 73, 186, 253, 212, 220, 17, 118, 249, 255, 146, 226, 144, 47, 113, 193, 237, 204, 191, 201, 244, 104, 229, 83, 40, 199, 255, 254, 83, 158, 181, 201, 160, 12, 207, 66, 116, 42, 249, 200, 138, 1, 203, 157, 108, 35, 65, 53, 139, 44, 6, 175, 45, 250, 172, 154, 144, 161, 125, 200, 2, 194, 82, 156, 244, 67, 102, 213, 29, 176, 134, 56, 115, 14, 228, 199, 85, 225, 69, 113, 236, 116, 238, 2, 179, 251, 48, 116, 186, 30, 243, 184, 177, 111, 227, 243, 206, 158, 206, 74, 149, 61, 225, 202, 20, 243, 101, 115, 39, 121, 8, 137, 61, 120, 233, 94, 184, 25, 8, 74, 170, 198, 102, 128, 158, 203, 113, 81, 216, 236, 215, 168, 196, 36, 74, 250, 235, 38, 56, 208, 0, 215, 84, 219, 118, 149, 22, 52, 100, 184, 5, 249, 50, 247, 223, 221, 122, 124, 41, 240};
    const unsigned p_sz = 172;
    unsigned char q[] = {0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0};
    const unsigned q_sz = 172;
    unsigned char r[] = {223, 89, 156, 3, 11, 234, 149, 219, 161, 42, 82, 81, 134, 73, 186, 253, 212, 220, 17, 118, 249, 255, 146, 226, 144, 47, 113, 193, 237, 204, 191, 201, 244, 104, 229, 83, 40, 199, 255, 254, 83, 158, 181, 201, 160, 12, 207, 66, 116, 42, 249, 200, 138, 1, 203, 157, 108, 35, 65, 53, 139, 44, 6, 175, 45, 250, 172, 154, 144, 161, 125, 200, 40, 194, 82, 156, 244, 67, 102, 213, 29, 176, 134, 56, 115, 14, 228, 199, 85, 225, 69, 204, 236, 116, 238, 2, 179, 251, 48, 116, 186, 30, 243, 184, 177, 111, 227, 243, 206, 158, 206, 74, 149, 61, 57, 145, 20, 243, 101, 115, 39, 121, 8, 137, 61, 120, 233, 94, 184, 25, 8, 74, 170, 198, 102, 128, 158, 203, 113, 81, 216, 236, 215, 168, 196, 36, 74, 250, 235, 38, 56, 208, 0, 215, 84, 219, 118, 149, 22, 52, 100, 184, 5, 249, 50, 52, 223, 221, 122, 124, 41, 240};
    const unsigned r_sz = 172;
    unsigned char buf[172];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test125)
{
    unsigned char p[] = {153, 0};
    const unsigned p_sz = 2;
    unsigned char q[] = {1};
    const unsigned q_sz = 1;
    unsigned char r[] = {153, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test126)
{
    unsigned char p[] = {153, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {192, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {89, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test127)
{
    unsigned char p[] = {243, 0, 0};
    const unsigned p_sz = 3;
    unsigned char q[] = {89, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {243, 89, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test128)
{
    unsigned char p[] = {243, 89, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {209, 83, 0};
    const unsigned q_sz = 3;
    unsigned char r[] = {34, 10, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test129)
{
    unsigned char p[] = {218, 75, 0, 0};
    const unsigned p_sz = 4;
    unsigned char q[] = {34, 10, 1};
    const unsigned q_sz = 3;
    unsigned char r[] = {218, 105, 10, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test130)
{
    unsigned char p[] = {218, 105, 10, 1};
    const unsigned p_sz = 4;
    unsigned char q[] = {187, 39, 139, 0};
    const unsigned q_sz = 4;
    unsigned char r[] = {97, 78, 129, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test131)
{
    unsigned char p[] = {67, 70, 173, 0, 0};
    const unsigned p_sz = 5;
    unsigned char q[] = {97, 78, 129, 1};
    const unsigned q_sz = 4;
    unsigned char r[] = {67, 39, 227, 129, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test132)
{
    unsigned char p[] = {67, 39, 227, 129, 1};
    const unsigned p_sz = 5;
    unsigned char q[] = {198, 184, 89, 67, 0};
    const unsigned q_sz = 5;
    unsigned char r[] = {133, 159, 186, 194, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test133)
{
    unsigned char p[] = {55, 146, 245, 147, 0, 0};
    const unsigned p_sz = 6;
    unsigned char q[] = {133, 159, 186, 194, 1};
    const unsigned q_sz = 5;
    unsigned char r[] = {55, 23, 106, 41, 194, 1};
    const unsigned r_sz = 6;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test134)
{
    unsigned char p[] = {55, 23, 106, 41, 194, 1};
    const unsigned p_sz = 6;
    unsigned char q[] = {120, 216, 128, 152, 167, 0};
    const unsigned q_sz = 6;
    unsigned char r[] = {79, 207, 234, 177, 101, 1};
    const unsigned r_sz = 6;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test135)
{
    unsigned char p[] = {25, 206, 236, 184, 190, 0, 0, 0};
    const unsigned p_sz = 8;
    unsigned char q[] = {79, 207, 234, 177, 101, 1};
    const unsigned q_sz = 6;
    unsigned char r[] = {25, 206, 163, 119, 84, 177, 101, 1};
    const unsigned r_sz = 8;
    unsigned char buf[8];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test136)
{
    unsigned char p[] = {25, 206, 163, 119, 84, 177, 101, 1};
    const unsigned p_sz = 8;
    unsigned char q[] = {5, 230, 65, 1, 88, 229, 0};
    const unsigned q_sz = 7;
    unsigned char r[] = {25, 203, 69, 54, 85, 233, 128, 1};
    const unsigned r_sz = 8;
    unsigned char buf[8];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test137)
{
    unsigned char p[] = {25, 203, 69, 54, 85, 233, 128, 1};
    const unsigned p_sz = 8;
    unsigned char q[] = {129, 138, 71, 222, 70, 245, 0, 0};
    const unsigned q_sz = 8;
    unsigned char r[] = {152, 65, 2, 232, 19, 28, 128, 1};
    const unsigned r_sz = 8;
    unsigned char buf[8];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test138)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char q[] = {185, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {185, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test139)
{
    unsigned char p[] = {223, 89, 112, 3, 11, 234, 149, 219, 161, 42, 82, 81, 134, 73, 186, 253, 212, 220, 17, 118, 249, 255, 146, 226, 144, 47, 113, 193, 237, 204, 191, 201, 244, 104, 229, 83, 40, 199, 255, 254, 83, 158, 181, 201, 160, 12, 207, 66, 116, 42, 249, 200, 138, 1, 203, 157, 108, 35, 65, 53, 139, 44, 6, 175, 45, 250, 172, 154, 144, 161, 125, 200, 2, 194, 82, 156, 244, 67, 102, 213, 29, 176, 134, 56, 115, 14, 228, 199, 85, 225, 69, 113, 236, 116, 238, 2, 179, 251, 48, 116, 186, 30, 243, 184, 177, 111, 227, 243, 206, 158, 206, 232, 149, 61, 225, 202, 20, 243, 101, 115, 39, 121, 8, 137, 61, 120, 233, 94, 184, 25, 8, 74, 170, 198, 102, 128, 158, 203, 113, 81, 216, 236, 215, 168, 196, 36, 74, 250, 235, 38, 56, 208, 0, 215, 84, 219, 118, 149, 22, 52, 100, 184, 5, 249, 50, 247, 223, 221, 122, 124, 41, 240};
    const unsigned p_sz = 172;
    unsigned char q[] = {0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 216, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0};
    const unsigned q_sz = 172;
    unsigned char r[] = {223, 89, 156, 3, 11, 234, 149, 219, 161, 42, 82, 81, 134, 73, 186, 253, 212, 220, 17, 118, 249, 255, 146, 226, 144, 47, 113, 193, 237, 204, 191, 201, 244, 104, 229, 83, 40, 199, 255, 254, 83, 158, 181, 201, 160, 12, 207, 66, 116, 42, 249, 200, 138, 1, 203, 157, 108, 35, 65, 53, 139, 44, 6, 175, 45, 250, 172, 154, 144, 161, 125, 200, 40, 194, 82, 156, 244, 67, 102, 213, 29, 176, 134, 56, 115, 14, 228, 199, 85, 225, 69, 204, 236, 116, 238, 2, 179, 251, 48, 116, 186, 30, 243, 184, 177, 111, 227, 243, 206, 158, 206, 74, 149, 61, 57, 145, 20, 243, 101, 115, 39, 121, 8, 137, 61, 120, 233, 94, 184, 25, 8, 74, 170, 198, 102, 128, 158, 203, 113, 81, 216, 236, 215, 168, 196, 36, 74, 250, 235, 38, 56, 208, 0, 215, 84, 219, 118, 149, 22, 52, 100, 184, 5, 249, 50, 52, 223, 221, 122, 124, 41, 240};
    const unsigned r_sz = 172;
    unsigned char buf[172];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test140)
{
    unsigned char p[] = {221, 0};
    const unsigned p_sz = 2;
    unsigned char q[] = {1};
    const unsigned q_sz = 1;
    unsigned char r[] = {221, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test141)
{
    unsigned char p[] = {221, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {4, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {217, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test142)
{
    unsigned char p[] = {68, 0, 0};
    const unsigned p_sz = 3;
    unsigned char q[] = {217, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {68, 217, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test143)
{
    unsigned char p[] = {68, 217, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {80, 242, 0};
    const unsigned q_sz = 3;
    unsigned char r[] = {20, 43, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test144)
{
    unsigned char p[] = {221, 208, 0, 0};
    const unsigned p_sz = 4;
    unsigned char q[] = {20, 43, 1};
    const unsigned q_sz = 3;
    unsigned char r[] = {221, 196, 43, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test145)
{
    unsigned char p[] = {221, 196, 43, 1};
    const unsigned p_sz = 4;
    unsigned char q[] = {182, 16, 212, 0};
    const unsigned q_sz = 4;
    unsigned char r[] = {107, 212, 255, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test146)
{
    unsigned char p[] = {2, 126, 221, 0, 0};
    const unsigned p_sz = 5;
    unsigned char q[] = {107, 212, 255, 1};
    const unsigned q_sz = 4;
    unsigned char r[] = {2, 21, 9, 255, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test147)
{
    unsigned char p[] = {2, 21, 9, 255, 1};
    const unsigned p_sz = 5;
    unsigned char q[] = {193, 4, 79, 195, 0};
    const unsigned q_sz = 5;
    unsigned char r[] = {195, 17, 70, 60, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test148)
{
    unsigned char p[] = {143, 203, 124, 100, 0, 0};
    const unsigned p_sz = 6;
    unsigned char q[] = {195, 17, 70, 60, 1};
    const unsigned q_sz = 5;
    unsigned char r[] = {143, 8, 109, 34, 60, 1};
    const unsigned r_sz = 6;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test149)
{
    unsigned char p[] = {143, 8, 109, 34, 60, 1};
    const unsigned p_sz = 6;
    unsigned char q[] = {177, 36, 246, 112, 51, 0};
    const unsigned q_sz = 6;
    unsigned char r[] = {62, 44, 155, 82, 15, 1};
    const unsigned r_sz = 6;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test150)
{
    unsigned char p[] = {85, 78, 139, 232, 87, 0, 0};
    const unsigned p_sz = 7;
    unsigned char q[] = {62, 44, 155, 82, 15, 1};
    const unsigned q_sz = 6;
    unsigned char r[] = {85, 112, 167, 115, 5, 15, 1};
    const unsigned r_sz = 7;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test151)
{
    unsigned char p[] = {85, 112, 167, 115, 5, 15, 1};
    const unsigned p_sz = 7;
    unsigned char q[] = {7, 47, 159, 247, 115, 107, 0};
    const unsigned q_sz = 7;
    unsigned char r[] = {82, 95, 56, 132, 118, 100, 1};
    const unsigned r_sz = 7;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test152)
{
    unsigned char p[] = {14, 94, 35, 243, 230, 214, 0, 0, 0};
    const unsigned p_sz = 9;
    unsigned char q[] = {82, 95, 56, 132, 118, 100, 1};
    const unsigned q_sz = 7;
    unsigned char r[] = {14, 94, 113, 172, 222, 82, 118, 100, 1};
    const unsigned r_sz = 9;
    unsigned char buf[9];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test153)
{
    unsigned char p[] = {14, 94, 113, 172, 222, 82, 118, 100, 1};
    const unsigned p_sz = 9;
    unsigned char q[] = {248, 157, 229, 208, 225, 99, 9, 0, 0};
    const unsigned q_sz = 9;
    unsigned char r[] = {246, 195, 148, 124, 63, 49, 127, 100, 1};
    const unsigned r_sz = 9;
    unsigned char buf[9];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test154)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char q[] = {228, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {228, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test155)
{
    unsigned char p[] = {223, 89, 112, 3, 11, 234, 149, 219, 161, 42, 82, 81, 134, 73, 186, 185, 212, 220, 17, 118, 249, 255, 146, 226, 144, 47, 113, 193, 237, 204, 191, 201, 244, 104, 229, 83, 40, 199, 255, 254, 83, 158, 181, 201, 160, 12, 207, 66, 116, 42, 249, 200, 138, 1, 203, 157, 108, 35, 65, 53, 139, 44, 6, 175, 45, 250, 172, 154, 144, 161, 125, 200, 2, 194, 82, 156, 244, 67, 102, 213, 29, 176, 134, 56, 115, 14, 228, 199, 85, 225, 69, 113, 236, 116, 238, 2, 179, 251, 48, 116, 186, 30, 243, 184, 177, 111, 227, 243, 206, 158, 206, 232, 149, 61, 225, 202, 20, 243, 101, 115, 39, 121, 8, 137, 61, 120, 233, 94, 184, 25, 8, 74, 170, 198, 102, 128, 158, 203, 113, 81, 216, 236, 215, 168, 196, 36, 74, 250, 235, 38, 56, 208, 0, 215, 84, 219, 118, 149, 22, 52, 100, 184, 5, 249, 50, 247, 223, 221, 122, 124, 41, 240};
    const unsigned p_sz = 172;
    unsigned char q[] = {0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 216, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0};
    const unsigned q_sz = 172;
    unsigned char r[] = {223, 89, 156, 3, 11, 234, 149, 219, 161, 42, 82, 81, 134, 73, 186, 253, 212, 220, 17, 118, 249, 255, 146, 226, 144, 47, 113, 193, 237, 204, 191, 201, 244, 104, 229, 83, 40, 199, 255, 254, 83, 158, 181, 201, 160, 12, 207, 66, 116, 42, 249, 200, 138, 1, 203, 157, 108, 35, 65, 53, 139, 44, 6, 175, 45, 250, 172, 154, 144, 161, 125, 200, 40, 194, 82, 156, 244, 67, 102, 213, 29, 176, 134, 56, 115, 14, 228, 199, 85, 225, 69, 204, 236, 116, 238, 2, 179, 251, 48, 116, 186, 30, 243, 184, 177, 111, 227, 243, 206, 158, 206, 74, 149, 61, 57, 145, 20, 243, 101, 115, 39, 121, 8, 137, 61, 120, 233, 94, 184, 25, 8, 74, 170, 198, 102, 128, 158, 203, 113, 81, 216, 236, 215, 168, 196, 36, 74, 250, 235, 38, 56, 208, 0, 215, 84, 219, 118, 149, 22, 52, 100, 184, 5, 249, 50, 52, 223, 221, 122, 124, 41, 240};
    const unsigned r_sz = 172;
    unsigned char buf[172];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test156)
{
    unsigned char p[] = {5, 0};
    const unsigned p_sz = 2;
    unsigned char q[] = {1};
    const unsigned q_sz = 1;
    unsigned char r[] = {5, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test157)
{
    unsigned char p[] = {5, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {63, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {58, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test158)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char q[] = {58, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {58, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test159)
{
    unsigned char p[] = {125, 10, 80, 81, 99, 27, 75, 199, 221, 109, 0, 162, 167, 18, 209, 216, 32, 77, 63, 61, 158, 252, 35, 147, 111, 119, 13, 231, 115, 194, 84, 87, 248, 72, 191, 219};
    const unsigned p_sz = 36;
    unsigned char q[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned q_sz = 36;
    unsigned char r[] = {125, 10, 80, 81, 99, 27, 75, 199, 221, 109, 0, 162, 167, 18, 209, 216, 32, 77, 63, 61, 158, 252, 35, 147, 111, 119, 8, 231, 115, 194, 84, 87, 248, 72, 191, 219};
    const unsigned r_sz = 36;
    unsigned char buf[36];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test160)
{
    unsigned char p[] = {152, 0};
    const unsigned p_sz = 2;
    unsigned char q[] = {1};
    const unsigned q_sz = 1;
    unsigned char r[] = {152, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test161)
{
    unsigned char p[] = {152, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {236, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {116, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test162)
{
    unsigned char p[] = {177, 0, 0};
    const unsigned p_sz = 3;
    unsigned char q[] = {116, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {177, 116, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test163)
{
    unsigned char p[] = {177, 116, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {132, 46, 0};
    const unsigned q_sz = 3;
    unsigned char r[] = {53, 90, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test164)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char q[] = {96, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {96, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test165)
{
    unsigned char p[] = {125, 10, 80, 81, 99, 134, 75, 199, 221, 109, 0, 162, 167, 18, 209, 216, 32, 77, 63, 61, 158, 252, 35, 147, 111, 119, 13, 231, 115, 194, 84, 87, 248, 72, 191, 219};
    const unsigned p_sz = 36;
    unsigned char q[] = {0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned q_sz = 36;
    unsigned char r[] = {125, 10, 80, 81, 99, 27, 75, 199, 221, 109, 0, 162, 167, 18, 209, 216, 32, 77, 63, 61, 158, 252, 35, 147, 111, 119, 8, 231, 115, 194, 84, 87, 248, 72, 191, 219};
    const unsigned r_sz = 36;
    unsigned char buf[36];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test166)
{
    unsigned char p[] = {207, 0};
    const unsigned p_sz = 2;
    unsigned char q[] = {1};
    const unsigned q_sz = 1;
    unsigned char r[] = {207, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test167)
{
    unsigned char p[] = {207, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {188, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {115, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test168)
{
    unsigned char p[] = {147, 0, 0};
    const unsigned p_sz = 3;
    unsigned char q[] = {115, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {147, 115, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test169)
{
    unsigned char p[] = {147, 115, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {202, 229, 0};
    const unsigned q_sz = 3;
    unsigned char r[] = {89, 150, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test170)
{
    unsigned char p[] = {159, 42, 0, 0};
    const unsigned p_sz = 4;
    unsigned char q[] = {89, 150, 1};
    const unsigned q_sz = 3;
    unsigned char r[] = {159, 115, 150, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test171)
{
    unsigned char p[] = {159, 115, 150, 1};
    const unsigned p_sz = 4;
    unsigned char q[] = {38, 44, 185, 0};
    const unsigned q_sz = 4;
    unsigned char r[] = {185, 95, 47, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test172)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char q[] = {117, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {117, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test173)
{
    unsigned char p[] = {125, 10, 80, 81, 99, 134, 75, 199, 221, 109, 0, 162, 167, 18, 134, 216, 32, 77, 63, 61, 158, 252, 35, 147, 111, 119, 13, 231, 115, 194, 84, 87, 248, 72, 191, 219};
    const unsigned p_sz = 36;
    unsigned char q[] = {0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned q_sz = 36;
    unsigned char r[] = {125, 10, 80, 81, 99, 27, 75, 199, 221, 109, 0, 162, 167, 18, 209, 216, 32, 77, 63, 61, 158, 252, 35, 147, 111, 119, 8, 231, 115, 194, 84, 87, 248, 72, 191, 219};
    const unsigned r_sz = 36;
    unsigned char buf[36];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test174)
{
    unsigned char p[] = {77, 0};
    const unsigned p_sz = 2;
    unsigned char q[] = {1};
    const unsigned q_sz = 1;
    unsigned char r[] = {77, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test175)
{
    unsigned char p[] = {77, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {191, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {242, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test176)
{
    unsigned char p[] = {101, 0, 0};
    const unsigned p_sz = 3;
    unsigned char q[] = {242, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {101, 242, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test177)
{
    unsigned char p[] = {101, 242, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {34, 84, 0};
    const unsigned q_sz = 3;
    unsigned char r[] = {71, 166, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test178)
{
    unsigned char p[] = {233, 157, 0, 0};
    const unsigned p_sz = 4;
    unsigned char q[] = {71, 166, 1};
    const unsigned q_sz = 3;
    unsigned char r[] = {233, 218, 166, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test179)
{
    unsigned char p[] = {233, 218, 166, 1};
    const unsigned p_sz = 4;
    unsigned char q[] = {240, 39, 231, 0};
    const unsigned q_sz = 4;
    unsigned char r[] = {25, 253, 65, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test180)
{
    unsigned char p[] = {85, 13, 73, 0, 0};
    const unsigned p_sz = 5;
    unsigned char q[] = {25, 253, 65, 1};
    const unsigned q_sz = 4;
    unsigned char r[] = {85, 20, 180, 65, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test181)
{
    unsigned char p[] = {85, 20, 180, 65, 1};
    const unsigned p_sz = 5;
    unsigned char q[] = {48, 179, 12, 163, 0};
    const unsigned q_sz = 5;
    unsigned char r[] = {101, 167, 184, 226, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test182)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char q[] = {205, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {205, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test183)
{
    unsigned char p[] = {125, 10, 80, 81, 99, 134, 75, 199, 221, 109, 0, 162, 167, 18, 134, 216, 32, 77, 63, 61, 158, 252, 35, 17, 111, 119, 13, 231, 115, 194, 84, 87, 248, 72, 191, 219};
    const unsigned p_sz = 36;
    unsigned char q[] = {0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned q_sz = 36;
    unsigned char r[] = {125, 10, 80, 81, 99, 27, 75, 199, 221, 109, 0, 162, 167, 18, 209, 216, 32, 77, 63, 61, 158, 252, 35, 147, 111, 119, 8, 231, 115, 194, 84, 87, 248, 72, 191, 219};
    const unsigned r_sz = 36;
    unsigned char buf[36];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test184)
{
    unsigned char p[] = {31, 0};
    const unsigned p_sz = 2;
    unsigned char q[] = {1};
    const unsigned q_sz = 1;
    unsigned char r[] = {31, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test185)
{
    unsigned char p[] = {31, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {79, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {80, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test186)
{
    unsigned char p[] = {235, 0, 0};
    const unsigned p_sz = 3;
    unsigned char q[] = {80, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {235, 80, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test187)
{
    unsigned char p[] = {235, 80, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {212, 176, 0};
    const unsigned q_sz = 3;
    unsigned char r[] = {63, 224, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test188)
{
    unsigned char p[] = {40, 142, 0, 0};
    const unsigned p_sz = 4;
    unsigned char q[] = {63, 224, 1};
    const unsigned q_sz = 3;
    unsigned char r[] = {40, 177, 224, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test189)
{
    unsigned char p[] = {40, 177, 224, 1};
    const unsigned p_sz = 4;
    unsigned char q[] = {82, 55, 139, 0};
    const unsigned q_sz = 4;
    unsigned char r[] = {122, 134, 107, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test190)
{
    unsigned char p[] = {241, 178, 29, 0, 0};
    const unsigned p_sz = 5;
    unsigned char q[] = {122, 134, 107, 1};
    const unsigned q_sz = 4;
    unsigned char r[] = {241, 200, 155, 107, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test191)
{
    unsigned char p[] = {241, 200, 155, 107, 1};
    const unsigned p_sz = 5;
    unsigned char q[] = {198, 78, 90, 174, 0};
    const unsigned q_sz = 5;
    unsigned char r[] = {55, 134, 193, 197, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test192)
{
    unsigned char p[] = {221, 137, 210, 244, 0, 0};
    const unsigned p_sz = 6;
    unsigned char q[] = {55, 134, 193, 197, 1};
    const unsigned q_sz = 5;
    unsigned char r[] = {221, 190, 84, 53, 197, 1};
    const unsigned r_sz = 6;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test193)
{
    unsigned char p[] = {221, 190, 84, 53, 197, 1};
    const unsigned p_sz = 6;
    unsigned char q[] = {114, 47, 38, 182, 36, 0};
    const unsigned q_sz = 6;
    unsigned char r[] = {175, 145, 114, 131, 225, 1};
    const unsigned r_sz = 6;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test194)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char q[] = {3, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {3, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test195)
{
    unsigned char p[] = {125, 10, 80, 81, 99, 134, 75, 199, 221, 109, 82, 162, 167, 18, 134, 216, 32, 77, 63, 61, 158, 252, 35, 17, 111, 119, 13, 231, 115, 194, 84, 87, 248, 72, 191, 219};
    const unsigned p_sz = 36;
    unsigned char q[] = {0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 82, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned q_sz = 36;
    unsigned char r[] = {125, 10, 80, 81, 99, 27, 75, 199, 221, 109, 0, 162, 167, 18, 209, 216, 32, 77, 63, 61, 158, 252, 35, 147, 111, 119, 8, 231, 115, 194, 84, 87, 248, 72, 191, 219};
    const unsigned r_sz = 36;
    unsigned char buf[36];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test196)
{
    unsigned char p[] = {107, 0};
    const unsigned p_sz = 2;
    unsigned char q[] = {1};
    const unsigned q_sz = 1;
    unsigned char r[] = {107, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test197)
{
    unsigned char p[] = {107, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {20, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {127, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test198)
{
    unsigned char p[] = {98, 0, 0};
    const unsigned p_sz = 3;
    unsigned char q[] = {127, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {98, 127, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test199)
{
    unsigned char p[] = {98, 127, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {89, 197, 0};
    const unsigned q_sz = 3;
    unsigned char r[] = {59, 186, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test200)
{
    unsigned char p[] = {174, 136, 0, 0};
    const unsigned p_sz = 4;
    unsigned char q[] = {59, 186, 1};
    const unsigned q_sz = 3;
    unsigned char r[] = {174, 179, 186, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test201)
{
    unsigned char p[] = {174, 179, 186, 1};
    const unsigned p_sz = 4;
    unsigned char q[] = {175, 78, 247, 0};
    const unsigned q_sz = 4;
    unsigned char r[] = {1, 253, 77, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test202)
{
    unsigned char p[] = {227, 31, 93, 0, 0};
    const unsigned p_sz = 5;
    unsigned char q[] = {1, 253, 77, 1};
    const unsigned q_sz = 4;
    unsigned char r[] = {227, 30, 160, 77, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test203)
{
    unsigned char p[] = {227, 30, 160, 77, 1};
    const unsigned p_sz = 5;
    unsigned char q[] = {217, 227, 88, 217, 0};
    const unsigned q_sz = 5;
    unsigned char r[] = {58, 253, 248, 148, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test204)
{
    unsigned char p[] = {73, 247, 181, 73, 0, 0};
    const unsigned p_sz = 6;
    unsigned char q[] = {58, 253, 248, 148, 1};
    const unsigned q_sz = 5;
    unsigned char r[] = {73, 205, 72, 177, 148, 1};
    const unsigned r_sz = 6;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test205)
{
    unsigned char p[] = {73, 205, 72, 177, 148, 1};
    const unsigned p_sz = 6;
    unsigned char q[] = {189, 150, 195, 33, 17, 0};
    const unsigned q_sz = 6;
    unsigned char r[] = {244, 91, 139, 144, 133, 1};
    const unsigned r_sz = 6;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test206)
{
    unsigned char p[] = {166, 201, 210, 203, 7, 0, 0};
    const unsigned p_sz = 7;
    unsigned char q[] = {244, 91, 139, 144, 133, 1};
    const unsigned q_sz = 6;
    unsigned char r[] = {166, 61, 137, 64, 151, 133, 1};
    const unsigned r_sz = 7;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test207)
{
    unsigned char p[] = {166, 61, 137, 64, 151, 133, 1};
    const unsigned p_sz = 7;
    unsigned char q[] = {32, 236, 205, 4, 183, 96, 0};
    const unsigned q_sz = 7;
    unsigned char r[] = {134, 209, 68, 68, 32, 229, 1};
    const unsigned r_sz = 7;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test208)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char q[] = {4, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {4, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test209)
{
    unsigned char p[] = {125, 10, 80, 81, 99, 134, 75, 199, 221, 109, 82, 162, 167, 18, 134, 216, 32, 77, 63, 61, 158, 252, 35, 17, 111, 119, 13, 231, 115, 194, 84, 87, 248, 60, 191, 219};
    const unsigned p_sz = 36;
    unsigned char q[] = {0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 82, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 5, 0, 0, 0, 0, 0, 0, 116, 0, 0};
    const unsigned q_sz = 36;
    unsigned char r[] = {125, 10, 80, 81, 99, 27, 75, 199, 221, 109, 0, 162, 167, 18, 209, 216, 32, 77, 63, 61, 158, 252, 35, 147, 111, 119, 8, 231, 115, 194, 84, 87, 248, 72, 191, 219};
    const unsigned r_sz = 36;
    unsigned char buf[36];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test210)
{
    unsigned char p[] = {138, 0};
    const unsigned p_sz = 2;
    unsigned char q[] = {1};
    const unsigned q_sz = 1;
    unsigned char r[] = {138, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test211)
{
    unsigned char p[] = {138, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {192, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {74, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test212)
{
    unsigned char p[] = {36, 0, 0};
    const unsigned p_sz = 3;
    unsigned char q[] = {74, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {36, 74, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test213)
{
    unsigned char p[] = {36, 74, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {154, 189, 0};
    const unsigned q_sz = 3;
    unsigned char r[] = {190, 247, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test214)
{
    unsigned char p[] = {142, 155, 0, 0};
    const unsigned p_sz = 4;
    unsigned char q[] = {190, 247, 1};
    const unsigned q_sz = 3;
    unsigned char r[] = {142, 37, 247, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test215)
{
    unsigned char p[] = {142, 37, 247, 1};
    const unsigned p_sz = 4;
    unsigned char q[] = {68, 19, 74, 0};
    const unsigned q_sz = 4;
    unsigned char r[] = {202, 54, 189, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test216)
{
    unsigned char p[] = {165, 17, 197, 0, 0};
    const unsigned p_sz = 5;
    unsigned char q[] = {202, 54, 189, 1};
    const unsigned q_sz = 4;
    unsigned char r[] = {165, 219, 243, 189, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test217)
{
    unsigned char p[] = {165, 219, 243, 189, 1};
    const unsigned p_sz = 5;
    unsigned char q[] = {80, 244, 223, 203, 0};
    const unsigned q_sz = 5;
    unsigned char r[] = {245, 47, 44, 118, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test218)
{
    unsigned char p[] = {96, 83, 97, 121, 0, 0};
    const unsigned p_sz = 6;
    unsigned char q[] = {245, 47, 44, 118, 1};
    const unsigned q_sz = 5;
    unsigned char r[] = {96, 166, 78, 85, 118, 1};
    const unsigned r_sz = 6;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test219)
{
    unsigned char p[] = {96, 166, 78, 85, 118, 1};
    const unsigned p_sz = 6;
    unsigned char q[] = {155, 160, 72, 104, 88, 0};
    const unsigned q_sz = 6;
    unsigned char r[] = {251, 6, 6, 61, 46, 1};
    const unsigned r_sz = 6;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test220)
{
    unsigned char p[] = {105, 170, 194, 224, 211, 0, 0};
    const unsigned p_sz = 7;
    unsigned char q[] = {251, 6, 6, 61, 46, 1};
    const unsigned q_sz = 6;
    unsigned char r[] = {105, 81, 196, 230, 238, 46, 1};
    const unsigned r_sz = 7;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test221)
{
    unsigned char p[] = {105, 81, 196, 230, 238, 46, 1};
    const unsigned p_sz = 7;
    unsigned char q[] = {239, 128, 128, 162, 206, 203, 0};
    const unsigned q_sz = 7;
    unsigned char r[] = {134, 209, 68, 68, 32, 229, 1};
    const unsigned r_sz = 7;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test222)
{
    unsigned char p[] = {125, 10, 80, 81, 99, 134, 75, 199, 221, 109, 82, 162, 167, 18, 134, 216, 32, 77, 63, 61, 158, 252, 35, 17, 111, 119, 13, 231, 115, 194, 84, 87, 248, 221, 191, 219};
    const unsigned p_sz = 36;
    unsigned char q[] = {0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 82, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 5, 0, 0, 0, 0, 0, 0, 149, 0, 0};
    const unsigned q_sz = 36;
    unsigned char r[] = {125, 10, 80, 81, 99, 27, 75, 199, 221, 109, 0, 162, 167, 18, 209, 216, 32, 77, 63, 61, 158, 252, 35, 147, 111, 119, 8, 231, 115, 194, 84, 87, 248, 72, 191, 219};
    const unsigned r_sz = 36;
    unsigned char buf[36];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test223)
{
    unsigned char p[] = {177, 0};
    const unsigned p_sz = 2;
    unsigned char q[] = {1};
    const unsigned q_sz = 1;
    unsigned char r[] = {177, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test224)
{
    unsigned char p[] = {177, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {26, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {171, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test225)
{
    unsigned char p[] = {55, 0, 0};
    const unsigned p_sz = 3;
    unsigned char q[] = {171, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {55, 171, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test226)
{
    unsigned char p[] = {55, 171, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {83, 24, 0};
    const unsigned q_sz = 3;
    unsigned char r[] = {100, 179, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test227)
{
    unsigned char p[] = {62, 65, 0, 0};
    const unsigned p_sz = 4;
    unsigned char q[] = {100, 179, 1};
    const unsigned q_sz = 3;
    unsigned char r[] = {62, 37, 179, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test228)
{
    unsigned char p[] = {62, 37, 179, 1};
    const unsigned p_sz = 4;
    unsigned char q[] = {89, 110, 38, 0};
    const unsigned q_sz = 4;
    unsigned char r[] = {103, 75, 149, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test229)
{
    unsigned char p[] = {77, 118, 167, 0, 0};
    const unsigned p_sz = 5;
    unsigned char q[] = {103, 75, 149, 1};
    const unsigned q_sz = 4;
    unsigned char r[] = {77, 17, 236, 149, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test230)
{
    unsigned char p[] = {77, 17, 236, 149, 1};
    const unsigned p_sz = 5;
    unsigned char q[] = {220, 2, 64, 60, 0};
    const unsigned q_sz = 5;
    unsigned char r[] = {145, 19, 172, 169, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test231)
{
    unsigned char p[] = {70, 237, 236, 25, 0, 0};
    const unsigned p_sz = 6;
    unsigned char q[] = {145, 19, 172, 169, 1};
    const unsigned q_sz = 5;
    unsigned char r[] = {70, 124, 255, 181, 169, 1};
    const unsigned r_sz = 6;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test232)
{
    unsigned char p[] = {70, 124, 255, 181, 169, 1};
    const unsigned p_sz = 6;
    unsigned char q[] = {191, 232, 155, 184, 173, 0};
    const unsigned q_sz = 6;
    unsigned char r[] = {249, 148, 100, 13, 4, 1};
    const unsigned r_sz = 6;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test233)
{
    unsigned char p[] = {183, 128, 242, 133, 27, 0, 0};
    const unsigned p_sz = 7;
    unsigned char q[] = {249, 148, 100, 13, 4, 1};
    const unsigned q_sz = 6;
    unsigned char r[] = {183, 121, 102, 225, 22, 4, 1};
    const unsigned r_sz = 7;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test234)
{
    unsigned char p[] = {183, 121, 102, 225, 22, 4, 1};
    const unsigned p_sz = 7;
    unsigned char q[] = {62, 25, 226, 16, 213, 114, 0};
    const unsigned q_sz = 7;
    unsigned char r[] = {137, 96, 132, 241, 195, 118, 1};
    const unsigned r_sz = 7;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test235)
{
    unsigned char p[] = {182, 123, 137, 11, 79, 218, 0, 0};
    const unsigned p_sz = 8;
    unsigned char q[] = {137, 96, 132, 241, 195, 118, 1};
    const unsigned q_sz = 7;
    unsigned char r[] = {182, 242, 233, 143, 190, 25, 118, 1};
    const unsigned r_sz = 8;
    unsigned char buf[8];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test236)
{
    unsigned char p[] = {182, 242, 233, 143, 190, 25, 118, 1};
    const unsigned p_sz = 8;
    unsigned char q[] = {192, 176, 175, 92, 246, 120, 121, 0};
    const unsigned q_sz = 8;
    unsigned char r[] = {118, 66, 70, 211, 72, 97, 15, 1};
    const unsigned r_sz = 8;
    unsigned char buf[8];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test237)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char q[] = {234, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {234, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test238)
{
    unsigned char p[] = {125, 10, 80, 81, 99, 134, 75, 199, 221, 109, 82, 162, 167, 41, 134, 216, 32, 77, 63, 61, 158, 252, 35, 17, 111, 119, 13, 231, 115, 194, 84, 87, 248, 221, 191, 219};
    const unsigned p_sz = 36;
    unsigned char q[] = {0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 82, 0, 0, 59, 87, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 5, 0, 0, 0, 0, 0, 0, 149, 0, 0};
    const unsigned q_sz = 36;
    unsigned char r[] = {125, 10, 80, 81, 99, 27, 75, 199, 221, 109, 0, 162, 167, 18, 209, 216, 32, 77, 63, 61, 158, 252, 35, 147, 111, 119, 8, 231, 115, 194, 84, 87, 248, 72, 191, 219};
    const unsigned r_sz = 36;
    unsigned char buf[36];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test239)
{
    unsigned char p[] = {16, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {221, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {205, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test240)
{
    unsigned char p[] = {153, 161, 171, 25, 23, 125, 185, 225, 51, 148, 89, 95, 198, 177, 116, 194, 179, 176, 166, 163, 147, 211, 16, 8, 128, 95, 77, 204, 207, 196, 222, 144, 117, 145, 98, 73, 26, 230, 179, 240, 219, 240, 60, 144, 154, 182, 52, 183, 219, 45, 233, 51, 45, 40, 11, 80, 20, 249, 20, 74, 110, 3, 12, 196, 162, 201, 109, 154, 55, 181, 46, 53, 199, 111, 179, 39, 63, 40, 77, 243, 189, 156};
    const unsigned p_sz = 82;
    unsigned char q[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned q_sz = 82;
    unsigned char r[] = {153, 161, 171, 25, 23, 125, 185, 225, 51, 148, 89, 95, 198, 177, 116, 194, 179, 176, 166, 163, 147, 211, 16, 8, 128, 95, 77, 204, 207, 196, 222, 144, 117, 145, 98, 73, 26, 230, 179, 240, 219, 240, 60, 144, 154, 182, 52, 183, 219, 45, 233, 51, 45, 40, 11, 80, 20, 249, 20, 74, 110, 3, 12, 196, 162, 201, 109, 154, 55, 165, 46, 53, 199, 111, 179, 39, 63, 40, 77, 243, 189, 156};
    const unsigned r_sz = 82;
    unsigned char buf[82];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test241)
{
    unsigned char p[] = {19, 0};
    const unsigned p_sz = 2;
    unsigned char q[] = {1};
    const unsigned q_sz = 1;
    unsigned char r[] = {19, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test242)
{
    unsigned char p[] = {19, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {58, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {41, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test243)
{
    unsigned char p[] = {37, 0, 0};
    const unsigned p_sz = 3;
    unsigned char q[] = {41, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {37, 41, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test244)
{
    unsigned char p[] = {37, 41, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {127, 100, 0};
    const unsigned q_sz = 3;
    unsigned char r[] = {90, 77, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test245)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char q[] = {128, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {128, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test246)
{
    unsigned char p[] = {153, 161, 171, 25, 23, 125, 185, 225, 51, 148, 89, 95, 198, 177, 116, 194, 179, 176, 166, 163, 147, 211, 16, 8, 128, 95, 77, 204, 207, 196, 222, 144, 117, 145, 98, 73, 26, 230, 179, 240, 219, 240, 60, 144, 154, 182, 52, 183, 219, 45, 233, 51, 45, 40, 11, 80, 20, 249, 20, 74, 110, 3, 12, 196, 162, 201, 109, 154, 55, 181, 46, 53, 199, 111, 176, 39, 63, 40, 77, 243, 189, 156};
    const unsigned p_sz = 82;
    unsigned char q[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0};
    const unsigned q_sz = 82;
    unsigned char r[] = {153, 161, 171, 25, 23, 125, 185, 225, 51, 148, 89, 95, 198, 177, 116, 194, 179, 176, 166, 163, 147, 211, 16, 8, 128, 95, 77, 204, 207, 196, 222, 144, 117, 145, 98, 73, 26, 230, 179, 240, 219, 240, 60, 144, 154, 182, 52, 183, 219, 45, 233, 51, 45, 40, 11, 80, 20, 249, 20, 74, 110, 3, 12, 196, 162, 201, 109, 154, 55, 165, 46, 53, 199, 111, 179, 39, 63, 40, 77, 243, 189, 156};
    const unsigned r_sz = 82;
    unsigned char buf[82];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test247)
{
    unsigned char p[] = {153, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {156, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {5, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test248)
{
    unsigned char p[] = {19, 0, 0};
    const unsigned p_sz = 3;
    unsigned char q[] = {5, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {19, 5, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test249)
{
    unsigned char p[] = {19, 5, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {56, 170, 0};
    const unsigned q_sz = 3;
    unsigned char r[] = {43, 175, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test250)
{
    unsigned char p[] = {167, 114, 0, 0};
    const unsigned p_sz = 4;
    unsigned char q[] = {43, 175, 1};
    const unsigned q_sz = 3;
    unsigned char r[] = {167, 89, 175, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test251)
{
    unsigned char p[] = {167, 89, 175, 1};
    const unsigned p_sz = 4;
    unsigned char q[] = {130, 188, 122, 0};
    const unsigned q_sz = 4;
    unsigned char r[] = {37, 229, 213, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test252)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char q[] = {152, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {152, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test253)
{
    unsigned char p[] = {153, 161, 171, 25, 23, 125, 185, 225, 51, 148, 89, 95, 198, 177, 116, 194, 179, 176, 166, 163, 147, 211, 16, 8, 128, 95, 77, 204, 207, 196, 222, 144, 117, 145, 98, 73, 26, 230, 179, 240, 219, 240, 60, 144, 154, 182, 52, 183, 219, 45, 233, 51, 45, 40, 11, 80, 20, 249, 20, 74, 110, 3, 12, 196, 40, 201, 109, 154, 55, 181, 46, 53, 199, 111, 176, 39, 63, 40, 77, 243, 189, 156};
    const unsigned p_sz = 82;
    unsigned char q[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 16, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0};
    const unsigned q_sz = 82;
    unsigned char r[] = {153, 161, 171, 25, 23, 125, 185, 225, 51, 148, 89, 95, 198, 177, 116, 194, 179, 176, 166, 163, 147, 211, 16, 8, 128, 95, 77, 204, 207, 196, 222, 144, 117, 145, 98, 73, 26, 230, 179, 240, 219, 240, 60, 144, 154, 182, 52, 183, 219, 45, 233, 51, 45, 40, 11, 80, 20, 249, 20, 74, 110, 3, 12, 196, 162, 201, 109, 154, 55, 165, 46, 53, 199, 111, 179, 39, 63, 40, 77, 243, 189, 156};
    const unsigned r_sz = 82;
    unsigned char buf[82];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test254)
{
    unsigned char p[] = {190, 0};
    const unsigned p_sz = 2;
    unsigned char q[] = {1};
    const unsigned q_sz = 1;
    unsigned char r[] = {190, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test255)
{
    unsigned char p[] = {190, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {59, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {133, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test256)
{
    unsigned char p[] = {20, 0, 0};
    const unsigned p_sz = 3;
    unsigned char q[] = {133, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {20, 133, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test257)
{
    unsigned char p[] = {20, 133, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {123, 238, 0};
    const unsigned q_sz = 3;
    unsigned char r[] = {111, 107, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test258)
{
    unsigned char p[] = {189, 203, 0, 0};
    const unsigned p_sz = 4;
    unsigned char q[] = {111, 107, 1};
    const unsigned q_sz = 3;
    unsigned char r[] = {189, 164, 107, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test259)
{
    unsigned char p[] = {189, 164, 107, 1};
    const unsigned p_sz = 4;
    unsigned char q[] = {43, 88, 213, 0};
    const unsigned q_sz = 4;
    unsigned char r[] = {150, 252, 190, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test260)
{
    unsigned char p[] = {38, 148, 162, 0, 0};
    const unsigned p_sz = 5;
    unsigned char q[] = {150, 252, 190, 1};
    const unsigned q_sz = 4;
    unsigned char r[] = {38, 2, 94, 190, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test261)
{
    unsigned char p[] = {38, 2, 94, 190, 1};
    const unsigned p_sz = 5;
    unsigned char q[] = {152, 32, 213, 91, 0};
    const unsigned q_sz = 5;
    unsigned char r[] = {190, 34, 139, 229, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test262)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char q[] = {48, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {48, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test263)
{
    unsigned char p[] = {153, 161, 171, 25, 23, 125, 185, 225, 51, 148, 89, 95, 198, 177, 116, 194, 179, 176, 166, 163, 147, 211, 16, 8, 128, 95, 77, 204, 207, 196, 222, 144, 117, 145, 98, 73, 26, 230, 179, 240, 219, 240, 60, 144, 154, 182, 52, 183, 219, 45, 233, 51, 10, 40, 11, 80, 20, 249, 20, 74, 110, 3, 12, 196, 40, 201, 109, 154, 55, 181, 46, 53, 199, 111, 176, 39, 63, 40, 77, 243, 189, 156};
    const unsigned p_sz = 82;
    unsigned char q[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 16, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0};
    const unsigned q_sz = 82;
    unsigned char r[] = {153, 161, 171, 25, 23, 125, 185, 225, 51, 148, 89, 95, 198, 177, 116, 194, 179, 176, 166, 163, 147, 211, 16, 8, 128, 95, 77, 204, 207, 196, 222, 144, 117, 145, 98, 73, 26, 230, 179, 240, 219, 240, 60, 144, 154, 182, 52, 183, 219, 45, 233, 51, 45, 40, 11, 80, 20, 249, 20, 74, 110, 3, 12, 196, 162, 201, 109, 154, 55, 165, 46, 53, 199, 111, 179, 39, 63, 40, 77, 243, 189, 156};
    const unsigned r_sz = 82;
    unsigned char buf[82];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test264)
{
    unsigned char p[] = {227, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {179, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {80, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test265)
{
    unsigned char p[] = {81, 0, 0};
    const unsigned p_sz = 3;
    unsigned char q[] = {80, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {81, 80, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test266)
{
    unsigned char p[] = {81, 80, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {249, 230, 0};
    const unsigned q_sz = 3;
    unsigned char r[] = {168, 182, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test267)
{
    unsigned char p[] = {52, 20, 0, 0};
    const unsigned p_sz = 4;
    unsigned char q[] = {168, 182, 1};
    const unsigned q_sz = 3;
    unsigned char r[] = {52, 188, 182, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test268)
{
    unsigned char p[] = {52, 188, 182, 1};
    const unsigned p_sz = 4;
    unsigned char q[] = {162, 183, 190, 0};
    const unsigned q_sz = 4;
    unsigned char r[] = {150, 11, 8, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test269)
{
    unsigned char p[] = {11, 220, 113, 0, 0};
    const unsigned p_sz = 5;
    unsigned char q[] = {150, 11, 8, 1};
    const unsigned q_sz = 4;
    unsigned char r[] = {11, 74, 122, 8, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test270)
{
    unsigned char p[] = {11, 74, 122, 8, 1};
    const unsigned p_sz = 5;
    unsigned char q[] = {209, 86, 22, 203, 0};
    const unsigned q_sz = 5;
    unsigned char r[] = {218, 28, 108, 195, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test271)
{
    unsigned char p[] = {166, 116, 96, 12, 0, 0};
    const unsigned p_sz = 6;
    unsigned char q[] = {218, 28, 108, 195, 1};
    const unsigned q_sz = 5;
    unsigned char r[] = {166, 174, 124, 96, 195, 1};
    const unsigned r_sz = 6;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test272)
{
    unsigned char p[] = {166, 174, 124, 96, 195, 1};
    const unsigned p_sz = 6;
    unsigned char q[] = {192, 175, 41, 31, 73, 0};
    const unsigned q_sz = 6;
    unsigned char r[] = {102, 1, 85, 127, 138, 1};
    const unsigned r_sz = 6;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test273)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char q[] = {111, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {111, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test274)
{
    unsigned char p[] = {153, 161, 171, 25, 23, 125, 185, 225, 51, 148, 89, 95, 198, 177, 116, 194, 179, 176, 166, 163, 206, 211, 16, 8, 128, 95, 77, 204, 207, 196, 222, 144, 117, 145, 98, 73, 26, 230, 179, 240, 219, 240, 60, 144, 154, 182, 52, 183, 219, 45, 233, 51, 10, 40, 11, 80, 20, 249, 20, 74, 110, 3, 12, 196, 40, 201, 109, 154, 55, 181, 46, 53, 199, 111, 176, 39, 63, 40, 77, 243, 189, 156};
    const unsigned p_sz = 82;
    unsigned char q[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 16, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0};
    const unsigned q_sz = 82;
    unsigned char r[] = {153, 161, 171, 25, 23, 125, 185, 225, 51, 148, 89, 95, 198, 177, 116, 194, 179, 176, 166, 163, 147, 211, 16, 8, 128, 95, 77, 204, 207, 196, 222, 144, 117, 145, 98, 73, 26, 230, 179, 240, 219, 240, 60, 144, 154, 182, 52, 183, 219, 45, 233, 51, 45, 40, 11, 80, 20, 249, 20, 74, 110, 3, 12, 196, 162, 201, 109, 154, 55, 165, 46, 53, 199, 111, 179, 39, 63, 40, 77, 243, 189, 156};
    const unsigned r_sz = 82;
    unsigned char buf[82];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test275)
{
    unsigned char p[] = {5, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {111, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {106, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test276)
{
    unsigned char p[] = {190, 0, 0};
    const unsigned p_sz = 3;
    unsigned char q[] = {106, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {190, 106, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test277)
{
    unsigned char p[] = {190, 106, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {22, 14, 0};
    const unsigned q_sz = 3;
    unsigned char r[] = {168, 100, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test278)
{
    unsigned char p[] = {212, 2, 0, 0};
    const unsigned p_sz = 4;
    unsigned char q[] = {168, 100, 1};
    const unsigned q_sz = 3;
    unsigned char r[] = {212, 170, 100, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test279)
{
    unsigned char p[] = {212, 170, 100, 1};
    const unsigned p_sz = 4;
    unsigned char q[] = {128, 105, 199, 0};
    const unsigned q_sz = 4;
    unsigned char r[] = {84, 195, 163, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test280)
{
    unsigned char p[] = {20, 136, 99, 0, 0};
    const unsigned p_sz = 5;
    unsigned char q[] = {84, 195, 163, 1};
    const unsigned q_sz = 4;
    unsigned char r[] = {20, 220, 160, 163, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test281)
{
    unsigned char p[] = {20, 220, 160, 163, 1};
    const unsigned p_sz = 5;
    unsigned char q[] = {49, 142, 23, 148, 0};
    const unsigned q_sz = 5;
    unsigned char r[] = {37, 82, 183, 55, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test282)
{
    unsigned char p[] = {36, 119, 246, 211, 0, 0};
    const unsigned p_sz = 6;
    unsigned char q[] = {37, 82, 183, 55, 1};
    const unsigned q_sz = 5;
    unsigned char r[] = {36, 82, 164, 100, 55, 1};
    const unsigned r_sz = 6;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test283)
{
    unsigned char p[] = {36, 82, 164, 100, 55, 1};
    const unsigned p_sz = 6;
    unsigned char q[] = {180, 184, 42, 229, 22, 0};
    const unsigned q_sz = 6;
    unsigned char r[] = {144, 234, 142, 129, 33, 1};
    const unsigned r_sz = 6;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test284)
{
    unsigned char p[] = {160, 126, 219, 221, 90, 0, 0};
    const unsigned p_sz = 7;
    unsigned char q[] = {144, 234, 142, 129, 33, 1};
    const unsigned q_sz = 6;
    unsigned char r[] = {160, 238, 49, 83, 219, 33, 1};
    const unsigned r_sz = 7;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test285)
{
    unsigned char p[] = {160, 238, 49, 83, 219, 33, 1};
    const unsigned p_sz = 7;
    unsigned char q[] = {53, 225, 97, 75, 167, 194, 0};
    const unsigned q_sz = 7;
    unsigned char r[] = {149, 15, 80, 24, 124, 227, 1};
    const unsigned r_sz = 7;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test286)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char q[] = {105, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {105, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test287)
{
    unsigned char p[] = {153, 161, 171, 25, 23, 125, 185, 225, 51, 148, 89, 95, 198, 177, 116, 194, 179, 176, 166, 163, 206, 211, 16, 238, 128, 95, 77, 204, 207, 196, 222, 144, 117, 145, 98, 73, 26, 230, 179, 240, 219, 240, 60, 144, 154, 182, 52, 183, 219, 45, 233, 51, 10, 40, 11, 80, 20, 249, 20, 74, 110, 3, 12, 196, 40, 201, 109, 154, 55, 181, 46, 53, 199, 111, 176, 39, 63, 40, 77, 243, 189, 156};
    const unsigned p_sz = 82;
    unsigned char q[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 16, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0};
    const unsigned q_sz = 82;
    unsigned char r[] = {153, 161, 171, 25, 23, 125, 185, 225, 51, 148, 89, 95, 198, 177, 116, 194, 179, 176, 166, 163, 147, 211, 16, 8, 128, 95, 77, 204, 207, 196, 222, 144, 117, 145, 98, 73, 26, 230, 179, 240, 219, 240, 60, 144, 154, 182, 52, 183, 219, 45, 233, 51, 45, 40, 11, 80, 20, 249, 20, 74, 110, 3, 12, 196, 162, 201, 109, 154, 55, 165, 46, 53, 199, 111, 179, 39, 63, 40, 77, 243, 189, 156};
    const unsigned r_sz = 82;
    unsigned char buf[82];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test288)
{
    unsigned char p[] = {184, 0};
    const unsigned p_sz = 2;
    unsigned char q[] = {1};
    const unsigned q_sz = 1;
    unsigned char r[] = {184, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test289)
{
    unsigned char p[] = {184, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {61, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {133, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test290)
{
    unsigned char p[] = {243, 0, 0};
    const unsigned p_sz = 3;
    unsigned char q[] = {133, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {243, 133, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test291)
{
    unsigned char p[] = {243, 133, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {72, 67, 0};
    const unsigned q_sz = 3;
    unsigned char r[] = {187, 198, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test292)
{
    unsigned char p[] = {109, 32, 0, 0};
    const unsigned p_sz = 4;
    unsigned char q[] = {187, 198, 1};
    const unsigned q_sz = 3;
    unsigned char r[] = {109, 155, 198, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test293)
{
    unsigned char p[] = {109, 155, 198, 1};
    const unsigned p_sz = 4;
    unsigned char q[] = {95, 77, 203, 0};
    const unsigned q_sz = 4;
    unsigned char r[] = {50, 214, 13, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test294)
{
    unsigned char p[] = {22, 190, 228, 0, 0};
    const unsigned p_sz = 5;
    unsigned char q[] = {50, 214, 13, 1};
    const unsigned q_sz = 4;
    unsigned char r[] = {22, 140, 50, 13, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test295)
{
    unsigned char p[] = {22, 140, 50, 13, 1};
    const unsigned p_sz = 5;
    unsigned char q[] = {2, 41, 63, 222, 0};
    const unsigned q_sz = 5;
    unsigned char r[] = {20, 165, 13, 211, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test296)
{
    unsigned char p[] = {226, 88, 32, 228, 0, 0};
    const unsigned p_sz = 6;
    unsigned char q[] = {20, 165, 13, 211, 1};
    const unsigned q_sz = 5;
    unsigned char r[] = {226, 76, 133, 233, 211, 1};
    const unsigned r_sz = 6;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test297)
{
    unsigned char p[] = {226, 76, 133, 233, 211, 1};
    const unsigned p_sz = 6;
    unsigned char q[] = {140, 55, 34, 240, 173, 0};
    const unsigned q_sz = 6;
    unsigned char r[] = {110, 123, 167, 25, 126, 1};
    const unsigned r_sz = 6;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test298)
{
    unsigned char p[] = {117, 213, 202, 10, 18, 0, 0};
    const unsigned p_sz = 7;
    unsigned char q[] = {110, 123, 167, 25, 126, 1};
    const unsigned q_sz = 6;
    unsigned char r[] = {117, 187, 177, 173, 11, 126, 1};
    const unsigned r_sz = 7;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test299)
{
    unsigned char p[] = {117, 187, 177, 173, 11, 126, 1};
    const unsigned p_sz = 7;
    unsigned char q[] = {122, 239, 27, 203, 89, 119, 0};
    const unsigned q_sz = 7;
    unsigned char r[] = {15, 84, 170, 102, 82, 9, 1};
    const unsigned r_sz = 7;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test300)
{
    unsigned char p[] = {214, 188, 13, 91, 97, 57, 0, 0};
    const unsigned p_sz = 8;
    unsigned char q[] = {15, 84, 170, 102, 82, 9, 1};
    const unsigned q_sz = 7;
    unsigned char r[] = {214, 179, 89, 241, 7, 107, 9, 1};
    const unsigned r_sz = 8;
    unsigned char buf[8];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test301)
{
    unsigned char p[] = {214, 179, 89, 241, 7, 107, 9, 1};
    const unsigned p_sz = 8;
    unsigned char q[] = {186, 51, 109, 208, 46, 167, 139, 0};
    const unsigned q_sz = 8;
    unsigned char r[] = {108, 128, 52, 33, 41, 204, 130, 1};
    const unsigned r_sz = 8;
    unsigned char buf[8];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test302)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char q[] = {97, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {97, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test303)
{
    unsigned char p[] = {153, 161, 171, 25, 23, 125, 185, 225, 51, 148, 89, 95, 198, 177, 116, 127, 179, 176, 166, 163, 206, 211, 16, 238, 128, 95, 77, 204, 207, 196, 222, 144, 117, 145, 98, 73, 26, 230, 179, 240, 219, 240, 60, 144, 154, 182, 52, 183, 219, 45, 233, 51, 10, 40, 11, 80, 20, 249, 20, 74, 110, 3, 12, 196, 40, 201, 109, 154, 55, 181, 46, 53, 199, 111, 176, 39, 63, 40, 77, 243, 189, 156};
    const unsigned p_sz = 82;
    unsigned char q[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 93, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 16, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0};
    const unsigned q_sz = 82;
    unsigned char r[] = {153, 161, 171, 25, 23, 125, 185, 225, 51, 148, 89, 95, 198, 177, 116, 194, 179, 176, 166, 163, 147, 211, 16, 8, 128, 95, 77, 204, 207, 196, 222, 144, 117, 145, 98, 73, 26, 230, 179, 240, 219, 240, 60, 144, 154, 182, 52, 183, 219, 45, 233, 51, 45, 40, 11, 80, 20, 249, 20, 74, 110, 3, 12, 196, 162, 201, 109, 154, 55, 165, 46, 53, 199, 111, 179, 39, 63, 40, 77, 243, 189, 156};
    const unsigned r_sz = 82;
    unsigned char buf[82];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test304)
{
    unsigned char p[] = {146, 0};
    const unsigned p_sz = 2;
    unsigned char q[] = {1};
    const unsigned q_sz = 1;
    unsigned char r[] = {146, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test305)
{
    unsigned char p[] = {146, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {192, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {82, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test306)
{
    unsigned char p[] = {118, 0, 0};
    const unsigned p_sz = 3;
    unsigned char q[] = {82, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {118, 82, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test307)
{
    unsigned char p[] = {118, 82, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {167, 186, 0};
    const unsigned q_sz = 3;
    unsigned char r[] = {209, 232, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test308)
{
    unsigned char p[] = {102, 243, 0, 0};
    const unsigned p_sz = 4;
    unsigned char q[] = {209, 232, 1};
    const unsigned q_sz = 3;
    unsigned char r[] = {102, 34, 232, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test309)
{
    unsigned char p[] = {102, 34, 232, 1};
    const unsigned p_sz = 4;
    unsigned char q[] = {227, 6, 38, 0};
    const unsigned q_sz = 4;
    unsigned char r[] = {133, 36, 206, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test310)
{
    unsigned char p[] = {220, 74, 6, 0, 0};
    const unsigned p_sz = 5;
    unsigned char q[] = {133, 36, 206, 1};
    const unsigned q_sz = 4;
    unsigned char r[] = {220, 207, 34, 206, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test311)
{
    unsigned char p[] = {220, 207, 34, 206, 1};
    const unsigned p_sz = 5;
    unsigned char q[] = {177, 196, 47, 242, 0};
    const unsigned q_sz = 5;
    unsigned char r[] = {109, 11, 13, 60, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test312)
{
    unsigned char p[] = {171, 180, 209, 5, 0, 0};
    const unsigned p_sz = 6;
    unsigned char q[] = {109, 11, 13, 60, 1};
    const unsigned q_sz = 5;
    unsigned char r[] = {171, 217, 218, 8, 60, 1};
    const unsigned r_sz = 6;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test313)
{
    unsigned char p[] = {171, 217, 218, 8, 60, 1};
    const unsigned p_sz = 6;
    unsigned char q[] = {113, 14, 190, 148, 195, 0};
    const unsigned q_sz = 6;
    unsigned char r[] = {218, 215, 100, 156, 255, 1};
    const unsigned r_sz = 6;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test314)
{
    unsigned char p[] = {157, 158, 8, 245, 57, 0, 0};
    const unsigned p_sz = 7;
    unsigned char q[] = {218, 215, 100, 156, 255, 1};
    const unsigned q_sz = 6;
    unsigned char r[] = {157, 68, 223, 145, 165, 255, 1};
    const unsigned r_sz = 7;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test315)
{
    unsigned char p[] = {157, 68, 223, 145, 165, 255, 1};
    const unsigned p_sz = 7;
    unsigned char q[] = {42, 171, 224, 119, 196, 29, 0};
    const unsigned q_sz = 7;
    unsigned char r[] = {183, 239, 63, 230, 97, 226, 1};
    const unsigned r_sz = 7;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test316)
{
    unsigned char p[] = {24, 95, 225, 149, 47, 164, 0, 0};
    const unsigned p_sz = 8;
    unsigned char q[] = {183, 239, 63, 230, 97, 226, 1};
    const unsigned q_sz = 7;
    unsigned char r[] = {24, 232, 14, 170, 201, 197, 226, 1};
    const unsigned r_sz = 8;
    unsigned char buf[8];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test317)
{
    unsigned char p[] = {24, 232, 14, 170, 201, 197, 226, 1};
    const unsigned p_sz = 8;
    unsigned char q[] = {77, 112, 146, 41, 40, 211, 176, 0};
    const unsigned q_sz = 8;
    unsigned char r[] = {85, 152, 156, 131, 225, 22, 82, 1};
    const unsigned r_sz = 8;
    unsigned char buf[8];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test318)
{
    unsigned char p[] = {249, 76, 138, 195, 236, 170, 93, 0, 0};
    const unsigned p_sz = 9;
    unsigned char q[] = {85, 152, 156, 131, 225, 22, 82, 1};
    const unsigned q_sz = 8;
    unsigned char r[] = {249, 25, 18, 95, 111, 75, 75, 82, 1};
    const unsigned r_sz = 9;
    unsigned char buf[9];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test319)
{
    unsigned char p[] = {249, 25, 18, 95, 111, 75, 75, 82, 1};
    const unsigned p_sz = 9;
    unsigned char q[] = {223, 121, 244, 220, 48, 75, 254, 100, 0};
    const unsigned q_sz = 9;
    unsigned char r[] = {38, 96, 230, 131, 95, 0, 181, 54, 1};
    const unsigned r_sz = 9;
    unsigned char buf[9];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test320)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char q[] = {180, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {180, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test321)
{
    unsigned char p[] = {153, 161, 171, 25, 23, 125, 185, 225, 51, 148, 89, 95, 198, 177, 116, 127, 179, 176, 166, 163, 206, 211, 16, 238, 128, 95, 77, 204, 207, 196, 222, 144, 117, 145, 98, 73, 26, 230, 179, 240, 219, 240, 60, 144, 154, 182, 52, 183, 219, 45, 233, 51, 10, 40, 11, 80, 20, 249, 20, 74, 110, 41, 12, 196, 40, 201, 109, 154, 55, 181, 46, 53, 199, 111, 176, 39, 63, 40, 77, 243, 189, 156};
    const unsigned p_sz = 82;
    unsigned char q[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 93, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 138, 0, 0, 0, 0, 16, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0};
    const unsigned q_sz = 82;
    unsigned char r[] = {153, 161, 171, 25, 23, 125, 185, 225, 51, 148, 89, 95, 198, 177, 116, 194, 179, 176, 166, 163, 147, 211, 16, 8, 128, 95, 77, 204, 207, 196, 222, 144, 117, 145, 98, 73, 26, 230, 179, 240, 219, 240, 60, 144, 154, 182, 52, 183, 219, 45, 233, 51, 45, 40, 11, 80, 20, 249, 20, 74, 110, 3, 12, 196, 162, 201, 109, 154, 55, 165, 46, 53, 199, 111, 179, 39, 63, 40, 77, 243, 189, 156};
    const unsigned r_sz = 82;
    unsigned char buf[82];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test322)
{
    unsigned char p[] = {131, 0};
    const unsigned p_sz = 2;
    unsigned char q[] = {1};
    const unsigned q_sz = 1;
    unsigned char r[] = {131, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test323)
{
    unsigned char p[] = {131, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {64, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {195, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test324)
{
    unsigned char p[] = {137, 0, 0};
    const unsigned p_sz = 3;
    unsigned char q[] = {195, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {137, 195, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test325)
{
    unsigned char p[] = {137, 195, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {216, 156, 0};
    const unsigned q_sz = 3;
    unsigned char r[] = {81, 95, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test326)
{
    unsigned char p[] = {202, 129, 0, 0};
    const unsigned p_sz = 4;
    unsigned char q[] = {81, 95, 1};
    const unsigned q_sz = 3;
    unsigned char r[] = {202, 208, 95, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test327)
{
    unsigned char p[] = {202, 208, 95, 1};
    const unsigned p_sz = 4;
    unsigned char q[] = {142, 103, 159, 0};
    const unsigned q_sz = 4;
    unsigned char r[] = {68, 183, 192, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test328)
{
    unsigned char p[] = {234, 109, 47, 0, 0};
    const unsigned p_sz = 5;
    unsigned char q[] = {68, 183, 192, 1};
    const unsigned q_sz = 4;
    unsigned char r[] = {234, 41, 152, 192, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test329)
{
    unsigned char p[] = {234, 41, 152, 192, 1};
    const unsigned p_sz = 5;
    unsigned char q[] = {183, 249, 127, 93, 0};
    const unsigned q_sz = 5;
    unsigned char r[] = {93, 208, 231, 157, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test330)
{
    unsigned char p[] = {61, 48, 213, 102, 0, 0};
    const unsigned p_sz = 6;
    unsigned char q[] = {93, 208, 231, 157, 1};
    const unsigned q_sz = 5;
    unsigned char r[] = {61, 109, 5, 129, 157, 1};
    const unsigned r_sz = 6;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test331)
{
    unsigned char p[] = {61, 109, 5, 129, 157, 1};
    const unsigned p_sz = 6;
    unsigned char q[] = {162, 64, 251, 55, 146, 0};
    const unsigned q_sz = 6;
    unsigned char r[] = {159, 45, 254, 182, 15, 1};
    const unsigned r_sz = 6;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test332)
{
    unsigned char p[] = {85, 112, 255, 102, 113, 0, 0};
    const unsigned p_sz = 7;
    unsigned char q[] = {159, 45, 254, 182, 15, 1};
    const unsigned q_sz = 6;
    unsigned char r[] = {85, 239, 210, 152, 199, 15, 1};
    const unsigned r_sz = 7;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test333)
{
    unsigned char p[] = {85, 239, 210, 152, 199, 15, 1};
    const unsigned p_sz = 7;
    unsigned char q[] = {71, 36, 106, 193, 12, 166, 0};
    const unsigned q_sz = 7;
    unsigned char r[] = {18, 203, 184, 89, 203, 169, 1};
    const unsigned r_sz = 7;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test334)
{
    unsigned char p[] = {5, 234, 91, 175, 240, 16, 0, 0};
    const unsigned p_sz = 8;
    unsigned char q[] = {18, 203, 184, 89, 203, 169, 1};
    const unsigned q_sz = 7;
    unsigned char r[] = {5, 248, 144, 23, 169, 219, 169, 1};
    const unsigned r_sz = 8;
    unsigned char buf[8];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test335)
{
    unsigned char p[] = {5, 248, 144, 23, 169, 219, 169, 1};
    const unsigned p_sz = 8;
    unsigned char q[] = {237, 23, 3, 136, 23, 24, 82, 0};
    const unsigned q_sz = 8;
    unsigned char r[] = {232, 239, 147, 159, 190, 195, 251, 1};
    const unsigned r_sz = 8;
    unsigned char buf[8];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test336)
{
    unsigned char p[] = {150, 130, 254, 63, 130, 163, 178, 0, 0};
    const unsigned p_sz = 9;
    unsigned char q[] = {232, 239, 147, 159, 190, 195, 251, 1};
    const unsigned q_sz = 8;
    unsigned char r[] = {150, 106, 17, 172, 29, 29, 113, 251, 1};
    const unsigned r_sz = 9;
    unsigned char buf[9];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test337)
{
    unsigned char p[] = {150, 106, 17, 172, 29, 29, 113, 251, 1};
    const unsigned p_sz = 9;
    unsigned char q[] = {100, 168, 70, 244, 54, 77, 99, 149, 0};
    const unsigned q_sz = 9;
    unsigned char r[] = {242, 194, 87, 88, 43, 80, 18, 110, 1};
    const unsigned r_sz = 9;
    unsigned char buf[9];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test338)
{
    unsigned char p[] = {26, 80, 242, 132, 115, 160, 202, 113, 0, 0};
    const unsigned p_sz = 10;
    unsigned char q[] = {242, 194, 87, 88, 43, 80, 18, 110, 1};
    const unsigned q_sz = 9;
    unsigned char r[] = {26, 162, 48, 211, 43, 139, 154, 99, 110, 1};
    const unsigned r_sz = 10;
    unsigned char buf[10];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test339)
{
    unsigned char p[] = {26, 162, 48, 211, 43, 139, 154, 99, 110, 1};
    const unsigned p_sz = 10;
    unsigned char q[] = {28, 80, 227, 61, 167, 212, 178, 246, 176, 0};
    const unsigned q_sz = 10;
    unsigned char r[] = {6, 242, 211, 238, 140, 95, 40, 149, 222, 1};
    const unsigned r_sz = 10;
    unsigned char buf[10];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test340)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char q[] = {232, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {232, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test341)
{
    unsigned char p[] = {153, 161, 171, 25, 23, 125, 185, 225, 51, 148, 89, 95, 198, 177, 116, 127, 179, 176, 166, 163, 206, 211, 16, 238, 128, 95, 77, 204, 207, 196, 222, 144, 117, 145, 98, 73, 26, 230, 179, 240, 219, 240, 60, 144, 154, 182, 52, 183, 219, 45, 233, 51, 10, 40, 11, 80, 20, 249, 20, 74, 110, 41, 12, 196, 40, 201, 109, 154, 55, 181, 63, 53, 199, 111, 176, 39, 63, 40, 77, 243, 189, 156};
    const unsigned p_sz = 82;
    unsigned char q[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 93, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 138, 0, 0, 0, 0, 16, 17, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0};
    const unsigned q_sz = 82;
    unsigned char r[] = {153, 161, 171, 25, 23, 125, 185, 225, 51, 148, 89, 95, 198, 177, 116, 194, 179, 176, 166, 163, 147, 211, 16, 8, 128, 95, 77, 204, 207, 196, 222, 144, 117, 145, 98, 73, 26, 230, 179, 240, 219, 240, 60, 144, 154, 182, 52, 183, 219, 45, 233, 51, 45, 40, 11, 80, 20, 249, 20, 74, 110, 3, 12, 196, 162, 201, 109, 154, 55, 165, 46, 53, 199, 111, 179, 39, 63, 40, 77, 243, 189, 156};
    const unsigned r_sz = 82;
    unsigned char buf[82];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test342)
{
    unsigned char p[] = {41, 0};
    const unsigned p_sz = 2;
    unsigned char q[] = {1};
    const unsigned q_sz = 1;
    unsigned char r[] = {41, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test343)
{
    unsigned char p[] = {41, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {172, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {133, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test344)
{
    unsigned char p[] = {115, 0, 0};
    const unsigned p_sz = 3;
    unsigned char q[] = {133, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {115, 133, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test345)
{
    unsigned char p[] = {115, 133, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {66, 232, 0};
    const unsigned q_sz = 3;
    unsigned char r[] = {49, 109, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test346)
{
    unsigned char p[] = {124, 176, 0, 0};
    const unsigned p_sz = 4;
    unsigned char q[] = {49, 109, 1};
    const unsigned q_sz = 3;
    unsigned char r[] = {124, 129, 109, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test347)
{
    unsigned char p[] = {124, 129, 109, 1};
    const unsigned p_sz = 4;
    unsigned char q[] = {255, 204, 54, 0};
    const unsigned q_sz = 4;
    unsigned char r[] = {131, 77, 91, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test348)
{
    unsigned char p[] = {68, 80, 227, 0, 0};
    const unsigned p_sz = 5;
    unsigned char q[] = {131, 77, 91, 1};
    const unsigned q_sz = 4;
    unsigned char r[] = {68, 211, 174, 91, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test349)
{
    unsigned char p[] = {68, 211, 174, 91, 1};
    const unsigned p_sz = 5;
    unsigned char q[] = {246, 188, 45, 49, 0};
    const unsigned q_sz = 5;
    unsigned char r[] = {178, 111, 131, 106, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test350)
{
    unsigned char p[] = {252, 97, 135, 227, 0, 0};
    const unsigned p_sz = 6;
    unsigned char q[] = {178, 111, 131, 106, 1};
    const unsigned q_sz = 5;
    unsigned char r[] = {252, 211, 232, 96, 106, 1};
    const unsigned r_sz = 6;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test351)
{
    unsigned char p[] = {252, 211, 232, 96, 106, 1};
    const unsigned p_sz = 6;
    unsigned char q[] = {78, 66, 94, 199, 120, 0};
    const unsigned q_sz = 6;
    unsigned char r[] = {178, 145, 182, 167, 18, 1};
    const unsigned r_sz = 6;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test352)
{
    unsigned char p[] = {84, 27, 75, 144, 220, 0, 0};
    const unsigned p_sz = 7;
    unsigned char q[] = {178, 145, 182, 167, 18, 1};
    const unsigned q_sz = 6;
    unsigned char r[] = {84, 169, 218, 38, 123, 18, 1};
    const unsigned r_sz = 7;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test353)
{
    unsigned char p[] = {84, 169, 218, 38, 123, 18, 1};
    const unsigned p_sz = 7;
    unsigned char q[] = {42, 217, 143, 79, 114, 110, 0};
    const unsigned q_sz = 7;
    unsigned char r[] = {126, 112, 85, 105, 9, 124, 1};
    const unsigned r_sz = 7;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test354)
{
    unsigned char p[] = {178, 145, 182, 167, 18, 1, 0, 0};
    const unsigned p_sz = 8;
    unsigned char q[] = {126, 112, 85, 105, 9, 124, 1};
    const unsigned q_sz = 7;
    unsigned char r[] = {178, 239, 198, 242, 123, 8, 124, 1};
    const unsigned r_sz = 8;
    unsigned char buf[8];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test355)
{
    unsigned char p[] = {178, 239, 198, 242, 123, 8, 124, 1};
    const unsigned p_sz = 8;
    unsigned char q[] = {97, 34, 140, 121, 236, 19, 57, 0};
    const unsigned q_sz = 8;
    unsigned char r[] = {211, 205, 74, 139, 151, 27, 69, 1};
    const unsigned r_sz = 8;
    unsigned char buf[8];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test356)
{
    unsigned char p[] = {144, 128, 89, 199, 24, 255, 185, 0, 0};
    const unsigned p_sz = 9;
    unsigned char q[] = {211, 205, 74, 139, 151, 27, 69, 1};
    const unsigned q_sz = 8;
    unsigned char r[] = {144, 83, 148, 141, 147, 104, 162, 69, 1};
    const unsigned r_sz = 9;
    unsigned char buf[9];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test357)
{
    unsigned char p[] = {144, 83, 148, 141, 147, 104, 162, 69, 1};
    const unsigned p_sz = 9;
    unsigned char q[] = {170, 231, 52, 10, 25, 222, 156, 47, 0};
    const unsigned q_sz = 9;
    unsigned char r[] = {58, 180, 160, 135, 138, 182, 62, 106, 1};
    const unsigned r_sz = 9;
    unsigned char buf[9];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test358)
{
    unsigned char p[] = {84, 202, 67, 119, 55, 80, 12, 111, 0, 0};
    const unsigned p_sz = 10;
    unsigned char q[] = {58, 180, 160, 135, 138, 182, 62, 106, 1};
    const unsigned q_sz = 9;
    unsigned char r[] = {84, 240, 247, 215, 176, 218, 186, 81, 106, 1};
    const unsigned r_sz = 10;
    unsigned char buf[10];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test359)
{
    unsigned char p[] = {84, 240, 247, 215, 176, 218, 186, 81, 106, 1};
    const unsigned p_sz = 10;
    unsigned char q[] = {150, 65, 72, 149, 33, 58, 96, 178, 179, 0};
    const unsigned q_sz = 10;
    unsigned char r[] = {194, 177, 191, 66, 145, 224, 218, 227, 217, 1};
    const unsigned r_sz = 10;
    unsigned char buf[10];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test360)
{
    unsigned char p[] = {76, 12, 222, 180, 122, 17, 118, 35, 128, 0, 0};
    const unsigned p_sz = 11;
    unsigned char q[] = {194, 177, 191, 66, 145, 224, 218, 227, 217, 1};
    const unsigned q_sz = 10;
    unsigned char r[] = {76, 206, 111, 11, 56, 128, 150, 249, 99, 217, 1};
    const unsigned r_sz = 11;
    unsigned char buf[11];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test361)
{
    unsigned char p[] = {76, 206, 111, 11, 56, 128, 150, 249, 99, 217, 1};
    const unsigned p_sz = 11;
    unsigned char q[] = {162, 61, 140, 6, 20, 223, 117, 161, 11, 42, 0};
    const unsigned q_sz = 11;
    unsigned char r[] = {238, 243, 227, 13, 44, 95, 227, 88, 104, 243, 1};
    const unsigned r_sz = 11;
    unsigned char buf[11];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test362)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char q[] = {45, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {45, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test363)
{
    unsigned char p[] = {153, 161, 171, 25, 23, 125, 185, 225, 51, 148, 89, 95, 198, 177, 116, 127, 179, 176, 166, 163, 206, 211, 16, 238, 128, 95, 77, 204, 207, 196, 222, 144, 117, 145, 98, 73, 26, 230, 179, 240, 219, 240, 60, 144, 154, 182, 52, 183, 219, 45, 233, 51, 10, 40, 11, 80, 20, 249, 20, 74, 110, 41, 12, 110, 40, 201, 109, 154, 55, 181, 63, 53, 199, 111, 176, 39, 63, 40, 77, 243, 189, 156};
    const unsigned p_sz = 82;
    unsigned char q[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 93, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 170, 138, 0, 0, 0, 0, 16, 17, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0};
    const unsigned q_sz = 82;
    unsigned char r[] = {153, 161, 171, 25, 23, 125, 185, 225, 51, 148, 89, 95, 198, 177, 116, 194, 179, 176, 166, 163, 147, 211, 16, 8, 128, 95, 77, 204, 207, 196, 222, 144, 117, 145, 98, 73, 26, 230, 179, 240, 219, 240, 60, 144, 154, 182, 52, 183, 219, 45, 233, 51, 45, 40, 11, 80, 20, 249, 20, 74, 110, 3, 12, 196, 162, 201, 109, 154, 55, 165, 46, 53, 199, 111, 179, 39, 63, 40, 77, 243, 189, 156};
    const unsigned r_sz = 82;
    unsigned char buf[82];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test364)
{
    unsigned char p[] = {150, 0};
    const unsigned p_sz = 2;
    unsigned char q[] = {1};
    const unsigned q_sz = 1;
    unsigned char r[] = {150, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test365)
{
    unsigned char p[] = {150, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {81, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {199, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test366)
{
    unsigned char p[] = {123, 0, 0};
    const unsigned p_sz = 3;
    unsigned char q[] = {199, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {123, 199, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test367)
{
    unsigned char p[] = {123, 199, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {16, 21, 0};
    const unsigned q_sz = 3;
    unsigned char r[] = {107, 210, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test368)
{
    unsigned char p[] = {215, 20, 0, 0};
    const unsigned p_sz = 4;
    unsigned char q[] = {107, 210, 1};
    const unsigned q_sz = 3;
    unsigned char r[] = {215, 127, 210, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test369)
{
    unsigned char p[] = {215, 127, 210, 1};
    const unsigned p_sz = 4;
    unsigned char q[] = {193, 180, 195, 0};
    const unsigned q_sz = 4;
    unsigned char r[] = {22, 203, 17, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test370)
{
    unsigned char p[] = {218, 189, 5, 0, 0};
    const unsigned p_sz = 5;
    unsigned char q[] = {22, 203, 17, 1};
    const unsigned q_sz = 4;
    unsigned char r[] = {218, 171, 206, 17, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test371)
{
    unsigned char p[] = {218, 171, 206, 17, 1};
    const unsigned p_sz = 5;
    unsigned char q[] = {122, 72, 223, 233, 0};
    const unsigned q_sz = 5;
    unsigned char r[] = {160, 227, 17, 248, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test372)
{
    unsigned char p[] = {103, 104, 72, 102, 0, 0};
    const unsigned p_sz = 6;
    unsigned char q[] = {160, 227, 17, 248, 1};
    const unsigned q_sz = 5;
    unsigned char r[] = {103, 200, 171, 119, 248, 1};
    const unsigned r_sz = 6;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test373)
{
    unsigned char p[] = {103, 200, 171, 119, 248, 1};
    const unsigned p_sz = 6;
    unsigned char q[] = {55, 10, 244, 207, 46, 0};
    const unsigned q_sz = 6;
    unsigned char r[] = {80, 194, 95, 184, 214, 1};
    const unsigned r_sz = 6;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test374)
{
    unsigned char p[] = {59, 88, 145, 49, 190, 0, 0};
    const unsigned p_sz = 7;
    unsigned char q[] = {80, 194, 95, 184, 214, 1};
    const unsigned q_sz = 6;
    unsigned char r[] = {59, 8, 83, 110, 6, 214, 1};
    const unsigned r_sz = 7;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test375)
{
    unsigned char p[] = {59, 8, 83, 110, 6, 214, 1};
    const unsigned p_sz = 7;
    unsigned char q[] = {175, 103, 104, 255, 133, 119, 0};
    const unsigned q_sz = 7;
    unsigned char r[] = {148, 111, 59, 145, 131, 161, 1};
    const unsigned r_sz = 7;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test376)
{
    unsigned char p[] = {246, 110, 196, 216, 221, 147, 0, 0};
    const unsigned p_sz = 8;
    unsigned char q[] = {148, 111, 59, 145, 131, 161, 1};
    const unsigned q_sz = 7;
    unsigned char r[] = {246, 250, 171, 227, 76, 16, 161, 1};
    const unsigned r_sz = 8;
    unsigned char buf[8];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test377)
{
    unsigned char p[] = {246, 250, 171, 227, 76, 16, 161, 1};
    const unsigned p_sz = 8;
    unsigned char q[] = {141, 172, 143, 47, 170, 138, 115, 0};
    const unsigned q_sz = 8;
    unsigned char r[] = {123, 86, 36, 204, 230, 154, 210, 1};
    const unsigned r_sz = 8;
    unsigned char buf[8];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test378)
{
    unsigned char p[] = {236, 77, 221, 54, 30, 41, 107, 0, 0};
    const unsigned p_sz = 9;
    unsigned char q[] = {123, 86, 36, 204, 230, 154, 210, 1};
    const unsigned q_sz = 8;
    unsigned char r[] = {236, 54, 139, 18, 210, 207, 241, 210, 1};
    const unsigned r_sz = 9;
    unsigned char buf[9];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test379)
{
    unsigned char p[] = {236, 54, 139, 18, 210, 207, 241, 210, 1};
    const unsigned p_sz = 9;
    unsigned char q[] = {12, 137, 253, 139, 38, 2, 229, 103, 0};
    const unsigned q_sz = 9;
    unsigned char r[] = {224, 191, 118, 153, 244, 205, 20, 181, 1};
    const unsigned r_sz = 9;
    unsigned char buf[9];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test380)
{
    unsigned char p[] = {219, 18, 244, 184, 145, 170, 95, 32, 0, 0};
    const unsigned p_sz = 10;
    unsigned char q[] = {224, 191, 118, 153, 244, 205, 20, 181, 1};
    const unsigned q_sz = 9;
    unsigned char r[] = {219, 242, 75, 206, 8, 94, 146, 52, 181, 1};
    const unsigned r_sz = 10;
    unsigned char buf[10];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test381)
{
    unsigned char p[] = {219, 242, 75, 206, 8, 94, 146, 52, 181, 1};
    const unsigned p_sz = 10;
    unsigned char q[] = {163, 5, 58, 178, 199, 114, 100, 55, 84, 0};
    const unsigned q_sz = 10;
    unsigned char r[] = {120, 247, 113, 124, 207, 44, 246, 3, 225, 1};
    const unsigned r_sz = 10;
    unsigned char buf[10];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test382)
{
    unsigned char p[] = {225, 70, 128, 162, 248, 146, 25, 196, 21, 0, 0};
    const unsigned p_sz = 11;
    unsigned char q[] = {120, 247, 113, 124, 207, 44, 246, 3, 225, 1};
    const unsigned q_sz = 10;
    unsigned char r[] = {225, 62, 119, 211, 132, 93, 53, 50, 22, 225, 1};
    const unsigned r_sz = 11;
    unsigned char buf[11];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test383)
{
    unsigned char p[] = {225, 62, 119, 211, 132, 93, 53, 50, 22, 225, 1};
    const unsigned p_sz = 11;
    unsigned char q[] = {243, 184, 54, 38, 154, 132, 202, 150, 250, 114, 0};
    const unsigned q_sz = 11;
    unsigned char r[] = {18, 134, 65, 245, 30, 217, 255, 164, 236, 147, 1};
    const unsigned r_sz = 11;
    unsigned char buf[11];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test384)
{
    unsigned char p[] = {4, 228, 45, 53, 215, 198, 175, 221, 135, 75, 0, 0};
    const unsigned p_sz = 12;
    unsigned char q[] = {18, 134, 65, 245, 30, 217, 255, 164, 236, 147, 1};
    const unsigned q_sz = 11;
    unsigned char r[] = {4, 246, 171, 116, 34, 216, 118, 34, 35, 167, 147, 1};
    const unsigned r_sz = 12;
    unsigned char buf[12];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test385)
{
    unsigned char p[] = {4, 246, 171, 116, 34, 216, 118, 34, 35, 167, 147, 1};
    const unsigned p_sz = 12;
    unsigned char q[] = {71, 133, 172, 32, 26, 51, 221, 171, 170, 82, 48, 0};
    const unsigned q_sz = 12;
    unsigned char r[] = {67, 115, 7, 84, 56, 235, 171, 137, 137, 245, 163, 1};
    const unsigned r_sz = 12;
    unsigned char buf[12];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test386)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char q[] = {80, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {80, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test387)
{
    unsigned char p[] = {153, 161, 171, 25, 23, 125, 185, 225, 51, 148, 89, 95, 198, 177, 116, 127, 179, 176, 166, 163, 206, 211, 16, 238, 128, 95, 77, 115, 207, 196, 222, 144, 117, 145, 98, 73, 26, 230, 179, 240, 219, 240, 60, 144, 154, 182, 52, 183, 219, 45, 233, 51, 10, 40, 11, 80, 20, 249, 20, 74, 110, 41, 12, 110, 40, 201, 109, 154, 55, 181, 63, 53, 199, 111, 176, 39, 63, 40, 77, 243, 189, 156};
    const unsigned p_sz = 82;
    unsigned char q[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 93, 0, 0, 230, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 170, 138, 0, 0, 0, 0, 16, 17, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0};
    const unsigned q_sz = 82;
    unsigned char r[] = {153, 161, 171, 25, 23, 125, 185, 225, 51, 148, 89, 95, 198, 177, 116, 194, 179, 176, 166, 163, 147, 211, 16, 8, 128, 95, 77, 204, 207, 196, 222, 144, 117, 145, 98, 73, 26, 230, 179, 240, 219, 240, 60, 144, 154, 182, 52, 183, 219, 45, 233, 51, 45, 40, 11, 80, 20, 249, 20, 74, 110, 3, 12, 196, 162, 201, 109, 154, 55, 165, 46, 53, 199, 111, 179, 39, 63, 40, 77, 243, 189, 156};
    const unsigned r_sz = 82;
    unsigned char buf[82];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test388)
{
    unsigned char p[] = {50, 0};
    const unsigned p_sz = 2;
    unsigned char q[] = {1};
    const unsigned q_sz = 1;
    unsigned char r[] = {50, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test389)
{
    unsigned char p[] = {50, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {19, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {33, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test390)
{
    unsigned char p[] = {110, 0, 0};
    const unsigned p_sz = 3;
    unsigned char q[] = {33, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {110, 33, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test391)
{
    unsigned char p[] = {110, 33, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {241, 37, 0};
    const unsigned q_sz = 3;
    unsigned char r[] = {159, 4, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test392)
{
    unsigned char p[] = {195, 120, 0, 0};
    const unsigned p_sz = 4;
    unsigned char q[] = {159, 4, 1};
    const unsigned q_sz = 3;
    unsigned char r[] = {195, 231, 4, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test393)
{
    unsigned char p[] = {195, 231, 4, 1};
    const unsigned p_sz = 4;
    unsigned char q[] = {197, 240, 60, 0};
    const unsigned q_sz = 4;
    unsigned char r[] = {6, 23, 56, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test394)
{
    unsigned char p[] = {13, 185, 105, 0, 0};
    const unsigned p_sz = 5;
    unsigned char q[] = {6, 23, 56, 1};
    const unsigned q_sz = 4;
    unsigned char r[] = {13, 191, 126, 56, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test395)
{
    unsigned char p[] = {13, 191, 126, 56, 1};
    const unsigned p_sz = 5;
    unsigned char q[] = {241, 234, 113, 82, 0};
    const unsigned q_sz = 5;
    unsigned char r[] = {252, 85, 15, 106, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test396)
{
    unsigned char p[] = {111, 198, 203, 156, 0, 0};
    const unsigned p_sz = 6;
    unsigned char q[] = {252, 85, 15, 106, 1};
    const unsigned q_sz = 5;
    unsigned char r[] = {111, 58, 158, 147, 106, 1};
    const unsigned r_sz = 6;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test397)
{
    unsigned char p[] = {111, 58, 158, 147, 106, 1};
    const unsigned p_sz = 6;
    unsigned char q[] = {113, 30, 2, 69, 49, 0};
    const unsigned q_sz = 6;
    unsigned char r[] = {30, 36, 156, 214, 91, 1};
    const unsigned r_sz = 6;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test398)
{
    unsigned char p[] = {242, 100, 59, 214, 193, 0, 0};
    const unsigned p_sz = 7;
    unsigned char q[] = {30, 36, 156, 214, 91, 1};
    const unsigned q_sz = 6;
    unsigned char r[] = {242, 122, 31, 74, 23, 91, 1};
    const unsigned r_sz = 7;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test399)
{
    unsigned char p[] = {242, 122, 31, 74, 23, 91, 1};
    const unsigned p_sz = 7;
    unsigned char q[] = {85, 238, 189, 115, 63, 137, 0};
    const unsigned q_sz = 7;
    unsigned char r[] = {167, 148, 162, 57, 40, 210, 1};
    const unsigned r_sz = 7;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test400)
{
    unsigned char p[] = {53, 165, 71, 70, 160, 43, 0, 0};
    const unsigned p_sz = 8;
    unsigned char q[] = {167, 148, 162, 57, 40, 210, 1};
    const unsigned q_sz = 7;
    unsigned char r[] = {53, 2, 211, 228, 153, 3, 210, 1};
    const unsigned r_sz = 8;
    unsigned char buf[8];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test401)
{
    unsigned char p[] = {53, 2, 211, 228, 153, 3, 210, 1};
    const unsigned p_sz = 8;
    unsigned char q[] = {97, 57, 94, 38, 229, 255, 248, 0};
    const unsigned q_sz = 8;
    unsigned char r[] = {84, 59, 141, 194, 124, 252, 42, 1};
    const unsigned r_sz = 8;
    unsigned char buf[8];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test402)
{
    unsigned char p[] = {128, 226, 232, 178, 103, 248, 186, 0, 0};
    const unsigned p_sz = 9;
    unsigned char q[] = {84, 59, 141, 194, 124, 252, 42, 1};
    const unsigned q_sz = 8;
    unsigned char r[] = {128, 182, 211, 63, 165, 132, 70, 42, 1};
    const unsigned r_sz = 9;
    unsigned char buf[9];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test403)
{
    unsigned char p[] = {128, 182, 211, 63, 165, 132, 70, 42, 1};
    const unsigned p_sz = 9;
    unsigned char q[] = {140, 6, 136, 61, 117, 137, 70, 209, 0};
    const unsigned q_sz = 9;
    unsigned char r[] = {12, 176, 91, 2, 208, 13, 0, 251, 1};
    const unsigned r_sz = 9;
    unsigned char buf[9];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test404)
{
    unsigned char p[] = {21, 199, 100, 190, 31, 63, 132, 71, 0, 0};
    const unsigned p_sz = 10;
    unsigned char q[] = {12, 176, 91, 2, 208, 13, 0, 251, 1};
    const unsigned q_sz = 9;
    unsigned char r[] = {21, 203, 212, 229, 29, 239, 137, 71, 251, 1};
    const unsigned r_sz = 10;
    unsigned char buf[10];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test405)
{
    unsigned char p[] = {21, 203, 212, 229, 29, 239, 137, 71, 251, 1};
    const unsigned p_sz = 10;
    unsigned char q[] = {249, 241, 143, 165, 106, 37, 0, 63, 220, 0};
    const unsigned q_sz = 10;
    unsigned char r[] = {236, 58, 91, 64, 119, 202, 137, 120, 39, 1};
    const unsigned r_sz = 10;
    unsigned char buf[10];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test406)
{
    unsigned char p[] = {16, 86, 47, 243, 214, 231, 0, 178, 247, 0, 0};
    const unsigned p_sz = 11;
    unsigned char q[] = {236, 58, 91, 64, 119, 202, 137, 120, 39, 1};
    const unsigned q_sz = 10;
    unsigned char r[] = {16, 186, 21, 168, 150, 144, 202, 59, 143, 39, 1};
    const unsigned r_sz = 11;
    unsigned char buf[11];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test407)
{
    unsigned char p[] = {16, 186, 21, 168, 150, 144, 202, 59, 143, 39, 1};
    const unsigned p_sz = 11;
    unsigned char q[] = {212, 196, 232, 150, 155, 131, 27, 173, 166, 241, 0};
    const unsigned q_sz = 11;
    unsigned char r[] = {196, 126, 253, 62, 13, 19, 209, 150, 41, 214, 1};
    const unsigned r_sz = 11;
    unsigned char buf[11];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test408)
{
    unsigned char p[] = {234, 198, 131, 209, 7, 61, 122, 243, 165, 114, 0, 0};
    const unsigned p_sz = 12;
    unsigned char q[] = {196, 126, 253, 62, 13, 19, 209, 150, 41, 214, 1};
    const unsigned q_sz = 11;
    unsigned char r[] = {234, 2, 253, 44, 57, 48, 105, 34, 51, 91, 214, 1};
    const unsigned r_sz = 12;
    unsigned char buf[12];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test409)
{
    unsigned char p[] = {234, 2, 253, 44, 57, 48, 105, 34, 51, 91, 214, 1};
    const unsigned p_sz = 12;
    unsigned char q[] = {14, 196, 217, 46, 59, 96, 219, 200, 99, 34, 76, 0};
    const unsigned q_sz = 12;
    unsigned char r[] = {228, 198, 36, 2, 2, 80, 178, 234, 80, 121, 154, 1};
    const unsigned r_sz = 12;
    unsigned char buf[12];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test410)
{
    unsigned char p[] = {75, 99, 30, 103, 17, 116, 213, 227, 84, 231, 216, 0, 0};
    const unsigned p_sz = 13;
    unsigned char q[] = {228, 198, 36, 2, 2, 80, 178, 234, 80, 121, 154, 1};
    const unsigned q_sz = 12;
    unsigned char r[] = {75, 135, 216, 67, 19, 118, 133, 81, 190, 183, 161, 154, 1};
    const unsigned r_sz = 13;
    unsigned char buf[13];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test411)
{
    unsigned char p[] = {75, 135, 216, 67, 19, 118, 133, 81, 190, 183, 161, 154, 1};
    const unsigned p_sz = 13;
    unsigned char q[] = {206, 147, 150, 178, 178, 58, 63, 247, 58, 126, 34, 89, 0};
    const unsigned q_sz = 13;
    unsigned char r[] = {133, 20, 78, 241, 161, 76, 186, 166, 132, 201, 131, 195, 1};
    const unsigned r_sz = 13;
    unsigned char buf[13];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test412)
{
    unsigned char p[] = {153, 161, 171, 25, 23, 125, 185, 225, 51, 148, 89, 95, 198, 177, 116, 127, 179, 176, 166, 163, 206, 211, 16, 238, 128, 95, 77, 115, 207, 196, 222, 144, 117, 145, 98, 73, 26, 230, 179, 240, 219, 240, 60, 144, 154, 182, 52, 183, 219, 45, 233, 151, 10, 40, 11, 80, 20, 249, 20, 74, 110, 41, 12, 110, 40, 201, 109, 154, 55, 181, 63, 53, 199, 111, 176, 39, 63, 40, 77, 243, 189, 156};
    const unsigned p_sz = 82;
    unsigned char q[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 93, 0, 0, 230, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 39, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 170, 138, 0, 0, 0, 0, 16, 17, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0};
    const unsigned q_sz = 82;
    unsigned char r[] = {153, 161, 171, 25, 23, 125, 185, 225, 51, 148, 89, 95, 198, 177, 116, 194, 179, 176, 166, 163, 147, 211, 16, 8, 128, 95, 77, 204, 207, 196, 222, 144, 117, 145, 98, 73, 26, 230, 179, 240, 219, 240, 60, 144, 154, 182, 52, 183, 219, 45, 233, 51, 45, 40, 11, 80, 20, 249, 20, 74, 110, 3, 12, 196, 162, 201, 109, 154, 55, 165, 46, 53, 199, 111, 179, 39, 63, 40, 77, 243, 189, 156};
    const unsigned r_sz = 82;
    unsigned char buf[82];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test413)
{
    unsigned char p[] = {38, 0};
    const unsigned p_sz = 2;
    unsigned char q[] = {1};
    const unsigned q_sz = 1;
    unsigned char r[] = {38, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test414)
{
    unsigned char p[] = {38, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {31, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {57, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test415)
{
    unsigned char p[] = {96, 0, 0};
    const unsigned p_sz = 3;
    unsigned char q[] = {57, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {96, 57, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test416)
{
    unsigned char p[] = {96, 57, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {10, 73, 0};
    const unsigned q_sz = 3;
    unsigned char r[] = {106, 112, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test417)
{
    unsigned char p[] = {11, 107, 0, 0};
    const unsigned p_sz = 4;
    unsigned char q[] = {106, 112, 1};
    const unsigned q_sz = 3;
    unsigned char r[] = {11, 1, 112, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test418)
{
    unsigned char p[] = {11, 1, 112, 1};
    const unsigned p_sz = 4;
    unsigned char q[] = {15, 139, 156, 0};
    const unsigned q_sz = 4;
    unsigned char r[] = {4, 138, 236, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test419)
{
    unsigned char p[] = {205, 241, 144, 0, 0};
    const unsigned p_sz = 5;
    unsigned char q[] = {4, 138, 236, 1};
    const unsigned q_sz = 4;
    unsigned char r[] = {205, 245, 26, 236, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test420)
{
    unsigned char p[] = {205, 245, 26, 236, 1};
    const unsigned p_sz = 5;
    unsigned char q[] = {251, 14, 134, 247, 0};
    const unsigned q_sz = 5;
    unsigned char r[] = {54, 251, 156, 27, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test421)
{
    unsigned char p[] = {158, 68, 4, 169, 0, 0};
    const unsigned p_sz = 6;
    unsigned char q[] = {54, 251, 156, 27, 1};
    const unsigned q_sz = 5;
    unsigned char r[] = {158, 114, 255, 53, 27, 1};
    const unsigned r_sz = 6;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test422)
{
    unsigned char p[] = {158, 114, 255, 53, 27, 1};
    const unsigned p_sz = 6;
    unsigned char q[] = {144, 121, 135, 72, 243, 0};
    const unsigned q_sz = 6;
    unsigned char r[] = {14, 11, 120, 125, 232, 1};
    const unsigned r_sz = 6;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test423)
{
    unsigned char p[] = {188, 93, 129, 94, 60, 0, 0};
    const unsigned p_sz = 7;
    unsigned char q[] = {14, 11, 120, 125, 232, 1};
    const unsigned q_sz = 6;
    unsigned char r[] = {188, 83, 138, 38, 65, 232, 1};
    const unsigned r_sz = 7;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test424)
{
    unsigned char p[] = {188, 83, 138, 38, 65, 232, 1};
    const unsigned p_sz = 7;
    unsigned char q[] = {134, 33, 243, 84, 63, 114, 0};
    const unsigned q_sz = 7;
    unsigned char r[] = {58, 114, 121, 114, 126, 154, 1};
    const unsigned r_sz = 7;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test425)
{
    unsigned char p[] = {91, 92, 72, 79, 115, 82, 0, 0};
    const unsigned p_sz = 8;
    unsigned char q[] = {58, 114, 121, 114, 126, 154, 1};
    const unsigned q_sz = 7;
    unsigned char r[] = {91, 102, 58, 54, 1, 44, 154, 1};
    const unsigned r_sz = 8;
    unsigned char buf[8];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test426)
{
    unsigned char p[] = {91, 102, 58, 54, 1, 44, 154, 1};
    const unsigned p_sz = 8;
    unsigned char q[] = {24, 241, 245, 241, 110, 145, 90, 0};
    const unsigned q_sz = 8;
    unsigned char r[] = {67, 151, 207, 199, 111, 189, 192, 1};
    const unsigned r_sz = 8;
    unsigned char buf[8];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test427)
{
    unsigned char p[] = {11, 23, 110, 23, 21, 59, 122, 0, 0};
    const unsigned p_sz = 9;
    unsigned char q[] = {67, 151, 207, 199, 111, 189, 192, 1};
    const unsigned q_sz = 8;
    unsigned char r[] = {11, 84, 249, 216, 210, 84, 199, 192, 1};
    const unsigned r_sz = 9;
    unsigned char buf[9];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test428)
{
    unsigned char p[] = {11, 84, 249, 216, 210, 84, 199, 192, 1};
    const unsigned p_sz = 9;
    unsigned char q[] = {32, 192, 146, 3, 9, 76, 25, 191, 0};
    const unsigned q_sz = 9;
    unsigned char r[] = {43, 148, 107, 219, 219, 24, 222, 127, 1};
    const unsigned r_sz = 9;
    unsigned char buf[9];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test429)
{
    unsigned char p[] = {94, 217, 43, 223, 39, 231, 8, 144, 0, 0};
    const unsigned p_sz = 10;
    unsigned char q[] = {43, 148, 107, 219, 219, 24, 222, 127, 1};
    const unsigned q_sz = 9;
    unsigned char r[] = {94, 242, 191, 180, 252, 60, 16, 78, 127, 1};
    const unsigned r_sz = 10;
    unsigned char buf[10];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test430)
{
    unsigned char p[] = {94, 242, 191, 180, 252, 60, 16, 78, 127, 1};
    const unsigned p_sz = 10;
    unsigned char q[] = {21, 195, 128, 17, 17, 83, 44, 116, 171, 0};
    const unsigned q_sz = 10;
    unsigned char r[] = {75, 49, 63, 165, 237, 111, 60, 58, 212, 1};
    const unsigned r_sz = 10;
    unsigned char buf[10];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test431)
{
    unsigned char p[] = {202, 82, 50, 157, 157, 33, 123, 141, 103, 0, 0};
    const unsigned p_sz = 11;
    unsigned char q[] = {75, 49, 63, 165, 237, 111, 60, 58, 212, 1};
    const unsigned q_sz = 10;
    unsigned char r[] = {202, 25, 3, 162, 56, 204, 20, 177, 93, 212, 1};
    const unsigned r_sz = 11;
    unsigned char buf[11];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test432)
{
    unsigned char p[] = {202, 25, 3, 162, 56, 204, 20, 177, 93, 212, 1};
    const unsigned p_sz = 11;
    unsigned char q[] = {231, 187, 153, 223, 90, 43, 251, 63, 7, 213, 0};
    const unsigned q_sz = 11;
    unsigned char r[] = {45, 162, 154, 125, 98, 231, 239, 142, 90, 1, 1};
    const unsigned r_sz = 11;
    unsigned char buf[11];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test433)
{
    unsigned char p[] = {121, 249, 14, 69, 85, 113, 103, 181, 137, 39, 0, 0};
    const unsigned p_sz = 12;
    unsigned char q[] = {45, 162, 154, 125, 98, 231, 239, 142, 90, 1, 1};
    const unsigned q_sz = 11;
    unsigned char r[] = {121, 212, 172, 223, 40, 19, 128, 90, 7, 125, 1, 1};
    const unsigned r_sz = 12;
    unsigned char buf[12];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test434)
{
    unsigned char p[] = {121, 212, 172, 223, 40, 19, 128, 90, 7, 125, 1, 1};
    const unsigned p_sz = 12;
    unsigned char q[] = {144, 99, 17, 141, 79, 156, 229, 81, 61, 162, 162, 0};
    const unsigned q_sz = 12;
    unsigned char r[] = {233, 183, 189, 82, 103, 143, 101, 11, 58, 223, 163, 1};
    const unsigned r_sz = 12;
    unsigned char buf[12];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test435)
{
    unsigned char p[] = {163, 12, 86, 111, 1, 57, 39, 101, 91, 202, 202, 0, 0};
    const unsigned p_sz = 13;
    unsigned char q[] = {233, 183, 189, 82, 103, 143, 101, 11, 58, 223, 163, 1};
    const unsigned q_sz = 12;
    unsigned char r[] = {163, 229, 225, 210, 83, 94, 168, 0, 80, 240, 21, 163, 1};
    const unsigned r_sz = 13;
    unsigned char buf[13];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test436)
{
    unsigned char p[] = {163, 229, 225, 210, 83, 94, 168, 0, 80, 240, 21, 163, 1};
    const unsigned p_sz = 13;
    unsigned char q[] = {54, 191, 31, 73, 62, 24, 30, 176, 135, 113, 226, 16, 0};
    const unsigned q_sz = 13;
    unsigned char r[] = {149, 90, 254, 155, 109, 70, 182, 176, 215, 129, 247, 179, 1};
    const unsigned r_sz = 13;
    unsigned char buf[13];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test437)
{
    unsigned char p[] = {26, 45, 18, 29, 36, 66, 220, 67, 151, 167, 83, 124, 0, 0};
    const unsigned p_sz = 14;
    unsigned char q[] = {149, 90, 254, 155, 109, 70, 182, 176, 215, 129, 247, 179, 1};
    const unsigned q_sz = 13;
    unsigned char r[] = {26, 184, 72, 227, 191, 47, 154, 245, 39, 112, 210, 139, 179, 1};
    const unsigned r_sz = 14;
    unsigned char buf[14];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test438)
{
    unsigned char p[] = {26, 184, 72, 227, 191, 47, 154, 245, 39, 112, 210, 139, 179, 1};
    const unsigned p_sz = 14;
    unsigned char q[] = {97, 228, 36, 134, 38, 55, 244, 151, 20, 54, 62, 40, 158, 0};
    const unsigned q_sz = 14;
    unsigned char r[] = {123, 92, 108, 101, 153, 24, 110, 98, 51, 70, 236, 163, 45, 1};
    const unsigned r_sz = 14;
    unsigned char buf[14];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test439)
{
    unsigned char p[] = {153, 161, 171, 25, 23, 125, 185, 225, 51, 148, 89, 95, 198, 177, 116, 127, 179, 176, 166, 163, 206, 211, 16, 238, 128, 95, 77, 115, 207, 196, 222, 144, 117, 145, 98, 73, 26, 242, 179, 240, 219, 240, 60, 144, 154, 182, 52, 183, 219, 45, 233, 151, 10, 40, 11, 80, 20, 249, 20, 74, 110, 41, 12, 110, 40, 201, 109, 154, 55, 181, 63, 53, 199, 111, 176, 39, 63, 40, 77, 243, 189, 156};
    const unsigned p_sz = 82;
    unsigned char q[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 93, 0, 0, 230, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 39, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 170, 138, 0, 0, 0, 0, 16, 17, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0};
    const unsigned q_sz = 82;
    unsigned char r[] = {153, 161, 171, 25, 23, 125, 185, 225, 51, 148, 89, 95, 198, 177, 116, 194, 179, 176, 166, 163, 147, 211, 16, 8, 128, 95, 77, 204, 207, 196, 222, 144, 117, 145, 98, 73, 26, 230, 179, 240, 219, 240, 60, 144, 154, 182, 52, 183, 219, 45, 233, 51, 45, 40, 11, 80, 20, 249, 20, 74, 110, 3, 12, 196, 162, 201, 109, 154, 55, 165, 46, 53, 199, 111, 179, 39, 63, 40, 77, 243, 189, 156};
    const unsigned r_sz = 82;
    unsigned char buf[82];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test440)
{
    unsigned char p[] = {166, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {75, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {237, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test441)
{
    unsigned char p[] = {105, 0, 0};
    const unsigned p_sz = 3;
    unsigned char q[] = {237, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {105, 237, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test442)
{
    unsigned char p[] = {105, 237, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {205, 85, 0};
    const unsigned q_sz = 3;
    unsigned char r[] = {164, 184, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test443)
{
    unsigned char p[] = {207, 23, 0, 0};
    const unsigned p_sz = 4;
    unsigned char q[] = {164, 184, 1};
    const unsigned q_sz = 3;
    unsigned char r[] = {207, 179, 184, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test444)
{
    unsigned char p[] = {207, 179, 184, 1};
    const unsigned p_sz = 4;
    unsigned char q[] = {155, 28, 153, 0};
    const unsigned q_sz = 4;
    unsigned char r[] = {84, 175, 33, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test445)
{
    unsigned char p[] = {135, 216, 147, 0, 0};
    const unsigned p_sz = 5;
    unsigned char q[] = {84, 175, 33, 1};
    const unsigned q_sz = 4;
    unsigned char r[] = {135, 140, 60, 33, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test446)
{
    unsigned char p[] = {135, 140, 60, 33, 1};
    const unsigned p_sz = 5;
    unsigned char q[] = {168, 67, 66, 2, 0};
    const unsigned q_sz = 5;
    unsigned char r[] = {47, 207, 126, 35, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test447)
{
    unsigned char p[] = {64, 239, 2, 199, 0, 0};
    const unsigned p_sz = 6;
    unsigned char q[] = {47, 207, 126, 35, 1};
    const unsigned q_sz = 5;
    unsigned char r[] = {64, 192, 205, 185, 35, 1};
    const unsigned r_sz = 6;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test448)
{
    unsigned char p[] = {64, 192, 205, 185, 35, 1};
    const unsigned p_sz = 6;
    unsigned char q[] = {114, 60, 71, 109, 177, 0};
    const unsigned q_sz = 6;
    unsigned char r[] = {50, 252, 138, 212, 146, 1};
    const unsigned r_sz = 6;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test449)
{
    unsigned char p[] = {232, 165, 189, 250, 141, 0, 0};
    const unsigned p_sz = 7;
    unsigned char q[] = {50, 252, 138, 212, 146, 1};
    const unsigned q_sz = 6;
    unsigned char r[] = {232, 151, 65, 112, 89, 146, 1};
    const unsigned r_sz = 7;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test450)
{
    unsigned char p[] = {232, 151, 65, 112, 89, 146, 1};
    const unsigned p_sz = 7;
    unsigned char q[] = {95, 148, 91, 63, 201, 51, 0};
    const unsigned q_sz = 7;
    unsigned char r[] = {183, 3, 26, 79, 144, 161, 1};
    const unsigned r_sz = 7;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test451)
{
    unsigned char p[] = {7, 123, 72, 193, 213, 16, 0, 0};
    const unsigned p_sz = 8;
    unsigned char q[] = {183, 3, 26, 79, 144, 161, 1};
    const unsigned q_sz = 7;
    unsigned char r[] = {7, 204, 75, 219, 154, 128, 161, 1};
    const unsigned r_sz = 8;
    unsigned char buf[8];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test452)
{
    unsigned char p[] = {7, 204, 75, 219, 154, 128, 161, 1};
    const unsigned p_sz = 8;
    unsigned char q[] = {219, 238, 151, 114, 207, 211, 90, 0};
    const unsigned q_sz = 8;
    unsigned char r[] = {220, 34, 220, 169, 85, 83, 251, 1};
    const unsigned r_sz = 8;
    unsigned char buf[8];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test453)
{
    unsigned char p[] = {217, 43, 119, 137, 145, 2, 25, 0, 0};
    const unsigned p_sz = 9;
    unsigned char q[] = {220, 34, 220, 169, 85, 83, 251, 1};
    const unsigned q_sz = 8;
    unsigned char r[] = {217, 247, 85, 85, 56, 87, 74, 251, 1};
    const unsigned r_sz = 9;
    unsigned char buf[9];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test454)
{
    unsigned char p[] = {217, 247, 85, 85, 56, 87, 74, 251, 1};
    const unsigned p_sz = 9;
    unsigned char q[] = {38, 149, 38, 43, 243, 78, 222, 187, 0};
    const unsigned q_sz = 9;
    unsigned char r[] = {255, 98, 115, 126, 203, 25, 148, 64, 1};
    const unsigned r_sz = 9;
    unsigned char buf[9];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test455)
{
    unsigned char p[] = {41, 111, 41, 226, 103, 63, 50, 239, 0, 0};
    const unsigned p_sz = 10;
    unsigned char q[] = {255, 98, 115, 126, 203, 25, 148, 64, 1};
    const unsigned q_sz = 9;
    unsigned char r[] = {41, 144, 75, 145, 25, 244, 43, 123, 64, 1};
    const unsigned r_sz = 10;
    unsigned char buf[10];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test456)
{
    unsigned char p[] = {41, 144, 75, 145, 25, 244, 43, 123, 64, 1};
    const unsigned p_sz = 10;
    unsigned char q[] = {82, 114, 184, 132, 162, 63, 232, 251, 61, 0};
    const unsigned q_sz = 10;
    unsigned char r[] = {123, 226, 243, 21, 187, 203, 195, 128, 125, 1};
    const unsigned r_sz = 10;
    unsigned char buf[10];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test457)
{
    unsigned char p[] = {109, 132, 237, 51, 50, 170, 216, 86, 242, 0, 0};
    const unsigned p_sz = 11;
    unsigned char q[] = {123, 226, 243, 21, 187, 203, 195, 128, 125, 1};
    const unsigned q_sz = 10;
    unsigned char r[] = {109, 255, 15, 192, 39, 17, 19, 149, 114, 125, 1};
    const unsigned r_sz = 11;
    unsigned char buf[11];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test458)
{
    unsigned char p[] = {109, 255, 15, 192, 39, 17, 19, 149, 114, 125, 1};
    const unsigned p_sz = 11;
    unsigned char q[] = {37, 249, 175, 32, 112, 17, 253, 102, 104, 147, 0};
    const unsigned q_sz = 11;
    unsigned char r[] = {72, 6, 160, 224, 87, 0, 238, 243, 26, 238, 1};
    const unsigned r_sz = 11;
    unsigned char buf[11];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test459)
{
    unsigned char p[] = {1, 171, 111, 18, 63, 95, 238, 223, 188, 187, 0, 0};
    const unsigned p_sz = 12;
    unsigned char q[] = {72, 6, 160, 224, 87, 0, 238, 243, 26, 238, 1};
    const unsigned q_sz = 11;
    unsigned char r[] = {1, 227, 105, 178, 223, 8, 238, 49, 79, 161, 238, 1};
    const unsigned r_sz = 12;
    unsigned char buf[12];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test460)
{
    unsigned char p[] = {1, 227, 105, 178, 223, 8, 238, 49, 79, 161, 238, 1};
    const unsigned p_sz = 12;
    unsigned char q[] = {205, 194, 217, 250, 244, 0, 214, 90, 154, 214, 212, 0};
    const unsigned q_sz = 12;
    unsigned char r[] = {204, 33, 176, 72, 43, 8, 56, 107, 213, 119, 58, 1};
    const unsigned r_sz = 12;
    unsigned char buf[12];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test461)
{
    unsigned char p[] = {88, 212, 94, 43, 221, 0, 210, 27, 59, 210, 38, 0, 0};
    const unsigned p_sz = 13;
    unsigned char q[] = {204, 33, 176, 72, 43, 8, 56, 107, 213, 119, 58, 1};
    const unsigned q_sz = 12;
    unsigned char r[] = {88, 24, 127, 155, 149, 43, 218, 35, 80, 7, 81, 58, 1};
    const unsigned r_sz = 13;
    unsigned char buf[13];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test462)
{
    unsigned char p[] = {88, 24, 127, 155, 149, 43, 218, 35, 80, 7, 81, 58, 1};
    const unsigned p_sz = 13;
    unsigned char q[] = {137, 214, 87, 246, 145, 167, 82, 192, 13, 233, 178, 112, 0};
    const unsigned q_sz = 13;
    unsigned char r[] = {209, 206, 40, 109, 4, 140, 136, 227, 93, 238, 227, 74, 1};
    const unsigned r_sz = 13;
    unsigned char buf[13];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test463)
{
    unsigned char p[] = {55, 200, 193, 48, 117, 111, 16, 42, 239, 34, 194, 105, 0, 0};
    const unsigned p_sz = 14;
    unsigned char q[] = {209, 206, 40, 109, 4, 140, 136, 227, 93, 238, 227, 74, 1};
    const unsigned q_sz = 13;
    unsigned char r[] = {55, 25, 15, 24, 24, 107, 156, 162, 12, 127, 44, 138, 74, 1};
    const unsigned r_sz = 14;
    unsigned char buf[14];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test464)
{
    unsigned char p[] = {55, 25, 15, 24, 24, 107, 156, 162, 12, 127, 44, 138, 74, 1};
    const unsigned p_sz = 14;
    unsigned char q[] = {76, 69, 99, 125, 129, 115, 242, 192, 63, 57, 192, 41, 103, 0};
    const unsigned q_sz = 14;
    unsigned char r[] = {123, 92, 108, 101, 153, 24, 110, 98, 51, 70, 236, 163, 45, 1};
    const unsigned r_sz = 14;
    unsigned char buf[14];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test465)
{
    unsigned char p[] = {153, 161, 171, 25, 23, 125, 185, 225, 51, 148, 89, 95, 198, 177, 116, 255, 179, 176, 166, 163, 206, 211, 16, 238, 128, 95, 77, 115, 207, 196, 222, 144, 117, 145, 98, 73, 26, 242, 179, 240, 219, 240, 60, 144, 154, 182, 52, 183, 219, 45, 233, 151, 10, 40, 11, 80, 20, 249, 20, 74, 110, 41, 12, 110, 40, 201, 109, 154, 55, 181, 63, 53, 199, 111, 176, 39, 63, 40, 77, 243, 189, 156};
    const unsigned p_sz = 82;
    unsigned char q[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 93, 0, 0, 230, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 39, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 170, 138, 0, 0, 0, 0, 16, 17, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0};
    const unsigned q_sz = 82;
    unsigned char r[] = {153, 161, 171, 25, 23, 125, 185, 225, 51, 148, 89, 95, 198, 177, 116, 194, 179, 176, 166, 163, 147, 211, 16, 8, 128, 95, 77, 204, 207, 196, 222, 144, 117, 145, 98, 73, 26, 230, 179, 240, 219, 240, 60, 144, 154, 182, 52, 183, 219, 45, 233, 51, 45, 40, 11, 80, 20, 249, 20, 74, 110, 3, 12, 196, 162, 201, 109, 154, 55, 165, 46, 53, 199, 111, 179, 39, 63, 40, 77, 243, 189, 156};
    const unsigned r_sz = 82;
    unsigned char buf[82];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test466)
{
    unsigned char p[] = {199, 0};
    const unsigned p_sz = 2;
    unsigned char q[] = {1};
    const unsigned q_sz = 1;
    unsigned char r[] = {199, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test467)
{
    unsigned char p[] = {199, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {57, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {254, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test468)
{
    unsigned char p[] = {204, 0, 0};
    const unsigned p_sz = 3;
    unsigned char q[] = {254, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {204, 254, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test469)
{
    unsigned char p[] = {204, 254, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {235, 41, 0};
    const unsigned q_sz = 3;
    unsigned char r[] = {39, 215, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test470)
{
    unsigned char p[] = {46, 181, 0, 0};
    const unsigned p_sz = 4;
    unsigned char q[] = {39, 215, 1};
    const unsigned q_sz = 3;
    unsigned char r[] = {46, 146, 215, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test471)
{
    unsigned char p[] = {46, 146, 215, 1};
    const unsigned p_sz = 4;
    unsigned char q[] = {156, 123, 4, 0};
    const unsigned q_sz = 4;
    unsigned char r[] = {178, 233, 211, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test472)
{
    unsigned char p[] = {87, 188, 228, 0, 0};
    const unsigned p_sz = 5;
    unsigned char q[] = {178, 233, 211, 1};
    const unsigned q_sz = 4;
    unsigned char r[] = {87, 14, 13, 211, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test473)
{
    unsigned char p[] = {87, 14, 13, 211, 1};
    const unsigned p_sz = 5;
    unsigned char q[] = {208, 42, 251, 73, 0};
    const unsigned q_sz = 5;
    unsigned char r[] = {135, 36, 246, 154, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test474)
{
    unsigned char p[] = {123, 83, 119, 195, 0, 0};
    const unsigned p_sz = 6;
    unsigned char q[] = {135, 36, 246, 154, 1};
    const unsigned q_sz = 5;
    unsigned char r[] = {123, 212, 83, 53, 154, 1};
    const unsigned r_sz = 6;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test475)
{
    unsigned char p[] = {123, 212, 83, 53, 154, 1};
    const unsigned p_sz = 6;
    unsigned char q[] = {39, 233, 25, 63, 180, 0};
    const unsigned q_sz = 6;
    unsigned char r[] = {92, 61, 74, 10, 46, 1};
    const unsigned r_sz = 6;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test476)
{
    unsigned char p[] = {249, 179, 147, 91, 56, 0, 0};
    const unsigned p_sz = 7;
    unsigned char q[] = {92, 61, 74, 10, 46, 1};
    const unsigned q_sz = 6;
    unsigned char r[] = {249, 239, 174, 17, 50, 46, 1};
    const unsigned r_sz = 7;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test477)
{
    unsigned char p[] = {249, 239, 174, 17, 50, 46, 1};
    const unsigned p_sz = 7;
    unsigned char q[] = {113, 65, 1, 19, 182, 43, 0};
    const unsigned q_sz = 7;
    unsigned char r[] = {136, 174, 175, 2, 132, 5, 1};
    const unsigned r_sz = 7;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test478)
{
    unsigned char p[] = {202, 215, 251, 27, 101, 141, 0, 0};
    const unsigned p_sz = 8;
    unsigned char q[] = {136, 174, 175, 2, 132, 5, 1};
    const unsigned q_sz = 7;
    unsigned char r[] = {202, 95, 85, 180, 103, 9, 5, 1};
    const unsigned r_sz = 8;
    unsigned char buf[8];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test479)
{
    unsigned char p[] = {202, 95, 85, 180, 103, 9, 5, 1};
    const unsigned p_sz = 8;
    unsigned char q[] = {195, 70, 89, 62, 71, 99, 31, 0};
    const unsigned q_sz = 8;
    unsigned char r[] = {9, 25, 12, 138, 32, 106, 26, 1};
    const unsigned r_sz = 8;
    unsigned char buf[8];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test480)
{
    unsigned char p[] = {85, 139, 168, 70, 220, 175, 35, 0, 0};
    const unsigned p_sz = 9;
    unsigned char q[] = {9, 25, 12, 138, 32, 106, 26, 1};
    const unsigned q_sz = 8;
    unsigned char r[] = {85, 130, 177, 74, 86, 143, 73, 26, 1};
    const unsigned r_sz = 9;
    unsigned char buf[9];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test481)
{
    unsigned char p[] = {85, 130, 177, 74, 86, 143, 73, 26, 1};
    const unsigned p_sz = 9;
    unsigned char q[] = {88, 178, 193, 44, 201, 105, 197, 45, 0};
    const unsigned q_sz = 9;
    unsigned char r[] = {13, 48, 112, 102, 159, 230, 140, 55, 1};
    const unsigned r_sz = 9;
    unsigned char buf[9];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test482)
{
    unsigned char p[] = {164, 147, 81, 82, 110, 69, 192, 49, 0, 0};
    const unsigned p_sz = 10;
    unsigned char q[] = {13, 48, 112, 102, 159, 230, 140, 55, 1};
    const unsigned q_sz = 9;
    unsigned char r[] = {164, 158, 97, 34, 8, 218, 38, 189, 55, 1};
    const unsigned r_sz = 10;
    unsigned char buf[10];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test483)
{
    unsigned char p[] = {164, 158, 97, 34, 8, 218, 38, 189, 55, 1};
    const unsigned p_sz = 10;
    unsigned char q[] = {178, 79, 80, 243, 146, 205, 228, 74, 104, 0};
    const unsigned q_sz = 10;
    unsigned char r[] = {22, 209, 49, 209, 154, 23, 194, 247, 95, 1};
    const unsigned r_sz = 10;
    unsigned char buf[10];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test484)
{
    unsigned char p[] = {44, 145, 187, 128, 98, 212, 55, 97, 79, 0, 0};
    const unsigned p_sz = 11;
    unsigned char q[] = {22, 209, 49, 209, 154, 23, 194, 247, 95, 1};
    const unsigned q_sz = 10;
    unsigned char r[] = {44, 135, 106, 177, 179, 78, 32, 163, 184, 95, 1};
    const unsigned r_sz = 11;
    unsigned char buf[11];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test485)
{
    unsigned char p[] = {44, 135, 106, 177, 179, 78, 32, 163, 184, 95, 1};
    const unsigned p_sz = 11;
    unsigned char q[] = {11, 230, 150, 230, 77, 133, 97, 245, 161, 142, 0};
    const unsigned q_sz = 11;
    unsigned char r[] = {39, 97, 252, 87, 254, 203, 65, 86, 25, 209, 1};
    const unsigned r_sz = 11;
    unsigned char buf[11];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test486)
{
    unsigned char p[] = {239, 158, 213, 158, 236, 26, 119, 81, 106, 245, 0, 0};
    const unsigned p_sz = 12;
    unsigned char q[] = {39, 97, 252, 87, 254, 203, 65, 86, 25, 209, 1};
    const unsigned q_sz = 11;
    unsigned char r[] = {239, 185, 180, 98, 187, 228, 188, 16, 60, 236, 209, 1};
    const unsigned r_sz = 12;
    unsigned char buf[12];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test487)
{
    unsigned char p[] = {239, 185, 180, 98, 187, 228, 188, 16, 60, 236, 209, 1};
    const unsigned p_sz = 12;
    unsigned char q[] = {209, 50, 212, 222, 195, 189, 95, 91, 97, 78, 133, 0};
    const unsigned q_sz = 12;
    unsigned char r[] = {62, 139, 96, 188, 120, 89, 227, 75, 93, 162, 84, 1};
    const unsigned r_sz = 12;
    unsigned char buf[12];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test488)
{
    unsigned char p[] = {157, 190, 126, 165, 127, 235, 174, 43, 130, 230, 142, 0, 0};
    const unsigned p_sz = 13;
    unsigned char q[] = {62, 139, 96, 188, 120, 89, 227, 75, 93, 162, 84, 1};
    const unsigned q_sz = 12;
    unsigned char r[] = {157, 128, 245, 197, 195, 147, 247, 200, 201, 187, 44, 84, 1};
    const unsigned r_sz = 13;
    unsigned char buf[13];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test489)
{
    unsigned char p[] = {157, 128, 245, 197, 195, 147, 247, 200, 201, 187, 44, 84, 1};
    const unsigned p_sz = 13;
    unsigned char q[] = {220, 160, 136, 168, 170, 24, 54, 173, 23, 12, 195, 202, 0};
    const unsigned q_sz = 13;
    unsigned char r[] = {65, 32, 125, 109, 105, 139, 193, 101, 222, 183, 239, 158, 1};
    const unsigned r_sz = 13;
    unsigned char buf[13];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test490)
{
    unsigned char p[] = {231, 221, 173, 148, 193, 219, 84, 154, 201, 227, 103, 138, 0, 0};
    const unsigned p_sz = 14;
    unsigned char q[] = {65, 32, 125, 109, 105, 139, 193, 101, 222, 183, 239, 158, 1};
    const unsigned q_sz = 13;
    unsigned char r[] = {231, 156, 141, 233, 172, 178, 223, 91, 172, 61, 208, 101, 158, 1};
    const unsigned r_sz = 14;
    unsigned char buf[14];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test491)
{
    unsigned char p[] = {231, 156, 141, 233, 172, 178, 223, 91, 172, 61, 208, 101, 158, 1};
    const unsigned p_sz = 14;
    unsigned char q[] = {109, 112, 55, 15, 1, 75, 176, 19, 16, 17, 213, 240, 141, 0};
    const unsigned q_sz = 14;
    unsigned char r[] = {138, 236, 186, 230, 173, 249, 111, 72, 188, 44, 5, 149, 19, 1};
    const unsigned r_sz = 14;
    unsigned char buf[14];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test492)
{
    unsigned char p[] = {238, 31, 217, 88, 63, 223, 146, 150, 215, 232, 153, 233, 208, 0, 0};
    const unsigned p_sz = 15;
    unsigned char q[] = {138, 236, 186, 230, 173, 249, 111, 72, 188, 44, 5, 149, 19, 1};
    const unsigned q_sz = 14;
    unsigned char r[] = {238, 149, 53, 226, 217, 114, 107, 249, 159, 84, 181, 236, 69, 19, 1};
    const unsigned r_sz = 15;
    unsigned char buf[15];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test493)
{
    unsigned char p[] = {238, 149, 53, 226, 217, 114, 107, 249, 159, 84, 181, 236, 69, 19, 1};
    const unsigned p_sz = 15;
    unsigned char q[] = {171, 120, 135, 248, 81, 215, 152, 98, 12, 200, 64, 132, 36, 178, 0};
    const unsigned q_sz = 15;
    unsigned char r[] = {69, 237, 178, 26, 136, 165, 243, 155, 147, 156, 245, 104, 97, 161, 1};
    const unsigned r_sz = 15;
    unsigned char buf[15];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test494)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char q[] = {140, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {140, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test495)
{
    unsigned char p[] = {153, 161, 171, 25, 23, 125, 185, 225, 51, 148, 89, 95, 198, 177, 116, 255, 179, 176, 166, 163, 206, 211, 16, 238, 128, 95, 77, 115, 207, 196, 222, 144, 20, 145, 98, 73, 26, 242, 179, 240, 219, 240, 60, 144, 154, 182, 52, 183, 219, 45, 233, 151, 10, 40, 11, 80, 20, 249, 20, 74, 110, 41, 12, 110, 40, 201, 109, 154, 55, 181, 63, 53, 199, 111, 176, 39, 63, 40, 77, 243, 189, 156};
    const unsigned p_sz = 82;
    unsigned char q[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 93, 0, 0, 230, 0, 0, 0, 191, 0, 0, 0, 0, 97, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 39, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 170, 138, 0, 0, 0, 0, 16, 17, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0};
    const unsigned q_sz = 82;
    unsigned char r[] = {153, 161, 171, 25, 23, 125, 185, 225, 51, 148, 89, 95, 198, 177, 116, 194, 179, 176, 166, 163, 147, 211, 16, 8, 128, 95, 77, 204, 207, 196, 222, 144, 117, 145, 98, 73, 26, 230, 179, 240, 219, 240, 60, 144, 154, 182, 52, 183, 219, 45, 233, 51, 45, 40, 11, 80, 20, 249, 20, 74, 110, 3, 12, 196, 162, 201, 109, 154, 55, 165, 46, 53, 199, 111, 179, 39, 63, 40, 77, 243, 189, 156};
    const unsigned r_sz = 82;
    unsigned char buf[82];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test496)
{
    unsigned char p[] = {8, 0};
    const unsigned p_sz = 2;
    unsigned char q[] = {1};
    const unsigned q_sz = 1;
    unsigned char r[] = {8, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test497)
{
    unsigned char p[] = {8, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {200, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {192, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test498)
{
    unsigned char p[] = {161, 0, 0};
    const unsigned p_sz = 3;
    unsigned char q[] = {192, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {161, 192, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test499)
{
    unsigned char p[] = {161, 192, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {240, 70, 0};
    const unsigned q_sz = 3;
    unsigned char r[] = {81, 134, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test500)
{
    unsigned char p[] = {93, 3, 0, 0};
    const unsigned p_sz = 4;
    unsigned char q[] = {81, 134, 1};
    const unsigned q_sz = 3;
    unsigned char r[] = {93, 82, 134, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test501)
{
    unsigned char p[] = {93, 82, 134, 1};
    const unsigned p_sz = 4;
    unsigned char q[] = {36, 248, 152, 0};
    const unsigned q_sz = 4;
    unsigned char r[] = {121, 170, 30, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test502)
{
    unsigned char p[] = {80, 28, 34, 0, 0};
    const unsigned p_sz = 5;
    unsigned char q[] = {121, 170, 30, 1};
    const unsigned q_sz = 4;
    unsigned char r[] = {80, 101, 136, 30, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test503)
{
    unsigned char p[] = {80, 101, 136, 30, 1};
    const unsigned p_sz = 5;
    unsigned char q[] = {250, 196, 208, 157, 0};
    const unsigned q_sz = 5;
    unsigned char r[] = {170, 161, 88, 131, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test504)
{
    unsigned char p[] = {152, 178, 79, 185, 0, 0};
    const unsigned p_sz = 6;
    unsigned char q[] = {170, 161, 88, 131, 1};
    const unsigned q_sz = 5;
    unsigned char r[] = {152, 24, 238, 225, 131, 1};
    const unsigned r_sz = 6;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test505)
{
    unsigned char p[] = {152, 24, 238, 225, 131, 1};
    const unsigned p_sz = 6;
    unsigned char q[] = {98, 113, 152, 201, 192, 0};
    const unsigned q_sz = 6;
    unsigned char r[] = {250, 105, 118, 40, 67, 1};
    const unsigned r_sz = 6;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test506)
{
    unsigned char p[] = {200, 208, 192, 74, 193, 0, 0};
    const unsigned p_sz = 7;
    unsigned char q[] = {250, 105, 118, 40, 67, 1};
    const unsigned q_sz = 6;
    unsigned char r[] = {200, 42, 169, 60, 233, 67, 1};
    const unsigned r_sz = 7;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test507)
{
    unsigned char p[] = {200, 42, 169, 60, 233, 67, 1};
    const unsigned p_sz = 7;
    unsigned char q[] = {161, 184, 100, 204, 123, 137, 0};
    const unsigned q_sz = 7;
    unsigned char r[] = {105, 146, 205, 240, 146, 202, 1};
    const unsigned r_sz = 7;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test508)
{
    unsigned char p[] = {174, 16, 194, 142, 238, 56, 0, 0};
    const unsigned p_sz = 8;
    unsigned char q[] = {105, 146, 205, 240, 146, 202, 1};
    const unsigned q_sz = 7;
    unsigned char r[] = {174, 121, 80, 67, 30, 170, 202, 1};
    const unsigned r_sz = 8;
    unsigned char buf[8];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test509)
{
    unsigned char p[] = {174, 121, 80, 67, 30, 170, 202, 1};
    const unsigned p_sz = 8;
    unsigned char q[] = {251, 137, 165, 1, 137, 54, 227, 0};
    const unsigned q_sz = 8;
    unsigned char r[] = {85, 240, 245, 66, 151, 156, 41, 1};
    const unsigned r_sz = 8;
    unsigned char buf[8];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test510)
{
    unsigned char p[] = {223, 55, 238, 206, 55, 26, 157, 0, 0};
    const unsigned p_sz = 9;
    unsigned char q[] = {85, 240, 245, 66, 151, 156, 41, 1};
    const unsigned q_sz = 8;
    unsigned char r[] = {223, 98, 30, 59, 117, 141, 1, 41, 1};
    const unsigned r_sz = 9;
    unsigned char buf[9];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test511)
{
    unsigned char p[] = {223, 98, 30, 59, 117, 141, 1, 41, 1};
    const unsigned p_sz = 9;
    unsigned char q[] = {163, 180, 123, 253, 190, 245, 254, 200, 0};
    const unsigned q_sz = 9;
    unsigned char r[] = {124, 214, 101, 198, 203, 120, 255, 225, 1};
    const unsigned r_sz = 9;
    unsigned char buf[9];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test512)
{
    unsigned char p[] = {86, 82, 193, 81, 25, 13, 195, 47, 0, 0};
    const unsigned p_sz = 10;
    unsigned char q[] = {124, 214, 101, 198, 203, 120, 255, 225, 1};
    const unsigned q_sz = 9;
    unsigned char r[] = {86, 46, 23, 52, 223, 198, 187, 208, 225, 1};
    const unsigned r_sz = 10;
    unsigned char buf[10];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test513)
{
    unsigned char p[] = {86, 46, 23, 52, 223, 198, 187, 208, 225, 1};
    const unsigned p_sz = 10;
    unsigned char q[] = {174, 230, 41, 22, 93, 146, 108, 198, 15, 0};
    const unsigned q_sz = 10;
    unsigned char r[] = {248, 200, 62, 34, 130, 84, 215, 22, 238, 1};
    const unsigned r_sz = 10;
    unsigned char buf[10];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test514)
{
    unsigned char p[] = {100, 145, 73, 250, 111, 183, 1, 229, 253, 0, 0};
    const unsigned p_sz = 11;
    unsigned char q[] = {248, 200, 62, 34, 130, 84, 215, 22, 238, 1};
    const unsigned q_sz = 10;
    unsigned char r[] = {100, 105, 129, 196, 77, 53, 85, 50, 235, 238, 1};
    const unsigned r_sz = 11;
    unsigned char buf[11];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test515)
{
    unsigned char p[] = {100, 105, 129, 196, 77, 53, 85, 50, 235, 238, 1};
    const unsigned p_sz = 11;
    unsigned char q[] = {106, 59, 148, 3, 248, 194, 113, 99, 9, 75, 0};
    const unsigned q_sz = 11;
    unsigned char r[] = {14, 82, 21, 199, 181, 247, 36, 81, 226, 165, 1};
    const unsigned r_sz = 11;
    unsigned char buf[11];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test516)
{
    unsigned char p[] = {75, 16, 219, 198, 1, 83, 243, 35, 104, 161, 0, 0};
    const unsigned p_sz = 12;
    unsigned char q[] = {14, 82, 21, 199, 181, 247, 36, 81, 226, 165, 1};
    const unsigned q_sz = 11;
    unsigned char r[] = {75, 30, 137, 211, 198, 230, 4, 7, 57, 67, 165, 1};
    const unsigned r_sz = 12;
    unsigned char buf[12];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test517)
{
    unsigned char p[] = {75, 30, 137, 211, 198, 230, 4, 7, 57, 67, 165, 1};
    const unsigned p_sz = 12;
    unsigned char q[] = {72, 255, 252, 77, 47, 16, 173, 235, 236, 239, 12, 0};
    const unsigned q_sz = 12;
    unsigned char r[] = {3, 225, 117, 158, 233, 246, 169, 236, 213, 172, 169, 1};
    const unsigned r_sz = 12;
    unsigned char buf[12];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test518)
{
    unsigned char p[] = {13, 40, 159, 201, 112, 158, 46, 31, 1, 182, 230, 0, 0};
    const unsigned p_sz = 13;
    unsigned char q[] = {3, 225, 117, 158, 233, 246, 169, 236, 213, 172, 169, 1};
    const unsigned q_sz = 12;
    unsigned char r[] = {13, 43, 126, 188, 238, 119, 216, 182, 237, 99, 74, 169, 1};
    const unsigned r_sz = 13;
    unsigned char buf[13];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test519)
{
    unsigned char p[] = {13, 43, 126, 188, 238, 119, 216, 182, 237, 99, 74, 169, 1};
    const unsigned p_sz = 13;
    unsigned char q[] = {155, 6, 242, 137, 98, 103, 101, 210, 113, 213, 101, 130, 0};
    const unsigned q_sz = 13;
    unsigned char r[] = {150, 45, 140, 53, 140, 16, 189, 100, 156, 182, 47, 43, 1};
    const unsigned r_sz = 13;
    unsigned char buf[13];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test520)
{
    unsigned char p[] = {163, 114, 127, 224, 93, 22, 56, 165, 9, 192, 56, 97, 0, 0};
    const unsigned p_sz = 14;
    unsigned char q[] = {150, 45, 140, 53, 140, 16, 189, 100, 156, 182, 47, 43, 1};
    const unsigned q_sz = 13;
    unsigned char r[] = {163, 228, 82, 108, 104, 154, 40, 24, 109, 92, 142, 78, 43, 1};
    const unsigned r_sz = 14;
    unsigned char buf[14];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test521)
{
    unsigned char p[] = {163, 228, 82, 108, 104, 154, 40, 24, 109, 92, 142, 78, 43, 1};
    const unsigned p_sz = 14;
    unsigned char q[] = {60, 215, 56, 65, 56, 228, 64, 91, 220, 233, 69, 124, 73, 0};
    const unsigned q_sz = 14;
    unsigned char r[] = {159, 51, 106, 45, 80, 126, 104, 67, 177, 181, 203, 50, 98, 1};
    const unsigned r_sz = 14;
    unsigned char buf[14];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test522)
{
    unsigned char p[] = {197, 195, 131, 139, 131, 112, 20, 33, 243, 37, 205, 209, 7, 0, 0};
    const unsigned p_sz = 15;
    unsigned char q[] = {159, 51, 106, 45, 80, 126, 104, 67, 177, 181, 203, 50, 98, 1};
    const unsigned q_sz = 14;
    unsigned char r[] = {197, 92, 176, 225, 174, 32, 106, 73, 176, 148, 120, 26, 53, 98, 1};
    const unsigned r_sz = 15;
    unsigned char buf[15];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test523)
{
    unsigned char p[] = {197, 92, 176, 225, 174, 32, 106, 73, 176, 148, 120, 26, 53, 98, 1};
    const unsigned p_sz = 15;
    unsigned char q[] = {128, 177, 2, 251, 38, 133, 153, 210, 35, 8, 141, 114, 84, 195, 0};
    const unsigned q_sz = 15;
    unsigned char r[] = {69, 237, 178, 26, 136, 165, 243, 155, 147, 156, 245, 104, 97, 161, 1};
    const unsigned r_sz = 15;
    unsigned char buf[15];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test524)
{
    unsigned char p[] = {153, 161, 171, 25, 23, 125, 185, 225, 51, 148, 89, 95, 198, 177, 116, 255, 179, 176, 166, 163, 206, 211, 16, 238, 128, 95, 77, 115, 207, 196, 222, 144, 20, 145, 98, 73, 26, 242, 179, 240, 219, 240, 60, 144, 154, 182, 52, 183, 219, 45, 233, 151, 10, 40, 11, 80, 20, 249, 20, 74, 110, 41, 12, 110, 231, 201, 109, 154, 55, 181, 63, 53, 199, 111, 176, 39, 63, 40, 77, 243, 189, 156};
    const unsigned p_sz = 82;
    unsigned char q[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 93, 0, 0, 230, 0, 0, 0, 191, 0, 0, 0, 0, 97, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 39, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 170, 69, 0, 0, 0, 0, 16, 17, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0};
    const unsigned q_sz = 82;
    unsigned char r[] = {153, 161, 171, 25, 23, 125, 185, 225, 51, 148, 89, 95, 198, 177, 116, 194, 179, 176, 166, 163, 147, 211, 16, 8, 128, 95, 77, 204, 207, 196, 222, 144, 117, 145, 98, 73, 26, 230, 179, 240, 219, 240, 60, 144, 154, 182, 52, 183, 219, 45, 233, 51, 45, 40, 11, 80, 20, 249, 20, 74, 110, 3, 12, 196, 162, 201, 109, 154, 55, 165, 46, 53, 199, 111, 179, 39, 63, 40, 77, 243, 189, 156};
    const unsigned r_sz = 82;
    unsigned char buf[82];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test525)
{
    unsigned char p[] = {105, 0};
    const unsigned p_sz = 2;
    unsigned char q[] = {1};
    const unsigned q_sz = 1;
    unsigned char r[] = {105, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test526)
{
    unsigned char p[] = {105, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {10, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {99, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test527)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char q[] = {99, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {99, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test528)
{
    unsigned char p[] = {234, 137, 150, 217, 250, 229, 20, 101, 189, 71, 177, 161, 242, 27, 109, 153, 182, 84, 117, 12, 254, 173, 161, 152, 154, 33, 51, 254, 43, 71, 214, 59, 53, 9, 155, 169, 183, 1, 49, 78, 28, 186, 83, 165, 78, 41, 56, 69, 78, 200, 124, 18, 123, 117, 66, 86, 172, 67, 23, 12, 2, 196, 100, 88, 244, 246, 180, 176, 233, 115, 34, 143, 196, 18, 104, 12, 184, 255, 234, 63, 94, 127, 120, 44, 118, 77, 119, 214, 165, 32, 9, 56, 50, 150, 200, 209, 150, 25, 76, 244, 145, 7, 96, 212, 61, 239, 156, 184, 66, 83, 219, 87, 44, 42, 140, 137, 249, 5, 163, 211, 236, 57, 245, 48, 140, 58, 105, 84, 84, 88, 213, 217, 166, 83, 160, 243, 183, 15, 245, 205, 3, 82, 155, 2, 64, 128, 22, 239, 13, 166, 138, 234, 252, 8, 15, 64, 203, 218, 203, 188, 200, 79, 58, 172, 164, 51, 73, 155, 230, 115, 229, 219, 99, 207, 17, 53, 6, 62, 184};
    const unsigned p_sz = 179;
    unsigned char q[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned q_sz = 179;
    unsigned char r[] = {234, 137, 150, 217, 250, 229, 20, 101, 189, 71, 177, 161, 242, 27, 109, 240, 182, 84, 117, 12, 254, 173, 161, 152, 154, 33, 51, 254, 43, 71, 214, 59, 53, 9, 155, 169, 183, 1, 49, 78, 28, 186, 83, 165, 78, 41, 56, 69, 78, 200, 124, 18, 123, 117, 66, 86, 172, 67, 23, 12, 2, 196, 100, 88, 244, 246, 180, 176, 233, 115, 34, 143, 196, 18, 104, 12, 184, 255, 234, 63, 94, 127, 120, 44, 118, 77, 119, 214, 165, 32, 9, 56, 50, 150, 200, 209, 150, 25, 76, 244, 145, 7, 96, 212, 61, 239, 156, 184, 66, 83, 219, 87, 44, 42, 140, 137, 249, 5, 163, 211, 236, 57, 245, 48, 140, 58, 105, 84, 84, 88, 213, 217, 166, 83, 160, 243, 183, 15, 245, 205, 3, 82, 155, 2, 64, 128, 22, 239, 13, 166, 138, 234, 252, 8, 15, 64, 203, 218, 203, 188, 200, 79, 58, 172, 164, 51, 73, 155, 230, 115, 229, 219, 99, 207, 17, 53, 6, 62, 184};
    const unsigned r_sz = 179;
    unsigned char buf[179];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test529)
{
    unsigned char p[] = {138, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {227, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {105, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test530)
{
    unsigned char p[] = {22, 0, 0};
    const unsigned p_sz = 3;
    unsigned char q[] = {105, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {22, 105, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test531)
{
    unsigned char p[] = {22, 105, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {138, 198, 0};
    const unsigned q_sz = 3;
    unsigned char r[] = {156, 175, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test532)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char q[] = {204, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {204, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test533)
{
    unsigned char p[] = {234, 137, 150, 217, 250, 229, 20, 101, 189, 71, 177, 161, 242, 27, 109, 153, 182, 84, 117, 12, 254, 173, 161, 152, 154, 33, 51, 254, 43, 71, 214, 59, 53, 9, 155, 169, 183, 1, 49, 78, 28, 186, 83, 165, 78, 41, 56, 69, 78, 200, 124, 241, 123, 117, 66, 86, 172, 67, 23, 12, 2, 196, 100, 88, 244, 246, 180, 176, 233, 115, 34, 143, 196, 18, 104, 12, 184, 255, 234, 63, 94, 127, 120, 44, 118, 77, 119, 214, 165, 32, 9, 56, 50, 150, 200, 209, 150, 25, 76, 244, 145, 7, 96, 212, 61, 239, 156, 184, 66, 83, 219, 87, 44, 42, 140, 137, 249, 5, 163, 211, 236, 57, 245, 48, 140, 58, 105, 84, 84, 88, 213, 217, 166, 83, 160, 243, 183, 15, 245, 205, 3, 82, 155, 2, 64, 128, 22, 239, 13, 166, 138, 234, 252, 8, 15, 64, 203, 218, 203, 188, 200, 79, 58, 172, 164, 51, 73, 155, 230, 115, 229, 219, 99, 207, 17, 53, 6, 62, 184};
    const unsigned p_sz = 179;
    unsigned char q[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned q_sz = 179;
    unsigned char r[] = {234, 137, 150, 217, 250, 229, 20, 101, 189, 71, 177, 161, 242, 27, 109, 240, 182, 84, 117, 12, 254, 173, 161, 152, 154, 33, 51, 254, 43, 71, 214, 59, 53, 9, 155, 169, 183, 1, 49, 78, 28, 186, 83, 165, 78, 41, 56, 69, 78, 200, 124, 18, 123, 117, 66, 86, 172, 67, 23, 12, 2, 196, 100, 88, 244, 246, 180, 176, 233, 115, 34, 143, 196, 18, 104, 12, 184, 255, 234, 63, 94, 127, 120, 44, 118, 77, 119, 214, 165, 32, 9, 56, 50, 150, 200, 209, 150, 25, 76, 244, 145, 7, 96, 212, 61, 239, 156, 184, 66, 83, 219, 87, 44, 42, 140, 137, 249, 5, 163, 211, 236, 57, 245, 48, 140, 58, 105, 84, 84, 88, 213, 217, 166, 83, 160, 243, 183, 15, 245, 205, 3, 82, 155, 2, 64, 128, 22, 239, 13, 166, 138, 234, 252, 8, 15, 64, 203, 218, 203, 188, 200, 79, 58, 172, 164, 51, 73, 155, 230, 115, 229, 219, 99, 207, 17, 53, 6, 62, 184};
    const unsigned r_sz = 179;
    unsigned char buf[179];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test534)
{
    unsigned char p[] = {190, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {15, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {177, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test535)
{
    unsigned char p[] = {197, 0, 0};
    const unsigned p_sz = 3;
    unsigned char q[] = {177, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {197, 177, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test536)
{
    unsigned char p[] = {197, 177, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {84, 186, 0};
    const unsigned q_sz = 3;
    unsigned char r[] = {145, 11, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test537)
{
    unsigned char p[] = {191, 30, 0, 0};
    const unsigned p_sz = 4;
    unsigned char q[] = {145, 11, 1};
    const unsigned q_sz = 3;
    unsigned char r[] = {191, 143, 11, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test538)
{
    unsigned char p[] = {191, 143, 11, 1};
    const unsigned p_sz = 4;
    unsigned char q[] = {224, 117, 148, 0};
    const unsigned q_sz = 4;
    unsigned char r[] = {95, 250, 159, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test539)
{
    unsigned char p[] = {234, 137, 150, 217, 250, 229, 20, 101, 189, 71, 177, 161, 242, 27, 109, 153, 182, 84, 117, 12, 254, 173, 161, 152, 154, 33, 51, 254, 43, 71, 214, 59, 53, 9, 155, 169, 183, 1, 49, 78, 28, 186, 83, 165, 78, 41, 56, 69, 78, 200, 124, 241, 123, 117, 66, 86, 172, 67, 23, 12, 2, 196, 100, 88, 244, 246, 180, 176, 233, 115, 34, 143, 196, 18, 104, 12, 184, 255, 234, 63, 94, 127, 120, 44, 118, 77, 119, 214, 165, 32, 9, 56, 50, 150, 200, 209, 150, 25, 76, 244, 145, 7, 96, 212, 61, 239, 156, 184, 66, 83, 219, 87, 44, 42, 140, 137, 249, 5, 163, 211, 236, 57, 245, 48, 140, 58, 105, 84, 84, 88, 213, 217, 166, 83, 160, 243, 183, 15, 245, 205, 3, 82, 155, 2, 64, 128, 22, 239, 13, 146, 138, 234, 252, 8, 15, 64, 203, 218, 203, 188, 200, 79, 58, 172, 164, 51, 73, 155, 230, 115, 229, 219, 99, 207, 17, 53, 6, 62, 184};
    const unsigned p_sz = 179;
    unsigned char q[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned q_sz = 179;
    unsigned char r[] = {234, 137, 150, 217, 250, 229, 20, 101, 189, 71, 177, 161, 242, 27, 109, 240, 182, 84, 117, 12, 254, 173, 161, 152, 154, 33, 51, 254, 43, 71, 214, 59, 53, 9, 155, 169, 183, 1, 49, 78, 28, 186, 83, 165, 78, 41, 56, 69, 78, 200, 124, 18, 123, 117, 66, 86, 172, 67, 23, 12, 2, 196, 100, 88, 244, 246, 180, 176, 233, 115, 34, 143, 196, 18, 104, 12, 184, 255, 234, 63, 94, 127, 120, 44, 118, 77, 119, 214, 165, 32, 9, 56, 50, 150, 200, 209, 150, 25, 76, 244, 145, 7, 96, 212, 61, 239, 156, 184, 66, 83, 219, 87, 44, 42, 140, 137, 249, 5, 163, 211, 236, 57, 245, 48, 140, 58, 105, 84, 84, 88, 213, 217, 166, 83, 160, 243, 183, 15, 245, 205, 3, 82, 155, 2, 64, 128, 22, 239, 13, 166, 138, 234, 252, 8, 15, 64, 203, 218, 203, 188, 200, 79, 58, 172, 164, 51, 73, 155, 230, 115, 229, 219, 99, 207, 17, 53, 6, 62, 184};
    const unsigned r_sz = 179;
    unsigned char buf[179];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test540)
{
    unsigned char p[] = {255, 0};
    const unsigned p_sz = 2;
    unsigned char q[] = {1};
    const unsigned q_sz = 1;
    unsigned char r[] = {255, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test541)
{
    unsigned char p[] = {255, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {230, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {25, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test542)
{
    unsigned char p[] = {56, 0, 0};
    const unsigned p_sz = 3;
    unsigned char q[] = {25, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {56, 25, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test543)
{
    unsigned char p[] = {56, 25, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {137, 79, 0};
    const unsigned q_sz = 3;
    unsigned char r[] = {177, 86, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test544)
{
    unsigned char p[] = {3, 127, 0, 0};
    const unsigned p_sz = 4;
    unsigned char q[] = {177, 86, 1};
    const unsigned q_sz = 3;
    unsigned char r[] = {3, 206, 86, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test545)
{
    unsigned char p[] = {3, 206, 86, 1};
    const unsigned p_sz = 4;
    unsigned char q[] = {34, 251, 38, 0};
    const unsigned q_sz = 4;
    unsigned char r[] = {33, 53, 112, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test546)
{
    unsigned char p[] = {110, 95, 17, 0, 0};
    const unsigned p_sz = 5;
    unsigned char q[] = {33, 53, 112, 1};
    const unsigned q_sz = 4;
    unsigned char r[] = {110, 126, 36, 112, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test547)
{
    unsigned char p[] = {110, 126, 36, 112, 1};
    const unsigned p_sz = 5;
    unsigned char q[] = {185, 195, 151, 219, 0};
    const unsigned q_sz = 5;
    unsigned char r[] = {215, 189, 179, 171, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test548)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char q[] = {52, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {52, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test549)
{
    unsigned char p[] = {234, 137, 150, 217, 250, 229, 20, 101, 189, 71, 177, 161, 242, 27, 109, 153, 182, 84, 117, 12, 254, 173, 161, 152, 154, 33, 51, 254, 43, 71, 214, 59, 53, 9, 155, 169, 183, 1, 49, 78, 28, 186, 83, 165, 78, 41, 56, 69, 78, 200, 124, 241, 123, 117, 66, 86, 172, 67, 23, 12, 2, 196, 100, 88, 244, 246, 180, 176, 233, 115, 34, 143, 133, 18, 104, 12, 184, 255, 234, 63, 94, 127, 120, 44, 118, 77, 119, 214, 165, 32, 9, 56, 50, 150, 200, 209, 150, 25, 76, 244, 145, 7, 96, 212, 61, 239, 156, 184, 66, 83, 219, 87, 44, 42, 140, 137, 249, 5, 163, 211, 236, 57, 245, 48, 140, 58, 105, 84, 84, 88, 213, 217, 166, 83, 160, 243, 183, 15, 245, 205, 3, 82, 155, 2, 64, 128, 22, 239, 13, 146, 138, 234, 252, 8, 15, 64, 203, 218, 203, 188, 200, 79, 58, 172, 164, 51, 73, 155, 230, 115, 229, 219, 99, 207, 17, 53, 6, 62, 184};
    const unsigned p_sz = 179;
    unsigned char q[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned q_sz = 179;
    unsigned char r[] = {234, 137, 150, 217, 250, 229, 20, 101, 189, 71, 177, 161, 242, 27, 109, 240, 182, 84, 117, 12, 254, 173, 161, 152, 154, 33, 51, 254, 43, 71, 214, 59, 53, 9, 155, 169, 183, 1, 49, 78, 28, 186, 83, 165, 78, 41, 56, 69, 78, 200, 124, 18, 123, 117, 66, 86, 172, 67, 23, 12, 2, 196, 100, 88, 244, 246, 180, 176, 233, 115, 34, 143, 196, 18, 104, 12, 184, 255, 234, 63, 94, 127, 120, 44, 118, 77, 119, 214, 165, 32, 9, 56, 50, 150, 200, 209, 150, 25, 76, 244, 145, 7, 96, 212, 61, 239, 156, 184, 66, 83, 219, 87, 44, 42, 140, 137, 249, 5, 163, 211, 236, 57, 245, 48, 140, 58, 105, 84, 84, 88, 213, 217, 166, 83, 160, 243, 183, 15, 245, 205, 3, 82, 155, 2, 64, 128, 22, 239, 13, 166, 138, 234, 252, 8, 15, 64, 203, 218, 203, 188, 200, 79, 58, 172, 164, 51, 73, 155, 230, 115, 229, 219, 99, 207, 17, 53, 6, 62, 184};
    const unsigned r_sz = 179;
    unsigned char buf[179];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test550)
{
    unsigned char p[] = {106, 0};
    const unsigned p_sz = 2;
    unsigned char q[] = {1};
    const unsigned q_sz = 1;
    unsigned char r[] = {106, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test551)
{
    unsigned char p[] = {106, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {236, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {134, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test552)
{
    unsigned char p[] = {92, 0, 0};
    const unsigned p_sz = 3;
    unsigned char q[] = {134, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {92, 134, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test553)
{
    unsigned char p[] = {92, 134, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {51, 6, 0};
    const unsigned q_sz = 3;
    unsigned char r[] = {111, 128, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test554)
{
    unsigned char p[] = {130, 182, 0, 0};
    const unsigned p_sz = 4;
    unsigned char q[] = {111, 128, 1};
    const unsigned q_sz = 3;
    unsigned char r[] = {130, 217, 128, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test555)
{
    unsigned char p[] = {130, 217, 128, 1};
    const unsigned p_sz = 4;
    unsigned char q[] = {236, 153, 111, 0};
    const unsigned q_sz = 4;
    unsigned char r[] = {110, 64, 239, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test556)
{
    unsigned char p[] = {240, 3, 45, 0, 0};
    const unsigned p_sz = 5;
    unsigned char q[] = {110, 64, 239, 1};
    const unsigned q_sz = 4;
    unsigned char r[] = {240, 109, 109, 239, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test557)
{
    unsigned char p[] = {240, 109, 109, 239, 1};
    const unsigned p_sz = 5;
    unsigned char q[] = {39, 208, 222, 68, 0};
    const unsigned q_sz = 5;
    unsigned char r[] = {215, 189, 179, 171, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test558)
{
    unsigned char p[] = {234, 137, 150, 217, 250, 229, 20, 101, 189, 71, 177, 161, 242, 27, 109, 153, 182, 84, 117, 12, 254, 173, 161, 152, 154, 33, 51, 254, 43, 71, 214, 59, 53, 9, 155, 169, 183, 1, 49, 78, 28, 186, 83, 165, 78, 41, 56, 69, 78, 200, 124, 100, 123, 117, 66, 86, 172, 67, 23, 12, 2, 196, 100, 88, 244, 246, 180, 176, 233, 115, 34, 143, 133, 18, 104, 12, 184, 255, 234, 63, 94, 127, 120, 44, 118, 77, 119, 214, 165, 32, 9, 56, 50, 150, 200, 209, 150, 25, 76, 244, 145, 7, 96, 212, 61, 239, 156, 184, 66, 83, 219, 87, 44, 42, 140, 137, 249, 5, 163, 211, 236, 57, 245, 48, 140, 58, 105, 84, 84, 88, 213, 217, 166, 83, 160, 243, 183, 15, 245, 205, 3, 82, 155, 2, 64, 128, 22, 239, 13, 146, 138, 234, 252, 8, 15, 64, 203, 218, 203, 188, 200, 79, 58, 172, 164, 51, 73, 155, 230, 115, 229, 219, 99, 207, 17, 53, 6, 62, 184};
    const unsigned p_sz = 179;
    unsigned char q[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned q_sz = 179;
    unsigned char r[] = {234, 137, 150, 217, 250, 229, 20, 101, 189, 71, 177, 161, 242, 27, 109, 240, 182, 84, 117, 12, 254, 173, 161, 152, 154, 33, 51, 254, 43, 71, 214, 59, 53, 9, 155, 169, 183, 1, 49, 78, 28, 186, 83, 165, 78, 41, 56, 69, 78, 200, 124, 18, 123, 117, 66, 86, 172, 67, 23, 12, 2, 196, 100, 88, 244, 246, 180, 176, 233, 115, 34, 143, 196, 18, 104, 12, 184, 255, 234, 63, 94, 127, 120, 44, 118, 77, 119, 214, 165, 32, 9, 56, 50, 150, 200, 209, 150, 25, 76, 244, 145, 7, 96, 212, 61, 239, 156, 184, 66, 83, 219, 87, 44, 42, 140, 137, 249, 5, 163, 211, 236, 57, 245, 48, 140, 58, 105, 84, 84, 88, 213, 217, 166, 83, 160, 243, 183, 15, 245, 205, 3, 82, 155, 2, 64, 128, 22, 239, 13, 166, 138, 234, 252, 8, 15, 64, 203, 218, 203, 188, 200, 79, 58, 172, 164, 51, 73, 155, 230, 115, 229, 219, 99, 207, 17, 53, 6, 62, 184};
    const unsigned r_sz = 179;
    unsigned char buf[179];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test559)
{
    unsigned char p[] = {31, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {188, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {163, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test560)
{
    unsigned char p[] = {202, 0, 0};
    const unsigned p_sz = 3;
    unsigned char q[] = {163, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {202, 163, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test561)
{
    unsigned char p[] = {202, 163, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {211, 207, 0};
    const unsigned q_sz = 3;
    unsigned char r[] = {25, 108, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test562)
{
    unsigned char p[] = {198, 202, 0, 0};
    const unsigned p_sz = 4;
    unsigned char q[] = {25, 108, 1};
    const unsigned q_sz = 3;
    unsigned char r[] = {198, 211, 108, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test563)
{
    unsigned char p[] = {198, 211, 108, 1};
    const unsigned p_sz = 4;
    unsigned char q[] = {53, 217, 34, 0};
    const unsigned q_sz = 4;
    unsigned char r[] = {243, 10, 78, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test564)
{
    unsigned char p[] = {173, 80, 210, 0, 0};
    const unsigned p_sz = 5;
    unsigned char q[] = {243, 10, 78, 1};
    const unsigned q_sz = 4;
    unsigned char r[] = {173, 163, 216, 78, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test565)
{
    unsigned char p[] = {173, 163, 216, 78, 1};
    const unsigned p_sz = 5;
    unsigned char q[] = {152, 223, 202, 53, 0};
    const unsigned q_sz = 5;
    unsigned char r[] = {53, 124, 18, 123, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test566)
{
    unsigned char p[] = {18, 181, 3, 207, 0, 0};
    const unsigned p_sz = 6;
    unsigned char q[] = {53, 124, 18, 123, 1};
    const unsigned q_sz = 5;
    unsigned char r[] = {18, 128, 127, 221, 123, 1};
    const unsigned r_sz = 6;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test567)
{
    unsigned char p[] = {18, 128, 127, 221, 123, 1};
    const unsigned p_sz = 6;
    unsigned char q[] = {118, 141, 10, 142, 211, 0};
    const unsigned q_sz = 6;
    unsigned char r[] = {100, 13, 117, 83, 168, 1};
    const unsigned r_sz = 6;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test568)
{
    unsigned char p[] = {234, 137, 150, 217, 250, 229, 20, 101, 189, 71, 177, 161, 242, 27, 109, 153, 182, 84, 117, 12, 254, 173, 161, 152, 154, 33, 51, 254, 43, 71, 214, 59, 53, 9, 155, 169, 183, 1, 49, 78, 28, 186, 83, 165, 78, 41, 56, 69, 78, 200, 124, 100, 123, 117, 66, 86, 172, 67, 23, 12, 2, 196, 100, 88, 244, 246, 180, 176, 233, 115, 34, 143, 133, 18, 104, 12, 184, 255, 234, 63, 94, 127, 120, 44, 118, 77, 119, 214, 165, 32, 9, 56, 50, 150, 200, 209, 150, 25, 76, 244, 145, 7, 96, 212, 61, 239, 156, 184, 66, 83, 219, 87, 44, 42, 140, 137, 249, 5, 163, 211, 236, 57, 245, 48, 140, 58, 105, 84, 84, 88, 213, 217, 166, 83, 160, 243, 183, 15, 245, 205, 3, 82, 155, 2, 64, 128, 22, 239, 13, 146, 138, 234, 252, 125, 15, 64, 203, 218, 203, 188, 200, 79, 58, 172, 164, 51, 73, 155, 230, 115, 229, 219, 99, 207, 17, 53, 6, 62, 184};
    const unsigned p_sz = 179;
    unsigned char q[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned q_sz = 179;
    unsigned char r[] = {234, 137, 150, 217, 250, 229, 20, 101, 189, 71, 177, 161, 242, 27, 109, 240, 182, 84, 117, 12, 254, 173, 161, 152, 154, 33, 51, 254, 43, 71, 214, 59, 53, 9, 155, 169, 183, 1, 49, 78, 28, 186, 83, 165, 78, 41, 56, 69, 78, 200, 124, 18, 123, 117, 66, 86, 172, 67, 23, 12, 2, 196, 100, 88, 244, 246, 180, 176, 233, 115, 34, 143, 196, 18, 104, 12, 184, 255, 234, 63, 94, 127, 120, 44, 118, 77, 119, 214, 165, 32, 9, 56, 50, 150, 200, 209, 150, 25, 76, 244, 145, 7, 96, 212, 61, 239, 156, 184, 66, 83, 219, 87, 44, 42, 140, 137, 249, 5, 163, 211, 236, 57, 245, 48, 140, 58, 105, 84, 84, 88, 213, 217, 166, 83, 160, 243, 183, 15, 245, 205, 3, 82, 155, 2, 64, 128, 22, 239, 13, 166, 138, 234, 252, 8, 15, 64, 203, 218, 203, 188, 200, 79, 58, 172, 164, 51, 73, 155, 230, 115, 229, 219, 99, 207, 17, 53, 6, 62, 184};
    const unsigned r_sz = 179;
    unsigned char buf[179];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test569)
{
    unsigned char p[] = {184, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {246, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {78, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test570)
{
    unsigned char p[] = {122, 0, 0};
    const unsigned p_sz = 3;
    unsigned char q[] = {78, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {122, 78, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test571)
{
    unsigned char p[] = {122, 78, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {30, 181, 0};
    const unsigned q_sz = 3;
    unsigned char r[] = {100, 251, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test572)
{
    unsigned char p[] = {238, 116, 0, 0};
    const unsigned p_sz = 4;
    unsigned char q[] = {100, 251, 1};
    const unsigned q_sz = 3;
    unsigned char r[] = {238, 16, 251, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test573)
{
    unsigned char p[] = {238, 16, 251, 1};
    const unsigned p_sz = 4;
    unsigned char q[] = {135, 20, 202, 0};
    const unsigned q_sz = 4;
    unsigned char r[] = {105, 4, 49, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test574)
{
    unsigned char p[] = {66, 171, 14, 0, 0};
    const unsigned p_sz = 5;
    unsigned char q[] = {105, 4, 49, 1};
    const unsigned q_sz = 4;
    unsigned char r[] = {66, 194, 10, 49, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test575)
{
    unsigned char p[] = {66, 194, 10, 49, 1};
    const unsigned p_sz = 5;
    unsigned char q[] = {189, 40, 247, 10, 0};
    const unsigned q_sz = 5;
    unsigned char r[] = {255, 234, 253, 59, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test576)
{
    unsigned char p[] = {14, 84, 194, 21, 0, 0};
    const unsigned p_sz = 6;
    unsigned char q[] = {255, 234, 253, 59, 1};
    const unsigned q_sz = 5;
    unsigned char r[] = {14, 171, 40, 232, 59, 1};
    const unsigned r_sz = 6;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test577)
{
    unsigned char p[] = {14, 171, 40, 232, 59, 1};
    const unsigned p_sz = 6;
    unsigned char q[] = {80, 228, 249, 142, 218, 0};
    const unsigned q_sz = 6;
    unsigned char r[] = {94, 79, 209, 102, 225, 1};
    const unsigned r_sz = 6;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test578)
{
    unsigned char p[] = {179, 45, 30, 248, 216, 0, 0};
    const unsigned p_sz = 7;
    unsigned char q[] = {94, 79, 209, 102, 225, 1};
    const unsigned q_sz = 6;
    unsigned char r[] = {179, 115, 81, 41, 190, 225, 1};
    const unsigned r_sz = 7;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test579)
{
    unsigned char p[] = {179, 115, 81, 41, 190, 225, 1};
    const unsigned p_sz = 7;
    unsigned char q[] = {101, 33, 99, 133, 163, 4, 0};
    const unsigned q_sz = 7;
    unsigned char r[] = {214, 82, 50, 172, 29, 229, 1};
    const unsigned r_sz = 7;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test580)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char q[] = {77, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {77, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test581)
{
    unsigned char p[] = {234, 137, 150, 217, 250, 229, 20, 101, 189, 71, 177, 161, 242, 27, 109, 153, 182, 84, 117, 12, 254, 173, 161, 152, 154, 33, 51, 254, 43, 71, 214, 59, 53, 174, 155, 169, 183, 1, 49, 78, 28, 186, 83, 165, 78, 41, 56, 69, 78, 200, 124, 100, 123, 117, 66, 86, 172, 67, 23, 12, 2, 196, 100, 88, 244, 246, 180, 176, 233, 115, 34, 143, 133, 18, 104, 12, 184, 255, 234, 63, 94, 127, 120, 44, 118, 77, 119, 214, 165, 32, 9, 56, 50, 150, 200, 209, 150, 25, 76, 244, 145, 7, 96, 212, 61, 239, 156, 184, 66, 83, 219, 87, 44, 42, 140, 137, 249, 5, 163, 211, 236, 57, 245, 48, 140, 58, 105, 84, 84, 88, 213, 217, 166, 83, 160, 243, 183, 15, 245, 205, 3, 82, 155, 2, 64, 128, 22, 239, 13, 146, 138, 234, 252, 125, 15, 64, 203, 218, 203, 188, 200, 79, 58, 172, 164, 51, 73, 155, 230, 115, 229, 219, 99, 207, 17, 53, 6, 62, 184};
    const unsigned p_sz = 179;
    unsigned char q[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned q_sz = 179;
    unsigned char r[] = {234, 137, 150, 217, 250, 229, 20, 101, 189, 71, 177, 161, 242, 27, 109, 240, 182, 84, 117, 12, 254, 173, 161, 152, 154, 33, 51, 254, 43, 71, 214, 59, 53, 9, 155, 169, 183, 1, 49, 78, 28, 186, 83, 165, 78, 41, 56, 69, 78, 200, 124, 18, 123, 117, 66, 86, 172, 67, 23, 12, 2, 196, 100, 88, 244, 246, 180, 176, 233, 115, 34, 143, 196, 18, 104, 12, 184, 255, 234, 63, 94, 127, 120, 44, 118, 77, 119, 214, 165, 32, 9, 56, 50, 150, 200, 209, 150, 25, 76, 244, 145, 7, 96, 212, 61, 239, 156, 184, 66, 83, 219, 87, 44, 42, 140, 137, 249, 5, 163, 211, 236, 57, 245, 48, 140, 58, 105, 84, 84, 88, 213, 217, 166, 83, 160, 243, 183, 15, 245, 205, 3, 82, 155, 2, 64, 128, 22, 239, 13, 166, 138, 234, 252, 8, 15, 64, 203, 218, 203, 188, 200, 79, 58, 172, 164, 51, 73, 155, 230, 115, 229, 219, 99, 207, 17, 53, 6, 62, 184};
    const unsigned r_sz = 179;
    unsigned char buf[179];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test582)
{
    unsigned char p[] = {237, 0};
    const unsigned p_sz = 2;
    unsigned char q[] = {1};
    const unsigned q_sz = 1;
    unsigned char r[] = {237, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test583)
{
    unsigned char p[] = {237, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {80, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {189, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test584)
{
    unsigned char p[] = {227, 0, 0};
    const unsigned p_sz = 3;
    unsigned char q[] = {189, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {227, 189, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test585)
{
    unsigned char p[] = {227, 189, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {1, 154, 0};
    const unsigned q_sz = 3;
    unsigned char r[] = {226, 39, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test586)
{
    unsigned char p[] = {83, 175, 0, 0};
    const unsigned p_sz = 4;
    unsigned char q[] = {226, 39, 1};
    const unsigned q_sz = 3;
    unsigned char r[] = {83, 77, 39, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test587)
{
    unsigned char p[] = {83, 77, 39, 1};
    const unsigned p_sz = 4;
    unsigned char q[] = {218, 101, 53, 0};
    const unsigned q_sz = 4;
    unsigned char r[] = {137, 40, 18, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test588)
{
    unsigned char p[] = {27, 110, 146, 0, 0};
    const unsigned p_sz = 5;
    unsigned char q[] = {137, 40, 18, 1};
    const unsigned q_sz = 4;
    unsigned char r[] = {27, 231, 186, 18, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test589)
{
    unsigned char p[] = {27, 231, 186, 18, 1};
    const unsigned p_sz = 5;
    unsigned char q[] = {209, 132, 93, 127, 0};
    const unsigned q_sz = 5;
    unsigned char r[] = {202, 99, 231, 109, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test590)
{
    unsigned char p[] = {38, 54, 145, 200, 0, 0};
    const unsigned p_sz = 6;
    unsigned char q[] = {202, 99, 231, 109, 1};
    const unsigned q_sz = 5;
    unsigned char r[] = {38, 252, 242, 47, 109, 1};
    const unsigned r_sz = 6;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test591)
{
    unsigned char p[] = {38, 252, 242, 47, 109, 1};
    const unsigned p_sz = 6;
    unsigned char q[] = {103, 28, 199, 215, 74, 0};
    const unsigned q_sz = 6;
    unsigned char r[] = {65, 224, 53, 248, 39, 1};
    const unsigned r_sz = 6;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test592)
{
    unsigned char p[] = {133, 43, 79, 165, 160, 0, 0};
    const unsigned p_sz = 7;
    unsigned char q[] = {65, 224, 53, 248, 39, 1};
    const unsigned q_sz = 6;
    unsigned char r[] = {133, 106, 175, 144, 88, 39, 1};
    const unsigned r_sz = 7;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test593)
{
    unsigned char p[] = {133, 106, 175, 144, 88, 39, 1};
    const unsigned p_sz = 7;
    unsigned char q[] = {100, 166, 119, 59, 74, 16, 0};
    const unsigned q_sz = 7;
    unsigned char r[] = {225, 204, 216, 171, 18, 55, 1};
    const unsigned r_sz = 7;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test594)
{
    unsigned char p[] = {42, 57, 233, 194, 22, 83, 0, 0};
    const unsigned p_sz = 8;
    unsigned char q[] = {225, 204, 216, 171, 18, 55, 1};
    const unsigned q_sz = 7;
    unsigned char r[] = {42, 216, 37, 26, 189, 65, 55, 1};
    const unsigned r_sz = 8;
    unsigned char buf[8];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test595)
{
    unsigned char p[] = {42, 216, 37, 26, 189, 65, 55, 1};
    const unsigned p_sz = 8;
    unsigned char q[] = {217, 218, 8, 55, 245, 130, 128, 0};
    const unsigned q_sz = 8;
    unsigned char r[] = {243, 2, 45, 45, 72, 195, 183, 1};
    const unsigned r_sz = 8;
    unsigned char buf[8];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test596)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char q[] = {82, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {82, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test597)
{
    unsigned char p[] = {234, 137, 150, 217, 250, 229, 20, 101, 189, 71, 177, 161, 242, 27, 109, 153, 182, 84, 117, 12, 254, 173, 161, 152, 154, 33, 51, 254, 43, 71, 131, 59, 53, 174, 155, 169, 183, 1, 49, 78, 28, 186, 83, 165, 78, 41, 56, 69, 78, 200, 124, 100, 123, 117, 66, 86, 172, 67, 23, 12, 2, 196, 100, 88, 244, 246, 180, 176, 233, 115, 34, 143, 133, 18, 104, 12, 184, 255, 234, 63, 94, 127, 120, 44, 118, 77, 119, 214, 165, 32, 9, 56, 50, 150, 200, 209, 150, 25, 76, 244, 145, 7, 96, 212, 61, 239, 156, 184, 66, 83, 219, 87, 44, 42, 140, 137, 249, 5, 163, 211, 236, 57, 245, 48, 140, 58, 105, 84, 84, 88, 213, 217, 166, 83, 160, 243, 183, 15, 245, 205, 3, 82, 155, 2, 64, 128, 22, 239, 13, 146, 138, 234, 252, 125, 15, 64, 203, 218, 203, 188, 200, 79, 58, 172, 164, 51, 73, 155, 230, 115, 229, 219, 99, 207, 17, 53, 6, 62, 184};
    const unsigned p_sz = 179;
    unsigned char q[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned q_sz = 179;
    unsigned char r[] = {234, 137, 150, 217, 250, 229, 20, 101, 189, 71, 177, 161, 242, 27, 109, 240, 182, 84, 117, 12, 254, 173, 161, 152, 154, 33, 51, 254, 43, 71, 214, 59, 53, 9, 155, 169, 183, 1, 49, 78, 28, 186, 83, 165, 78, 41, 56, 69, 78, 200, 124, 18, 123, 117, 66, 86, 172, 67, 23, 12, 2, 196, 100, 88, 244, 246, 180, 176, 233, 115, 34, 143, 196, 18, 104, 12, 184, 255, 234, 63, 94, 127, 120, 44, 118, 77, 119, 214, 165, 32, 9, 56, 50, 150, 200, 209, 150, 25, 76, 244, 145, 7, 96, 212, 61, 239, 156, 184, 66, 83, 219, 87, 44, 42, 140, 137, 249, 5, 163, 211, 236, 57, 245, 48, 140, 58, 105, 84, 84, 88, 213, 217, 166, 83, 160, 243, 183, 15, 245, 205, 3, 82, 155, 2, 64, 128, 22, 239, 13, 166, 138, 234, 252, 8, 15, 64, 203, 218, 203, 188, 200, 79, 58, 172, 164, 51, 73, 155, 230, 115, 229, 219, 99, 207, 17, 53, 6, 62, 184};
    const unsigned r_sz = 179;
    unsigned char buf[179];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test598)
{
    unsigned char p[] = {214, 0};
    const unsigned p_sz = 2;
    unsigned char q[] = {1};
    const unsigned q_sz = 1;
    unsigned char r[] = {214, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test599)
{
    unsigned char p[] = {214, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {170, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {124, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test600)
{
    unsigned char p[] = {46, 0, 0};
    const unsigned p_sz = 3;
    unsigned char q[] = {124, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {46, 124, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test601)
{
    unsigned char p[] = {46, 124, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {100, 253, 0};
    const unsigned q_sz = 3;
    unsigned char r[] = {74, 129, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test602)
{
    unsigned char p[] = {24, 252, 0, 0};
    const unsigned p_sz = 4;
    unsigned char q[] = {74, 129, 1};
    const unsigned q_sz = 3;
    unsigned char r[] = {24, 182, 129, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test603)
{
    unsigned char p[] = {24, 182, 129, 1};
    const unsigned p_sz = 4;
    unsigned char q[] = {226, 215, 105, 0};
    const unsigned q_sz = 4;
    unsigned char r[] = {250, 97, 232, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test604)
{
    unsigned char p[] = {28, 180, 99, 0, 0};
    const unsigned p_sz = 5;
    unsigned char q[] = {250, 97, 232, 1};
    const unsigned q_sz = 4;
    unsigned char r[] = {28, 78, 2, 232, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test605)
{
    unsigned char p[] = {28, 78, 2, 232, 1};
    const unsigned p_sz = 5;
    unsigned char q[] = {58, 177, 192, 180, 0};
    const unsigned q_sz = 5;
    unsigned char r[] = {38, 255, 194, 92, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test606)
{
    unsigned char p[] = {231, 183, 136, 91, 0, 0};
    const unsigned p_sz = 6;
    unsigned char q[] = {38, 255, 194, 92, 1};
    const unsigned q_sz = 5;
    unsigned char r[] = {231, 145, 119, 153, 92, 1};
    const unsigned r_sz = 6;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test607)
{
    unsigned char p[] = {231, 145, 119, 153, 92, 1};
    const unsigned p_sz = 6;
    unsigned char q[] = {57, 210, 83, 38, 66, 0};
    const unsigned q_sz = 6;
    unsigned char r[] = {222, 67, 36, 191, 30, 1};
    const unsigned r_sz = 6;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test608)
{
    unsigned char p[] = {95, 18, 248, 150, 140, 0, 0};
    const unsigned p_sz = 7;
    unsigned char q[] = {222, 67, 36, 191, 30, 1};
    const unsigned q_sz = 6;
    unsigned char r[] = {95, 204, 187, 178, 51, 30, 1};
    const unsigned r_sz = 7;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test609)
{
    unsigned char p[] = {95, 204, 187, 178, 51, 30, 1};
    const unsigned p_sz = 7;
    unsigned char q[] = {248, 73, 143, 195, 46, 80, 0};
    const unsigned q_sz = 7;
    unsigned char r[] = {167, 133, 52, 113, 29, 78, 1};
    const unsigned r_sz = 7;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test610)
{
    unsigned char p[] = {56, 139, 189, 159, 239, 66, 0, 0};
    const unsigned p_sz = 8;
    unsigned char q[] = {167, 133, 52, 113, 29, 78, 1};
    const unsigned q_sz = 7;
    unsigned char r[] = {56, 44, 56, 171, 158, 95, 78, 1};
    const unsigned r_sz = 8;
    unsigned char buf[8];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test611)
{
    unsigned char p[] = {56, 44, 56, 171, 158, 95, 78, 1};
    const unsigned p_sz = 8;
    unsigned char q[] = {16, 98, 230, 82, 222, 254, 80, 0};
    const unsigned q_sz = 8;
    unsigned char r[] = {40, 78, 222, 249, 64, 161, 30, 1};
    const unsigned r_sz = 8;
    unsigned char buf[8];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test612)
{
    unsigned char p[] = {185, 11, 195, 221, 199, 168, 103, 0, 0};
    const unsigned p_sz = 9;
    unsigned char q[] = {40, 78, 222, 249, 64, 161, 30, 1};
    const unsigned q_sz = 8;
    unsigned char r[] = {185, 35, 141, 3, 62, 232, 198, 30, 1};
    const unsigned r_sz = 9;
    unsigned char buf[9];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test613)
{
    unsigned char p[] = {185, 35, 141, 3, 62, 232, 198, 30, 1};
    const unsigned p_sz = 9;
    unsigned char q[] = {187, 95, 91, 250, 37, 182, 52, 96, 0};
    const unsigned q_sz = 9;
    unsigned char r[] = {2, 124, 214, 249, 27, 94, 242, 126, 1};
    const unsigned r_sz = 9;
    unsigned char buf[9];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test614)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char q[] = {201, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {201, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test615)
{
    unsigned char p[] = {234, 137, 150, 217, 250, 229, 20, 101, 189, 71, 177, 161, 242, 27, 109, 153, 182, 84, 117, 12, 254, 173, 161, 152, 154, 33, 51, 254, 43, 71, 131, 59, 53, 174, 155, 169, 183, 1, 49, 78, 28, 186, 83, 165, 78, 41, 56, 69, 78, 200, 124, 100, 123, 117, 66, 86, 172, 67, 23, 12, 2, 196, 100, 88, 244, 246, 180, 176, 233, 115, 34, 143, 133, 18, 104, 12, 184, 255, 234, 63, 94, 127, 120, 44, 118, 77, 119, 214, 165, 32, 9, 56, 50, 150, 200, 209, 150, 25, 76, 244, 145, 7, 96, 212, 61, 239, 156, 184, 66, 83, 219, 87, 44, 42, 140, 137, 249, 5, 163, 211, 236, 57, 245, 48, 140, 58, 105, 84, 84, 88, 213, 217, 166, 83, 160, 243, 183, 15, 245, 205, 3, 82, 155, 2, 64, 128, 22, 239, 13, 146, 138, 234, 252, 125, 15, 123, 203, 218, 203, 188, 200, 79, 58, 172, 164, 51, 73, 155, 230, 115, 229, 219, 99, 207, 17, 53, 6, 62, 184};
    const unsigned p_sz = 179;
    unsigned char q[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 117, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned q_sz = 179;
    unsigned char r[] = {234, 137, 150, 217, 250, 229, 20, 101, 189, 71, 177, 161, 242, 27, 109, 240, 182, 84, 117, 12, 254, 173, 161, 152, 154, 33, 51, 254, 43, 71, 214, 59, 53, 9, 155, 169, 183, 1, 49, 78, 28, 186, 83, 165, 78, 41, 56, 69, 78, 200, 124, 18, 123, 117, 66, 86, 172, 67, 23, 12, 2, 196, 100, 88, 244, 246, 180, 176, 233, 115, 34, 143, 196, 18, 104, 12, 184, 255, 234, 63, 94, 127, 120, 44, 118, 77, 119, 214, 165, 32, 9, 56, 50, 150, 200, 209, 150, 25, 76, 244, 145, 7, 96, 212, 61, 239, 156, 184, 66, 83, 219, 87, 44, 42, 140, 137, 249, 5, 163, 211, 236, 57, 245, 48, 140, 58, 105, 84, 84, 88, 213, 217, 166, 83, 160, 243, 183, 15, 245, 205, 3, 82, 155, 2, 64, 128, 22, 239, 13, 166, 138, 234, 252, 8, 15, 64, 203, 218, 203, 188, 200, 79, 58, 172, 164, 51, 73, 155, 230, 115, 229, 219, 99, 207, 17, 53, 6, 62, 184};
    const unsigned r_sz = 179;
    unsigned char buf[179];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test616)
{
    unsigned char p[] = {42, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {36, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {14, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test617)
{
    unsigned char p[] = {90, 0, 0};
    const unsigned p_sz = 3;
    unsigned char q[] = {14, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {90, 14, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test618)
{
    unsigned char p[] = {90, 14, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {167, 64, 0};
    const unsigned q_sz = 3;
    unsigned char r[] = {253, 78, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test619)
{
    unsigned char p[] = {51, 49, 0, 0};
    const unsigned p_sz = 4;
    unsigned char q[] = {253, 78, 1};
    const unsigned q_sz = 3;
    unsigned char r[] = {51, 204, 78, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test620)
{
    unsigned char p[] = {51, 204, 78, 1};
    const unsigned p_sz = 4;
    unsigned char q[] = {23, 187, 140, 0};
    const unsigned q_sz = 4;
    unsigned char r[] = {36, 119, 194, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test621)
{
    unsigned char p[] = {43, 123, 33, 0, 0};
    const unsigned p_sz = 5;
    unsigned char q[] = {36, 119, 194, 1};
    const unsigned q_sz = 4;
    unsigned char r[] = {43, 95, 86, 194, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test622)
{
    unsigned char p[] = {43, 95, 86, 194, 1};
    const unsigned p_sz = 5;
    unsigned char q[] = {28, 45, 181, 244, 0};
    const unsigned q_sz = 5;
    unsigned char r[] = {55, 114, 227, 54, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test623)
{
    unsigned char p[] = {52, 75, 224, 79, 0, 0};
    const unsigned p_sz = 6;
    unsigned char q[] = {55, 114, 227, 54, 1};
    const unsigned q_sz = 5;
    unsigned char r[] = {52, 124, 146, 172, 54, 1};
    const unsigned r_sz = 6;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test624)
{
    unsigned char p[] = {52, 124, 146, 172, 54, 1};
    const unsigned p_sz = 6;
    unsigned char q[] = {50, 198, 55, 8, 58, 0};
    const unsigned q_sz = 6;
    unsigned char r[] = {6, 186, 165, 164, 12, 1};
    const unsigned r_sz = 6;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test625)
{
    unsigned char p[] = {147, 225, 103, 196, 87, 0, 0};
    const unsigned p_sz = 7;
    unsigned char q[] = {6, 186, 165, 164, 12, 1};
    const unsigned q_sz = 6;
    unsigned char r[] = {147, 231, 221, 97, 243, 12, 1};
    const unsigned r_sz = 7;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test626)
{
    unsigned char p[] = {147, 231, 221, 97, 243, 12, 1};
    const unsigned p_sz = 7;
    unsigned char q[] = {171, 162, 214, 159, 75, 73, 0};
    const unsigned q_sz = 7;
    unsigned char r[] = {56, 69, 11, 254, 184, 69, 1};
    const unsigned r_sz = 7;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test627)
{
    unsigned char p[] = {152, 70, 75, 132, 45, 207, 0, 0};
    const unsigned p_sz = 8;
    unsigned char q[] = {56, 69, 11, 254, 184, 69, 1};
    const unsigned q_sz = 7;
    unsigned char r[] = {152, 126, 14, 143, 211, 119, 69, 1};
    const unsigned r_sz = 8;
    unsigned char buf[8];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test628)
{
    unsigned char p[] = {152, 126, 14, 143, 211, 119, 69, 1};
    const unsigned p_sz = 8;
    unsigned char q[] = {213, 219, 50, 238, 254, 219, 178, 0};
    const unsigned q_sz = 8;
    unsigned char r[] = {77, 165, 60, 97, 45, 172, 247, 1};
    const unsigned r_sz = 8;
    unsigned char buf[8];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test629)
{
    unsigned char p[] = {252, 165, 167, 160, 134, 165, 138, 0, 0};
    const unsigned p_sz = 9;
    unsigned char q[] = {77, 165, 60, 97, 45, 172, 247, 1};
    const unsigned q_sz = 8;
    unsigned char r[] = {252, 232, 2, 156, 231, 136, 38, 247, 1};
    const unsigned r_sz = 9;
    unsigned char buf[9];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test630)
{
    unsigned char p[] = {252, 232, 2, 156, 231, 136, 38, 247, 1};
    const unsigned p_sz = 9;
    unsigned char q[] = {100, 11, 204, 248, 153, 38, 12, 5, 0};
    const unsigned q_sz = 9;
    unsigned char r[] = {152, 227, 206, 100, 126, 174, 42, 242, 1};
    const unsigned r_sz = 9;
    unsigned char buf[9];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test631)
{
    unsigned char p[] = {149, 144, 248, 26, 186, 16, 76, 53, 0, 0};
    const unsigned p_sz = 10;
    unsigned char q[] = {152, 227, 206, 100, 126, 174, 42, 242, 1};
    const unsigned q_sz = 9;
    unsigned char r[] = {149, 8, 27, 212, 222, 110, 226, 31, 242, 1};
    const unsigned r_sz = 10;
    unsigned char buf[10];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test632)
{
    unsigned char p[] = {149, 8, 27, 212, 222, 110, 226, 31, 242, 1};
    const unsigned p_sz = 10;
    unsigned char q[] = {67, 4, 130, 117, 27, 76, 9, 53, 231, 0};
    const unsigned q_sz = 10;
    unsigned char r[] = {214, 12, 153, 161, 197, 34, 235, 42, 21, 1};
    const unsigned r_sz = 10;
    unsigned char buf[10];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test633)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char q[] = {107, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {107, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test634)
{
    unsigned char p[] = {234, 137, 150, 217, 250, 229, 20, 101, 189, 71, 177, 161, 242, 27, 109, 153, 182, 84, 117, 12, 254, 173, 161, 152, 154, 33, 51, 254, 43, 71, 131, 59, 53, 174, 155, 169, 183, 1, 49, 78, 28, 186, 83, 165, 78, 41, 56, 69, 78, 200, 124, 100, 123, 117, 66, 86, 172, 67, 23, 12, 2, 196, 100, 88, 244, 246, 180, 176, 233, 115, 34, 143, 133, 18, 104, 12, 184, 255, 234, 63, 94, 127, 120, 44, 118, 77, 119, 214, 165, 32, 9, 56, 50, 150, 52, 209, 150, 25, 76, 244, 145, 7, 96, 212, 61, 239, 156, 184, 66, 83, 219, 87, 44, 42, 140, 137, 249, 5, 163, 211, 236, 57, 245, 48, 140, 58, 105, 84, 84, 88, 213, 217, 166, 83, 160, 243, 183, 15, 245, 205, 3, 82, 155, 2, 64, 128, 22, 239, 13, 146, 138, 234, 252, 125, 15, 123, 203, 218, 203, 188, 200, 79, 58, 172, 164, 51, 73, 155, 230, 115, 229, 219, 99, 207, 17, 53, 6, 62, 184};
    const unsigned p_sz = 179;
    unsigned char q[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 117, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned q_sz = 179;
    unsigned char r[] = {234, 137, 150, 217, 250, 229, 20, 101, 189, 71, 177, 161, 242, 27, 109, 240, 182, 84, 117, 12, 254, 173, 161, 152, 154, 33, 51, 254, 43, 71, 214, 59, 53, 9, 155, 169, 183, 1, 49, 78, 28, 186, 83, 165, 78, 41, 56, 69, 78, 200, 124, 18, 123, 117, 66, 86, 172, 67, 23, 12, 2, 196, 100, 88, 244, 246, 180, 176, 233, 115, 34, 143, 196, 18, 104, 12, 184, 255, 234, 63, 94, 127, 120, 44, 118, 77, 119, 214, 165, 32, 9, 56, 50, 150, 200, 209, 150, 25, 76, 244, 145, 7, 96, 212, 61, 239, 156, 184, 66, 83, 219, 87, 44, 42, 140, 137, 249, 5, 163, 211, 236, 57, 245, 48, 140, 58, 105, 84, 84, 88, 213, 217, 166, 83, 160, 243, 183, 15, 245, 205, 3, 82, 155, 2, 64, 128, 22, 239, 13, 166, 138, 234, 252, 8, 15, 64, 203, 218, 203, 188, 200, 79, 58, 172, 164, 51, 73, 155, 230, 115, 229, 219, 99, 207, 17, 53, 6, 62, 184};
    const unsigned r_sz = 179;
    unsigned char buf[179];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test635)
{
    unsigned char p[] = {251, 0};
    const unsigned p_sz = 2;
    unsigned char q[] = {1};
    const unsigned q_sz = 1;
    unsigned char r[] = {251, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test636)
{
    unsigned char p[] = {251, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {78, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {181, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test637)
{
    unsigned char p[] = {75, 0, 0};
    const unsigned p_sz = 3;
    unsigned char q[] = {181, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {75, 181, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test638)
{
    unsigned char p[] = {75, 181, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {33, 217, 0};
    const unsigned q_sz = 3;
    unsigned char r[] = {106, 108, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test639)
{
    unsigned char p[] = {199, 30, 0, 0};
    const unsigned p_sz = 4;
    unsigned char q[] = {106, 108, 1};
    const unsigned q_sz = 3;
    unsigned char r[] = {199, 116, 108, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test640)
{
    unsigned char p[] = {199, 116, 108, 1};
    const unsigned p_sz = 4;
    unsigned char q[] = {167, 230, 145, 0};
    const unsigned q_sz = 4;
    unsigned char r[] = {96, 146, 253, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test641)
{
    unsigned char p[] = {159, 2, 64, 0, 0};
    const unsigned p_sz = 5;
    unsigned char q[] = {96, 146, 253, 1};
    const unsigned q_sz = 4;
    unsigned char r[] = {159, 98, 210, 253, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test642)
{
    unsigned char p[] = {159, 98, 210, 253, 1};
    const unsigned p_sz = 5;
    unsigned char q[] = {78, 213, 107, 16, 0};
    const unsigned q_sz = 5;
    unsigned char r[] = {209, 183, 185, 237, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test643)
{
    unsigned char p[] = {115, 12, 162, 23, 0, 0};
    const unsigned p_sz = 6;
    unsigned char q[] = {209, 183, 185, 237, 1};
    const unsigned q_sz = 5;
    unsigned char r[] = {115, 221, 21, 174, 237, 1};
    const unsigned r_sz = 6;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test644)
{
    unsigned char p[] = {115, 221, 21, 174, 237, 1};
    const unsigned p_sz = 6;
    unsigned char q[] = {48, 6, 196, 44, 197, 0};
    const unsigned q_sz = 6;
    unsigned char r[] = {67, 219, 209, 130, 40, 1};
    const unsigned r_sz = 6;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test645)
{
    unsigned char p[] = {155, 249, 248, 246, 93, 0, 0};
    const unsigned p_sz = 7;
    unsigned char q[] = {67, 219, 209, 130, 40, 1};
    const unsigned q_sz = 6;
    unsigned char r[] = {155, 186, 35, 39, 223, 40, 1};
    const unsigned r_sz = 7;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test646)
{
    unsigned char p[] = {155, 186, 35, 39, 223, 40, 1};
    const unsigned p_sz = 7;
    unsigned char q[] = {105, 158, 118, 73, 135, 239, 0};
    const unsigned q_sz = 7;
    unsigned char r[] = {242, 36, 85, 110, 88, 199, 1};
    const unsigned r_sz = 7;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test647)
{
    unsigned char p[] = {78, 31, 175, 133, 250, 65, 0, 0};
    const unsigned p_sz = 8;
    unsigned char q[] = {242, 36, 85, 110, 88, 199, 1};
    const unsigned q_sz = 7;
    unsigned char r[] = {78, 237, 139, 208, 148, 25, 199, 1};
    const unsigned r_sz = 8;
    unsigned char buf[8];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test648)
{
    unsigned char p[] = {78, 237, 139, 208, 148, 25, 199, 1};
    const unsigned p_sz = 8;
    unsigned char q[] = {38, 12, 166, 125, 119, 255, 186, 0};
    const unsigned q_sz = 8;
    unsigned char r[] = {104, 225, 45, 173, 227, 230, 125, 1};
    const unsigned r_sz = 8;
    unsigned char buf[8];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test649)
{
    unsigned char p[] = {250, 2, 49, 155, 152, 164, 192, 0, 0};
    const unsigned p_sz = 9;
    unsigned char q[] = {104, 225, 45, 173, 227, 230, 125, 1};
    const unsigned q_sz = 8;
    unsigned char r[] = {250, 106, 208, 182, 53, 71, 38, 125, 1};
    const unsigned r_sz = 9;
    unsigned char buf[9];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test650)
{
    unsigned char p[] = {250, 106, 208, 182, 53, 71, 38, 125, 1};
    const unsigned p_sz = 9;
    unsigned char q[] = {244, 121, 21, 59, 238, 24, 206, 197, 0};
    const unsigned q_sz = 9;
    unsigned char r[] = {14, 19, 197, 141, 219, 95, 232, 184, 1};
    const unsigned r_sz = 9;
    unsigned char buf[9];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test651)
{
    unsigned char p[] = {59, 68, 192, 116, 87, 246, 2, 135, 0, 0};
    const unsigned p_sz = 10;
    unsigned char q[] = {14, 19, 197, 141, 219, 95, 232, 184, 1};
    const unsigned q_sz = 9;
    unsigned char r[] = {59, 74, 211, 177, 218, 45, 93, 111, 184, 1};
    const unsigned r_sz = 10;
    unsigned char buf[10];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test652)
{
    unsigned char p[] = {59, 74, 211, 177, 218, 45, 93, 111, 184, 1};
    const unsigned p_sz = 10;
    unsigned char q[] = {229, 22, 182, 126, 41, 78, 203, 68, 36, 0};
    const unsigned q_sz = 10;
    unsigned char r[] = {222, 92, 101, 207, 243, 99, 150, 43, 156, 1};
    const unsigned r_sz = 10;
    unsigned char buf[10];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test653)
{
    unsigned char p[] = {76, 177, 100, 19, 54, 79, 187, 221, 101, 0, 0};
    const unsigned p_sz = 11;
    unsigned char q[] = {222, 92, 101, 207, 243, 99, 150, 43, 156, 1};
    const unsigned q_sz = 10;
    unsigned char r[] = {76, 111, 56, 118, 249, 188, 216, 75, 78, 156, 1};
    const unsigned r_sz = 11;
    unsigned char buf[11];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test654)
{
    unsigned char p[] = {76, 111, 56, 118, 249, 188, 216, 75, 78, 156, 1};
    const unsigned p_sz = 11;
    unsigned char q[] = {36, 53, 235, 57, 21, 188, 254, 102, 7, 99, 0};
    const unsigned q_sz = 11;
    unsigned char r[] = {104, 90, 211, 79, 236, 0, 38, 45, 73, 255, 1};
    const unsigned r_sz = 11;
    unsigned char buf[11];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test655)
{
    unsigned char p[] = {234, 137, 150, 217, 250, 229, 20, 101, 189, 71, 177, 161, 242, 27, 109, 153, 182, 84, 117, 12, 254, 173, 161, 152, 154, 33, 51, 254, 43, 71, 131, 59, 53, 174, 155, 169, 183, 1, 49, 78, 28, 186, 83, 165, 78, 41, 56, 69, 78, 200, 124, 100, 123, 117, 66, 86, 172, 67, 23, 12, 2, 196, 100, 88, 244, 246, 180, 176, 233, 115, 34, 143, 133, 18, 104, 12, 184, 255, 234, 63, 94, 127, 120, 44, 118, 77, 119, 214, 165, 32, 9, 56, 50, 150, 52, 209, 150, 25, 76, 244, 145, 7, 96, 212, 61, 239, 156, 184, 66, 83, 219, 87, 44, 42, 140, 137, 249, 5, 163, 211, 236, 57, 245, 48, 140, 58, 105, 84, 84, 88, 213, 217, 166, 83, 160, 243, 183, 15, 245, 205, 3, 82, 155, 2, 64, 128, 22, 239, 13, 146, 138, 234, 252, 125, 15, 123, 26, 218, 203, 188, 200, 79, 58, 172, 164, 51, 73, 155, 230, 115, 229, 219, 99, 207, 17, 53, 6, 62, 184};
    const unsigned p_sz = 179;
    unsigned char q[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 117, 0, 59, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned q_sz = 179;
    unsigned char r[] = {234, 137, 150, 217, 250, 229, 20, 101, 189, 71, 177, 161, 242, 27, 109, 240, 182, 84, 117, 12, 254, 173, 161, 152, 154, 33, 51, 254, 43, 71, 214, 59, 53, 9, 155, 169, 183, 1, 49, 78, 28, 186, 83, 165, 78, 41, 56, 69, 78, 200, 124, 18, 123, 117, 66, 86, 172, 67, 23, 12, 2, 196, 100, 88, 244, 246, 180, 176, 233, 115, 34, 143, 196, 18, 104, 12, 184, 255, 234, 63, 94, 127, 120, 44, 118, 77, 119, 214, 165, 32, 9, 56, 50, 150, 200, 209, 150, 25, 76, 244, 145, 7, 96, 212, 61, 239, 156, 184, 66, 83, 219, 87, 44, 42, 140, 137, 249, 5, 163, 211, 236, 57, 245, 48, 140, 58, 105, 84, 84, 88, 213, 217, 166, 83, 160, 243, 183, 15, 245, 205, 3, 82, 155, 2, 64, 128, 22, 239, 13, 166, 138, 234, 252, 8, 15, 64, 203, 218, 203, 188, 200, 79, 58, 172, 164, 51, 73, 155, 230, 115, 229, 219, 99, 207, 17, 53, 6, 62, 184};
    const unsigned r_sz = 179;
    unsigned char buf[179];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test656)
{
    unsigned char p[] = {80, 0};
    const unsigned p_sz = 2;
    unsigned char q[] = {1};
    const unsigned q_sz = 1;
    unsigned char r[] = {80, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test657)
{
    unsigned char p[] = {80, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {125, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {45, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test658)
{
    unsigned char p[] = {210, 0, 0};
    const unsigned p_sz = 3;
    unsigned char q[] = {45, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {210, 45, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test659)
{
    unsigned char p[] = {210, 45, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {60, 210, 0};
    const unsigned q_sz = 3;
    unsigned char r[] = {238, 255, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test660)
{
    unsigned char p[] = {100, 219, 0, 0};
    const unsigned p_sz = 4;
    unsigned char q[] = {238, 255, 1};
    const unsigned q_sz = 3;
    unsigned char r[] = {100, 53, 255, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test661)
{
    unsigned char p[] = {100, 53, 255, 1};
    const unsigned p_sz = 4;
    unsigned char q[] = {133, 16, 107, 0};
    const unsigned q_sz = 4;
    unsigned char r[] = {225, 37, 148, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test662)
{
    unsigned char p[] = {6, 213, 139, 0, 0};
    const unsigned p_sz = 5;
    unsigned char q[] = {225, 37, 148, 1};
    const unsigned q_sz = 4;
    unsigned char r[] = {6, 52, 174, 148, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test663)
{
    unsigned char p[] = {6, 52, 174, 148, 1};
    const unsigned p_sz = 5;
    unsigned char q[] = {204, 137, 30, 148, 0};
    const unsigned q_sz = 5;
    unsigned char r[] = {202, 189, 176, 0, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test664)
{
    unsigned char p[] = {73, 134, 34, 161, 0, 0};
    const unsigned p_sz = 6;
    unsigned char q[] = {202, 189, 176, 0, 1};
    const unsigned q_sz = 5;
    unsigned char r[] = {73, 76, 159, 17, 0, 1};
    const unsigned r_sz = 6;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test665)
{
    unsigned char p[] = {73, 76, 159, 17, 0, 1};
    const unsigned p_sz = 6;
    unsigned char q[] = {212, 60, 89, 0, 9, 0};
    const unsigned q_sz = 6;
    unsigned char r[] = {157, 112, 198, 17, 9, 1};
    const unsigned r_sz = 6;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test666)
{
    unsigned char p[] = {224, 22, 237, 0, 46, 0, 0};
    const unsigned p_sz = 7;
    unsigned char q[] = {157, 112, 198, 17, 9, 1};
    const unsigned q_sz = 6;
    unsigned char r[] = {224, 139, 157, 198, 63, 9, 1};
    const unsigned r_sz = 7;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test667)
{
    unsigned char p[] = {224, 139, 157, 198, 63, 9, 1};
    const unsigned p_sz = 7;
    unsigned char q[] = {138, 158, 134, 156, 183, 174, 0};
    const unsigned q_sz = 7;
    unsigned char r[] = {106, 21, 27, 90, 136, 167, 1};
    const unsigned r_sz = 7;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test668)
{
    unsigned char p[] = {217, 232, 61, 198, 157, 95, 0, 0};
    const unsigned p_sz = 8;
    unsigned char q[] = {106, 21, 27, 90, 136, 167, 1};
    const unsigned q_sz = 7;
    unsigned char r[] = {217, 130, 40, 221, 199, 215, 167, 1};
    const unsigned r_sz = 8;
    unsigned char buf[8];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test669)
{
    unsigned char p[] = {217, 130, 40, 221, 199, 215, 167, 1};
    const unsigned p_sz = 8;
    unsigned char q[] = {57, 1, 104, 109, 155, 95, 62, 0};
    const unsigned q_sz = 8;
    unsigned char r[] = {224, 131, 64, 176, 92, 136, 153, 1};
    const unsigned r_sz = 8;
    unsigned char buf[8];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test670)
{
    unsigned char p[] = {47, 215, 234, 70, 184, 251, 48, 0, 0};
    const unsigned p_sz = 9;
    unsigned char q[] = {224, 131, 64, 176, 92, 136, 153, 1};
    const unsigned q_sz = 8;
    unsigned char r[] = {47, 55, 105, 6, 8, 167, 184, 153, 1};
    const unsigned r_sz = 9;
    unsigned char buf[9];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test671)
{
    unsigned char p[] = {47, 55, 105, 6, 8, 167, 184, 153, 1};
    const unsigned p_sz = 9;
    unsigned char q[] = {5, 113, 208, 225, 243, 167, 215, 68, 0};
    const unsigned q_sz = 9;
    unsigned char r[] = {42, 70, 185, 231, 251, 0, 111, 221, 1};
    const unsigned r_sz = 9;
    unsigned char buf[9];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test672)
{
    unsigned char p[] = {246, 155, 245, 121, 34, 202, 148, 36, 0, 0};
    const unsigned p_sz = 10;
    unsigned char q[] = {42, 70, 185, 231, 251, 0, 111, 221, 1};
    const unsigned q_sz = 9;
    unsigned char r[] = {246, 177, 179, 192, 197, 49, 148, 75, 221, 1};
    const unsigned r_sz = 10;
    unsigned char buf[10];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test673)
{
    unsigned char p[] = {246, 177, 179, 192, 197, 49, 148, 75, 221, 1};
    const unsigned p_sz = 10;
    unsigned char q[] = {184, 148, 5, 188, 18, 0, 10, 50, 233, 0};
    const unsigned q_sz = 10;
    unsigned char r[] = {78, 37, 182, 124, 215, 49, 158, 121, 52, 1};
    const unsigned r_sz = 10;
    unsigned char buf[10];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test674)
{
    unsigned char p[] = {32, 63, 171, 14, 175, 0, 75, 194, 199, 0, 0};
    const unsigned p_sz = 11;
    unsigned char q[] = {78, 37, 182, 124, 215, 49, 158, 121, 52, 1};
    const unsigned q_sz = 10;
    unsigned char r[] = {32, 113, 142, 184, 211, 215, 122, 92, 190, 52, 1};
    const unsigned r_sz = 11;
    unsigned char buf[11];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test675)
{
    unsigned char p[] = {32, 113, 142, 184, 211, 215, 122, 92, 190, 52, 1};
    const unsigned p_sz = 11;
    unsigned char q[] = {205, 19, 188, 182, 82, 115, 124, 174, 107, 243, 0};
    const unsigned q_sz = 11;
    unsigned char r[] = {237, 98, 50, 14, 129, 164, 6, 242, 213, 199, 1};
    const unsigned r_sz = 11;
    unsigned char buf[11];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test676)
{
    unsigned char p[] = {3, 12, 107, 52, 209, 123, 133, 224, 175, 207, 0, 0};
    const unsigned p_sz = 12;
    unsigned char q[] = {237, 98, 50, 14, 129, 164, 6, 242, 213, 199, 1};
    const unsigned q_sz = 11;
    unsigned char r[] = {3, 225, 9, 6, 223, 250, 33, 230, 93, 26, 199, 1};
    const unsigned r_sz = 12;
    unsigned char buf[12];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test677)
{
    unsigned char p[] = {3, 225, 9, 6, 223, 250, 33, 230, 93, 26, 199, 1};
    const unsigned p_sz = 12;
    unsigned char q[] = {166, 152, 48, 78, 112, 22, 248, 70, 131, 81, 223, 0};
    const unsigned q_sz = 12;
    unsigned char r[] = {165, 121, 57, 72, 175, 236, 217, 160, 222, 75, 24, 1};
    const unsigned r_sz = 12;
    unsigned char buf[12];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test678)
{
    unsigned char p[] = {234, 137, 150, 217, 250, 229, 20, 101, 189, 71, 177, 161, 242, 27, 109, 153, 182, 84, 117, 12, 254, 173, 161, 152, 154, 33, 51, 254, 43, 71, 131, 59, 53, 174, 155, 169, 183, 1, 49, 78, 28, 186, 83, 165, 78, 41, 56, 69, 78, 200, 124, 100, 123, 117, 66, 86, 172, 67, 23, 12, 2, 196, 100, 88, 244, 246, 180, 176, 233, 115, 34, 143, 133, 18, 104, 12, 184, 255, 234, 63, 94, 127, 120, 44, 118, 77, 119, 214, 165, 32, 9, 56, 50, 150, 52, 209, 150, 178, 76, 244, 145, 7, 96, 212, 61, 239, 156, 184, 66, 83, 219, 87, 44, 42, 140, 137, 249, 5, 163, 211, 236, 57, 245, 48, 140, 58, 105, 84, 84, 88, 213, 217, 166, 83, 160, 243, 183, 15, 245, 205, 3, 82, 155, 2, 64, 128, 22, 239, 13, 146, 138, 234, 252, 125, 15, 123, 26, 218, 203, 188, 200, 79, 58, 172, 164, 51, 73, 155, 230, 115, 229, 219, 99, 207, 17, 53, 6, 62, 184};
    const unsigned p_sz = 179;
    unsigned char q[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 117, 0, 59, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned q_sz = 179;
    unsigned char r[] = {234, 137, 150, 217, 250, 229, 20, 101, 189, 71, 177, 161, 242, 27, 109, 240, 182, 84, 117, 12, 254, 173, 161, 152, 154, 33, 51, 254, 43, 71, 214, 59, 53, 9, 155, 169, 183, 1, 49, 78, 28, 186, 83, 165, 78, 41, 56, 69, 78, 200, 124, 18, 123, 117, 66, 86, 172, 67, 23, 12, 2, 196, 100, 88, 244, 246, 180, 176, 233, 115, 34, 143, 196, 18, 104, 12, 184, 255, 234, 63, 94, 127, 120, 44, 118, 77, 119, 214, 165, 32, 9, 56, 50, 150, 200, 209, 150, 25, 76, 244, 145, 7, 96, 212, 61, 239, 156, 184, 66, 83, 219, 87, 44, 42, 140, 137, 249, 5, 163, 211, 236, 57, 245, 48, 140, 58, 105, 84, 84, 88, 213, 217, 166, 83, 160, 243, 183, 15, 245, 205, 3, 82, 155, 2, 64, 128, 22, 239, 13, 166, 138, 234, 252, 8, 15, 64, 203, 218, 203, 188, 200, 79, 58, 172, 164, 51, 73, 155, 230, 115, 229, 219, 99, 207, 17, 53, 6, 62, 184};
    const unsigned r_sz = 179;
    unsigned char buf[179];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test679)
{
    unsigned char p[] = {169, 0};
    const unsigned p_sz = 2;
    unsigned char q[] = {1};
    const unsigned q_sz = 1;
    unsigned char r[] = {169, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test680)
{
    unsigned char p[] = {169, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {41, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {128, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test681)
{
    unsigned char p[] = {18, 0, 0};
    const unsigned p_sz = 3;
    unsigned char q[] = {128, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {18, 128, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test682)
{
    unsigned char p[] = {18, 128, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {20, 193, 0};
    const unsigned q_sz = 3;
    unsigned char r[] = {6, 65, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test683)
{
    unsigned char p[] = {31, 52, 0, 0};
    const unsigned p_sz = 4;
    unsigned char q[] = {6, 65, 1};
    const unsigned q_sz = 3;
    unsigned char r[] = {31, 50, 65, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test684)
{
    unsigned char p[] = {31, 50, 65, 1};
    const unsigned p_sz = 4;
    unsigned char q[] = {70, 242, 234, 0};
    const unsigned q_sz = 4;
    unsigned char r[] = {89, 192, 171, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test685)
{
    unsigned char p[] = {216, 209, 36, 0, 0};
    const unsigned p_sz = 5;
    unsigned char q[] = {89, 192, 171, 1};
    const unsigned q_sz = 4;
    unsigned char r[] = {216, 136, 228, 171, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test686)
{
    unsigned char p[] = {216, 136, 228, 171, 1};
    const unsigned p_sz = 5;
    unsigned char q[] = {248, 130, 107, 209, 0};
    const unsigned q_sz = 5;
    unsigned char r[] = {32, 10, 143, 122, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test687)
{
    unsigned char p[] = {146, 122, 118, 7, 0, 0};
    const unsigned p_sz = 6;
    unsigned char q[] = {32, 10, 143, 122, 1};
    const unsigned q_sz = 5;
    unsigned char r[] = {146, 90, 124, 136, 122, 1};
    const unsigned r_sz = 6;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test688)
{
    unsigned char p[] = {146, 90, 124, 136, 122, 1};
    const unsigned p_sz = 6;
    unsigned char q[] = {173, 119, 76, 69, 131, 0};
    const unsigned q_sz = 6;
    unsigned char r[] = {63, 45, 48, 205, 249, 1};
    const unsigned r_sz = 6;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test689)
{
    unsigned char p[] = {238, 223, 161, 135, 53, 0, 0};
    const unsigned p_sz = 7;
    unsigned char q[] = {63, 45, 48, 205, 249, 1};
    const unsigned q_sz = 6;
    unsigned char r[] = {238, 224, 140, 183, 248, 249, 1};
    const unsigned r_sz = 7;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test690)
{
    unsigned char p[] = {238, 224, 140, 183, 248, 249, 1};
    const unsigned p_sz = 7;
    unsigned char q[] = {104, 249, 36, 81, 114, 200, 0};
    const unsigned q_sz = 7;
    unsigned char r[] = {134, 25, 168, 230, 138, 49, 1};
    const unsigned r_sz = 7;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test691)
{
    unsigned char p[] = {168, 216, 128, 233, 130, 243, 0, 0};
    const unsigned p_sz = 8;
    unsigned char q[] = {134, 25, 168, 230, 138, 49, 1};
    const unsigned q_sz = 7;
    unsigned char r[] = {168, 94, 153, 65, 100, 121, 49, 1};
    const unsigned r_sz = 8;
    unsigned char buf[8];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test692)
{
    unsigned char p[] = {168, 94, 153, 65, 100, 121, 49, 1};
    const unsigned p_sz = 8;
    unsigned char q[] = {100, 78, 44, 2, 161, 234, 217, 0};
    const unsigned q_sz = 8;
    unsigned char r[] = {204, 16, 181, 67, 197, 147, 232, 1};
    const unsigned r_sz = 8;
    unsigned char buf[8];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test693)
{
    unsigned char p[] = {122, 153, 90, 156, 175, 93, 46, 0, 0};
    const unsigned p_sz = 9;
    unsigned char q[] = {204, 16, 181, 67, 197, 147, 232, 1};
    const unsigned q_sz = 8;
    unsigned char r[] = {122, 85, 74, 41, 236, 152, 189, 232, 1};
    const unsigned r_sz = 9;
    unsigned char buf[9];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test694)
{
    unsigned char p[] = {122, 85, 74, 41, 236, 152, 189, 232, 1};
    const unsigned p_sz = 9;
    unsigned char q[] = {20, 149, 138, 201, 70, 238, 65, 150, 0};
    const unsigned q_sz = 9;
    unsigned char r[] = {110, 192, 192, 224, 170, 118, 252, 126, 1};
    const unsigned r_sz = 9;
    unsigned char buf[9];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test695)
{
    unsigned char p[] = {75, 93, 113, 85, 255, 179, 161, 20, 0, 0};
    const unsigned p_sz = 10;
    unsigned char q[] = {110, 192, 192, 224, 170, 118, 252, 126, 1};
    const unsigned q_sz = 9;
    unsigned char r[] = {75, 51, 177, 149, 31, 25, 215, 232, 126, 1};
    const unsigned r_sz = 10;
    unsigned char buf[10];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test696)
{
    unsigned char p[] = {75, 51, 177, 149, 31, 25, 215, 232, 126, 1};
    const unsigned p_sz = 10;
    unsigned char q[] = {25, 148, 148, 89, 183, 133, 255, 241, 128, 0};
    const unsigned q_sz = 10;
    unsigned char r[] = {82, 167, 37, 204, 168, 156, 40, 25, 254, 1};
    const unsigned r_sz = 10;
    unsigned char buf[10];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test697)
{
    unsigned char p[] = {168, 250, 250, 209, 189, 240, 102, 51, 242, 0, 0};
    const unsigned p_sz = 11;
    unsigned char q[] = {82, 167, 37, 204, 168, 156, 40, 25, 254, 1};
    const unsigned q_sz = 10;
    unsigned char r[] = {168, 168, 93, 244, 113, 88, 250, 27, 235, 254, 1};
    const unsigned r_sz = 11;
    unsigned char buf[11];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test698)
{
    unsigned char p[] = {168, 168, 93, 244, 113, 88, 250, 27, 235, 254, 1};
    const unsigned p_sz = 11;
    unsigned char q[] = {157, 225, 255, 232, 24, 241, 130, 60, 144, 66, 0};
    const unsigned q_sz = 11;
    unsigned char r[] = {53, 73, 162, 28, 105, 169, 120, 39, 123, 188, 1};
    const unsigned r_sz = 11;
    unsigned char buf[11];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test699)
{
    unsigned char p[] = {40, 103, 200, 157, 140, 100, 242, 67, 27, 230, 0, 0};
    const unsigned p_sz = 12;
    unsigned char q[] = {53, 73, 162, 28, 105, 169, 120, 39, 123, 188, 1};
    const unsigned q_sz = 11;
    unsigned char r[] = {40, 82, 129, 63, 144, 13, 91, 59, 60, 157, 188, 1};
    const unsigned r_sz = 12;
    unsigned char buf[12];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test700)
{
    unsigned char p[] = {40, 82, 129, 63, 144, 13, 91, 59, 60, 157, 188, 1};
    const unsigned p_sz = 12;
    unsigned char q[] = {232, 151, 49, 123, 96, 104, 5, 32, 168, 119, 144, 0};
    const unsigned q_sz = 12;
    unsigned char r[] = {192, 197, 176, 68, 240, 101, 94, 27, 148, 234, 44, 1};
    const unsigned r_sz = 12;
    unsigned char buf[12];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test701)
{
    unsigned char p[] = {168, 4, 210, 5, 99, 44, 196, 33, 234, 227, 26, 0, 0};
    const unsigned p_sz = 13;
    unsigned char q[] = {192, 197, 176, 68, 240, 101, 94, 27, 148, 234, 44, 1};
    const unsigned q_sz = 12;
    unsigned char r[] = {168, 196, 23, 181, 39, 220, 161, 127, 241, 119, 240, 44, 1};
    const unsigned r_sz = 13;
    unsigned char buf[13];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test702)
{
    unsigned char p[] = {168, 196, 23, 181, 39, 220, 161, 127, 241, 119, 240, 44, 1};
    const unsigned p_sz = 13;
    unsigned char q[] = {207, 187, 112, 222, 53, 157, 96, 81, 71, 139, 28, 239, 0};
    const unsigned q_sz = 13;
    unsigned char r[] = {103, 127, 103, 107, 18, 65, 193, 46, 182, 252, 236, 195, 1};
    const unsigned r_sz = 13;
    unsigned char buf[13];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test703)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char q[] = {219, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {219, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test704)
{
    unsigned char p[] = {234, 112, 150, 217, 250, 229, 20, 101, 189, 71, 177, 161, 242, 27, 109, 153, 182, 84, 117, 12, 254, 173, 161, 152, 154, 33, 51, 254, 43, 71, 131, 59, 53, 174, 155, 169, 183, 1, 49, 78, 28, 186, 83, 165, 78, 41, 56, 69, 78, 200, 124, 100, 123, 117, 66, 86, 172, 67, 23, 12, 2, 196, 100, 88, 244, 246, 180, 176, 233, 115, 34, 143, 133, 18, 104, 12, 184, 255, 234, 63, 94, 127, 120, 44, 118, 77, 119, 214, 165, 32, 9, 56, 50, 150, 52, 209, 150, 178, 76, 244, 145, 7, 96, 212, 61, 239, 156, 184, 66, 83, 219, 87, 44, 42, 140, 137, 249, 5, 163, 211, 236, 57, 245, 48, 140, 58, 105, 84, 84, 88, 213, 217, 166, 83, 160, 243, 183, 15, 245, 205, 3, 82, 155, 2, 64, 128, 22, 239, 13, 146, 138, 234, 252, 125, 15, 123, 26, 218, 203, 188, 200, 79, 58, 172, 164, 51, 73, 155, 230, 115, 229, 219, 99, 207, 17, 53, 6, 62, 184};
    const unsigned p_sz = 179;
    unsigned char q[] = {0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 117, 0, 59, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned q_sz = 179;
    unsigned char r[] = {234, 137, 150, 217, 250, 229, 20, 101, 189, 71, 177, 161, 242, 27, 109, 240, 182, 84, 117, 12, 254, 173, 161, 152, 154, 33, 51, 254, 43, 71, 214, 59, 53, 9, 155, 169, 183, 1, 49, 78, 28, 186, 83, 165, 78, 41, 56, 69, 78, 200, 124, 18, 123, 117, 66, 86, 172, 67, 23, 12, 2, 196, 100, 88, 244, 246, 180, 176, 233, 115, 34, 143, 196, 18, 104, 12, 184, 255, 234, 63, 94, 127, 120, 44, 118, 77, 119, 214, 165, 32, 9, 56, 50, 150, 200, 209, 150, 25, 76, 244, 145, 7, 96, 212, 61, 239, 156, 184, 66, 83, 219, 87, 44, 42, 140, 137, 249, 5, 163, 211, 236, 57, 245, 48, 140, 58, 105, 84, 84, 88, 213, 217, 166, 83, 160, 243, 183, 15, 245, 205, 3, 82, 155, 2, 64, 128, 22, 239, 13, 166, 138, 234, 252, 8, 15, 64, 203, 218, 203, 188, 200, 79, 58, 172, 164, 51, 73, 155, 230, 115, 229, 219, 99, 207, 17, 53, 6, 62, 184};
    const unsigned r_sz = 179;
    unsigned char buf[179];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test705)
{
    unsigned char p[] = {134, 0};
    const unsigned p_sz = 2;
    unsigned char q[] = {1};
    const unsigned q_sz = 1;
    unsigned char r[] = {134, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test706)
{
    unsigned char p[] = {134, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {119, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {241, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test707)
{
    unsigned char p[] = {174, 0, 0};
    const unsigned p_sz = 3;
    unsigned char q[] = {241, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {174, 241, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test708)
{
    unsigned char p[] = {174, 241, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {243, 210, 0};
    const unsigned q_sz = 3;
    unsigned char r[] = {93, 35, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test709)
{
    unsigned char p[] = {172, 159, 0, 0};
    const unsigned p_sz = 4;
    unsigned char q[] = {93, 35, 1};
    const unsigned q_sz = 3;
    unsigned char r[] = {172, 194, 35, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test710)
{
    unsigned char p[] = {172, 194, 35, 1};
    const unsigned p_sz = 4;
    unsigned char q[] = {203, 144, 150, 0};
    const unsigned q_sz = 4;
    unsigned char r[] = {103, 82, 181, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test711)
{
    unsigned char p[] = {247, 9, 227, 0, 0};
    const unsigned p_sz = 5;
    unsigned char q[] = {103, 82, 181, 1};
    const unsigned q_sz = 4;
    unsigned char r[] = {247, 110, 177, 181, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test712)
{
    unsigned char p[] = {247, 110, 177, 181, 1};
    const unsigned p_sz = 5;
    unsigned char q[] = {24, 97, 239, 246, 0};
    const unsigned q_sz = 5;
    unsigned char r[] = {239, 15, 94, 67, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test713)
{
    unsigned char p[] = {242, 216, 77, 136, 0, 0};
    const unsigned p_sz = 6;
    unsigned char q[] = {239, 15, 94, 67, 1};
    const unsigned q_sz = 5;
    unsigned char r[] = {242, 55, 66, 214, 67, 1};
    const unsigned r_sz = 6;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test714)
{
    unsigned char p[] = {242, 55, 66, 214, 67, 1};
    const unsigned p_sz = 6;
    unsigned char q[] = {42, 4, 173, 3, 98, 0};
    const unsigned q_sz = 6;
    unsigned char r[] = {216, 51, 239, 213, 33, 1};
    const unsigned r_sz = 6;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test715)
{
    unsigned char p[] = {247, 91, 127, 124, 152, 0, 0};
    const unsigned p_sz = 7;
    unsigned char q[] = {216, 51, 239, 213, 33, 1};
    const unsigned q_sz = 6;
    unsigned char r[] = {247, 131, 76, 147, 77, 33, 1};
    const unsigned r_sz = 7;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test716)
{
    unsigned char p[] = {247, 131, 76, 147, 77, 33, 1};
    const unsigned p_sz = 7;
    unsigned char q[] = {91, 69, 93, 71, 251, 217, 0};
    const unsigned q_sz = 7;
    unsigned char r[] = {172, 198, 17, 212, 182, 248, 1};
    const unsigned r_sz = 7;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test717)
{
    unsigned char p[] = {23, 8, 182, 156, 76, 109, 0, 0};
    const unsigned p_sz = 8;
    unsigned char q[] = {172, 198, 17, 212, 182, 248, 1};
    const unsigned q_sz = 7;
    unsigned char r[] = {23, 164, 112, 141, 152, 219, 248, 1};
    const unsigned r_sz = 8;
    unsigned char buf[8];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test718)
{
    unsigned char p[] = {23, 164, 112, 141, 152, 219, 248, 1};
    const unsigned p_sz = 8;
    unsigned char q[] = {128, 83, 42, 187, 169, 183, 181, 0};
    const unsigned q_sz = 8;
    unsigned char r[] = {151, 247, 90, 54, 49, 108, 77, 1};
    const unsigned r_sz = 8;
    unsigned char buf[8];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test719)
{
    unsigned char p[] = {52, 5, 88, 98, 251, 4, 21, 0, 0};
    const unsigned p_sz = 9;
    unsigned char q[] = {151, 247, 90, 54, 49, 108, 77, 1};
    const unsigned q_sz = 8;
    unsigned char r[] = {52, 146, 175, 56, 205, 53, 121, 77, 1};
    const unsigned r_sz = 9;
    unsigned char buf[9];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test720)
{
    unsigned char p[] = {52, 146, 175, 56, 205, 53, 121, 77, 1};
    const unsigned p_sz = 9;
    unsigned char q[] = {239, 153, 103, 214, 152, 177, 203, 163, 0};
    const unsigned q_sz = 9;
    unsigned char r[] = {219, 11, 200, 238, 85, 132, 178, 238, 1};
    const unsigned r_sz = 9;
    unsigned char buf[9];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test721)
{
    unsigned char p[] = {29, 248, 183, 109, 190, 218, 48, 66, 0, 0};
    const unsigned p_sz = 10;
    unsigned char q[] = {219, 11, 200, 238, 85, 132, 178, 238, 1};
    const unsigned q_sz = 9;
    unsigned char r[] = {29, 35, 188, 165, 80, 143, 180, 240, 238, 1};
    const unsigned r_sz = 10;
    unsigned char buf[10];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test722)
{
    unsigned char p[] = {29, 35, 188, 165, 80, 143, 180, 240, 238, 1};
    const unsigned p_sz = 10;
    unsigned char q[] = {205, 202, 192, 218, 44, 244, 159, 218, 223, 0};
    const unsigned q_sz = 10;
    unsigned char r[] = {208, 233, 124, 127, 124, 123, 43, 42, 49, 1};
    const unsigned r_sz = 10;
    unsigned char buf[10];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test723)
{
    unsigned char p[] = {76, 60, 156, 33, 250, 251, 5, 33, 113, 0, 0};
    const unsigned p_sz = 11;
    unsigned char q[] = {208, 233, 124, 127, 124, 123, 43, 42, 49, 1};
    const unsigned q_sz = 10;
    unsigned char r[] = {76, 236, 117, 93, 133, 135, 126, 10, 91, 49, 1};
    const unsigned r_sz = 11;
    unsigned char buf[11];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test724)
{
    unsigned char p[] = {76, 236, 117, 93, 133, 135, 126, 10, 91, 49, 1};
    const unsigned p_sz = 11;
    unsigned char q[] = {220, 47, 50, 63, 50, 216, 181, 69, 32, 240, 0};
    const unsigned q_sz = 11;
    unsigned char r[] = {144, 195, 71, 98, 183, 95, 203, 79, 123, 193, 1};
    const unsigned r_sz = 11;
    unsigned char buf[11];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test725)
{
    unsigned char p[] = {206, 27, 199, 223, 199, 255, 69, 77, 149, 8, 0, 0};
    const unsigned p_sz = 12;
    unsigned char q[] = {144, 195, 71, 98, 183, 95, 203, 79, 123, 193, 1};
    const unsigned q_sz = 11;
    unsigned char r[] = {206, 139, 4, 152, 165, 72, 26, 134, 218, 115, 193, 1};
    const unsigned r_sz = 12;
    unsigned char buf[12];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test726)
{
    unsigned char p[] = {206, 139, 4, 152, 165, 72, 26, 134, 218, 115, 193, 1};
    const unsigned p_sz = 12;
    unsigned char q[] = {206, 17, 158, 97, 181, 224, 59, 180, 93, 149, 66, 0};
    const unsigned q_sz = 12;
    unsigned char r[] = {0, 154, 154, 249, 16, 168, 33, 50, 135, 230, 131, 1};
    const unsigned r_sz = 12;
    unsigned char buf[12];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test727)
{
    unsigned char p[] = {243, 138, 16, 165, 198, 94, 176, 42, 171, 10, 64, 0, 0};
    const unsigned p_sz = 13;
    unsigned char q[] = {0, 154, 154, 249, 16, 168, 33, 50, 135, 230, 131, 1};
    const unsigned q_sz = 12;
    unsigned char r[] = {243, 138, 138, 63, 63, 78, 24, 11, 153, 141, 166, 131, 1};
    const unsigned r_sz = 13;
    unsigned char buf[13];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test728)
{
    unsigned char p[] = {243, 138, 138, 63, 63, 78, 24, 11, 153, 141, 166, 131, 1};
    const unsigned p_sz = 13;
    unsigned char q[] = {0, 180, 180, 254, 109, 45, 205, 153, 42, 78, 118, 23, 0};
    const unsigned q_sz = 13;
    unsigned char r[] = {243, 62, 62, 193, 82, 99, 213, 146, 179, 195, 208, 148, 1};
    const unsigned r_sz = 13;
    unsigned char buf[13];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test729)
{
    unsigned char p[] = {0, 108, 108, 161, 208, 27, 176, 119, 237, 58, 217, 13, 0, 0};
    const unsigned p_sz = 14;
    unsigned char q[] = {243, 62, 62, 193, 82, 99, 213, 146, 179, 195, 208, 148, 1};
    const unsigned q_sz = 13;
    unsigned char r[] = {0, 159, 82, 159, 17, 73, 211, 162, 127, 137, 26, 221, 148, 1};
    const unsigned r_sz = 14;
    unsigned char buf[14];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test730)
{
    unsigned char p[] = {0, 159, 82, 159, 17, 73, 211, 162, 127, 137, 26, 221, 148, 1};
    const unsigned p_sz = 14;
    unsigned char q[] = {22, 59, 59, 10, 57, 229, 99, 115, 219, 138, 62, 238, 64, 0};
    const unsigned q_sz = 14;
    unsigned char r[] = {22, 164, 105, 149, 40, 172, 176, 209, 164, 3, 36, 51, 212, 1};
    const unsigned r_sz = 14;
    unsigned char buf[14];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test731)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char q[] = {23, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {23, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test732)
{
    unsigned char p[] = {234, 112, 150, 217, 250, 229, 20, 101, 189, 71, 177, 161, 242, 27, 109, 153, 182, 84, 117, 12, 254, 173, 161, 152, 154, 33, 51, 254, 43, 71, 131, 59, 53, 174, 155, 169, 183, 1, 49, 78, 28, 186, 83, 165, 78, 41, 56, 69, 78, 231, 124, 100, 123, 117, 66, 86, 172, 67, 23, 12, 2, 196, 100, 88, 244, 246, 180, 176, 233, 115, 34, 143, 133, 18, 104, 12, 184, 255, 234, 63, 94, 127, 120, 44, 118, 77, 119, 214, 165, 32, 9, 56, 50, 150, 52, 209, 150, 178, 76, 244, 145, 7, 96, 212, 61, 239, 156, 184, 66, 83, 219, 87, 44, 42, 140, 137, 249, 5, 163, 211, 236, 57, 245, 48, 140, 58, 105, 84, 84, 88, 213, 217, 166, 83, 160, 243, 183, 15, 245, 205, 3, 82, 155, 2, 64, 128, 22, 239, 13, 146, 138, 234, 252, 125, 15, 123, 26, 218, 203, 188, 200, 79, 58, 172, 164, 51, 73, 155, 230, 115, 229, 219, 99, 207, 17, 53, 6, 62, 184};
    const unsigned p_sz = 179;
    unsigned char q[] = {0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 117, 0, 59, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned q_sz = 179;
    unsigned char r[] = {234, 137, 150, 217, 250, 229, 20, 101, 189, 71, 177, 161, 242, 27, 109, 240, 182, 84, 117, 12, 254, 173, 161, 152, 154, 33, 51, 254, 43, 71, 214, 59, 53, 9, 155, 169, 183, 1, 49, 78, 28, 186, 83, 165, 78, 41, 56, 69, 78, 200, 124, 18, 123, 117, 66, 86, 172, 67, 23, 12, 2, 196, 100, 88, 244, 246, 180, 176, 233, 115, 34, 143, 196, 18, 104, 12, 184, 255, 234, 63, 94, 127, 120, 44, 118, 77, 119, 214, 165, 32, 9, 56, 50, 150, 200, 209, 150, 25, 76, 244, 145, 7, 96, 212, 61, 239, 156, 184, 66, 83, 219, 87, 44, 42, 140, 137, 249, 5, 163, 211, 236, 57, 245, 48, 140, 58, 105, 84, 84, 88, 213, 217, 166, 83, 160, 243, 183, 15, 245, 205, 3, 82, 155, 2, 64, 128, 22, 239, 13, 166, 138, 234, 252, 8, 15, 64, 203, 218, 203, 188, 200, 79, 58, 172, 164, 51, 73, 155, 230, 115, 229, 219, 99, 207, 17, 53, 6, 62, 184};
    const unsigned r_sz = 179;
    unsigned char buf[179];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test733)
{
    unsigned char p[] = {144, 0};
    const unsigned p_sz = 2;
    unsigned char q[] = {1};
    const unsigned q_sz = 1;
    unsigned char r[] = {144, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test734)
{
    unsigned char p[] = {144, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {95, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {207, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test735)
{
    unsigned char p[] = {32, 0, 0};
    const unsigned p_sz = 3;
    unsigned char q[] = {207, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {32, 207, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test736)
{
    unsigned char p[] = {32, 207, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {53, 70, 0};
    const unsigned q_sz = 3;
    unsigned char r[] = {21, 137, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test737)
{
    unsigned char p[] = {188, 253, 0, 0};
    const unsigned p_sz = 4;
    unsigned char q[] = {21, 137, 1};
    const unsigned q_sz = 3;
    unsigned char r[] = {188, 232, 137, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test738)
{
    unsigned char p[] = {188, 232, 137, 1};
    const unsigned p_sz = 4;
    unsigned char q[] = {133, 111, 176, 0};
    const unsigned q_sz = 4;
    unsigned char r[] = {57, 135, 57, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test739)
{
    unsigned char p[] = {183, 163, 152, 0, 0};
    const unsigned p_sz = 5;
    unsigned char q[] = {57, 135, 57, 1};
    const unsigned q_sz = 4;
    unsigned char r[] = {183, 154, 31, 57, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test740)
{
    unsigned char p[] = {183, 154, 31, 57, 1};
    const unsigned p_sz = 5;
    unsigned char q[] = {77, 16, 77, 207, 0};
    const unsigned q_sz = 5;
    unsigned char r[] = {250, 138, 82, 246, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test741)
{
    unsigned char p[] = {145, 143, 145, 232, 0, 0};
    const unsigned p_sz = 6;
    unsigned char q[] = {250, 138, 82, 246, 1};
    const unsigned q_sz = 5;
    unsigned char r[] = {145, 117, 27, 186, 246, 1};
    const unsigned r_sz = 6;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test742)
{
    unsigned char p[] = {145, 117, 27, 186, 246, 1};
    const unsigned p_sz = 6;
    unsigned char q[] = {174, 252, 113, 147, 56, 0};
    const unsigned q_sz = 6;
    unsigned char r[] = {63, 137, 106, 41, 206, 1};
    const unsigned r_sz = 6;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test743)
{
    unsigned char p[] = {160, 39, 249, 22, 97, 0, 0};
    const unsigned p_sz = 7;
    unsigned char q[] = {63, 137, 106, 41, 206, 1};
    const unsigned q_sz = 6;
    unsigned char r[] = {160, 24, 112, 124, 72, 206, 1};
    const unsigned r_sz = 7;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test744)
{
    unsigned char p[] = {160, 24, 112, 124, 72, 206, 1};
    const unsigned p_sz = 7;
    unsigned char q[] = {178, 147, 214, 130, 228, 193, 0};
    const unsigned q_sz = 7;
    unsigned char r[] = {18, 139, 166, 254, 172, 15, 1};
    const unsigned r_sz = 7;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test745)
{
    unsigned char p[] = {67, 64, 144, 240, 119, 220, 0, 0};
    const unsigned p_sz = 8;
    unsigned char q[] = {18, 139, 166, 254, 172, 15, 1};
    const unsigned q_sz = 7;
    unsigned char r[] = {67, 82, 27, 86, 137, 112, 15, 1};
    const unsigned r_sz = 8;
    unsigned char buf[8];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test746)
{
    unsigned char p[] = {67, 82, 27, 86, 137, 112, 15, 1};
    const unsigned p_sz = 8;
    unsigned char q[] = {61, 88, 178, 91, 18, 240, 16, 0};
    const unsigned q_sz = 8;
    unsigned char r[] = {126, 10, 169, 13, 155, 128, 31, 1};
    const unsigned r_sz = 8;
    unsigned char buf[8];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test747)
{
    unsigned char p[] = {34, 62, 107, 172, 175, 166, 184, 0, 0};
    const unsigned p_sz = 9;
    unsigned char q[] = {126, 10, 169, 13, 155, 128, 31, 1};
    const unsigned q_sz = 8;
    unsigned char r[] = {34, 64, 97, 5, 162, 61, 56, 31, 1};
    const unsigned r_sz = 9;
    unsigned char buf[9];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test748)
{
    unsigned char p[] = {34, 64, 97, 5, 162, 61, 56, 31, 1};
    const unsigned p_sz = 9;
    unsigned char q[] = {41, 192, 124, 107, 141, 176, 182, 235, 0};
    const unsigned q_sz = 9;
    unsigned char r[] = {11, 128, 29, 110, 47, 141, 142, 244, 1};
    const unsigned r_sz = 9;
    unsigned char buf[9];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test749)
{
    unsigned char p[] = {94, 162, 148, 128, 59, 145, 76, 183, 0, 0};
    const unsigned p_sz = 10;
    unsigned char q[] = {11, 128, 29, 110, 47, 141, 142, 244, 1};
    const unsigned q_sz = 9;
    unsigned char r[] = {94, 169, 20, 157, 85, 190, 193, 57, 244, 1};
    const unsigned r_sz = 10;
    unsigned char buf[10];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test750)
{
    unsigned char p[] = {94, 169, 20, 157, 85, 190, 193, 57, 244, 1};
    const unsigned p_sz = 10;
    unsigned char q[] = {94, 113, 226, 45, 228, 48, 177, 222, 127, 0};
    const unsigned q_sz = 10;
    unsigned char r[] = {0, 216, 246, 176, 177, 142, 112, 231, 139, 1};
    const unsigned r_sz = 10;
    unsigned char buf[10];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test751)
{
    unsigned char p[] = {94, 113, 226, 45, 228, 48, 177, 222, 127, 0, 0};
    const unsigned p_sz = 11;
    unsigned char q[] = {0, 216, 246, 176, 177, 142, 112, 231, 139, 1};
    const unsigned q_sz = 10;
    unsigned char r[] = {94, 113, 58, 219, 84, 129, 63, 174, 152, 139, 1};
    const unsigned r_sz = 11;
    unsigned char buf[11];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test752)
{
    unsigned char p[] = {94, 113, 58, 219, 84, 129, 63, 174, 152, 139, 1};
    const unsigned p_sz = 11;
    unsigned char q[] = {0, 215, 91, 209, 32, 246, 118, 1, 228, 241, 0};
    const unsigned q_sz = 11;
    unsigned char r[] = {94, 166, 97, 10, 116, 119, 73, 175, 124, 122, 1};
    const unsigned r_sz = 11;
    unsigned char buf[11];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test753)
{
    unsigned char p[] = {0, 18, 154, 239, 210, 144, 255, 80, 89, 61, 0, 0};
    const unsigned p_sz = 12;
    unsigned char q[] = {94, 166, 97, 10, 116, 119, 73, 175, 124, 122, 1};
    const unsigned q_sz = 11;
    unsigned char r[] = {0, 76, 60, 142, 216, 228, 136, 25, 246, 65, 122, 1};
    const unsigned r_sz = 12;
    unsigned char buf[12];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test754)
{
    unsigned char p[] = {0, 76, 60, 142, 216, 228, 136, 25, 246, 65, 122, 1};
    const unsigned p_sz = 12;
    unsigned char q[] = {35, 149, 119, 24, 176, 180, 23, 137, 91, 83, 247, 0};
    const unsigned q_sz = 12;
    unsigned char r[] = {35, 217, 75, 150, 104, 80, 159, 144, 173, 18, 141, 1};
    const unsigned r_sz = 12;
    unsigned char buf[12];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test755)
{
    unsigned char p[] = {116, 41, 64, 207, 167, 11, 91, 74, 160, 229, 100, 0, 0};
    const unsigned p_sz = 13;
    unsigned char q[] = {35, 217, 75, 150, 104, 80, 159, 144, 173, 18, 141, 1};
    const unsigned q_sz = 12;
    unsigned char r[] = {116, 10, 153, 132, 49, 99, 11, 213, 48, 72, 118, 141, 1};
    const unsigned r_sz = 13;
    unsigned char buf[13];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test756)
{
    unsigned char p[] = {116, 10, 153, 132, 49, 99, 11, 213, 48, 72, 118, 141, 1};
    const unsigned p_sz = 13;
    unsigned char q[] = {91, 21, 18, 36, 73, 134, 163, 152, 181, 19, 176, 193, 0};
    const unsigned q_sz = 13;
    unsigned char r[] = {47, 31, 139, 160, 120, 229, 168, 77, 133, 91, 198, 76, 1};
    const unsigned r_sz = 13;
    unsigned char buf[13];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test757)
{
    unsigned char p[] = {34, 85, 243, 251, 209, 208, 17, 6, 10, 201, 216, 80, 0, 0};
    const unsigned p_sz = 14;
    unsigned char q[] = {47, 31, 139, 160, 120, 229, 168, 77, 133, 91, 198, 76, 1};
    const unsigned q_sz = 13;
    unsigned char r[] = {34, 122, 236, 112, 113, 168, 244, 174, 71, 76, 131, 150, 76, 1};
    const unsigned r_sz = 14;
    unsigned char buf[14];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test758)
{
    unsigned char p[] = {34, 122, 236, 112, 113, 168, 244, 174, 71, 76, 131, 150, 76, 1};
    const unsigned p_sz = 14;
    unsigned char q[] = {234, 97, 174, 29, 192, 236, 175, 67, 231, 193, 237, 18, 81, 0};
    const unsigned q_sz = 14;
    unsigned char r[] = {200, 27, 66, 109, 177, 68, 91, 237, 160, 141, 110, 132, 29, 1};
    const unsigned r_sz = 14;
    unsigned char buf[14];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test759)
{
    unsigned char p[] = {91, 79, 32, 120, 34, 130, 126, 252, 170, 124, 220, 53, 201, 0, 0};
    const unsigned p_sz = 15;
    unsigned char q[] = {200, 27, 66, 109, 177, 68, 91, 237, 160, 141, 110, 132, 29, 1};
    const unsigned q_sz = 14;
    unsigned char r[] = {91, 135, 59, 58, 79, 51, 58, 167, 71, 220, 81, 91, 77, 29, 1};
    const unsigned r_sz = 15;
    unsigned char buf[15];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test760)
{
    unsigned char p[] = {91, 135, 59, 58, 79, 51, 58, 167, 71, 220, 81, 91, 77, 29, 1};
    const unsigned p_sz = 15;
    unsigned char q[] = {93, 208, 142, 27, 56, 155, 166, 247, 215, 186, 159, 1, 197, 124, 0};
    const unsigned q_sz = 15;
    unsigned char r[] = {6, 87, 181, 33, 119, 168, 156, 80, 144, 102, 206, 90, 136, 97, 1};
    const unsigned r_sz = 15;
    unsigned char buf[15];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test761)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char q[] = {181, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {181, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test762)
{
    unsigned char p[] = {234, 112, 150, 217, 250, 229, 20, 101, 189, 71, 177, 161, 242, 27, 109, 153, 182, 84, 117, 12, 254, 173, 161, 152, 154, 33, 51, 254, 43, 71, 131, 59, 53, 174, 155, 169, 183, 1, 49, 78, 28, 186, 83, 165, 78, 41, 56, 69, 78, 231, 124, 100, 123, 117, 66, 86, 172, 67, 23, 12, 2, 196, 100, 88, 244, 246, 180, 176, 233, 115, 34, 143, 133, 18, 104, 12, 184, 255, 234, 63, 94, 127, 120, 44, 118, 77, 119, 214, 165, 32, 9, 56, 50, 150, 52, 209, 150, 178, 76, 244, 145, 7, 96, 212, 61, 239, 156, 184, 66, 83, 219, 87, 44, 42, 140, 137, 249, 5, 163, 211, 236, 57, 245, 48, 140, 58, 105, 84, 84, 88, 213, 217, 166, 83, 160, 243, 161, 15, 245, 205, 3, 82, 155, 2, 64, 128, 22, 239, 13, 146, 138, 234, 252, 125, 15, 123, 26, 218, 203, 188, 200, 79, 58, 172, 164, 51, 73, 155, 230, 115, 229, 219, 99, 207, 17, 53, 6, 62, 184};
    const unsigned p_sz = 179;
    unsigned char q[] = {0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 117, 0, 59, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned q_sz = 179;
    unsigned char r[] = {234, 137, 150, 217, 250, 229, 20, 101, 189, 71, 177, 161, 242, 27, 109, 240, 182, 84, 117, 12, 254, 173, 161, 152, 154, 33, 51, 254, 43, 71, 214, 59, 53, 9, 155, 169, 183, 1, 49, 78, 28, 186, 83, 165, 78, 41, 56, 69, 78, 200, 124, 18, 123, 117, 66, 86, 172, 67, 23, 12, 2, 196, 100, 88, 244, 246, 180, 176, 233, 115, 34, 143, 196, 18, 104, 12, 184, 255, 234, 63, 94, 127, 120, 44, 118, 77, 119, 214, 165, 32, 9, 56, 50, 150, 200, 209, 150, 25, 76, 244, 145, 7, 96, 212, 61, 239, 156, 184, 66, 83, 219, 87, 44, 42, 140, 137, 249, 5, 163, 211, 236, 57, 245, 48, 140, 58, 105, 84, 84, 88, 213, 217, 166, 83, 160, 243, 183, 15, 245, 205, 3, 82, 155, 2, 64, 128, 22, 239, 13, 166, 138, 234, 252, 8, 15, 64, 203, 218, 203, 188, 200, 79, 58, 172, 164, 51, 73, 155, 230, 115, 229, 219, 99, 207, 17, 53, 6, 62, 184};
    const unsigned r_sz = 179;
    unsigned char buf[179];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test763)
{
    unsigned char p[] = {171, 0};
    const unsigned p_sz = 2;
    unsigned char q[] = {1};
    const unsigned q_sz = 1;
    unsigned char r[] = {171, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test764)
{
    unsigned char p[] = {171, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {204, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {103, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test765)
{
    unsigned char p[] = {212, 0, 0};
    const unsigned p_sz = 3;
    unsigned char q[] = {103, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {212, 103, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test766)
{
    unsigned char p[] = {212, 103, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {8, 82, 0};
    const unsigned q_sz = 3;
    unsigned char r[] = {220, 53, 1};
    const unsigned r_sz = 3;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test767)
{
    unsigned char p[] = {223, 235, 0, 0};
    const unsigned p_sz = 4;
    unsigned char q[] = {220, 53, 1};
    const unsigned q_sz = 3;
    unsigned char r[] = {223, 55, 53, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test768)
{
    unsigned char p[] = {223, 55, 53, 1};
    const unsigned p_sz = 4;
    unsigned char q[] = {186, 198, 51, 0};
    const unsigned q_sz = 4;
    unsigned char r[] = {101, 241, 6, 1};
    const unsigned r_sz = 4;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test769)
{
    unsigned char p[] = {65, 119, 16, 0, 0};
    const unsigned p_sz = 5;
    unsigned char q[] = {101, 241, 6, 1};
    const unsigned q_sz = 4;
    unsigned char r[] = {65, 18, 225, 6, 1};
    const unsigned r_sz = 5;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test770)
{
    unsigned char p[] = {109, 235, 127, 111, 0, 0};
    const unsigned p_sz = 6;
    unsigned char q[] = {65, 18, 225, 6, 1};
    const unsigned q_sz = 5;
    unsigned char r[] = {109, 170, 109, 142, 6, 1};
    const unsigned r_sz = 6;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test771)
{
    unsigned char p[] = {109, 170, 109, 142, 6, 1};
    const unsigned p_sz = 6;
    unsigned char q[] = {197, 228, 117, 242, 220, 0};
    const unsigned q_sz = 6;
    unsigned char r[] = {168, 78, 24, 124, 218, 1};
    const unsigned r_sz = 6;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test772)
{
    unsigned char p[] = {112, 235, 17, 74, 232, 0, 0};
    const unsigned p_sz = 7;
    unsigned char q[] = {168, 78, 24, 124, 218, 1};
    const unsigned q_sz = 6;
    unsigned char r[] = {112, 67, 95, 82, 148, 218, 1};
    const unsigned r_sz = 7;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test773)
{
    unsigned char p[] = {112, 67, 95, 82, 148, 218, 1};
    const unsigned p_sz = 7;
    unsigned char q[] = {123, 222, 93, 84, 191, 24, 0};
    const unsigned q_sz = 7;
    unsigned char r[] = {11, 157, 2, 6, 43, 194, 1};
    const unsigned r_sz = 7;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test774)
{
    unsigned char p[] = {219, 194, 111, 82, 126, 39, 0, 0};
    const unsigned p_sz = 8;
    unsigned char q[] = {11, 157, 2, 6, 43, 194, 1};
    const unsigned q_sz = 7;
    unsigned char r[] = {219, 201, 242, 80, 120, 12, 194, 1};
    const unsigned r_sz = 8;
    unsigned char buf[8];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test775)
{
    unsigned char p[] = {219, 201, 242, 80, 120, 12, 194, 1};
    const unsigned p_sz = 8;
    unsigned char q[] = {69, 38, 22, 58, 56, 5, 11, 0};
    const unsigned q_sz = 8;
    unsigned char r[] = {158, 239, 228, 106, 64, 9, 201, 1};
    const unsigned r_sz = 8;
    unsigned char buf[8];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test776)
{
    unsigned char p[] = {160, 13, 202, 67, 156, 66, 101, 0, 0};
    const unsigned p_sz = 9;
    unsigned char q[] = {158, 239, 228, 106, 64, 9, 201, 1};
    const unsigned q_sz = 8;
    unsigned char r[] = {160, 147, 37, 167, 246, 2, 108, 201, 1};
    const unsigned r_sz = 9;
    unsigned char buf[9];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test777)
{
    unsigned char p[] = {160, 147, 37, 167, 246, 2, 108, 201, 1};
    const unsigned p_sz = 9;
    unsigned char q[] = {162, 157, 61, 129, 120, 106, 226, 101, 0};
    const unsigned q_sz = 9;
    unsigned char r[] = {2, 14, 24, 38, 142, 104, 142, 172, 1};
    const unsigned r_sz = 9;
    unsigned char buf[9];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test778)
{
    unsigned char p[] = {176, 190, 64, 77, 206, 202, 133, 26, 0, 0};
    const unsigned p_sz = 10;
    unsigned char q[] = {2, 14, 24, 38, 142, 104, 142, 172, 1};
    const unsigned q_sz = 9;
    unsigned char r[] = {176, 188, 78, 85, 232, 68, 237, 148, 172, 1};
    const unsigned r_sz = 10;
    unsigned char buf[10];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test779)
{
    unsigned char p[] = {176, 188, 78, 85, 232, 68, 237, 148, 172, 1};
    const unsigned p_sz = 10;
    unsigned char q[] = {2, 14, 24, 38, 142, 104, 142, 172, 1, 0};
    const unsigned q_sz = 10;
    unsigned char r[] = {178, 178, 86, 115, 102, 44, 99, 56, 173, 1};
    const unsigned r_sz = 10;
    unsigned char buf[10];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test780)
{
    unsigned char p[] = {122, 123, 2, 125, 144, 253, 144, 25, 61, 0, 0};
    const unsigned p_sz = 11;
    unsigned char q[] = {178, 178, 86, 115, 102, 44, 99, 56, 173, 1};
    const unsigned q_sz = 10;
    unsigned char r[] = {122, 201, 176, 43, 227, 155, 188, 122, 5, 173, 1};
    const unsigned r_sz = 11;
    unsigned char buf[11];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test781)
{
    unsigned char p[] = {122, 201, 176, 43, 227, 155, 188, 122, 5, 173, 1};
    const unsigned p_sz = 11;
    unsigned char q[] = {49, 49, 87, 23, 217, 89, 109, 179, 138, 36, 0};
    const unsigned q_sz = 11;
    unsigned char r[] = {75, 248, 231, 60, 58, 194, 209, 201, 143, 137, 1};
    const unsigned r_sz = 11;
    unsigned char buf[11];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test782)
{
    unsigned char p[] = {253, 253, 254, 24, 108, 189, 157, 94, 118, 151, 0, 0};
    const unsigned p_sz = 12;
    unsigned char q[] = {75, 248, 231, 60, 58, 194, 209, 201, 143, 137, 1};
    const unsigned q_sz = 11;
    unsigned char r[] = {253, 182, 6, 255, 80, 135, 95, 143, 191, 24, 137, 1};
    const unsigned r_sz = 12;
    unsigned char buf[12];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test783)
{
    unsigned char p[] = {253, 182, 6, 255, 80, 135, 95, 143, 191, 24, 137, 1};
    const unsigned p_sz = 12;
    unsigned char q[] = {123, 189, 137, 94, 4, 185, 57, 76, 152, 194, 27, 0};
    const unsigned q_sz = 12;
    unsigned char r[] = {134, 11, 143, 161, 84, 62, 102, 195, 39, 218, 146, 1};
    const unsigned r_sz = 12;
    unsigned char buf[12];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test784)
{
    unsigned char p[] = {191, 134, 95, 185, 131, 5, 168, 64, 128, 186, 11, 0, 0};
    const unsigned p_sz = 13;
    unsigned char q[] = {134, 11, 143, 161, 84, 62, 102, 195, 39, 218, 146, 1};
    const unsigned q_sz = 12;
    unsigned char r[] = {191, 0, 84, 54, 34, 81, 150, 38, 67, 157, 209, 146, 1};
    const unsigned r_sz = 13;
    unsigned char buf[13];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test785)
{
    unsigned char p[] = {191, 0, 84, 54, 34, 81, 150, 38, 67, 157, 209, 146, 1};
    const unsigned p_sz = 13;
    unsigned char q[] = {4, 21, 98, 69, 159, 152, 48, 147, 65, 74, 93, 183, 0};
    const unsigned q_sz = 13;
    unsigned char r[] = {187, 21, 54, 115, 189, 201, 166, 181, 2, 215, 140, 37, 1};
    const unsigned r_sz = 13;
    unsigned char buf[13];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test786)
{
    unsigned char p[] = {202, 121, 71, 74, 237, 254, 17, 174, 128, 208, 204, 122, 0, 0};
    const unsigned p_sz = 14;
    unsigned char q[] = {187, 21, 54, 115, 189, 201, 166, 181, 2, 215, 140, 37, 1};
    const unsigned q_sz = 13;
    unsigned char r[] = {202, 194, 82, 124, 158, 67, 216, 8, 53, 210, 27, 246, 37, 1};
    const unsigned r_sz = 14;
    unsigned char buf[14];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test787)
{
    unsigned char p[] = {202, 194, 82, 124, 158, 67, 216, 8, 53, 210, 27, 246, 37, 1};
    const unsigned p_sz = 14;
    unsigned char q[] = {234, 253, 165, 67, 70, 155, 154, 203, 100, 189, 125, 244, 50, 0};
    const unsigned q_sz = 14;
    unsigned char r[] = {32, 63, 247, 63, 216, 216, 66, 195, 81, 111, 102, 2, 23, 1};
    const unsigned r_sz = 14;
    unsigned char buf[14];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test788)
{
    unsigned char p[] = {157, 223, 7, 208, 105, 144, 228, 207, 167, 147, 71, 44, 221, 0, 0};
    const unsigned p_sz = 15;
    unsigned char q[] = {32, 63, 247, 63, 216, 216, 66, 195, 81, 111, 102, 2, 23, 1};
    const unsigned q_sz = 14;
    unsigned char r[] = {157, 255, 56, 39, 86, 72, 60, 141, 100, 194, 40, 74, 223, 23, 1};
    const unsigned r_sz = 15;
    unsigned char buf[15];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test789)
{
    unsigned char p[] = {157, 255, 56, 39, 86, 72, 60, 141, 100, 194, 40, 74, 223, 23, 1};
    const unsigned p_sz = 15;
    unsigned char q[] = {202, 251, 193, 251, 95, 95, 166, 48, 117, 23, 50, 47, 141, 153, 0};
    const unsigned q_sz = 15;
    unsigned char r[] = {87, 4, 249, 220, 9, 23, 154, 189, 17, 213, 26, 101, 82, 142, 1};
    const unsigned r_sz = 15;
    unsigned char buf[15];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test790)
{
    unsigned char p[] = {216, 213, 9, 213, 176, 176, 46, 166, 14, 20, 237, 131, 59, 207, 0, 0};
    const unsigned p_sz = 16;
    unsigned char q[] = {87, 4, 249, 220, 9, 23, 154, 189, 17, 213, 26, 101, 82, 142, 1};
    const unsigned q_sz = 15;
    unsigned char r[] = {216, 130, 13, 44, 108, 185, 57, 60, 179, 5, 56, 153, 94, 157, 142, 1};
    const unsigned r_sz = 16;
    unsigned char buf[16];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test791)
{
    unsigned char p[] = {216, 130, 13, 44, 108, 185, 57, 60, 179, 5, 56, 153, 94, 157, 142, 1};
    const unsigned p_sz = 16;
    unsigned char q[] = {125, 93, 135, 88, 234, 196, 28, 99, 57, 178, 115, 102, 112, 40, 80, 0};
    const unsigned q_sz = 16;
    unsigned char r[] = {165, 223, 138, 116, 134, 125, 37, 95, 138, 183, 75, 255, 46, 181, 222, 1};
    const unsigned r_sz = 16;
    unsigned char buf[16];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test792)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char q[] = {191, 0};
    const unsigned q_sz = 2;
    unsigned char r[] = {191, 1};
    const unsigned r_sz = 2;
    unsigned char buf[2];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(GfPolyAdd, Test793)
{
    unsigned char p[] = {234, 112, 150, 217, 250, 229, 20, 101, 189, 71, 177, 161, 242, 27, 109, 153, 141, 84, 117, 12, 254, 173, 161, 152, 154, 33, 51, 254, 43, 71, 131, 59, 53, 174, 155, 169, 183, 1, 49, 78, 28, 186, 83, 165, 78, 41, 56, 69, 78, 231, 124, 100, 123, 117, 66, 86, 172, 67, 23, 12, 2, 196, 100, 88, 244, 246, 180, 176, 233, 115, 34, 143, 133, 18, 104, 12, 184, 255, 234, 63, 94, 127, 120, 44, 118, 77, 119, 214, 165, 32, 9, 56, 50, 150, 52, 209, 150, 178, 76, 244, 145, 7, 96, 212, 61, 239, 156, 184, 66, 83, 219, 87, 44, 42, 140, 137, 249, 5, 163, 211, 236, 57, 245, 48, 140, 58, 105, 84, 84, 88, 213, 217, 166, 83, 160, 243, 161, 15, 245, 205, 3, 82, 155, 2, 64, 128, 22, 239, 13, 146, 138, 234, 252, 125, 15, 123, 26, 218, 203, 188, 200, 79, 58, 172, 164, 51, 73, 155, 230, 115, 229, 219, 99, 207, 17, 53, 6, 62, 184};
    const unsigned p_sz = 179;
    unsigned char q[] = {0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 117, 0, 59, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned q_sz = 179;
    unsigned char r[] = {234, 137, 150, 217, 250, 229, 20, 101, 189, 71, 177, 161, 242, 27, 109, 240, 182, 84, 117, 12, 254, 173, 161, 152, 154, 33, 51, 254, 43, 71, 214, 59, 53, 9, 155, 169, 183, 1, 49, 78, 28, 186, 83, 165, 78, 41, 56, 69, 78, 200, 124, 18, 123, 117, 66, 86, 172, 67, 23, 12, 2, 196, 100, 88, 244, 246, 180, 176, 233, 115, 34, 143, 196, 18, 104, 12, 184, 255, 234, 63, 94, 127, 120, 44, 118, 77, 119, 214, 165, 32, 9, 56, 50, 150, 200, 209, 150, 25, 76, 244, 145, 7, 96, 212, 61, 239, 156, 184, 66, 83, 219, 87, 44, 42, 140, 137, 249, 5, 163, 211, 236, 57, 245, 48, 140, 58, 105, 84, 84, 88, 213, 217, 166, 83, 160, 243, 183, 15, 245, 205, 3, 82, 155, 2, 64, 128, 22, 239, 13, 166, 138, 234, 252, 8, 15, 64, 203, 218, 203, 188, 200, 79, 58, 172, 164, 51, 73, 155, 230, 115, 229, 219, 99, 207, 17, 53, 6, 62, 184};
    const unsigned r_sz = 179;
    unsigned char buf[179];
    unsigned buf_sz;
    redupe_gf_poly_add(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}
