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

TEST(GfPolyMul, Test0)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char q[] = {1, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {1, 1};
    const unsigned r_sz = 2;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test1)
{
    unsigned char p[] = {1, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {1, 2};
    const unsigned q_sz = 2;
    unsigned char r[] = {1, 3, 2};
    const unsigned r_sz = 3;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test2)
{
    unsigned char p[] = {1, 3, 2};
    const unsigned p_sz = 3;
    unsigned char q[] = {1, 4};
    const unsigned q_sz = 2;
    unsigned char r[] = {1, 7, 14, 8};
    const unsigned r_sz = 4;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test3)
{
    unsigned char p[] = {1, 7, 14, 8};
    const unsigned p_sz = 4;
    unsigned char q[] = {1, 8};
    const unsigned q_sz = 2;
    unsigned char r[] = {1, 15, 54, 120, 64};
    const unsigned r_sz = 5;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test4)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char q[] = {90, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {90, 1};
    const unsigned r_sz = 2;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test5)
{
    unsigned char p[] = {111, 181, 201, 16, 0};
    const unsigned p_sz = 5;
    unsigned char q[] = {90, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {253, 0, 0, 0, 16, 0};
    const unsigned r_sz = 6;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test6)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char q[] = {8, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {8, 1};
    const unsigned r_sz = 2;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test7)
{
    unsigned char p[] = {8, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {90, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {234, 82, 1};
    const unsigned r_sz = 3;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test8)
{
    unsigned char p[] = {39, 188, 101, 139, 0};
    const unsigned p_sz = 5;
    unsigned char q[] = {234, 82, 1};
    const unsigned q_sz = 3;
    unsigned char r[] = {160, 135, 0, 0, 75, 139, 0};
    const unsigned r_sz = 7;
    unsigned char buf[8];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test9)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char q[] = {119, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {119, 1};
    const unsigned r_sz = 2;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test10)
{
    unsigned char p[] = {245, 165, 77, 68, 0};
    const unsigned p_sz = 5;
    unsigned char q[] = {119, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {90, 0, 0, 0, 68, 0};
    const unsigned r_sz = 6;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test11)
{
    unsigned char p[] = {119, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {217, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {66, 174, 1};
    const unsigned r_sz = 3;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test12)
{
    unsigned char p[] = {125, 37, 114, 26, 0};
    const unsigned p_sz = 5;
    unsigned char q[] = {66, 174, 1};
    const unsigned q_sz = 3;
    unsigned char r[] = {204, 84, 0, 0, 24, 26, 0};
    const unsigned r_sz = 7;
    unsigned char buf[8];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test13)
{
    unsigned char p[] = {1, 15, 54, 120, 64};
    const unsigned p_sz = 5;
    unsigned char q[] = {1, 16};
    const unsigned q_sz = 2;
    unsigned char r[] = {1, 31, 198, 63, 147, 116};
    const unsigned r_sz = 6;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test14)
{
    unsigned char p[] = {1, 31, 198, 63, 147, 116};
    const unsigned p_sz = 6;
    unsigned char q[] = {1, 32};
    const unsigned q_sz = 2;
    unsigned char r[] = {1, 63, 1, 218, 32, 227, 38};
    const unsigned r_sz = 7;
    unsigned char buf[8];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test15)
{
    unsigned char p[] = {1, 63, 1, 218, 32, 227, 38};
    const unsigned p_sz = 7;
    unsigned char q[] = {1, 64};
    const unsigned q_sz = 2;
    unsigned char r[] = {1, 127, 122, 154, 164, 11, 68, 117};
    const unsigned r_sz = 8;
    unsigned char buf[9];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test16)
{
    unsigned char p[] = {1, 127, 122, 154, 164, 11, 68, 117};
    const unsigned p_sz = 8;
    unsigned char q[] = {1, 128};
    const unsigned q_sz = 2;
    unsigned char r[] = {1, 255, 11, 81, 54, 239, 173, 200, 24};
    const unsigned r_sz = 9;
    unsigned char buf[10];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test17)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char q[] = {16, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {16, 1};
    const unsigned r_sz = 2;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test18)
{
    unsigned char p[] = {252, 198, 230, 228, 73, 82, 168, 132, 0};
    const unsigned p_sz = 9;
    unsigned char q[] = {16, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {123, 0, 0, 0, 0, 0, 0, 0, 132, 0};
    const unsigned r_sz = 10;
    unsigned char buf[11];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test19)
{
    unsigned char p[] = {8, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {16, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {128, 24, 1};
    const unsigned r_sz = 3;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test20)
{
    unsigned char p[] = {72, 94, 245, 12, 84, 114, 172, 10, 0};
    const unsigned p_sz = 9;
    unsigned char q[] = {128, 24, 1};
    const unsigned q_sz = 3;
    unsigned char r[] = {243, 178, 0, 0, 0, 0, 0, 0, 92, 10, 0};
    const unsigned r_sz = 11;
    unsigned char buf[12];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test21)
{
    unsigned char p[] = {128, 24, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {64, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {135, 206, 88, 1};
    const unsigned r_sz = 4;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test22)
{
    unsigned char p[] = {6, 70, 31, 64, 32, 98, 235, 137, 0};
    const unsigned p_sz = 9;
    unsigned char q[] = {135, 206, 88, 1};
    const unsigned q_sz = 4;
    unsigned char r[] = {53, 241, 216, 0, 0, 0, 0, 0, 16, 82, 137, 0};
    const unsigned r_sz = 12;
    unsigned char buf[13];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test23)
{
    unsigned char p[] = {25, 251, 5, 98, 143, 212, 10, 95, 0};
    const unsigned p_sz = 9;
    unsigned char q[] = {135, 206, 88, 1};
    const unsigned q_sz = 4;
    unsigned char r[] = {83, 15, 53, 0, 0, 0, 0, 0, 97, 15, 95, 0};
    const unsigned r_sz = 12;
    unsigned char buf[13];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test24)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char q[] = {240, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {240, 1};
    const unsigned r_sz = 2;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test25)
{
    unsigned char p[] = {168, 190, 88, 191, 187, 16, 150, 34, 0};
    const unsigned p_sz = 9;
    unsigned char q[] = {240, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {9, 0, 0, 0, 0, 0, 0, 0, 34, 0};
    const unsigned r_sz = 10;
    unsigned char buf[11];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test26)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char q[] = {238, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {238, 1};
    const unsigned r_sz = 2;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test27)
{
    unsigned char p[] = {238, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {240, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {197, 30, 1};
    const unsigned r_sz = 3;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test28)
{
    unsigned char p[] = {212, 2, 84, 180, 137, 69, 162, 252, 0};
    const unsigned p_sz = 9;
    unsigned char q[] = {197, 30, 1};
    const unsigned q_sz = 3;
    unsigned char r[] = {198, 122, 0, 0, 0, 0, 0, 0, 88, 252, 0};
    const unsigned r_sz = 11;
    unsigned char buf[12];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test29)
{
    unsigned char p[] = {197, 30, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {175, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {172, 51, 177, 1};
    const unsigned r_sz = 4;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test30)
{
    unsigned char p[] = {184, 144, 9, 77, 100, 241, 9, 27, 0};
    const unsigned p_sz = 9;
    unsigned char q[] = {172, 51, 177, 1};
    const unsigned q_sz = 4;
    unsigned char r[] = {175, 134, 33, 0, 0, 0, 0, 0, 102, 249, 27, 0};
    const unsigned r_sz = 12;
    unsigned char buf[13];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test31)
{
    unsigned char p[] = {197, 30, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {231, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {221, 16, 249, 1};
    const unsigned r_sz = 4;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test32)
{
    unsigned char p[] = {221, 16, 249, 1};
    const unsigned p_sz = 4;
    unsigned char q[] = {175, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {159, 255, 77, 86, 1};
    const unsigned r_sz = 5;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test33)
{
    unsigned char p[] = {135, 70, 25, 230, 203, 189, 167, 166, 0};
    const unsigned p_sz = 9;
    unsigned char q[] = {159, 255, 77, 86, 1};
    const unsigned q_sz = 5;
    unsigned char r[] = {210, 212, 168, 162, 0, 0, 0, 0, 47, 247, 20, 166, 0};
    const unsigned r_sz = 13;
    unsigned char buf[14];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test34)
{
    unsigned char p[] = {1, 255, 11, 81, 54, 239, 173, 200, 24};
    const unsigned p_sz = 9;
    unsigned char q[] = {1, 29};
    const unsigned q_sz = 2;
    unsigned char r[] = {1, 226, 207, 158, 245, 235, 164, 232, 197, 37};
    const unsigned r_sz = 10;
    unsigned char buf[11];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test35)
{
    unsigned char p[] = {1, 226, 207, 158, 245, 235, 164, 232, 197, 37};
    const unsigned p_sz = 10;
    unsigned char q[] = {1, 58};
    const unsigned q_sz = 2;
    unsigned char r[] = {1, 216, 194, 159, 111, 199, 94, 95, 113, 157, 193};
    const unsigned r_sz = 11;
    unsigned char buf[12];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test36)
{
    unsigned char p[] = {1, 216, 194, 159, 111, 199, 94, 95, 113, 157, 193};
    const unsigned p_sz = 11;
    unsigned char q[] = {1, 116};
    const unsigned q_sz = 2;
    unsigned char r[] = {1, 172, 130, 163, 50, 123, 219, 162, 248, 144, 116, 160};
    const unsigned r_sz = 12;
    unsigned char buf[13];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test37)
{
    unsigned char p[] = {1, 172, 130, 163, 50, 123, 219, 162, 248, 144, 116, 160};
    const unsigned p_sz = 12;
    unsigned char q[] = {1, 232};
    const unsigned q_sz = 2;
    unsigned char r[] = {1, 68, 119, 67, 118, 220, 31, 7, 84, 92, 127, 213, 97};
    const unsigned r_sz = 13;
    unsigned char buf[14];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test38)
{
    unsigned char p[] = {1, 68, 119, 67, 118, 220, 31, 7, 84, 92, 127, 213, 97};
    const unsigned p_sz = 13;
    unsigned char q[] = {1, 205};
    const unsigned q_sz = 2;
    unsigned char r[] = {1, 137, 73, 227, 17, 177, 17, 52, 13, 46, 43, 83, 132, 120};
    const unsigned r_sz = 14;
    unsigned char buf[15];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test39)
{
    unsigned char p[] = {1, 137, 73, 227, 17, 177, 17, 52, 13, 46, 43, 83, 132, 120};
    const unsigned p_sz = 14;
    unsigned char q[] = {1, 135};
    const unsigned q_sz = 2;
    unsigned char r[] = {1, 14, 54, 114, 70, 174, 151, 43, 158, 195, 127, 166, 210, 234, 163};
    const unsigned r_sz = 15;
    unsigned char buf[16];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test40)
{
    unsigned char p[] = {1, 14, 54, 114, 70, 174, 151, 43, 158, 195, 127, 166, 210, 234, 163};
    const unsigned p_sz = 15;
    unsigned char q[] = {1, 19};
    const unsigned q_sz = 2;
    unsigned char r[] = {1, 29, 196, 111, 163, 112, 74, 10, 105, 105, 139, 132, 151, 32, 134, 26};
    const unsigned r_sz = 16;
    unsigned char buf[17];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test41)
{
    unsigned char p[] = {1, 29, 196, 111, 163, 112, 74, 10, 105, 105, 139, 132, 151, 32, 134, 26};
    const unsigned p_sz = 16;
    unsigned char q[] = {1, 38};
    const unsigned q_sz = 2;
    unsigned char r[] = {1, 59, 13, 104, 189, 68, 209, 30, 8, 163, 65, 41, 229, 98, 50, 36, 59};
    const unsigned r_sz = 17;
    unsigned char buf[18];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test42)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char q[] = {134, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {134, 1};
    const unsigned r_sz = 2;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test43)
{
    unsigned char p[] = {175, 71, 57, 160, 178, 129, 135, 229, 94, 72, 204, 24, 149, 214, 88, 42, 0};
    const unsigned p_sz = 17;
    unsigned char q[] = {134, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0};
    const unsigned r_sz = 18;
    unsigned char buf[19];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test44)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char q[] = {64, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {64, 1};
    const unsigned r_sz = 2;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test45)
{
    unsigned char p[] = {64, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {134, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {26, 198, 1};
    const unsigned r_sz = 3;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test46)
{
    unsigned char p[] = {165, 134, 12, 135, 190, 244, 161, 223, 86, 229, 3, 52, 110, 235, 210, 233, 0};
    const unsigned p_sz = 17;
    unsigned char q[] = {26, 198, 1};
    const unsigned q_sz = 3;
    unsigned char r[] = {148, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 233, 0};
    const unsigned r_sz = 19;
    unsigned char buf[20];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test47)
{
    unsigned char p[] = {64, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {253, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {177, 189, 1};
    const unsigned r_sz = 3;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test48)
{
    unsigned char p[] = {177, 189, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {134, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {55, 224, 59, 1};
    const unsigned r_sz = 4;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test49)
{
    unsigned char p[] = {235, 36, 27, 11, 172, 92, 254, 201, 37, 21, 141, 197, 31, 248, 133, 84, 0};
    const unsigned p_sz = 17;
    unsigned char q[] = {55, 224, 59, 1};
    const unsigned q_sz = 4;
    unsigned char r[] = {145, 182, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 152, 84, 0};
    const unsigned r_sz = 20;
    unsigned char buf[21];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test50)
{
    unsigned char p[] = {64, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {93, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {222, 29, 1};
    const unsigned r_sz = 3;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test51)
{
    unsigned char p[] = {222, 29, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {253, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {42, 32, 224, 1};
    const unsigned r_sz = 4;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test52)
{
    unsigned char p[] = {42, 32, 224, 1};
    const unsigned p_sz = 4;
    unsigned char q[] = {134, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {88, 39, 3, 102, 1};
    const unsigned r_sz = 5;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test53)
{
    unsigned char p[] = {149, 234, 187, 133, 171, 118, 79, 169, 95, 227, 96, 170, 63, 37, 215, 15, 0};
    const unsigned p_sz = 17;
    unsigned char q[] = {88, 39, 3, 102, 1};
    const unsigned q_sz = 5;
    unsigned char r[] = {215, 134, 45, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 224, 239, 15, 0};
    const unsigned r_sz = 21;
    unsigned char buf[22];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test54)
{
    unsigned char p[] = {88, 39, 3, 102, 1};
    const unsigned p_sz = 5;
    unsigned char q[] = {229, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {114, 40, 21, 105, 131, 1};
    const unsigned r_sz = 6;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test55)
{
    unsigned char p[] = {253, 243, 52, 226, 99, 122, 80, 167, 63, 27, 16, 141, 172, 130, 242, 227, 0};
    const unsigned p_sz = 17;
    unsigned char q[] = {114, 40, 21, 105, 131, 1};
    const unsigned q_sz = 6;
    unsigned char r[] = {235, 0, 197, 173, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 171, 222, 14, 227, 0};
    const unsigned r_sz = 22;
    unsigned char buf[23];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test56)
{
    unsigned char p[] = {222, 29, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {186, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {147, 96, 167, 1};
    const unsigned r_sz = 4;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test57)
{
    unsigned char p[] = {147, 96, 167, 1};
    const unsigned p_sz = 4;
    unsigned char q[] = {253, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {14, 244, 0, 90, 1};
    const unsigned r_sz = 5;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test58)
{
    unsigned char p[] = {14, 244, 0, 90, 1};
    const unsigned p_sz = 5;
    unsigned char q[] = {134, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {119, 135, 244, 199, 220, 1};
    const unsigned r_sz = 6;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test59)
{
    unsigned char p[] = {119, 135, 244, 199, 220, 1};
    const unsigned p_sz = 6;
    unsigned char q[] = {229, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {121, 21, 47, 105, 229, 57, 1};
    const unsigned r_sz = 7;
    unsigned char buf[8];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test60)
{
    unsigned char p[] = {76, 195, 164, 53, 124, 39, 222, 42, 187, 160, 22, 159, 210, 229, 218, 59, 0};
    const unsigned p_sz = 17;
    unsigned char q[] = {121, 21, 47, 105, 229, 57, 1};
    const unsigned q_sz = 7;
    unsigned char r[] = {61, 35, 166, 173, 181, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 3, 166, 140, 128, 59, 0};
    const unsigned r_sz = 23;
    unsigned char buf[24];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test61)
{
    unsigned char p[] = {147, 96, 167, 1};
    const unsigned p_sz = 4;
    unsigned char q[] = {185, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {75, 76, 20, 30, 1};
    const unsigned r_sz = 5;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test62)
{
    unsigned char p[] = {75, 76, 20, 30, 1};
    const unsigned p_sz = 5;
    unsigned char q[] = {253, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {16, 146, 244, 240, 227, 1};
    const unsigned r_sz = 6;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test63)
{
    unsigned char p[] = {16, 146, 244, 240, 227, 1};
    const unsigned p_sz = 6;
    unsigned char q[] = {134, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {136, 189, 27, 95, 68, 101, 1};
    const unsigned r_sz = 7;
    unsigned char buf[8];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test64)
{
    unsigned char p[] = {136, 189, 27, 95, 68, 101, 1};
    const unsigned p_sz = 7;
    unsigned char q[] = {229, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {152, 65, 2, 232, 19, 28, 128, 1};
    const unsigned r_sz = 8;
    unsigned char buf[9];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test65)
{
    unsigned char p[] = {173, 243, 182, 243, 113, 201, 200, 97, 40, 114, 152, 173, 8, 108, 201, 153, 0};
    const unsigned p_sz = 17;
    unsigned char q[] = {152, 65, 2, 232, 19, 28, 128, 1};
    const unsigned q_sz = 8;
    unsigned char r[] = {19, 201, 197, 186, 72, 242, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 51, 7, 214, 139, 198, 153, 0};
    const unsigned r_sz = 24;
    unsigned char buf[25];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test66)
{
    unsigned char p[] = {136, 189, 27, 95, 68, 101, 1};
    const unsigned p_sz = 7;
    unsigned char q[] = {228, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {16, 252, 25, 183, 87, 121, 129, 1};
    const unsigned r_sz = 8;
    unsigned char buf[9];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test67)
{
    unsigned char p[] = {16, 252, 25, 183, 87, 121, 129, 1};
    const unsigned p_sz = 8;
    unsigned char q[] = {229, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {246, 195, 148, 124, 63, 49, 127, 100, 1};
    const unsigned r_sz = 9;
    unsigned char buf[10];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test68)
{
    unsigned char p[] = {132, 60, 105, 164, 86, 113, 61, 110, 217, 95, 117, 110, 177, 31, 193, 221, 0};
    const unsigned p_sz = 17;
    unsigned char q[] = {246, 195, 148, 124, 63, 49, 127, 100, 1};
    const unsigned q_sz = 9;
    unsigned char r[] = {105, 78, 202, 229, 168, 109, 142, 134, 0, 0, 0, 0, 0, 0, 0, 0, 34, 165, 61, 64, 15, 22, 105, 221, 0};
    const unsigned r_sz = 25;
    unsigned char buf[26];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test69)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char q[] = {58, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {58, 1};
    const unsigned r_sz = 2;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test70)
{
    unsigned char p[] = {55, 227, 126, 183, 164, 132, 92, 236, 31, 13, 226, 177, 60, 153, 210, 5, 0};
    const unsigned p_sz = 17;
    unsigned char q[] = {58, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0};
    const unsigned r_sz = 18;
    unsigned char buf[19];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test71)
{
    unsigned char p[] = {58, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {96, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {53, 90, 1};
    const unsigned r_sz = 3;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test72)
{
    unsigned char p[] = {167, 110, 0, 41, 204, 184, 127, 116, 175, 116, 128, 248, 208, 194, 12, 152, 0};
    const unsigned p_sz = 17;
    unsigned char q[] = {53, 90, 1};
    const unsigned q_sz = 3;
    unsigned char r[] = {250, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 152, 0};
    const unsigned r_sz = 19;
    unsigned char buf[20];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test73)
{
    unsigned char p[] = {58, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {117, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {96, 79, 1};
    const unsigned r_sz = 3;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test74)
{
    unsigned char p[] = {96, 79, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {96, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {185, 95, 47, 1};
    const unsigned r_sz = 4;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test75)
{
    unsigned char p[] = {145, 83, 166, 71, 93, 16, 186, 48, 72, 205, 181, 213, 125, 55, 85, 207, 0};
    const unsigned p_sz = 17;
    unsigned char q[] = {185, 95, 47, 1};
    const unsigned q_sz = 4;
    unsigned char r[] = {36, 146, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 236, 207, 0};
    const unsigned r_sz = 20;
    unsigned char buf[21];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test76)
{
    unsigned char p[] = {58, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {205, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {117, 247, 1};
    const unsigned r_sz = 3;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test77)
{
    unsigned char p[] = {117, 247, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {117, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {181, 50, 130, 1};
    const unsigned r_sz = 4;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test78)
{
    unsigned char p[] = {181, 50, 130, 1};
    const unsigned p_sz = 4;
    unsigned char q[] = {96, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {101, 167, 184, 226, 1};
    const unsigned r_sz = 5;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test79)
{
    unsigned char p[] = {124, 73, 16, 160, 114, 170, 123, 23, 61, 247, 24, 249, 64, 244, 136, 77, 0};
    const unsigned p_sz = 17;
    unsigned char q[] = {101, 167, 184, 226, 1};
    const unsigned q_sz = 5;
    unsigned char r[] = {220, 172, 217, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 25, 164, 77, 0};
    const unsigned r_sz = 21;
    unsigned char buf[22];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test80)
{
    unsigned char p[] = {181, 50, 130, 1};
    const unsigned p_sz = 4;
    unsigned char q[] = {3, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {194, 227, 169, 129, 1};
    const unsigned r_sz = 5;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test81)
{
    unsigned char p[] = {194, 227, 169, 129, 1};
    const unsigned p_sz = 5;
    unsigned char q[] = {96, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {175, 145, 114, 131, 225, 1};
    const unsigned r_sz = 6;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test82)
{
    unsigned char p[] = {251, 52, 59, 185, 142, 254, 188, 161, 164, 128, 53, 226, 73, 243, 126, 31, 0};
    const unsigned p_sz = 17;
    unsigned char q[] = {175, 145, 114, 131, 225, 1};
    const unsigned q_sz = 6;
    unsigned char r[] = {30, 72, 13, 189, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 127, 235, 14, 31, 0};
    const unsigned r_sz = 22;
    unsigned char buf[23];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test83)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char q[] = {4, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {4, 1};
    const unsigned r_sz = 2;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test84)
{
    unsigned char p[] = {4, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {58, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {232, 62, 1};
    const unsigned r_sz = 3;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test85)
{
    unsigned char p[] = {232, 62, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {205, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {201, 142, 243, 1};
    const unsigned r_sz = 4;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test86)
{
    unsigned char p[] = {201, 142, 243, 1};
    const unsigned p_sz = 4;
    unsigned char q[] = {117, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {238, 125, 0, 134, 1};
    const unsigned r_sz = 5;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test87)
{
    unsigned char p[] = {238, 125, 0, 134, 1};
    const unsigned p_sz = 5;
    unsigned char q[] = {3, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {47, 105, 125, 151, 133, 1};
    const unsigned r_sz = 6;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test88)
{
    unsigned char p[] = {47, 105, 125, 151, 133, 1};
    const unsigned p_sz = 6;
    unsigned char q[] = {96, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {134, 209, 68, 68, 32, 229, 1};
    const unsigned r_sz = 7;
    unsigned char buf[8];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test89)
{
    unsigned char p[] = {145, 160, 30, 247, 19, 158, 164, 167, 43, 106, 129, 207, 5, 224, 179, 107, 0};
    const unsigned p_sz = 17;
    unsigned char q[] = {134, 209, 68, 68, 32, 229, 1};
    const unsigned q_sz = 7;
    unsigned char r[] = {58, 133, 241, 141, 151, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 139, 101, 215, 244, 107, 0};
    const unsigned r_sz = 23;
    unsigned char buf[24];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test90)
{
    unsigned char p[] = {2, 77, 98, 232, 221, 35, 204, 189, 163, 72, 7, 96, 231, 86, 16, 138, 0};
    const unsigned p_sz = 17;
    unsigned char q[] = {134, 209, 68, 68, 32, 229, 1};
    const unsigned q_sz = 7;
    unsigned char r[] = {17, 69, 132, 146, 206, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 5, 159, 48, 95, 138, 0};
    const unsigned r_sz = 23;
    unsigned char buf[24];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test91)
{
    unsigned char p[] = {238, 125, 0, 134, 1};
    const unsigned p_sz = 5;
    unsigned char q[] = {234, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {97, 154, 125, 118, 108, 1};
    const unsigned r_sz = 6;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test92)
{
    unsigned char p[] = {97, 154, 125, 118, 108, 1};
    const unsigned p_sz = 6;
    unsigned char q[] = {3, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {163, 210, 29, 231, 194, 111, 1};
    const unsigned r_sz = 7;
    unsigned char buf[8];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test93)
{
    unsigned char p[] = {163, 210, 29, 231, 194, 111, 1};
    const unsigned p_sz = 7;
    unsigned char q[] = {96, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {118, 66, 70, 211, 72, 97, 15, 1};
    const unsigned r_sz = 8;
    unsigned char buf[9];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test94)
{
    unsigned char p[] = {102, 187, 200, 255, 181, 245, 109, 105, 249, 229, 243, 49, 137, 144, 58, 177, 0};
    const unsigned p_sz = 17;
    unsigned char q[] = {118, 66, 70, 211, 72, 97, 15, 1};
    const unsigned q_sz = 8;
    unsigned char r[] = {131, 169, 165, 36, 117, 140, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 11, 22, 31, 178, 235, 177, 0};
    const unsigned r_sz = 24;
    unsigned char buf[25];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test95)
{
    unsigned char p[] = {1, 59, 13, 104, 189, 68, 209, 30, 8, 163, 65, 41, 229, 98, 50, 36, 59};
    const unsigned p_sz = 17;
    unsigned char q[] = {1, 76};
    const unsigned q_sz = 2;
    unsigned char r[] = {1, 119, 66, 83, 120, 119, 22, 197, 83, 249, 41, 143, 134, 85, 53, 125, 99, 79};
    const unsigned r_sz = 18;
    unsigned char buf[19];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test96)
{
    unsigned char p[] = {1, 119, 66, 83, 120, 119, 22, 197, 83, 249, 41, 143, 134, 85, 53, 125, 99, 79};
    const unsigned p_sz = 18;
    unsigned char q[] = {1, 152};
    const unsigned q_sz = 2;
    unsigned char r[] = {1, 239, 251, 183, 113, 149, 175, 199, 215, 240, 220, 73, 82, 173, 75, 32, 67, 217, 146};
    const unsigned r_sz = 19;
    unsigned char buf[20];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test97)
{
    unsigned char p[] = {1, 239, 251, 183, 113, 149, 175, 199, 215, 240, 220, 73, 82, 173, 75, 32, 67, 217, 146};
    const unsigned p_sz = 19;
    unsigned char q[] = {1, 45};
    const unsigned q_sz = 2;
    unsigned char r[] = {1, 194, 8, 26, 146, 20, 223, 187, 152, 85, 115, 238, 133, 146, 109, 173, 138, 33, 172, 179};
    const unsigned r_sz = 20;
    unsigned char buf[21];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test98)
{
    unsigned char p[] = {1, 194, 8, 26, 146, 20, 223, 187, 152, 85, 115, 238, 133, 146, 109, 173, 138, 33, 172, 179};
    const unsigned p_sz = 20;
    unsigned char q[] = {1, 90};
    const unsigned q_sz = 2;
    unsigned char r[] = {1, 152, 185, 240, 5, 111, 99, 6, 220, 112, 150, 69, 36, 187, 22, 228, 198, 121, 121, 165, 174};
    const unsigned r_sz = 21;
    unsigned char buf[22];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test99)
{
    unsigned char p[] = {1, 152, 185, 240, 5, 111, 99, 6, 220, 112, 150, 69, 36, 187, 22, 228, 198, 121, 121, 165, 174};
    const unsigned p_sz = 21;
    unsigned char q[] = {1, 180};
    const unsigned q_sz = 2;
    unsigned char r[] = {1, 44, 243, 13, 131, 49, 132, 194, 67, 214, 28, 89, 124, 82, 158, 244, 37, 236, 142, 82, 255, 89};
    const unsigned r_sz = 22;
    unsigned char buf[23];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test100)
{
    unsigned char p[] = {1, 44, 243, 13, 131, 49, 132, 194, 67, 214, 28, 89, 124, 82, 158, 244, 37, 236, 142, 82, 255, 89};
    const unsigned p_sz = 22;
    unsigned char q[] = {1, 117};
    const unsigned q_sz = 2;
    unsigned char r[] = {1, 89, 179, 131, 176, 182, 244, 19, 189, 69, 40, 28, 137, 29, 123, 67, 253, 86, 218, 230, 26, 145, 245};
    const unsigned r_sz = 23;
    unsigned char buf[24];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test101)
{
    unsigned char p[] = {1, 89, 179, 131, 176, 182, 244, 19, 189, 69, 40, 28, 137, 29, 123, 67, 253, 86, 218, 230, 26, 145, 245};
    const unsigned p_sz = 23;
    unsigned char q[] = {1, 234};
    const unsigned q_sz = 2;
    unsigned char r[] = {1, 179, 68, 154, 163, 140, 136, 190, 152, 25, 85, 19, 3, 196, 27, 113, 198, 18, 130, 2, 120, 93, 41, 71};
    const unsigned r_sz = 24;
    unsigned char buf[25];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test102)
{
    unsigned char p[] = {1, 179, 68, 154, 163, 140, 136, 190, 152, 25, 85, 19, 3, 196, 27, 113, 198, 18, 130, 2, 120, 93, 41, 71};
    const unsigned p_sz = 24;
    unsigned char q[] = {1, 201};
    const unsigned q_sz = 2;
    unsigned char r[] = {1, 122, 118, 169, 70, 178, 237, 216, 102, 115, 150, 229, 73, 130, 72, 61, 43, 206, 1, 237, 247, 127, 217, 144, 117};
    const unsigned r_sz = 25;
    unsigned char buf[26];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test103)
{
    unsigned char p[] = {1, 122, 118, 169, 70, 178, 237, 216, 102, 115, 150, 229, 73, 130, 72, 61, 43, 206, 1, 237, 247, 127, 217, 144, 117};
    const unsigned p_sz = 25;
    unsigned char q[] = {1, 143};
    const unsigned q_sz = 2;
    unsigned char r[] = {1, 245, 49, 228, 53, 215, 6, 205, 210, 38, 82, 56, 80, 97, 139, 81, 134, 126, 168, 98, 226, 125, 23, 171, 173, 193};
    const unsigned r_sz = 26;
    unsigned char buf[27];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test104)
{
    unsigned char p[] = {1, 245, 49, 228, 53, 215, 6, 205, 210, 38, 82, 56, 80, 97, 139, 81, 134, 126, 168, 98, 226, 125, 23, 171, 173, 193};
    const unsigned p_sz = 26;
    unsigned char q[] = {1, 3};
    const unsigned q_sz = 2;
    unsigned char r[] = {1, 246, 51, 183, 4, 136, 98, 199, 152, 77, 56, 206, 24, 145, 40, 209, 117, 233, 42, 135, 68, 70, 144, 146, 77, 43, 94};
    const unsigned r_sz = 27;
    unsigned char buf[28];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test105)
{
    unsigned char p[] = {1, 246, 51, 183, 4, 136, 98, 199, 152, 77, 56, 206, 24, 145, 40, 209, 117, 233, 42, 135, 68, 70, 144, 146, 77, 43, 94};
    const unsigned p_sz = 27;
    unsigned char q[] = {1, 6};
    const unsigned q_sz = 2;
    unsigned char r[] = {1, 240, 61, 29, 145, 144, 117, 150, 48, 58, 139, 94, 134, 193, 105, 33, 169, 202, 102, 123, 113, 195, 25, 213, 6, 152, 164, 217};
    const unsigned r_sz = 28;
    unsigned char buf[29];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test106)
{
    unsigned char p[] = {1, 240, 61, 29, 145, 144, 117, 150, 48, 58, 139, 94, 134, 193, 105, 33, 169, 202, 102, 123, 113, 195, 25, 213, 6, 152, 164, 217};
    const unsigned p_sz = 28;
    unsigned char q[] = {1, 12};
    const unsigned q_sz = 2;
    unsigned char r[] = {1, 252, 9, 28, 13, 18, 251, 208, 150, 103, 174, 100, 41, 167, 12, 247, 56, 117, 119, 233, 127, 181, 100, 121, 147, 176, 74, 58, 197};
    const unsigned r_sz = 29;
    unsigned char buf[30];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test107)
{
    unsigned char p[] = {1, 252, 9, 28, 13, 18, 251, 208, 150, 103, 174, 100, 41, 167, 12, 247, 56, 117, 119, 233, 127, 181, 100, 121, 147, 176, 74, 58, 197};
    const unsigned p_sz = 29;
    unsigned char q[] = {1, 24};
    const unsigned q_sz = 2;
    unsigned char r[] = {1, 228, 193, 196, 48, 170, 86, 80, 217, 54, 143, 79, 32, 88, 255, 87, 24, 15, 251, 85, 82, 201, 58, 112, 191, 153, 108, 132, 143, 170};
    const unsigned r_sz = 30;
    unsigned char buf[31];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test108)
{
    unsigned char p[] = {1, 228, 193, 196, 48, 170, 86, 80, 217, 54, 143, 79, 32, 88, 255, 87, 24, 15, 251, 85, 82, 201, 58, 112, 191, 153, 108, 132, 143, 170};
    const unsigned p_sz = 30;
    unsigned char q[] = {1, 48};
    const unsigned q_sz = 2;
    unsigned char r[] = {1, 212, 246, 77, 73, 195, 192, 75, 98, 5, 70, 103, 177, 22, 217, 138, 51, 181, 246, 72, 25, 18, 46, 228, 74, 216, 195, 11, 106, 130, 150};
    const unsigned r_sz = 31;
    unsigned char buf[32];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test109)
{
    unsigned char p[] = {1, 212, 246, 77, 73, 195, 192, 75, 98, 5, 70, 103, 177, 22, 217, 138, 51, 181, 246, 72, 25, 18, 46, 228, 74, 216, 195, 11, 106, 130, 150};
    const unsigned p_sz = 31;
    unsigned char q[] = {1, 96};
    const unsigned q_sz = 2;
    unsigned char r[] = {1, 180, 74, 173, 182, 161, 15, 36, 192, 124, 187, 31, 53, 238, 202, 236, 158, 199, 147, 168, 27, 27, 160, 2, 36, 26, 197, 196, 237, 220, 28, 89};
    const unsigned r_sz = 32;
    unsigned char buf[33];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test110)
{
    unsigned char p[] = {1, 180, 74, 173, 182, 161, 15, 36, 192, 124, 187, 31, 53, 238, 202, 236, 158, 199, 147, 168, 27, 27, 160, 2, 36, 26, 197, 196, 237, 220, 28, 89};
    const unsigned p_sz = 32;
    unsigned char q[] = {1, 192};
    const unsigned q_sz = 2;
    unsigned char r[] = {1, 116, 64, 52, 174, 54, 126, 16, 194, 162, 33, 33, 157, 176, 197, 225, 12, 59, 55, 253, 228, 148, 47, 179, 185, 24, 138, 253, 20, 142, 55, 172, 88};
    const unsigned r_sz = 33;
    unsigned char buf[34];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test111)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char q[] = {205, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {205, 1};
    const unsigned r_sz = 2;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test112)
{
    unsigned char p[] = {118, 189, 175, 214, 202, 111, 140, 74, 3, 135, 2, 250, 247, 172, 81, 200, 149, 123, 230, 82, 79, 151, 129, 17, 254, 30, 95, 20, 106, 24, 76, 16, 0};
    const unsigned p_sz = 33;
    unsigned char q[] = {205, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0};
    const unsigned r_sz = 34;
    unsigned char buf[35];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test113)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char q[] = {128, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {128, 1};
    const unsigned r_sz = 2;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test114)
{
    unsigned char p[] = {128, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {205, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {90, 77, 1};
    const unsigned r_sz = 3;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test115)
{
    unsigned char p[] = {198, 86, 146, 147, 51, 201, 144, 83, 109, 204, 121, 107, 64, 6, 249, 86, 187, 190, 30, 239, 11, 117, 127, 246, 119, 220, 230, 60, 245, 45, 209, 19, 0};
    const unsigned p_sz = 33;
    unsigned char q[] = {90, 77, 1};
    const unsigned q_sz = 3;
    unsigned char r[] = {196, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 19, 0};
    const unsigned r_sz = 35;
    unsigned char buf[36];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test116)
{
    unsigned char p[] = {90, 77, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {152, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {37, 229, 213, 1};
    const unsigned r_sz = 4;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test117)
{
    unsigned char p[] = {208, 220, 53, 54, 128, 240, 14, 104, 229, 125, 86, 127, 220, 43, 251, 64, 49, 25, 187, 92, 50, 235, 68, 126, 198, 243, 242, 160, 216, 47, 199, 153, 0};
    const unsigned p_sz = 33;
    unsigned char q[] = {37, 229, 213, 1};
    const unsigned q_sz = 4;
    unsigned char r[] = {168, 227, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 227, 153, 0};
    const unsigned r_sz = 36;
    unsigned char buf[37];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test118)
{
    unsigned char p[] = {37, 229, 213, 1};
    const unsigned p_sz = 4;
    unsigned char q[] = {48, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {190, 34, 139, 229, 1};
    const unsigned r_sz = 5;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test119)
{
    unsigned char p[] = {174, 253, 136, 203, 138, 26, 21, 62, 75, 172, 238, 247, 85, 234, 183, 240, 195, 140, 201, 58, 157, 114, 113, 10, 13, 85, 89, 4, 227, 140, 25, 190, 0};
    const unsigned p_sz = 33;
    unsigned char q[] = {190, 34, 139, 229, 1};
    const unsigned q_sz = 5;
    unsigned char r[] = {1, 104, 182, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 199, 226, 190, 0};
    const unsigned r_sz = 37;
    unsigned char buf[38];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test120)
{
    unsigned char p[] = {190, 34, 139, 229, 1};
    const unsigned p_sz = 5;
    unsigned char q[] = {111, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {102, 1, 85, 127, 138, 1};
    const unsigned r_sz = 6;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test121)
{
    unsigned char p[] = {17, 223, 226, 48, 124, 155, 31, 215, 222, 105, 48, 245, 49, 48, 125, 61, 144, 193, 162, 243, 6, 150, 147, 68, 48, 43, 109, 197, 245, 39, 244, 227, 0};
    const unsigned p_sz = 33;
    unsigned char q[] = {102, 1, 85, 127, 138, 1};
    const unsigned q_sz = 6;
    unsigned char r[] = {72, 210, 246, 96, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 150, 183, 160, 227, 0};
    const unsigned r_sz = 38;
    unsigned char buf[39];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test122)
{
    unsigned char p[] = {190, 34, 139, 229, 1};
    const unsigned p_sz = 5;
    unsigned char q[] = {105, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {197, 205, 72, 27, 140, 1};
    const unsigned r_sz = 6;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test123)
{
    unsigned char p[] = {197, 205, 72, 27, 140, 1};
    const unsigned p_sz = 6;
    unsigned char q[] = {111, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {149, 15, 80, 24, 124, 227, 1};
    const unsigned r_sz = 7;
    unsigned char buf[8];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test124)
{
    unsigned char p[] = {231, 163, 88, 190, 180, 186, 226, 61, 136, 184, 184, 52, 129, 165, 27, 164, 228, 103, 6, 80, 33, 98, 232, 122, 109, 108, 9, 91, 5, 82, 223, 5, 0};
    const unsigned p_sz = 33;
    unsigned char q[] = {149, 15, 80, 24, 124, 227, 1};
    const unsigned q_sz = 7;
    unsigned char r[] = {116, 80, 65, 169, 104, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 196, 245, 43, 151, 5, 0};
    const unsigned r_sz = 39;
    unsigned char buf[40];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test125)
{
    unsigned char p[] = {149, 15, 80, 24, 124, 227, 1};
    const unsigned p_sz = 7;
    unsigned char q[] = {97, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {108, 128, 52, 33, 41, 204, 130, 1};
    const unsigned r_sz = 8;
    unsigned char buf[9];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test126)
{
    unsigned char p[] = {155, 47, 83, 197, 128, 208, 152, 94, 39, 120, 20, 13, 127, 79, 169, 233, 20, 224, 118, 31, 127, 114, 241, 182, 2, 0, 156, 156, 17, 10, 32, 184, 0};
    const unsigned p_sz = 33;
    unsigned char q[] = {108, 128, 52, 33, 41, 204, 130, 1};
    const unsigned q_sz = 8;
    unsigned char r[] = {121, 77, 191, 219, 139, 34, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 196, 18, 91, 151, 15, 184, 0};
    const unsigned r_sz = 40;
    unsigned char buf[41];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test127)
{
    unsigned char p[] = {37, 229, 213, 1};
    const unsigned p_sz = 4;
    unsigned char q[] = {180, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {93, 114, 62, 97, 1};
    const unsigned r_sz = 5;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test128)
{
    unsigned char p[] = {93, 114, 62, 97, 1};
    const unsigned p_sz = 5;
    unsigned char q[] = {48, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {214, 200, 38, 220, 81, 1};
    const unsigned r_sz = 6;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test129)
{
    unsigned char p[] = {214, 200, 38, 220, 81, 1};
    const unsigned p_sz = 6;
    unsigned char q[] = {105, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {84, 88, 2, 207, 52, 56, 1};
    const unsigned r_sz = 7;
    unsigned char buf[8];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test130)
{
    unsigned char p[] = {84, 88, 2, 207, 52, 56, 1};
    const unsigned p_sz = 7;
    unsigned char q[] = {111, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {221, 119, 134, 22, 177, 180, 87, 1};
    const unsigned r_sz = 8;
    unsigned char buf[9];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test131)
{
    unsigned char p[] = {221, 119, 134, 22, 177, 180, 87, 1};
    const unsigned p_sz = 8;
    unsigned char q[] = {97, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {38, 96, 230, 131, 95, 0, 181, 54, 1};
    const unsigned r_sz = 9;
    unsigned char buf[10];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test132)
{
    unsigned char p[] = {54, 216, 42, 71, 251, 153, 32, 223, 124, 29, 0, 144, 178, 204, 57, 79, 200, 158, 95, 211, 23, 13, 51, 149, 14, 128, 44, 22, 97, 104, 159, 146, 0};
    const unsigned p_sz = 33;
    unsigned char q[] = {38, 96, 230, 131, 95, 0, 181, 54, 1};
    const unsigned q_sz = 9;
    unsigned char r[] = {58, 103, 234, 64, 25, 85, 42, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 51, 37, 144, 189, 102, 182, 146, 0};
    const unsigned r_sz = 41;
    unsigned char buf[42];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test133)
{
    unsigned char p[] = {128, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {232, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {45, 104, 1};
    const unsigned r_sz = 3;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test134)
{
    unsigned char p[] = {45, 104, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {205, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {96, 190, 165, 1};
    const unsigned r_sz = 4;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test135)
{
    unsigned char p[] = {96, 190, 165, 1};
    const unsigned p_sz = 4;
    unsigned char q[] = {152, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {35, 179, 25, 61, 1};
    const unsigned r_sz = 5;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test136)
{
    unsigned char p[] = {35, 179, 25, 61, 1};
    const unsigned p_sz = 5;
    unsigned char q[] = {180, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {194, 98, 65, 2, 137, 1};
    const unsigned r_sz = 6;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test137)
{
    unsigned char p[] = {194, 98, 65, 2, 137, 1};
    const unsigned p_sz = 6;
    unsigned char q[] = {48, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {217, 112, 206, 33, 138, 185, 1};
    const unsigned r_sz = 7;
    unsigned char buf[8];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test138)
{
    unsigned char p[] = {217, 112, 206, 33, 138, 185, 1};
    const unsigned p_sz = 7;
    unsigned char q[] = {105, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {57, 249, 149, 6, 34, 77, 208, 1};
    const unsigned r_sz = 8;
    unsigned char buf[9];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test139)
{
    unsigned char p[] = {57, 249, 149, 6, 34, 77, 208, 1};
    const unsigned p_sz = 8;
    unsigned char q[] = {111, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {239, 141, 16, 234, 185, 113, 168, 191, 1};
    const unsigned r_sz = 9;
    unsigned char buf[10];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test140)
{
    unsigned char p[] = {239, 141, 16, 234, 185, 113, 168, 191, 1};
    const unsigned p_sz = 9;
    unsigned char q[] = {97, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {6, 242, 211, 238, 140, 95, 40, 149, 222, 1};
    const unsigned r_sz = 10;
    unsigned char buf[11];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test141)
{
    unsigned char p[] = {88, 39, 236, 213, 209, 197, 27, 98, 63, 98, 30, 46, 226, 187, 164, 58, 188, 16, 34, 36, 82, 84, 61, 48, 213, 191, 94, 190, 12, 132, 81, 131, 0};
    const unsigned p_sz = 33;
    unsigned char q[] = {6, 242, 211, 238, 140, 95, 40, 149, 222, 1};
    const unsigned q_sz = 10;
    unsigned char r[] = {205, 220, 4, 37, 221, 200, 209, 89, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 94, 48, 117, 109, 35, 65, 1, 131, 0};
    const unsigned r_sz = 42;
    unsigned char buf[43];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test142)
{
    unsigned char p[] = {35, 179, 25, 61, 1};
    const unsigned p_sz = 5;
    unsigned char q[] = {45, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {190, 116, 1, 214, 16, 1};
    const unsigned r_sz = 6;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test143)
{
    unsigned char p[] = {190, 116, 1, 214, 16, 1};
    const unsigned p_sz = 6;
    unsigned char q[] = {180, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {214, 222, 192, 27, 89, 164, 1};
    const unsigned r_sz = 7;
    unsigned char buf[8];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test144)
{
    unsigned char p[] = {214, 222, 192, 27, 89, 164, 1};
    const unsigned p_sz = 7;
    unsigned char q[] = {48, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {62, 117, 103, 42, 13, 242, 148, 1};
    const unsigned r_sz = 8;
    unsigned char buf[9];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test145)
{
    unsigned char p[] = {62, 117, 103, 42, 13, 242, 148, 1};
    const unsigned p_sz = 8;
    unsigned char q[] = {105, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {123, 206, 137, 123, 149, 65, 43, 253, 1};
    const unsigned r_sz = 9;
    unsigned char buf[10];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test146)
{
    unsigned char p[] = {123, 206, 137, 123, 149, 65, 43, 253, 1};
    const unsigned p_sz = 9;
    unsigned char q[] = {111, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {243, 0, 103, 122, 146, 56, 206, 62, 146, 1};
    const unsigned r_sz = 10;
    unsigned char buf[11];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test147)
{
    unsigned char p[] = {243, 0, 103, 122, 146, 56, 206, 62, 146, 1};
    const unsigned p_sz = 10;
    unsigned char q[] = {97, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {238, 243, 227, 13, 44, 95, 227, 88, 104, 243, 1};
    const unsigned r_sz = 11;
    unsigned char buf[12];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test148)
{
    unsigned char p[] = {86, 22, 143, 152, 29, 120, 184, 168, 159, 40, 68, 44, 233, 23, 212, 175, 131, 66, 12, 165, 35, 74, 84, 90, 63, 175, 6, 183, 171, 88, 180, 41, 0};
    const unsigned p_sz = 33;
    unsigned char q[] = {238, 243, 227, 13, 44, 95, 227, 88, 104, 243, 1};
    const unsigned q_sz = 11;
    unsigned char r[] = {29, 149, 134, 20, 71, 34, 165, 118, 1, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 228, 142, 97, 195, 60, 92, 145, 135, 41, 0};
    const unsigned r_sz = 43;
    unsigned char buf[44];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test149)
{
    unsigned char p[] = {62, 117, 103, 42, 13, 242, 148, 1};
    const unsigned p_sz = 8;
    unsigned char q[] = {80, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {252, 49, 179, 175, 157, 192, 169, 196, 1};
    const unsigned r_sz = 9;
    unsigned char buf[10];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test150)
{
    unsigned char p[] = {252, 49, 179, 175, 157, 192, 169, 196, 1};
    const unsigned p_sz = 9;
    unsigned char q[] = {105, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {72, 234, 75, 193, 112, 124, 217, 241, 173, 1};
    const unsigned r_sz = 10;
    unsigned char buf[11];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test151)
{
    unsigned char p[] = {72, 234, 75, 193, 112, 124, 217, 241, 173, 1};
    const unsigned p_sz = 10;
    unsigned char q[] = {111, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {157, 243, 198, 127, 220, 147, 169, 50, 152, 194, 1};
    const unsigned r_sz = 11;
    unsigned char buf[12];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test152)
{
    unsigned char p[] = {157, 243, 198, 127, 220, 147, 169, 50, 152, 194, 1};
    const unsigned p_sz = 11;
    unsigned char q[] = {97, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {67, 115, 7, 84, 56, 235, 171, 137, 137, 245, 163, 1};
    const unsigned r_sz = 12;
    unsigned char buf[13];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test153)
{
    unsigned char p[] = {92, 187, 136, 48, 194, 93, 51, 108, 136, 39, 49, 166, 21, 41, 109, 239, 37, 208, 138, 100, 236, 200, 117, 49, 95, 90, 221, 114, 132, 126, 119, 150, 0};
    const unsigned p_sz = 33;
    unsigned char q[] = {67, 115, 7, 84, 56, 235, 171, 137, 137, 245, 163, 1};
    const unsigned q_sz = 12;
    unsigned char r[] = {122, 173, 1, 16, 223, 208, 148, 249, 95, 165, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 15, 119, 93, 110, 215, 176, 88, 64, 59, 150, 0};
    const unsigned r_sz = 44;
    unsigned char buf[45];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test154)
{
    unsigned char p[] = {62, 117, 103, 42, 13, 242, 148, 1};
    const unsigned p_sz = 8;
    unsigned char q[] = {96, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {168, 52, 241, 28, 240, 112, 107, 244, 1};
    const unsigned r_sz = 9;
    unsigned char buf[10];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test155)
{
    unsigned char p[] = {168, 52, 241, 28, 240, 112, 107, 244, 1};
    const unsigned p_sz = 9;
    unsigned char q[] = {80, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {7, 78, 9, 127, 113, 242, 81, 91, 164, 1};
    const unsigned r_sz = 10;
    unsigned char buf[11];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test156)
{
    unsigned char p[] = {7, 78, 9, 127, 113, 242, 81, 91, 164, 1};
    const unsigned p_sz = 10;
    unsigned char q[] = {105, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {2, 92, 72, 68, 54, 61, 26, 4, 253, 205, 1};
    const unsigned r_sz = 11;
    unsigned char buf[12];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test157)
{
    unsigned char p[] = {2, 92, 72, 68, 54, 61, 26, 4, 253, 205, 1};
    const unsigned p_sz = 11;
    unsigned char q[] = {111, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {222, 128, 193, 43, 228, 120, 2, 187, 17, 55, 162, 1};
    const unsigned r_sz = 12;
    unsigned char buf[13];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test158)
{
    unsigned char p[] = {222, 128, 193, 43, 228, 120, 2, 187, 17, 55, 162, 1};
    const unsigned p_sz = 12;
    unsigned char q[] = {97, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {133, 20, 78, 241, 161, 76, 186, 166, 132, 201, 131, 195, 1};
    const unsigned r_sz = 13;
    unsigned char buf[14];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test159)
{
    unsigned char p[] = {142, 139, 6, 34, 240, 155, 233, 97, 1, 201, 34, 176, 183, 98, 201, 124, 196, 2, 186, 234, 254, 250, 179, 235, 82, 211, 51, 97, 146, 220, 60, 50, 0};
    const unsigned p_sz = 33;
    unsigned char q[] = {133, 20, 78, 241, 161, 76, 186, 166, 132, 201, 131, 195, 1};
    const unsigned q_sz = 13;
    unsigned char r[] = {204, 109, 80, 184, 183, 209, 132, 13, 235, 202, 123, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 126, 158, 140, 124, 101, 42, 245, 116, 38, 78, 50, 0};
    const unsigned r_sz = 45;
    unsigned char buf[46];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test160)
{
    unsigned char p[] = {168, 52, 241, 28, 240, 112, 107, 244, 1};
    const unsigned p_sz = 9;
    unsigned char q[] = {238, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {165, 253, 31, 11, 217, 63, 245, 49, 26, 1};
    const unsigned r_sz = 10;
    unsigned char buf[11];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test161)
{
    unsigned char p[] = {165, 253, 31, 11, 217, 63, 245, 49, 26, 1};
    const unsigned p_sz = 10;
    unsigned char q[] = {80, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {176, 127, 131, 85, 94, 117, 95, 30, 66, 74, 1};
    const unsigned r_sz = 11;
    unsigned char buf[12];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test162)
{
    unsigned char p[] = {176, 127, 131, 85, 94, 117, 95, 30, 66, 74, 1};
    const unsigned p_sz = 11;
    unsigned char q[] = {105, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {193, 253, 122, 210, 208, 174, 153, 133, 147, 160, 35, 1};
    const unsigned r_sz = 12;
    unsigned char buf[13];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test163)
{
    unsigned char p[] = {193, 253, 122, 210, 208, 174, 153, 133, 147, 160, 35, 1};
    const unsigned p_sz = 12;
    unsigned char q[] = {111, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {52, 212, 97, 65, 55, 8, 185, 206, 19, 107, 112, 76, 1};
    const unsigned r_sz = 13;
    unsigned char buf[14];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test164)
{
    unsigned char p[] = {52, 212, 97, 65, 55, 8, 185, 206, 19, 107, 112, 76, 1};
    const unsigned p_sz = 13;
    unsigned char q[] = {97, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {123, 92, 108, 101, 153, 24, 110, 98, 51, 70, 236, 163, 45, 1};
    const unsigned r_sz = 14;
    unsigned char buf[15];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test165)
{
    unsigned char p[] = {155, 36, 46, 24, 92, 120, 81, 159, 239, 200, 144, 206, 114, 146, 85, 179, 180, 181, 132, 180, 248, 113, 170, 79, 72, 188, 171, 92, 7, 88, 229, 38, 0};
    const unsigned p_sz = 33;
    unsigned char q[] = {123, 92, 108, 101, 153, 24, 110, 98, 51, 70, 236, 163, 45, 1};
    const unsigned q_sz = 14;
    unsigned char r[] = {218, 156, 120, 190, 211, 40, 244, 72, 220, 87, 210, 160, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 163, 254, 96, 131, 29, 182, 142, 39, 169, 176, 194, 38, 0};
    const unsigned r_sz = 46;
    unsigned char buf[47];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test166)
{
    unsigned char p[] = {28, 84, 97, 70, 76, 97, 157, 240, 131, 93, 87, 218, 42, 109, 232, 196, 67, 138, 149, 250, 241, 164, 9, 76, 177, 238, 120, 16, 160, 26, 47, 166, 0};
    const unsigned p_sz = 33;
    unsigned char q[] = {123, 92, 108, 101, 153, 24, 110, 98, 51, 70, 236, 163, 45, 1};
    const unsigned q_sz = 14;
    unsigned char r[] = {237, 167, 53, 152, 233, 251, 182, 230, 106, 52, 212, 66, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 229, 52, 103, 1, 105, 116, 73, 82, 10, 18, 11, 166, 0};
    const unsigned r_sz = 46;
    unsigned char buf[47];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test167)
{
    unsigned char p[] = {165, 253, 31, 11, 217, 63, 245, 49, 26, 1};
    const unsigned p_sz = 10;
    unsigned char q[] = {140, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {139, 178, 66, 130, 70, 54, 60, 1, 8, 150, 1};
    const unsigned r_sz = 11;
    unsigned char buf[12];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test168)
{
    unsigned char p[] = {139, 178, 66, 130, 70, 54, 60, 1, 8, 150, 1};
    const unsigned p_sz = 11;
    unsigned char q[] = {80, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {37, 255, 171, 141, 198, 0, 106, 108, 187, 243, 198, 1};
    const unsigned r_sz = 12;
    unsigned char buf[13];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test169)
{
    unsigned char p[] = {37, 255, 171, 141, 198, 0, 106, 108, 187, 243, 198, 1};
    const unsigned p_sz = 12;
    unsigned char q[] = {105, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {113, 214, 52, 170, 7, 198, 67, 66, 121, 158, 121, 175, 1};
    const unsigned r_sz = 13;
    unsigned char buf[14];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test170)
{
    unsigned char p[] = {113, 214, 52, 170, 7, 198, 67, 66, 121, 158, 121, 175, 1};
    const unsigned p_sz = 13;
    unsigned char q[] = {111, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {114, 235, 168, 77, 186, 35, 181, 95, 111, 126, 179, 206, 192, 1};
    const unsigned r_sz = 14;
    unsigned char buf[15];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test171)
{
    unsigned char p[] = {114, 235, 168, 77, 186, 35, 181, 95, 111, 126, 179, 206, 192, 1};
    const unsigned p_sz = 14;
    unsigned char q[] = {97, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {69, 237, 178, 26, 136, 165, 243, 155, 147, 156, 245, 104, 97, 161, 1};
    const unsigned r_sz = 15;
    unsigned char buf[16];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test172)
{
    unsigned char p[] = {188, 20, 24, 37, 114, 223, 209, 122, 117, 202, 88, 220, 221, 169, 50, 18, 102, 58, 140, 82, 19, 59, 164, 172, 136, 244, 37, 144, 82, 220, 83, 199, 0};
    const unsigned p_sz = 33;
    unsigned char q[] = {69, 237, 178, 26, 136, 165, 243, 155, 147, 156, 245, 104, 97, 161, 1};
    const unsigned q_sz = 15;
    unsigned char r[] = {74, 136, 223, 183, 214, 73, 77, 212, 125, 81, 163, 21, 24, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 213, 248, 102, 49, 24, 22, 87, 133, 125, 130, 90, 98, 199, 0};
    const unsigned r_sz = 47;
    unsigned char buf[48];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test173)
{
    unsigned char p[] = {161, 219, 98, 92, 22, 116, 0, 210, 185, 173, 238, 194, 15, 28, 49, 15, 169, 64, 245, 54, 184, 234, 12, 96, 239, 66, 59, 66, 231, 223, 78, 8, 0};
    const unsigned p_sz = 33;
    unsigned char q[] = {69, 237, 178, 26, 136, 165, 243, 155, 147, 156, 245, 104, 97, 161, 1};
    const unsigned q_sz = 15;
    unsigned char r[] = {48, 194, 61, 208, 174, 238, 176, 81, 127, 48, 57, 126, 83, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 221, 151, 120, 223, 171, 137, 38, 15, 224, 3, 95, 47, 8, 0};
    const unsigned r_sz = 47;
    unsigned char buf[48];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test174)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char q[] = {99, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {99, 1};
    const unsigned r_sz = 2;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test175)
{
    unsigned char p[] = {232, 136, 100, 157, 151, 195, 40, 77, 139, 137, 63, 8, 226, 220, 143, 248, 81, 193, 158, 122, 97, 183, 108, 127, 75, 76, 208, 28, 74, 23, 69, 105, 0};
    const unsigned p_sz = 33;
    unsigned char q[] = {99, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0};
    const unsigned r_sz = 34;
    unsigned char buf[35];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test176)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char q[] = {204, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {204, 1};
    const unsigned r_sz = 2;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test177)
{
    unsigned char p[] = {204, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {99, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {156, 175, 1};
    const unsigned r_sz = 3;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test178)
{
    unsigned char p[] = {207, 89, 42, 34, 11, 160, 13, 139, 193, 24, 171, 55, 215, 162, 229, 4, 133, 36, 43, 173, 22, 4, 130, 4, 138, 186, 79, 237, 105, 232, 3, 138, 0};
    const unsigned p_sz = 33;
    unsigned char q[] = {156, 175, 1};
    const unsigned q_sz = 3;
    unsigned char r[] = {6, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 138, 0};
    const unsigned r_sz = 35;
    unsigned char buf[36];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test179)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char q[] = {48, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {48, 1};
    const unsigned r_sz = 2;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test180)
{
    unsigned char p[] = {48, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {204, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {228, 252, 1};
    const unsigned r_sz = 3;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test181)
{
    unsigned char p[] = {228, 252, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {99, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {95, 250, 159, 1};
    const unsigned r_sz = 4;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test182)
{
    unsigned char p[] = {227, 235, 72, 176, 156, 66, 108, 193, 220, 227, 12, 212, 254, 101, 4, 189, 69, 32, 22, 163, 193, 17, 3, 191, 218, 185, 151, 103, 112, 46, 170, 190, 0};
    const unsigned p_sz = 33;
    unsigned char q[] = {95, 250, 159, 1};
    const unsigned q_sz = 4;
    unsigned char r[] = {44, 127, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 100, 190, 0};
    const unsigned r_sz = 36;
    unsigned char buf[37];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test183)
{
    unsigned char p[] = {48, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {52, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {169, 4, 1};
    const unsigned r_sz = 3;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test184)
{
    unsigned char p[] = {169, 4, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {204, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {128, 190, 200, 1};
    const unsigned r_sz = 4;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test185)
{
    unsigned char p[] = {128, 190, 200, 1};
    const unsigned p_sz = 4;
    unsigned char q[] = {99, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {215, 189, 179, 171, 1};
    const unsigned r_sz = 5;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test186)
{
    unsigned char p[] = {92, 182, 239, 54, 135, 104, 73, 246, 44, 222, 224, 152, 111, 183, 85, 249, 157, 109, 35, 6, 18, 228, 48, 229, 38, 103, 37, 125, 254, 124, 31, 255, 0};
    const unsigned p_sz = 33;
    unsigned char q[] = {215, 189, 179, 171, 1};
    const unsigned q_sz = 5;
    unsigned char r[] = {159, 49, 125, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 250, 92, 255, 0};
    const unsigned r_sz = 37;
    unsigned char buf[38];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test187)
{
    unsigned char p[] = {136, 83, 90, 225, 240, 219, 167, 141, 237, 40, 127, 105, 76, 72, 19, 26, 17, 182, 38, 173, 24, 175, 36, 115, 14, 86, 117, 31, 94, 184, 66, 106, 0};
    const unsigned p_sz = 33;
    unsigned char q[] = {215, 189, 179, 171, 1};
    const unsigned q_sz = 5;
    unsigned char r[] = {45, 15, 180, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 212, 105, 106, 0};
    const unsigned r_sz = 37;
    unsigned char buf[38];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test188)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char q[] = {3, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {3, 1};
    const unsigned r_sz = 2;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test189)
{
    unsigned char p[] = {3, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {48, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {80, 51, 1};
    const unsigned r_sz = 3;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test190)
{
    unsigned char p[] = {80, 51, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {52, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {230, 165, 7, 1};
    const unsigned r_sz = 4;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test191)
{
    unsigned char p[] = {230, 165, 7, 1};
    const unsigned p_sz = 4;
    unsigned char q[] = {204, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {157, 95, 251, 203, 1};
    const unsigned r_sz = 5;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test192)
{
    unsigned char p[] = {157, 95, 251, 203, 1};
    const unsigned p_sz = 5;
    unsigned char q[] = {99, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {100, 13, 117, 83, 168, 1};
    const unsigned r_sz = 6;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test193)
{
    unsigned char p[] = {72, 19, 145, 83, 158, 10, 232, 67, 92, 71, 90, 129, 20, 139, 82, 37, 4, 78, 133, 204, 204, 227, 235, 54, 198, 229, 239, 105, 135, 4, 221, 31, 0};
    const unsigned p_sz = 33;
    unsigned char q[] = {100, 13, 117, 83, 168, 1};
    const unsigned q_sz = 6;
    unsigned char r[] = {63, 173, 94, 206, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 181, 237, 217, 31, 0};
    const unsigned r_sz = 38;
    unsigned char buf[39];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test194)
{
    unsigned char p[] = {157, 95, 251, 203, 1};
    const unsigned p_sz = 5;
    unsigned char q[] = {77, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {219, 63, 200, 157, 134, 1};
    const unsigned r_sz = 6;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test195)
{
    unsigned char p[] = {219, 63, 200, 157, 134, 1};
    const unsigned p_sz = 6;
    unsigned char q[] = {99, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {214, 82, 50, 172, 29, 229, 1};
    const unsigned r_sz = 7;
    unsigned char buf[8];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test196)
{
    unsigned char p[] = {47, 191, 158, 100, 244, 95, 200, 63, 120, 186, 244, 64, 102, 255, 105, 209, 210, 42, 128, 42, 234, 208, 0, 233, 218, 69, 126, 221, 169, 40, 63, 184, 0};
    const unsigned p_sz = 33;
    unsigned char q[] = {214, 82, 50, 172, 29, 229, 1};
    const unsigned q_sz = 7;
    unsigned char r[] = {57, 24, 55, 15, 169, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 222, 125, 81, 160, 184, 0};
    const unsigned r_sz = 39;
    unsigned char buf[40];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test197)
{
    unsigned char p[] = {219, 63, 200, 157, 134, 1};
    const unsigned p_sz = 6;
    unsigned char q[] = {82, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {94, 9, 222, 94, 30, 212, 1};
    const unsigned r_sz = 7;
    unsigned char buf[8];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test198)
{
    unsigned char p[] = {94, 9, 222, 94, 30, 212, 1};
    const unsigned p_sz = 7;
    unsigned char q[] = {99, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {243, 2, 45, 45, 72, 195, 183, 1};
    const unsigned r_sz = 8;
    unsigned char buf[9];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test199)
{
    unsigned char p[] = {125, 190, 246, 157, 149, 169, 203, 135, 110, 25, 243, 69, 179, 197, 145, 216, 221, 72, 206, 63, 241, 193, 166, 59, 229, 104, 77, 42, 194, 105, 72, 237, 0};
    const unsigned p_sz = 33;
    unsigned char q[] = {243, 2, 45, 45, 72, 195, 183, 1};
    const unsigned q_sz = 8;
    unsigned char r[] = {69, 141, 139, 126, 155, 148, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 247, 112, 35, 6, 252, 237, 0};
    const unsigned r_sz = 40;
    unsigned char buf[41];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test200)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char q[] = {201, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {201, 1};
    const unsigned r_sz = 2;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test201)
{
    unsigned char p[] = {201, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {3, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {70, 202, 1};
    const unsigned r_sz = 3;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test202)
{
    unsigned char p[] = {70, 202, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {48, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {60, 2, 250, 1};
    const unsigned r_sz = 4;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test203)
{
    unsigned char p[] = {60, 2, 250, 1};
    const unsigned p_sz = 4;
    unsigned char q[] = {52, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {196, 84, 224, 206, 1};
    const unsigned r_sz = 5;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test204)
{
    unsigned char p[] = {196, 84, 224, 206, 1};
    const unsigned p_sz = 5;
    unsigned char q[] = {204, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {160, 226, 91, 235, 2, 1};
    const unsigned r_sz = 6;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test205)
{
    unsigned char p[] = {160, 226, 91, 235, 2, 1};
    const unsigned p_sz = 6;
    unsigned char q[] = {77, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {28, 140, 105, 104, 113, 79, 1};
    const unsigned r_sz = 7;
    unsigned char buf[8];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test206)
{
    unsigned char p[] = {28, 140, 105, 104, 113, 79, 1};
    const unsigned p_sz = 7;
    unsigned char q[] = {82, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {182, 145, 223, 104, 216, 65, 29, 1};
    const unsigned r_sz = 8;
    unsigned char buf[9];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test207)
{
    unsigned char p[] = {182, 145, 223, 104, 216, 65, 29, 1};
    const unsigned p_sz = 8;
    unsigned char q[] = {99, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {2, 124, 214, 249, 27, 94, 242, 126, 1};
    const unsigned r_sz = 9;
    unsigned char buf[10];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test208)
{
    unsigned char p[] = {228, 127, 28, 19, 96, 248, 252, 56, 44, 225, 69, 27, 144, 74, 147, 43, 132, 148, 8, 42, 54, 35, 195, 183, 227, 96, 166, 83, 149, 86, 28, 214, 0};
    const unsigned p_sz = 33;
    unsigned char q[] = {2, 124, 214, 249, 27, 94, 242, 126, 1};
    const unsigned q_sz = 9;
    unsigned char r[] = {213, 178, 16, 152, 140, 224, 163, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 102, 242, 15, 12, 160, 177, 214, 0};
    const unsigned r_sz = 41;
    unsigned char buf[42];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test209)
{
    unsigned char p[] = {60, 2, 250, 1};
    const unsigned p_sz = 4;
    unsigned char q[] = {107, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {209, 234, 200, 145, 1};
    const unsigned r_sz = 5;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test210)
{
    unsigned char p[] = {209, 234, 200, 145, 1};
    const unsigned p_sz = 5;
    unsigned char q[] = {52, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {205, 84, 201, 132, 165, 1};
    const unsigned r_sz = 6;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test211)
{
    unsigned char p[] = {205, 84, 201, 132, 165, 1};
    const unsigned p_sz = 6;
    unsigned char q[] = {204, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {66, 235, 1, 4, 61, 105, 1};
    const unsigned r_sz = 7;
    unsigned char buf[8];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test212)
{
    unsigned char p[] = {66, 235, 1, 4, 61, 105, 1};
    const unsigned p_sz = 7;
    unsigned char q[] = {77, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {48, 113, 166, 40, 195, 221, 36, 1};
    const unsigned r_sz = 8;
    unsigned char buf[9];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test213)
{
    unsigned char p[] = {48, 113, 166, 40, 195, 221, 36, 1};
    const unsigned p_sz = 8;
    unsigned char q[] = {82, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {219, 128, 96, 158, 149, 108, 26, 118, 1};
    const unsigned r_sz = 9;
    unsigned char buf[10];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test214)
{
    unsigned char p[] = {219, 128, 96, 158, 149, 108, 26, 118, 1};
    const unsigned p_sz = 9;
    unsigned char q[] = {99, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {214, 12, 153, 161, 197, 34, 235, 42, 21, 1};
    const unsigned r_sz = 10;
    unsigned char buf[11];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test215)
{
    unsigned char p[] = {110, 94, 76, 55, 117, 66, 193, 144, 149, 20, 108, 186, 107, 31, 242, 160, 22, 187, 36, 206, 83, 94, 176, 184, 44, 223, 222, 101, 4, 177, 177, 42, 0};
    const unsigned p_sz = 33;
    unsigned char q[] = {214, 12, 153, 161, 197, 34, 235, 42, 21, 1};
    const unsigned q_sz = 10;
    unsigned char r[] = {76, 128, 3, 70, 27, 103, 37, 24, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 199, 148, 77, 16, 69, 17, 169, 42, 0};
    const unsigned r_sz = 42;
    unsigned char buf[43];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test216)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char q[] = {234, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {234, 1};
    const unsigned r_sz = 2;
    unsigned char buf[3];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test217)
{
    unsigned char p[] = {234, 1};
    const unsigned p_sz = 2;
    unsigned char q[] = {201, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {193, 35, 1};
    const unsigned r_sz = 3;
    unsigned char buf[4];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test218)
{
    unsigned char p[] = {193, 35, 1};
    const unsigned p_sz = 3;
    unsigned char q[] = {3, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {94, 164, 32, 1};
    const unsigned r_sz = 4;
    unsigned char buf[5];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test219)
{
    unsigned char p[] = {94, 164, 32, 1};
    const unsigned p_sz = 4;
    unsigned char q[] = {48, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {134, 245, 234, 16, 1};
    const unsigned r_sz = 5;
    unsigned char buf[6];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test220)
{
    unsigned char p[] = {134, 245, 234, 16, 1};
    const unsigned p_sz = 5;
    unsigned char q[] = {107, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {196, 63, 193, 20, 123, 1};
    const unsigned r_sz = 6;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test221)
{
    unsigned char p[] = {196, 63, 193, 20, 123, 1};
    const unsigned p_sz = 6;
    unsigned char q[] = {52, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {78, 92, 149, 118, 221, 79, 1};
    const unsigned r_sz = 7;
    unsigned char buf[8];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test222)
{
    unsigned char p[] = {78, 92, 149, 118, 221, 79, 1};
    const unsigned p_sz = 7;
    unsigned char q[] = {204, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {209, 70, 1, 142, 104, 192, 131, 1};
    const unsigned r_sz = 8;
    unsigned char buf[9];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test223)
{
    unsigned char p[] = {209, 70, 1, 142, 104, 192, 131, 1};
    const unsigned p_sz = 8;
    unsigned char q[] = {77, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {10, 200, 11, 169, 35, 139, 94, 206, 1};
    const unsigned r_sz = 9;
    unsigned char buf[10];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test224)
{
    unsigned char p[] = {10, 200, 11, 169, 35, 139, 94, 206, 1};
    const unsigned p_sz = 9;
    unsigned char q[] = {82, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {14, 235, 148, 19, 205, 13, 160, 78, 156, 1};
    const unsigned r_sz = 10;
    unsigned char buf[11];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test225)
{
    unsigned char p[] = {14, 235, 148, 19, 205, 13, 160, 78, 156, 1};
    const unsigned p_sz = 10;
    unsigned char q[] = {99, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {104, 90, 211, 79, 236, 0, 38, 45, 73, 255, 1};
    const unsigned r_sz = 11;
    unsigned char buf[12];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test226)
{
    unsigned char p[] = {22, 3, 2, 250, 156, 75, 249, 219, 64, 189, 115, 25, 68, 60, 241, 168, 221, 66, 166, 25, 1, 56, 189, 107, 149, 75, 146, 83, 148, 22, 117, 251, 0};
    const unsigned p_sz = 33;
    unsigned char q[] = {104, 90, 211, 79, 236, 0, 38, 45, 73, 255, 1};
    const unsigned q_sz = 11;
    unsigned char r[] = {163, 176, 95, 62, 105, 155, 243, 144, 27, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 4, 248, 123, 237, 188, 130, 76, 251, 0};
    const unsigned r_sz = 43;
    unsigned char buf[44];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test227)
{
    unsigned char p[] = {134, 245, 234, 16, 1};
    const unsigned p_sz = 5;
    unsigned char q[] = {231, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {150, 60, 125, 60, 247, 1};
    const unsigned r_sz = 6;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test228)
{
    unsigned char p[] = {150, 60, 125, 60, 247, 1};
    const unsigned p_sz = 6;
    unsigned char q[] = {107, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {58, 71, 89, 172, 83, 156, 1};
    const unsigned r_sz = 7;
    unsigned char buf[8];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test229)
{
    unsigned char p[] = {58, 71, 89, 172, 83, 156, 1};
    const unsigned p_sz = 7;
    unsigned char q[] = {52, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {124, 55, 40, 229, 22, 70, 168, 1};
    const unsigned r_sz = 8;
    unsigned char buf[9];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test230)
{
    unsigned char p[] = {124, 55, 40, 229, 22, 70, 168, 1};
    const unsigned p_sz = 8;
    unsigned char q[] = {204, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {176, 198, 161, 252, 43, 233, 10, 100, 1};
    const unsigned r_sz = 9;
    unsigned char buf[10];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test231)
{
    unsigned char p[] = {176, 198, 161, 252, 43, 233, 10, 100, 1};
    const unsigned p_sz = 9;
    unsigned char q[] = {77, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {184, 224, 151, 200, 44, 130, 33, 220, 41, 1};
    const unsigned r_sz = 10;
    unsigned char buf[11];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test232)
{
    unsigned char p[] = {184, 224, 151, 200, 44, 130, 33, 220, 41, 1};
    const unsigned p_sz = 10;
    unsigned char q[] = {82, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {3, 97, 120, 118, 165, 250, 66, 220, 182, 123, 1};
    const unsigned r_sz = 11;
    unsigned char buf[12];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test233)
{
    unsigned char p[] = {3, 97, 120, 118, 165, 250, 66, 220, 182, 123, 1};
    const unsigned p_sz = 11;
    unsigned char q[] = {99, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {165, 121, 57, 72, 175, 236, 217, 160, 222, 75, 24, 1};
    const unsigned r_sz = 12;
    unsigned char buf[13];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test234)
{
    unsigned char p[] = {84, 106, 245, 80, 194, 177, 154, 8, 66, 66, 2, 158, 152, 8, 242, 166, 26, 8, 20, 55, 141, 49, 151, 4, 126, 114, 88, 208, 171, 192, 101, 80, 0};
    const unsigned p_sz = 33;
    unsigned char q[] = {165, 121, 57, 72, 175, 236, 217, 160, 222, 75, 24, 1};
    const unsigned q_sz = 12;
    unsigned char r[] = {30, 44, 222, 25, 3, 30, 162, 208, 244, 4, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 164, 155, 91, 126, 124, 189, 89, 34, 182, 80, 0};
    const unsigned r_sz = 44;
    unsigned char buf[45];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test235)
{
    unsigned char p[] = {165, 121, 57, 72, 175, 236, 217, 160, 222, 75, 24, 1};
    const unsigned p_sz = 12;
    unsigned char q[] = {219, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {103, 127, 103, 107, 18, 65, 193, 46, 182, 252, 236, 195, 1};
    const unsigned r_sz = 13;
    unsigned char buf[14];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test236)
{
    unsigned char p[] = {247, 143, 118, 14, 144, 249, 22, 196, 229, 90, 54, 11, 24, 222, 145, 254, 69, 34, 184, 64, 251, 63, 125, 21, 213, 112, 168, 5, 64, 169, 42, 169, 0};
    const unsigned p_sz = 33;
    unsigned char q[] = {103, 127, 103, 107, 18, 65, 193, 46, 182, 252, 236, 195, 1};
    const unsigned q_sz = 13;
    unsigned char r[] = {127, 133, 68, 180, 14, 237, 255, 91, 150, 61, 147, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 82, 249, 191, 231, 211, 28, 22, 229, 37, 243, 169, 0};
    const unsigned r_sz = 45;
    unsigned char buf[46];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test237)
{
    unsigned char p[] = {176, 198, 161, 252, 43, 233, 10, 100, 1};
    const unsigned p_sz = 9;
    unsigned char q[] = {23, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {248, 36, 68, 20, 167, 184, 127, 37, 115, 1};
    const unsigned r_sz = 10;
    unsigned char buf[11];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test238)
{
    unsigned char p[] = {248, 36, 68, 20, 167, 184, 127, 37, 115, 1};
    const unsigned p_sz = 10;
    unsigned char q[] = {77, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {64, 132, 167, 201, 246, 77, 79, 78, 169, 62, 1};
    const unsigned r_sz = 11;
    unsigned char buf[12];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test239)
{
    unsigned char p[] = {64, 132, 167, 201, 246, 77, 79, 78, 169, 62, 1};
    const unsigned p_sz = 11;
    unsigned char q[] = {82, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {57, 103, 199, 20, 168, 98, 125, 45, 86, 41, 108, 1};
    const unsigned r_sz = 12;
    unsigned char buf[13];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test240)
{
    unsigned char p[] = {57, 103, 199, 20, 168, 98, 125, 45, 86, 41, 108, 1};
    const unsigned p_sz = 12;
    unsigned char q[] = {99, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {222, 20, 97, 40, 0, 119, 200, 76, 225, 246, 158, 15, 1};
    const unsigned r_sz = 13;
    unsigned char buf[14];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test241)
{
    unsigned char p[] = {222, 20, 97, 40, 0, 119, 200, 76, 225, 246, 158, 15, 1};
    const unsigned p_sz = 13;
    unsigned char q[] = {219, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {22, 164, 105, 149, 40, 172, 176, 209, 164, 3, 36, 51, 212, 1};
    const unsigned r_sz = 14;
    unsigned char buf[15];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test242)
{
    unsigned char p[] = {138, 177, 90, 192, 27, 41, 237, 222, 16, 30, 11, 141, 60, 7, 27, 72, 19, 253, 123, 63, 9, 84, 36, 242, 115, 8, 117, 10, 120, 204, 45, 134, 0};
    const unsigned p_sz = 33;
    unsigned char q[] = {22, 164, 105, 149, 40, 172, 176, 209, 164, 3, 36, 51, 212, 1};
    const unsigned q_sz = 14;
    unsigned char r[] = {83, 166, 224, 216, 207, 233, 222, 57, 82, 178, 48, 196, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 212, 231, 78, 114, 117, 100, 13, 222, 255, 12, 169, 134, 0};
    const unsigned r_sz = 46;
    unsigned char buf[47];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test243)
{
    unsigned char p[] = {134, 245, 234, 16, 1};
    const unsigned p_sz = 5;
    unsigned char q[] = {181, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {21, 171, 170, 117, 165, 1};
    const unsigned r_sz = 6;
    unsigned char buf[7];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test244)
{
    unsigned char p[] = {21, 171, 170, 117, 165, 1};
    const unsigned p_sz = 6;
    unsigned char q[] = {231, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {138, 5, 92, 238, 102, 66, 1};
    const unsigned r_sz = 7;
    unsigned char buf[8];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test245)
{
    unsigned char p[] = {138, 5, 92, 238, 102, 66, 1};
    const unsigned p_sz = 7;
    unsigned char q[] = {107, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {10, 80, 234, 217, 183, 111, 41, 1};
    const unsigned r_sz = 8;
    unsigned char buf[9];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test246)
{
    unsigned char p[] = {10, 80, 234, 217, 183, 111, 41, 1};
    const unsigned p_sz = 8;
    unsigned char q[] = {52, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {213, 236, 213, 154, 227, 201, 40, 29, 1};
    const unsigned r_sz = 9;
    unsigned char buf[10];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test247)
{
    unsigned char p[] = {213, 236, 213, 154, 227, 201, 40, 29, 1};
    const unsigned p_sz = 9;
    unsigned char q[] = {204, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {48, 227, 220, 248, 220, 182, 95, 129, 209, 1};
    const unsigned r_sz = 10;
    unsigned char buf[11];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test248)
{
    unsigned char p[] = {48, 227, 220, 248, 220, 182, 95, 129, 209, 1};
    const unsigned p_sz = 10;
    unsigned char q[] = {23, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {183, 53, 140, 53, 151, 86, 175, 7, 29, 198, 1};
    const unsigned r_sz = 11;
    unsigned char buf[12];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test249)
{
    unsigned char p[] = {183, 53, 140, 53, 151, 86, 175, 7, 29, 198, 1};
    const unsigned p_sz = 11;
    unsigned char q[] = {77, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {70, 34, 7, 25, 38, 42, 230, 81, 149, 77, 139, 1};
    const unsigned r_sz = 12;
    unsigned char buf[13];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test250)
{
    unsigned char p[] = {70, 34, 7, 25, 38, 42, 230, 81, 149, 77, 139, 1};
    const unsigned p_sz = 12;
    unsigned char q[] = {82, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {200, 112, 129, 182, 122, 186, 2, 196, 109, 1, 99, 217, 1};
    const unsigned r_sz = 13;
    unsigned char buf[14];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test251)
{
    unsigned char p[] = {200, 112, 129, 182, 122, 186, 2, 196, 109, 1, 99, 217, 1};
    const unsigned p_sz = 13;
    unsigned char q[] = {99, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {13, 175, 196, 131, 40, 214, 124, 161, 16, 14, 189, 115, 186, 1};
    const unsigned r_sz = 14;
    unsigned char buf[15];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test252)
{
    unsigned char p[] = {13, 175, 196, 131, 40, 214, 124, 161, 16, 14, 189, 115, 186, 1};
    const unsigned p_sz = 14;
    unsigned char q[] = {219, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {6, 87, 181, 33, 119, 168, 156, 80, 144, 102, 206, 90, 136, 97, 1};
    const unsigned r_sz = 15;
    unsigned char buf[16];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test253)
{
    unsigned char p[] = {98, 163, 56, 68, 88, 116, 254, 78, 39, 74, 41, 95, 164, 243, 190, 210, 30, 35, 207, 204, 72, 240, 76, 76, 186, 195, 71, 67, 31, 85, 43, 144, 0};
    const unsigned p_sz = 33;
    unsigned char q[] = {6, 87, 181, 33, 119, 168, 156, 80, 144, 102, 206, 90, 136, 97, 1};
    const unsigned q_sz = 15;
    unsigned char r[] = {81, 21, 129, 255, 203, 127, 142, 239, 231, 109, 199, 191, 77, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 128, 164, 5, 137, 14, 182, 179, 109, 127, 114, 106, 191, 144, 0};
    const unsigned r_sz = 47;
    unsigned char buf[48];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test254)
{
    unsigned char p[] = {200, 112, 129, 182, 122, 186, 2, 196, 109, 1, 99, 217, 1};
    const unsigned p_sz = 13;
    unsigned char q[] = {191, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {136, 117, 42, 128, 249, 44, 217, 221, 174, 210, 95, 107, 102, 1};
    const unsigned r_sz = 14;
    unsigned char buf[15];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test255)
{
    unsigned char p[] = {136, 117, 42, 128, 249, 44, 217, 221, 174, 210, 95, 107, 102, 1};
    const unsigned p_sz = 14;
    unsigned char q[] = {99, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {232, 29, 112, 253, 108, 171, 60, 88, 158, 36, 66, 220, 37, 5, 1};
    const unsigned r_sz = 15;
    unsigned char buf[16];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test256)
{
    unsigned char p[] = {232, 29, 112, 253, 108, 171, 60, 88, 158, 36, 66, 220, 37, 5, 1};
    const unsigned p_sz = 15;
    unsigned char q[] = {219, 1};
    const unsigned q_sz = 2;
    unsigned char r[] = {165, 223, 138, 116, 134, 125, 37, 95, 138, 183, 75, 255, 46, 181, 222, 1};
    const unsigned r_sz = 16;
    unsigned char buf[17];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}

TEST(GfPolyMul, Test257)
{
    unsigned char p[] = {215, 10, 5, 37, 43, 217, 33, 138, 82, 116, 143, 158, 133, 6, 145, 109, 31, 149, 161, 67, 165, 169, 10, 89, 65, 166, 214, 75, 198, 2, 39, 171, 0};
    const unsigned p_sz = 33;
    unsigned char q[] = {165, 223, 138, 116, 134, 125, 37, 95, 138, 183, 75, 255, 46, 181, 222, 1};
    const unsigned q_sz = 16;
    unsigned char r[] = {136, 54, 128, 45, 40, 75, 184, 106, 113, 130, 215, 225, 191, 79, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 252, 98, 213, 173, 135, 125, 63, 130, 148, 84, 64, 76, 11, 171, 0};
    const unsigned r_sz = 48;
    unsigned char buf[49];
    unsigned buf_sz;
    redupe_gf_poly_mul(p, p_sz, q, q_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
}
