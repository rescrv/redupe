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

TEST(GfPolyScale, Test0)
{
    unsigned char p[] = {1, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {122, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 122);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test1)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char r[] = {6};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 6);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test2)
{
    unsigned char p[] = {6};
    const unsigned p_sz = 1;
    unsigned char r[] = {1};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 122);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test3)
{
    unsigned char p[] = {6, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {169, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 189);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test4)
{
    unsigned char p[] = {1, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {112, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 112);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test5)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char r[] = {40};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 40);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test6)
{
    unsigned char p[] = {40};
    const unsigned p_sz = 1;
    unsigned char r[] = {1};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 112);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test7)
{
    unsigned char p[] = {40, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {101, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 90);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test8)
{
    unsigned char p[] = {40, 0, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {216, 0, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 7);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test9)
{
    unsigned char p[] = {21, 1};
    const unsigned p_sz = 2;
    unsigned char r[] = {7, 186};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 186);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test10)
{
    unsigned char p[] = {7, 186};
    const unsigned p_sz = 2;
    unsigned char r[] = {21, 1};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 7);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test11)
{
    unsigned char p[] = {7, 186, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {52, 172, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 99);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test12)
{
    unsigned char p[] = {1, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {193, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 193);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test13)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char r[] = {89};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 89);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test14)
{
    unsigned char p[] = {89};
    const unsigned p_sz = 1;
    unsigned char r[] = {1};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 193);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test15)
{
    unsigned char p[] = {89, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {128, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 20);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test16)
{
    unsigned char p[] = {1, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {198, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 198);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test17)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char r[] = {163};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 163);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test18)
{
    unsigned char p[] = {163};
    const unsigned p_sz = 1;
    unsigned char r[] = {1};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 198);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test19)
{
    unsigned char p[] = {163, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {57, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 161);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test20)
{
    unsigned char p[] = {163, 0, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {247, 0, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 21);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test21)
{
    unsigned char p[] = {255, 1};
    const unsigned p_sz = 2;
    unsigned char r[] = {78, 62};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 62);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test22)
{
    unsigned char p[] = {78, 62};
    const unsigned p_sz = 2;
    unsigned char r[] = {255, 1};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 21);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test23)
{
    unsigned char p[] = {78, 62, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {177, 63, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 20);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test24)
{
    unsigned char p[] = {1, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {194, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 194);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test25)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char r[] = {165};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 165);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test26)
{
    unsigned char p[] = {165};
    const unsigned p_sz = 1;
    unsigned char r[] = {1};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 194);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test27)
{
    unsigned char p[] = {165, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {50, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 64);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test28)
{
    unsigned char p[] = {1, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {255, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 255);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test29)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char r[] = {253};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 253);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test30)
{
    unsigned char p[] = {253};
    const unsigned p_sz = 1;
    unsigned char r[] = {1};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 255);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test31)
{
    unsigned char p[] = {253, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {201, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 7);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test32)
{
    unsigned char p[] = {253, 0, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {126, 0, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 127);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test33)
{
    unsigned char p[] = {54, 1};
    const unsigned p_sz = 2;
    unsigned char r[] = {191, 252};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 252);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test34)
{
    unsigned char p[] = {191, 252};
    const unsigned p_sz = 2;
    unsigned char r[] = {54, 1};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 127);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test35)
{
    unsigned char p[] = {191, 252, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {103, 248, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 224);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test36)
{
    unsigned char p[] = {1, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {186, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 186);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test37)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char r[] = {7};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 7);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test38)
{
    unsigned char p[] = {7};
    const unsigned p_sz = 1;
    unsigned char r[] = {1};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 186);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test39)
{
    unsigned char p[] = {7, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {144, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 48);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test40)
{
    unsigned char p[] = {7, 0, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {230, 0, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 155);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test41)
{
    unsigned char p[] = {42, 1};
    const unsigned p_sz = 2;
    unsigned char r[] = {150, 148};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 148);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test42)
{
    unsigned char p[] = {150, 148};
    const unsigned p_sz = 2;
    unsigned char r[] = {42, 1};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 155);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test43)
{
    unsigned char p[] = {150, 148, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {97, 75, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 21);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test44)
{
    unsigned char p[] = {150, 148, 0, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {205, 51, 0, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 127);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test45)
{
    unsigned char p[] = {135, 97, 1};
    const unsigned p_sz = 3;
    unsigned char r[] = {49, 251, 252};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 252);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test46)
{
    unsigned char p[] = {49, 251, 252};
    const unsigned p_sz = 3;
    unsigned char r[] = {135, 97, 1};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 127);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test47)
{
    unsigned char p[] = {49, 251, 252, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {107, 158, 188, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 183);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test48)
{
    unsigned char p[] = {1, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {32, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 32);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test49)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char r[] = {108};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 108);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test50)
{
    unsigned char p[] = {108};
    const unsigned p_sz = 1;
    unsigned char r[] = {1};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 32);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test51)
{
    unsigned char p[] = {108, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {28, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 167);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test52)
{
    unsigned char p[] = {108, 0, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {163, 0, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 217);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test53)
{
    unsigned char p[] = {60, 1};
    const unsigned p_sz = 2;
    unsigned char r[] = {203, 115};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 115);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test54)
{
    unsigned char p[] = {203, 115};
    const unsigned p_sz = 2;
    unsigned char r[] = {60, 1};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 217);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test55)
{
    unsigned char p[] = {203, 115, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {74, 239, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 93);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test56)
{
    unsigned char p[] = {203, 115, 0, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {91, 38, 0, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 206);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test57)
{
    unsigned char p[] = {233, 211, 1};
    const unsigned p_sz = 3;
    unsigned char r[] = {218, 72, 168};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 168);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test58)
{
    unsigned char p[] = {218, 72, 168};
    const unsigned p_sz = 3;
    unsigned char r[] = {233, 211, 1};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 206);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test59)
{
    unsigned char p[] = {218, 72, 168, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {96, 236, 106, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 170);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test60)
{
    unsigned char p[] = {218, 72, 168, 0, 0};
    const unsigned p_sz = 5;
    unsigned char r[] = {102, 43, 79, 0, 0};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 131);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test61)
{
    unsigned char p[] = {59, 35, 185, 1};
    const unsigned p_sz = 4;
    unsigned char r[] = {133, 160, 153, 29};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 29);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test62)
{
    unsigned char p[] = {133, 160, 153, 29};
    const unsigned p_sz = 4;
    unsigned char r[] = {59, 35, 185, 1};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 131);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test63)
{
    unsigned char p[] = {133, 160, 153, 29, 0};
    const unsigned p_sz = 5;
    unsigned char r[] = {18, 170, 198, 13, 0};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 217);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test64)
{
    unsigned char p[] = {1, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {110, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 110);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test65)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char r[] = {47};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 47);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test66)
{
    unsigned char p[] = {47};
    const unsigned p_sz = 1;
    unsigned char r[] = {1};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 110);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test67)
{
    unsigned char p[] = {47, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {67, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 48);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test68)
{
    unsigned char p[] = {1, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {26, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 26);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test69)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char r[] = {85};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 85);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test70)
{
    unsigned char p[] = {85};
    const unsigned p_sz = 1;
    unsigned char r[] = {1};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 26);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test71)
{
    unsigned char p[] = {85, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {186, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 191);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test72)
{
    unsigned char p[] = {85, 0, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {185, 0, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 145);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test73)
{
    unsigned char p[] = {160, 1};
    const unsigned p_sz = 2;
    unsigned char r[] = {77, 223};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 223);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test74)
{
    unsigned char p[] = {77, 223};
    const unsigned p_sz = 2;
    unsigned char r[] = {160, 1};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 145);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test75)
{
    unsigned char p[] = {77, 223, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {60, 234, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 220);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test76)
{
    unsigned char p[] = {1, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {163, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 163);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test77)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char r[] = {198};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 198);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test78)
{
    unsigned char p[] = {198};
    const unsigned p_sz = 1;
    unsigned char r[] = {1};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 163);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test79)
{
    unsigned char p[] = {198, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {114, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 207);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test80)
{
    unsigned char p[] = {198, 0, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {122, 0, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 190);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test81)
{
    unsigned char p[] = {209, 1};
    const unsigned p_sz = 2;
    unsigned char r[] = {217, 174};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 174);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test82)
{
    unsigned char p[] = {217, 174};
    const unsigned p_sz = 2;
    unsigned char r[] = {209, 1};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 190);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test83)
{
    unsigned char p[] = {217, 174, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {56, 106, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 26);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test84)
{
    unsigned char p[] = {217, 174, 0, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {226, 87, 0, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 142);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test85)
{
    unsigned char p[] = {66, 187, 1};
    const unsigned p_sz = 3;
    unsigned char r[] = {132, 107, 2};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 2);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test86)
{
    unsigned char p[] = {132, 107, 2};
    const unsigned p_sz = 3;
    unsigned char r[] = {66, 187, 1};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 142);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test87)
{
    unsigned char p[] = {132, 107, 2, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {97, 116, 98, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 49);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test88)
{
    unsigned char p[] = {1, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {95, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 95);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test89)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char r[] = {65};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 65);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test90)
{
    unsigned char p[] = {65};
    const unsigned p_sz = 1;
    unsigned char r[] = {1};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 95);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test91)
{
    unsigned char p[] = {65, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {86, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 24);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test92)
{
    unsigned char p[] = {65, 0, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {213, 0, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 69);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test93)
{
    unsigned char p[] = {9, 1};
    const unsigned p_sz = 2;
    unsigned char r[] = {4, 78};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 78);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test94)
{
    unsigned char p[] = {4, 78};
    const unsigned p_sz = 2;
    unsigned char r[] = {9, 1};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 69);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test95)
{
    unsigned char p[] = {4, 78, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {48, 111, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 12);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test96)
{
    unsigned char p[] = {4, 78, 0, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {164, 49, 0, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 41);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test97)
{
    unsigned char p[] = {229, 102, 1};
    const unsigned p_sz = 3;
    unsigned char r[] = {234, 251, 208};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 208);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test98)
{
    unsigned char p[] = {234, 251, 208};
    const unsigned p_sz = 3;
    unsigned char r[] = {229, 102, 1};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 41);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test99)
{
    unsigned char p[] = {234, 251, 208, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {253, 74, 63, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 105);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test100)
{
    unsigned char p[] = {234, 251, 208, 0, 0};
    const unsigned p_sz = 5;
    unsigned char r[] = {247, 87, 161, 0, 0};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 89);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test101)
{
    unsigned char p[] = {89, 158, 89, 1};
    const unsigned p_sz = 4;
    unsigned char r[] = {1, 98, 1, 193};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 193);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test102)
{
    unsigned char p[] = {1, 98, 1, 193};
    const unsigned p_sz = 4;
    unsigned char r[] = {89, 158, 89, 1};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 89);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test103)
{
    unsigned char p[] = {1, 98, 1, 193, 0};
    const unsigned p_sz = 5;
    unsigned char r[] = {39, 239, 39, 120, 0};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 39);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test104)
{
    unsigned char p[] = {1, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {123, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 123);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test105)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char r[] = {187};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 187);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test106)
{
    unsigned char p[] = {187};
    const unsigned p_sz = 1;
    unsigned char r[] = {1};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 123);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test107)
{
    unsigned char p[] = {187, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {127, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 16);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test108)
{
    unsigned char p[] = {1, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {158, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 158);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test109)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char r[] = {199};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 199);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test110)
{
    unsigned char p[] = {199};
    const unsigned p_sz = 1;
    unsigned char r[] = {1};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 158);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test111)
{
    unsigned char p[] = {199, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {10, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 165);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test112)
{
    unsigned char p[] = {199, 0, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {112, 0, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 107);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test113)
{
    unsigned char p[] = {148, 1};
    const unsigned p_sz = 2;
    unsigned char r[] = {162, 179};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 179);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test114)
{
    unsigned char p[] = {162, 179};
    const unsigned p_sz = 2;
    unsigned char r[] = {148, 1};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 107);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test115)
{
    unsigned char p[] = {162, 179, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {237, 240, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 99);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test116)
{
    unsigned char p[] = {1, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {23, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 23);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test117)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char r[] = {102};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 102);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test118)
{
    unsigned char p[] = {102};
    const unsigned p_sz = 1;
    unsigned char r[] = {1};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 23);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test119)
{
    unsigned char p[] = {102, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {67, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 144);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test120)
{
    unsigned char p[] = {102, 0, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {106, 0, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 229);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test121)
{
    unsigned char p[] = {84, 1};
    const unsigned p_sz = 2;
    unsigned char r[] = {122, 177};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 177);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test122)
{
    unsigned char p[] = {122, 177};
    const unsigned p_sz = 2;
    unsigned char r[] = {84, 1};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 229);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test123)
{
    unsigned char p[] = {122, 177, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {180, 184, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 159);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test124)
{
    unsigned char p[] = {122, 177, 0, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {75, 37, 0, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 167);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test125)
{
    unsigned char p[] = {222, 236, 1};
    const unsigned p_sz = 3;
    unsigned char r[] = {129, 123, 5};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 5);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test126)
{
    unsigned char p[] = {129, 123, 5};
    const unsigned p_sz = 3;
    unsigned char r[] = {222, 236, 1};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 167);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test127)
{
    unsigned char p[] = {129, 123, 5, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {210, 147, 173, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 112);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test128)
{
    unsigned char p[] = {1, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {19, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 19);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test129)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char r[] = {88};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 88);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test130)
{
    unsigned char p[] = {88};
    const unsigned p_sz = 1;
    unsigned char r[] = {1};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 19);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test131)
{
    unsigned char p[] = {88, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {223, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 13);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test132)
{
    unsigned char p[] = {88, 0, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {163, 0, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 26);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test133)
{
    unsigned char p[] = {204, 1};
    const unsigned p_sz = 2;
    unsigned char r[] = {234, 85};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 85);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test134)
{
    unsigned char p[] = {234, 85};
    const unsigned p_sz = 2;
    unsigned char r[] = {204, 1};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 26);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test135)
{
    unsigned char p[] = {234, 85, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {254, 195, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 97);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test136)
{
    unsigned char p[] = {234, 85, 0, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {187, 178, 0, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 111);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test137)
{
    unsigned char p[] = {93, 15, 1};
    const unsigned p_sz = 3;
    unsigned char r[] = {108, 19, 50};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 50);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test138)
{
    unsigned char p[] = {108, 19, 50};
    const unsigned p_sz = 3;
    unsigned char r[] = {93, 15, 1};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 111);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test139)
{
    unsigned char p[] = {108, 19, 50, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {80, 202, 71, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 210);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test140)
{
    unsigned char p[] = {108, 19, 50, 0, 0};
    const unsigned p_sz = 5;
    unsigned char r[] = {2, 180, 28, 0, 0};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 64);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test141)
{
    unsigned char p[] = {235, 37, 72, 1};
    const unsigned p_sz = 4;
    unsigned char r[] = {122, 96, 172, 54};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 54);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test142)
{
    unsigned char p[] = {122, 96, 172, 54};
    const unsigned p_sz = 4;
    unsigned char r[] = {235, 37, 72, 1};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 64);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test143)
{
    unsigned char p[] = {122, 96, 172, 54, 0};
    const unsigned p_sz = 5;
    unsigned char r[] = {31, 229, 13, 109, 0};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 66);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test144)
{
    unsigned char p[] = {253, 0, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {29, 0, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 196);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test145)
{
    unsigned char p[] = {255, 1};
    const unsigned p_sz = 2;
    unsigned char r[] = {131, 101};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 101);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test146)
{
    unsigned char p[] = {131, 101};
    const unsigned p_sz = 2;
    unsigned char r[] = {255, 1};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 196);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test147)
{
    unsigned char p[] = {131, 101, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {228, 203, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 198);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test148)
{
    unsigned char p[] = {131, 101, 0, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {200, 117, 0, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 221);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test149)
{
    unsigned char p[] = {249, 52, 1};
    const unsigned p_sz = 3;
    unsigned char r[] = {116, 213, 10};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 10);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test150)
{
    unsigned char p[] = {116, 213, 10};
    const unsigned p_sz = 3;
    unsigned char r[] = {249, 52, 1};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 221);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test151)
{
    unsigned char p[] = {116, 213, 10, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {128, 57, 70, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 173);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test152)
{
    unsigned char p[] = {116, 213, 10, 0, 0};
    const unsigned p_sz = 5;
    unsigned char r[] = {159, 25, 127, 0, 0};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 37);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test153)
{
    unsigned char p[] = {72, 181, 114, 1};
    const unsigned p_sz = 4;
    unsigned char r[] = {174, 64, 147, 86};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 86);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test154)
{
    unsigned char p[] = {174, 64, 147, 86};
    const unsigned p_sz = 4;
    unsigned char r[] = {72, 181, 114, 1};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 37);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test155)
{
    unsigned char p[] = {174, 64, 147, 86, 0};
    const unsigned p_sz = 5;
    unsigned char r[] = {40, 151, 139, 211, 0};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 199);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test156)
{
    unsigned char p[] = {174, 64, 147, 86, 0, 0};
    const unsigned p_sz = 6;
    unsigned char r[] = {55, 2, 62, 249, 0, 0};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 108);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test157)
{
    unsigned char p[] = {183, 198, 65, 161, 1};
    const unsigned p_sz = 5;
    unsigned char r[] = {99, 229, 200, 153, 32};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 32);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test158)
{
    unsigned char p[] = {99, 229, 200, 153, 32};
    const unsigned p_sz = 5;
    unsigned char r[] = {183, 198, 65, 161, 1};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 108);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test159)
{
    unsigned char p[] = {99, 229, 200, 153, 32, 0};
    const unsigned p_sz = 6;
    unsigned char r[] = {240, 214, 129, 22, 227, 0};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 179);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test160)
{
    unsigned char p[] = {1, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {5, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 5);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test161)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char r[] = {167};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 167);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test162)
{
    unsigned char p[] = {167};
    const unsigned p_sz = 1;
    unsigned char r[] = {1};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 5);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test163)
{
    unsigned char p[] = {167, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {23, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 75);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test164)
{
    unsigned char p[] = {167, 0, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {252, 0, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 43);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test165)
{
    unsigned char p[] = {18, 1};
    const unsigned p_sz = 2;
    unsigned char r[] = {64, 74};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 74);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test166)
{
    unsigned char p[] = {64, 74};
    const unsigned p_sz = 2;
    unsigned char r[] = {18, 1};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 43);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test167)
{
    unsigned char p[] = {64, 74, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {209, 130, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 114);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test168)
{
    unsigned char p[] = {64, 74, 0, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {178, 176, 0, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 167);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test169)
{
    unsigned char p[] = {45, 144, 1};
    const unsigned p_sz = 3;
    unsigned char r[] = {153, 234, 5};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 5);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test170)
{
    unsigned char p[] = {153, 234, 5};
    const unsigned p_sz = 3;
    unsigned char r[] = {45, 144, 1};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 167);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test171)
{
    unsigned char p[] = {153, 234, 5, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {200, 85, 171, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 133);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test172)
{
    unsigned char p[] = {153, 234, 5, 0, 0};
    const unsigned p_sz = 5;
    unsigned char r[] = {184, 177, 62, 0, 0};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 95);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test173)
{
    unsigned char p[] = {122, 200, 59, 1};
    const unsigned p_sz = 4;
    unsigned char r[] = {145, 184, 93, 65};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 65);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test174)
{
    unsigned char p[] = {145, 184, 93, 65};
    const unsigned p_sz = 4;
    unsigned char r[] = {122, 200, 59, 1};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 95);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test175)
{
    unsigned char p[] = {145, 184, 93, 65, 0};
    const unsigned p_sz = 5;
    unsigned char r[] = {49, 82, 101, 166, 0};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 76);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test176)
{
    unsigned char p[] = {145, 184, 93, 65, 0, 0};
    const unsigned p_sz = 6;
    unsigned char r[] = {72, 25, 237, 173, 0, 0};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 111);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test177)
{
    unsigned char p[] = {137, 153, 147, 157, 1};
    const unsigned p_sz = 5;
    unsigned char r[] = {135, 128, 105, 72, 50};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 50);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test178)
{
    unsigned char p[] = {135, 128, 105, 72, 50};
    const unsigned p_sz = 5;
    unsigned char r[] = {137, 153, 147, 157, 1};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 111);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test179)
{
    unsigned char p[] = {135, 128, 105, 72, 50, 0};
    const unsigned p_sz = 6;
    unsigned char r[] = {216, 233, 212, 162, 219, 0};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 11);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test180)
{
    unsigned char p[] = {135, 128, 105, 72, 50, 0, 0};
    const unsigned p_sz = 7;
    unsigned char r[] = {70, 181, 182, 64, 122, 0, 0};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 156);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test181)
{
    unsigned char p[] = {144, 121, 160, 156, 70, 1};
    const unsigned p_sz = 6;
    unsigned char r[] = {130, 219, 180, 1, 135, 172};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 172);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test182)
{
    unsigned char p[] = {130, 219, 180, 1, 135, 172};
    const unsigned p_sz = 6;
    unsigned char r[] = {144, 121, 160, 156, 70, 1};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 156);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test183)
{
    unsigned char p[] = {130, 219, 180, 1, 135, 172, 0};
    const unsigned p_sz = 7;
    unsigned char r[] = {6, 232, 189, 225, 68, 80, 0};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 225);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test184)
{
    unsigned char p[] = {1, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {120, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 120);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test185)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char r[] = {219};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 219);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test186)
{
    unsigned char p[] = {219};
    const unsigned p_sz = 1;
    unsigned char r[] = {1};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 120);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test187)
{
    unsigned char p[] = {219, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {183, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 203);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test188)
{
    unsigned char p[] = {219, 0, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {107, 0, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 191);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test189)
{
    unsigned char p[] = {207, 1};
    const unsigned p_sz = 2;
    unsigned char r[] = {107, 182};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 182);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test190)
{
    unsigned char p[] = {107, 182};
    const unsigned p_sz = 2;
    unsigned char r[] = {207, 1};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 191);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test191)
{
    unsigned char p[] = {107, 182, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {216, 32, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 126);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test192)
{
    unsigned char p[] = {107, 182, 0, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {145, 241, 0, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 231);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test193)
{
    unsigned char p[] = {179, 239, 1};
    const unsigned p_sz = 3;
    unsigned char r[] = {223, 218, 241};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 241);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test194)
{
    unsigned char p[] = {223, 218, 241};
    const unsigned p_sz = 3;
    unsigned char r[] = {179, 239, 1};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 231);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test195)
{
    unsigned char p[] = {223, 218, 241, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {248, 230, 28, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 6);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test196)
{
    unsigned char p[] = {223, 218, 241, 0, 0};
    const unsigned p_sz = 5;
    unsigned char r[] = {148, 211, 236, 0, 0};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 224);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test197)
{
    unsigned char p[] = {105, 164, 243, 1};
    const unsigned p_sz = 4;
    unsigned char r[] = {103, 56, 96, 20};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 20);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test198)
{
    unsigned char p[] = {103, 56, 96, 20};
    const unsigned p_sz = 4;
    unsigned char r[] = {105, 164, 243, 1};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 224);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test199)
{
    unsigned char p[] = {103, 56, 96, 20, 0};
    const unsigned p_sz = 5;
    unsigned char r[] = {145, 2, 214, 104, 0};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 160);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test200)
{
    unsigned char p[] = {103, 56, 96, 20, 0, 0};
    const unsigned p_sz = 6;
    unsigned char r[] = {126, 8, 127, 189, 0, 0};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 186);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test201)
{
    unsigned char p[] = {5, 184, 158, 155, 1};
    const unsigned p_sz = 5;
    unsigned char r[] = {27, 15, 253, 230, 7};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 7);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test202)
{
    unsigned char p[] = {27, 15, 253, 230, 7};
    const unsigned p_sz = 5;
    unsigned char r[] = {5, 184, 158, 155, 1};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 186);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test203)
{
    unsigned char p[] = {27, 15, 253, 230, 7, 0};
    const unsigned p_sz = 6;
    unsigned char r[] = {210, 21, 154, 72, 58, 0};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 97);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test204)
{
    unsigned char p[] = {27, 15, 253, 230, 7, 0, 0};
    const unsigned p_sz = 7;
    unsigned char r[] = {224, 96, 156, 124, 146, 0, 0};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 89);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test205)
{
    unsigned char p[] = {172, 24, 93, 107, 161, 1};
    const unsigned p_sz = 6;
    unsigned char r[] = {116, 202, 34, 23, 208, 193};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 193);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test206)
{
    unsigned char p[] = {116, 202, 34, 23, 208, 193};
    const unsigned p_sz = 6;
    unsigned char r[] = {172, 24, 93, 107, 161, 1};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 89);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test207)
{
    unsigned char p[] = {116, 202, 34, 23, 208, 193, 0};
    const unsigned p_sz = 7;
    unsigned char r[] = {64, 47, 175, 51, 13, 212, 0};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 216);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test208)
{
    unsigned char p[] = {116, 202, 34, 23, 208, 193, 0, 0};
    const unsigned p_sz = 8;
    unsigned char r[] = {224, 232, 53, 194, 159, 11, 0, 0};
    const unsigned r_sz = 8;
    redupe_gf_poly_scale(p, p_sz, 25);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test209)
{
    unsigned char p[] = {160, 227, 43, 18, 244, 117, 1};
    const unsigned p_sz = 7;
    unsigned char r[] = {237, 11, 3, 192, 74, 187, 222};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 222);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test210)
{
    unsigned char p[] = {237, 11, 3, 192, 74, 187, 222};
    const unsigned p_sz = 7;
    unsigned char r[] = {160, 227, 43, 18, 244, 117, 1};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 25);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test211)
{
    unsigned char p[] = {237, 11, 3, 192, 74, 187, 222, 0};
    const unsigned p_sz = 8;
    unsigned char r[] = {213, 201, 190, 188, 60, 197, 68, 0};
    const unsigned r_sz = 8;
    redupe_gf_poly_scale(p, p_sz, 106);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test212)
{
    unsigned char p[] = {1, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {9, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 9);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test213)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char r[] = {157};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 157);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test214)
{
    unsigned char p[] = {157};
    const unsigned p_sz = 1;
    unsigned char r[] = {1};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 9);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test215)
{
    unsigned char p[] = {157, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {4, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 36);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test216)
{
    unsigned char p[] = {157, 0, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {245, 0, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 14);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test217)
{
    unsigned char p[] = {13, 1};
    const unsigned p_sz = 2;
    unsigned char r[] = {230, 93};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 93);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test218)
{
    unsigned char p[] = {230, 93};
    const unsigned p_sz = 2;
    unsigned char r[] = {13, 1};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 14);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test219)
{
    unsigned char p[] = {230, 93, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {91, 125, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 220);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test220)
{
    unsigned char p[] = {230, 93, 0, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {192, 98, 0, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 102);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test221)
{
    unsigned char p[] = {174, 112, 1};
    const unsigned p_sz = 3;
    unsigned char r[] = {95, 30, 23};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 23);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test222)
{
    unsigned char p[] = {95, 30, 23};
    const unsigned p_sz = 3;
    unsigned char r[] = {174, 112, 1};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 102);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test223)
{
    unsigned char p[] = {95, 30, 23, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {198, 227, 122, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 17);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test224)
{
    unsigned char p[] = {95, 30, 23, 0, 0};
    const unsigned p_sz = 5;
    unsigned char r[] = {241, 110, 22, 0, 0};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 103);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test225)
{
    unsigned char p[] = {6, 47, 10, 1};
    const unsigned p_sz = 4;
    unsigned char r[] = {179, 249, 200, 77};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 77);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test226)
{
    unsigned char p[] = {179, 249, 200, 77};
    const unsigned p_sz = 4;
    unsigned char r[] = {6, 47, 10, 1};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 103);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test227)
{
    unsigned char p[] = {179, 249, 200, 77, 0};
    const unsigned p_sz = 5;
    unsigned char r[] = {208, 170, 109, 211, 0};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 130);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test228)
{
    unsigned char p[] = {179, 249, 200, 77, 0, 0};
    const unsigned p_sz = 6;
    unsigned char r[] = {43, 64, 125, 130, 0, 0};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 35);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test229)
{
    unsigned char p[] = {33, 194, 84, 217, 1};
    const unsigned p_sz = 5;
    unsigned char r[] = {163, 180, 217, 140, 81};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 81);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test230)
{
    unsigned char p[] = {163, 180, 217, 140, 81};
    const unsigned p_sz = 5;
    unsigned char r[] = {33, 194, 84, 217, 1};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 35);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test231)
{
    unsigned char p[] = {163, 180, 217, 140, 81, 0};
    const unsigned p_sz = 6;
    unsigned char r[] = {230, 225, 145, 199, 234, 0};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 47);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test232)
{
    unsigned char p[] = {163, 180, 217, 140, 81, 0, 0};
    const unsigned p_sz = 7;
    unsigned char r[] = {52, 156, 206, 95, 9, 0, 0};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 38);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test233)
{
    unsigned char p[] = {205, 128, 46, 17, 51, 1};
    const unsigned p_sz = 6;
    unsigned char r[] = {173, 131, 124, 214, 103, 44};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 44);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test234)
{
    unsigned char p[] = {173, 131, 124, 214, 103, 44};
    const unsigned p_sz = 6;
    unsigned char r[] = {205, 128, 46, 17, 51, 1};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 38);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test235)
{
    unsigned char p[] = {173, 131, 124, 214, 103, 44, 0};
    const unsigned p_sz = 7;
    unsigned char r[] = {156, 96, 146, 197, 82, 201, 0};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 148);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test236)
{
    unsigned char p[] = {173, 131, 124, 214, 103, 44, 0, 0};
    const unsigned p_sz = 8;
    unsigned char r[] = {106, 156, 183, 133, 146, 24, 0, 0};
    const unsigned r_sz = 8;
    redupe_gf_poly_scale(p, p_sz, 119);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test237)
{
    unsigned char p[] = {168, 49, 220, 180, 74, 250, 1};
    const unsigned p_sz = 7;
    unsigned char r[] = {34, 33, 168, 247, 54, 56, 121};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 121);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test238)
{
    unsigned char p[] = {34, 33, 168, 247, 54, 56, 121};
    const unsigned p_sz = 7;
    unsigned char r[] = {168, 49, 220, 180, 74, 250, 1};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 119);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test239)
{
    unsigned char p[] = {34, 33, 168, 247, 54, 56, 121, 0};
    const unsigned p_sz = 8;
    unsigned char r[] = {188, 208, 62, 112, 86, 179, 98, 0};
    const unsigned r_sz = 8;
    redupe_gf_poly_scale(p, p_sz, 36);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test240)
{
    unsigned char p[] = {34, 33, 168, 247, 54, 56, 121, 0, 0};
    const unsigned p_sz = 9;
    unsigned char r[] = {63, 224, 162, 181, 210, 232, 234, 0, 0};
    const unsigned r_sz = 9;
    redupe_gf_poly_scale(p, p_sz, 190);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test241)
{
    unsigned char p[] = {214, 228, 184, 41, 112, 225, 152, 1};
    const unsigned p_sz = 8;
    unsigned char r[] = {180, 163, 194, 211, 158, 143, 166, 174};
    const unsigned r_sz = 8;
    redupe_gf_poly_scale(p, p_sz, 174);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test242)
{
    unsigned char p[] = {180, 163, 194, 211, 158, 143, 166, 174};
    const unsigned p_sz = 8;
    unsigned char r[] = {214, 228, 184, 41, 112, 225, 152, 1};
    const unsigned r_sz = 8;
    redupe_gf_poly_scale(p, p_sz, 190);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test243)
{
    unsigned char p[] = {180, 163, 194, 211, 158, 143, 166, 174, 0};
    const unsigned p_sz = 9;
    unsigned char r[] = {180, 163, 194, 211, 158, 143, 166, 174, 0};
    const unsigned r_sz = 9;
    redupe_gf_poly_scale(p, p_sz, 1);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test244)
{
    unsigned char p[] = {40, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {26, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 20);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test245)
{
    unsigned char p[] = {1, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {45, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 45);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test246)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char r[] = {139};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 139);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test247)
{
    unsigned char p[] = {139};
    const unsigned p_sz = 1;
    unsigned char r[] = {1};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 45);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test248)
{
    unsigned char p[] = {139, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {46, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 82);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test249)
{
    unsigned char p[] = {139, 0, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {128, 0, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 3);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test250)
{
    unsigned char p[] = {3, 1};
    const unsigned p_sz = 2;
    unsigned char r[] = {1, 244};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 244);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test251)
{
    unsigned char p[] = {1, 244};
    const unsigned p_sz = 2;
    unsigned char r[] = {3, 1};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 3);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test252)
{
    unsigned char p[] = {1, 244, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {196, 183, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 196);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test253)
{
    unsigned char p[] = {1, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {38, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 38);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test254)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char r[] = {44};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 44);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test255)
{
    unsigned char p[] = {44};
    const unsigned p_sz = 1;
    unsigned char r[] = {1};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 38);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test256)
{
    unsigned char p[] = {44, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {163, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 52);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test257)
{
    unsigned char p[] = {44, 0, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {135, 0, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 24);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test258)
{
    unsigned char p[] = {133, 1};
    const unsigned p_sz = 2;
    unsigned char r[] = {17, 144};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 144);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test259)
{
    unsigned char p[] = {17, 144};
    const unsigned p_sz = 2;
    unsigned char r[] = {133, 1};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 24);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test260)
{
    unsigned char p[] = {17, 144, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {79, 29, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 37);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test261)
{
    unsigned char p[] = {17, 144, 0, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {46, 4, 0, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 96);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test262)
{
    unsigned char p[] = {200, 152, 1};
    const unsigned p_sz = 3;
    unsigned char r[] = {63, 176, 36};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 36);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test263)
{
    unsigned char p[] = {63, 176, 36};
    const unsigned p_sz = 3;
    unsigned char r[] = {200, 152, 1};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 96);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test264)
{
    unsigned char p[] = {63, 176, 36, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {17, 227, 115, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 87);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test265)
{
    unsigned char p[] = {1, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {171, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 171);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test266)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char r[] = {60};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 60);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test267)
{
    unsigned char p[] = {60};
    const unsigned p_sz = 1;
    unsigned char r[] = {1};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 171);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test268)
{
    unsigned char p[] = {60, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {104, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 96);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test269)
{
    unsigned char p[] = {60, 0, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {255, 0, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 67);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test270)
{
    unsigned char p[] = {195, 1};
    const unsigned p_sz = 2;
    unsigned char r[] = {199, 213};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 213);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test271)
{
    unsigned char p[] = {199, 213};
    const unsigned p_sz = 2;
    unsigned char r[] = {195, 1};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 67);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test272)
{
    unsigned char p[] = {199, 213, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {156, 137, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 123);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test273)
{
    unsigned char p[] = {199, 213, 0, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {116, 140, 0, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 41);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test274)
{
    unsigned char p[] = {99, 74, 1};
    const unsigned p_sz = 3;
    unsigned char r[] = {76, 77, 208};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 208);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test275)
{
    unsigned char p[] = {76, 77, 208};
    const unsigned p_sz = 3;
    unsigned char r[] = {99, 74, 1};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 41);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test276)
{
    unsigned char p[] = {76, 77, 208, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {110, 185, 201, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 215);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test277)
{
    unsigned char p[] = {76, 77, 208, 0, 0};
    const unsigned p_sz = 5;
    unsigned char r[] = {1, 23, 91, 0, 0};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 22);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test278)
{
    unsigned char p[] = {26, 86, 131, 1};
    const unsigned p_sz = 4;
    unsigned char r[] = {118, 235, 29, 76};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 76);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test279)
{
    unsigned char p[] = {118, 235, 29, 76};
    const unsigned p_sz = 4;
    unsigned char r[] = {26, 86, 131, 1};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 22);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test280)
{
    unsigned char p[] = {118, 235, 29, 76, 0};
    const unsigned p_sz = 5;
    unsigned char r[] = {80, 252, 200, 221, 0};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 165);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test281)
{
    unsigned char p[] = {1, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {166, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 166);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test282)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char r[] = {70};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 70);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test283)
{
    unsigned char p[] = {70};
    const unsigned p_sz = 1;
    unsigned char r[] = {1};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 166);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test284)
{
    unsigned char p[] = {70, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {99, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 124);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test285)
{
    unsigned char p[] = {70, 0, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {252, 0, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 59);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test286)
{
    unsigned char p[] = {197, 1};
    const unsigned p_sz = 2;
    unsigned char r[] = {8, 169};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 169);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test287)
{
    unsigned char p[] = {8, 169};
    const unsigned p_sz = 2;
    unsigned char r[] = {197, 1};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 59);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test288)
{
    unsigned char p[] = {8, 169, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {123, 140, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 229);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test289)
{
    unsigned char p[] = {8, 169, 0, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {76, 82, 0, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 135);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test290)
{
    unsigned char p[] = {135, 73, 1};
    const unsigned p_sz = 3;
    unsigned char r[] = {1, 66, 176};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 176);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test291)
{
    unsigned char p[] = {1, 66, 176};
    const unsigned p_sz = 3;
    unsigned char r[] = {135, 73, 1};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 135);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test292)
{
    unsigned char p[] = {1, 66, 176, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {205, 170, 142, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 205);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test293)
{
    unsigned char p[] = {1, 66, 176, 0, 0};
    const unsigned p_sz = 5;
    unsigned char r[] = {231, 172, 153, 0, 0};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 231);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test294)
{
    unsigned char p[] = {129, 127, 199, 1};
    const unsigned p_sz = 4;
    unsigned char r[] = {192, 64, 74, 241};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 241);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test295)
{
    unsigned char p[] = {192, 64, 74, 241};
    const unsigned p_sz = 4;
    unsigned char r[] = {129, 127, 199, 1};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 231);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test296)
{
    unsigned char p[] = {192, 64, 74, 241, 0};
    const unsigned p_sz = 5;
    unsigned char r[] = {141, 123, 224, 214, 0};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 63);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test297)
{
    unsigned char p[] = {192, 64, 74, 241, 0, 0};
    const unsigned p_sz = 6;
    unsigned char r[] = {50, 229, 28, 211, 0, 0};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 99);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test298)
{
    unsigned char p[] = {106, 86, 6, 17, 1};
    const unsigned p_sz = 5;
    unsigned char r[] = {184, 93, 199, 130, 91};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 91);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test299)
{
    unsigned char p[] = {184, 93, 199, 130, 91};
    const unsigned p_sz = 5;
    unsigned char r[] = {106, 86, 6, 17, 1};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 99);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test300)
{
    unsigned char p[] = {184, 93, 199, 130, 91, 0};
    const unsigned p_sz = 6;
    unsigned char r[] = {4, 49, 125, 222, 155, 0};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 51);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test301)
{
    unsigned char p[] = {102, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {106, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 229);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test302)
{
    unsigned char p[] = {102, 0, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {225, 0, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 43);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test303)
{
    unsigned char p[] = {125, 1};
    const unsigned p_sz = 2;
    unsigned char r[] = {3, 74};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 74);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test304)
{
    unsigned char p[] = {3, 74};
    const unsigned p_sz = 2;
    unsigned char r[] = {125, 1};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 43);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test305)
{
    unsigned char p[] = {3, 74, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {119, 160, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 45);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test306)
{
    unsigned char p[] = {3, 74, 0, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {2, 135, 0, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 245);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test307)
{
    unsigned char p[] = {150, 221, 1};
    const unsigned p_sz = 3;
    unsigned char r[] = {221, 61, 143};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 143);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test308)
{
    unsigned char p[] = {221, 61, 143};
    const unsigned p_sz = 3;
    unsigned char r[] = {150, 221, 1};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 245);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test309)
{
    unsigned char p[] = {221, 61, 143, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {246, 141, 27, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 18);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test310)
{
    unsigned char p[] = {221, 61, 143, 0, 0};
    const unsigned p_sz = 5;
    unsigned char r[] = {244, 142, 5, 0, 0};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 6);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test311)
{
    unsigned char p[] = {244, 156, 198, 1};
    const unsigned p_sz = 4;
    unsigned char r[] = {221, 58, 33, 122};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 122);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test312)
{
    unsigned char p[] = {221, 58, 33, 122};
    const unsigned p_sz = 4;
    unsigned char r[] = {244, 156, 198, 1};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 6);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test313)
{
    unsigned char p[] = {221, 58, 33, 122, 0};
    const unsigned p_sz = 5;
    unsigned char r[] = {203, 212, 215, 64, 0};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 157);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test314)
{
    unsigned char p[] = {221, 58, 33, 122, 0, 0};
    const unsigned p_sz = 6;
    unsigned char r[] = {110, 207, 59, 178, 0, 0};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 139);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test315)
{
    unsigned char p[] = {63, 174, 78, 134, 1};
    const unsigned p_sz = 5;
    unsigned char r[] = {149, 81, 20, 237, 45};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 45);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test316)
{
    unsigned char p[] = {149, 81, 20, 237, 45};
    const unsigned p_sz = 5;
    unsigned char r[] = {63, 174, 78, 134, 1};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 139);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test317)
{
    unsigned char p[] = {149, 81, 20, 237, 45, 0};
    const unsigned p_sz = 6;
    unsigned char r[] = {210, 187, 98, 131, 82, 0};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 46);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test318)
{
    unsigned char p[] = {149, 81, 20, 237, 45, 0, 0};
    const unsigned p_sz = 7;
    unsigned char r[] = {224, 144, 188, 79, 74, 0, 0};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 90);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test319)
{
    unsigned char p[] = {188, 75, 247, 127, 212, 1};
    const unsigned p_sz = 6;
    unsigned char r[] = {20, 230, 242, 153, 234, 203};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 203);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test320)
{
    unsigned char p[] = {20, 230, 242, 153, 234, 203};
    const unsigned p_sz = 6;
    unsigned char r[] = {188, 75, 247, 127, 212, 1};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 90);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test321)
{
    unsigned char p[] = {20, 230, 242, 153, 234, 203, 0};
    const unsigned p_sz = 7;
    unsigned char r[] = {232, 147, 123, 12, 203, 100, 0};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 249);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test322)
{
    unsigned char p[] = {1, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {109, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 109);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test323)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char r[] = {236};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 236);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test324)
{
    unsigned char p[] = {236};
    const unsigned p_sz = 1;
    unsigned char r[] = {1};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 109);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test325)
{
    unsigned char p[] = {236, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {250, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 236);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test326)
{
    unsigned char p[] = {236, 0, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {216, 0, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 23);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test327)
{
    unsigned char p[] = {151, 1};
    const unsigned p_sz = 2;
    unsigned char r[] = {108, 102};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 102);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test328)
{
    unsigned char p[] = {108, 102};
    const unsigned p_sz = 2;
    unsigned char r[] = {151, 1};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 23);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test329)
{
    unsigned char p[] = {108, 102, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {8, 218, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 29);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test330)
{
    unsigned char p[] = {108, 102, 0, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {234, 146, 0, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 12);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test331)
{
    unsigned char p[] = {208, 77, 1};
    const unsigned p_sz = 3;
    unsigned char r[] = {231, 199, 61};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 61);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test332)
{
    unsigned char p[] = {231, 199, 61};
    const unsigned p_sz = 3;
    unsigned char r[] = {208, 77, 1};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 12);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test333)
{
    unsigned char p[] = {231, 199, 61, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {149, 69, 30, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 136);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test334)
{
    unsigned char p[] = {231, 199, 61, 0, 0};
    const unsigned p_sz = 5;
    unsigned char r[] = {99, 28, 160, 0, 0};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 211);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test335)
{
    unsigned char p[] = {127, 7, 83, 1};
    const unsigned p_sz = 4;
    unsigned char r[] = {32, 248, 151, 246};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 246);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test336)
{
    unsigned char p[] = {32, 248, 151, 246};
    const unsigned p_sz = 4;
    unsigned char r[] = {127, 7, 83, 1};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 211);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test337)
{
    unsigned char p[] = {32, 248, 151, 246, 0};
    const unsigned p_sz = 5;
    unsigned char r[] = {66, 108, 8, 20, 0};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 218);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test338)
{
    unsigned char p[] = {32, 248, 151, 246, 0, 0};
    const unsigned p_sz = 6;
    unsigned char r[] = {47, 150, 165, 139, 0, 0};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 95);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test339)
{
    unsigned char p[] = {33, 15, 175, 71, 1};
    const unsigned p_sz = 5;
    unsigned char r[] = {137, 232, 39, 87, 65};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 65);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test340)
{
    unsigned char p[] = {137, 232, 39, 87, 65};
    const unsigned p_sz = 5;
    unsigned char r[] = {33, 15, 175, 71, 1};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 95);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test341)
{
    unsigned char p[] = {137, 232, 39, 87, 65, 0};
    const unsigned p_sz = 6;
    unsigned char r[] = {103, 35, 47, 36, 144, 0};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 37);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test342)
{
    unsigned char p[] = {137, 232, 39, 87, 65, 0, 0};
    const unsigned p_sz = 7;
    unsigned char r[] = {161, 1, 234, 171, 150, 0, 0};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 250);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test343)
{
    unsigned char p[] = {72, 148, 133, 0, 215, 1};
    const unsigned p_sz = 6;
    unsigned char r[] = {139, 140, 66, 0, 49, 232};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 232);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test344)
{
    unsigned char p[] = {139, 140, 66, 0, 49, 232};
    const unsigned p_sz = 6;
    unsigned char r[] = {72, 148, 133, 0, 215, 1};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 250);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test345)
{
    unsigned char p[] = {139, 140, 66, 0, 49, 232, 0};
    const unsigned p_sz = 7;
    unsigned char r[] = {62, 49, 76, 0, 105, 84, 0};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 184);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test346)
{
    unsigned char p[] = {139, 140, 66, 0, 49, 232, 0, 0};
    const unsigned p_sz = 8;
    unsigned char r[] = {55, 173, 127, 0, 23, 249, 0, 0};
    const unsigned r_sz = 8;
    redupe_gf_poly_scale(p, p_sz, 224);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test347)
{
    unsigned char p[] = {159, 120, 50, 46, 255, 131, 1};
    const unsigned p_sz = 7;
    unsigned char r[] = {67, 46, 207, 98, 144, 238, 20};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 20);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test348)
{
    unsigned char p[] = {67, 46, 207, 98, 144, 238, 20};
    const unsigned p_sz = 7;
    unsigned char r[] = {159, 120, 50, 46, 255, 131, 1};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 224);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test349)
{
    unsigned char p[] = {67, 46, 207, 98, 144, 238, 20, 0};
    const unsigned p_sz = 8;
    unsigned char r[] = {109, 145, 6, 155, 128, 240, 127, 0};
    const unsigned r_sz = 8;
    redupe_gf_poly_scale(p, p_sz, 156);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test350)
{
    unsigned char p[] = {1, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {93, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 93);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test351)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char r[] = {14};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 14);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test352)
{
    unsigned char p[] = {14};
    const unsigned p_sz = 1;
    unsigned char r[] = {1};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 93);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test353)
{
    unsigned char p[] = {14, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {248, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 123);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test354)
{
    unsigned char p[] = {14, 0, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {65, 0, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 131);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test355)
{
    unsigned char p[] = {165, 1};
    const unsigned p_sz = 2;
    unsigned char r[] = {200, 29};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 29);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test356)
{
    unsigned char p[] = {200, 29};
    const unsigned p_sz = 2;
    unsigned char r[] = {165, 1};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 131);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test357)
{
    unsigned char p[] = {200, 29, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {191, 122, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 69);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test358)
{
    unsigned char p[] = {200, 29, 0, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {6, 182, 0, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 214);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test359)
{
    unsigned char p[] = {254, 223, 1};
    const unsigned p_sz = 3;
    unsigned char r[] = {8, 32, 215};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 215);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test360)
{
    unsigned char p[] = {8, 32, 215};
    const unsigned p_sz = 3;
    unsigned char r[] = {254, 223, 1};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 214);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test361)
{
    unsigned char p[] = {8, 32, 215, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {96, 157, 141, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 12);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test362)
{
    unsigned char p[] = {8, 32, 215, 0, 0};
    const unsigned p_sz = 5;
    unsigned char r[] = {29, 116, 255, 0, 0};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 32);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test363)
{
    unsigned char p[] = {102, 213, 82, 1};
    const unsigned p_sz = 4;
    unsigned char r[] = {118, 73, 84, 108};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 108);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test364)
{
    unsigned char p[] = {118, 73, 84, 108};
    const unsigned p_sz = 4;
    unsigned char r[] = {102, 213, 82, 1};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 32);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test365)
{
    unsigned char p[] = {118, 73, 84, 108, 0};
    const unsigned p_sz = 5;
    unsigned char r[] = {48, 185, 10, 183, 0};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 99);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test366)
{
    unsigned char p[] = {118, 73, 84, 108, 0, 0};
    const unsigned p_sz = 6;
    unsigned char r[] = {22, 38, 64, 31, 0, 0};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 199);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test367)
{
    unsigned char p[] = {45, 171, 32, 229, 1};
    const unsigned p_sz = 5;
    unsigned char r[] = {114, 185, 42, 10, 158};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 158);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test368)
{
    unsigned char p[] = {114, 185, 42, 10, 158};
    const unsigned p_sz = 5;
    unsigned char r[] = {45, 171, 32, 229, 1};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 199);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test369)
{
    unsigned char p[] = {114, 185, 42, 10, 158, 0};
    const unsigned p_sz = 6;
    unsigned char r[] = {210, 86, 159, 89, 212, 0};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 115);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test370)
{
    unsigned char p[] = {114, 185, 42, 10, 158, 0, 0};
    const unsigned p_sz = 7;
    unsigned char r[] = {134, 16, 177, 108, 231, 0, 0};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 14);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test371)
{
    unsigned char p[] = {196, 93, 116, 102, 49, 1};
    const unsigned p_sz = 6;
    unsigned char r[] = {22, 129, 97, 98, 139, 93};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 93);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test372)
{
    unsigned char p[] = {22, 129, 97, 98, 139, 93};
    const unsigned p_sz = 6;
    unsigned char r[] = {196, 93, 116, 102, 49, 1};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 14);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test373)
{
    unsigned char p[] = {22, 129, 97, 98, 139, 93, 0};
    const unsigned p_sz = 7;
    unsigned char r[] = {70, 227, 46, 207, 159, 59, 0};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 95);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test374)
{
    unsigned char p[] = {22, 129, 97, 98, 139, 93, 0, 0};
    const unsigned p_sz = 8;
    unsigned char r[] = {3, 146, 104, 9, 201, 175, 0, 0};
    const unsigned r_sz = 8;
    redupe_gf_poly_scale(p, p_sz, 212);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test375)
{
    unsigned char p[] = {192, 55, 194, 215, 30, 10, 1};
    const unsigned p_sz = 7;
    unsigned char r[] = {233, 168, 6, 23, 156, 116, 249};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 249);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test376)
{
    unsigned char p[] = {233, 168, 6, 23, 156, 116, 249};
    const unsigned p_sz = 7;
    unsigned char r[] = {192, 55, 194, 215, 30, 10, 1};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 212);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test377)
{
    unsigned char p[] = {233, 168, 6, 23, 156, 116, 249, 0};
    const unsigned p_sz = 8;
    unsigned char r[] = {166, 52, 125, 163, 173, 144, 227, 0};
    const unsigned r_sz = 8;
    redupe_gf_poly_scale(p, p_sz, 155);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test378)
{
    unsigned char p[] = {233, 168, 6, 23, 156, 116, 249, 0, 0};
    const unsigned p_sz = 9;
    unsigned char r[] = {114, 80, 65, 53, 28, 255, 151, 0, 0};
    const unsigned r_sz = 9;
    redupe_gf_poly_scale(p, p_sz, 145);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test379)
{
    unsigned char p[] = {165, 102, 34, 104, 179, 33, 233, 1};
    const unsigned p_sz = 8;
    unsigned char r[] = {201, 195, 65, 141, 64, 61, 253, 223};
    const unsigned r_sz = 8;
    redupe_gf_poly_scale(p, p_sz, 223);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test380)
{
    unsigned char p[] = {201, 195, 65, 141, 64, 61, 253, 223};
    const unsigned p_sz = 8;
    unsigned char r[] = {165, 102, 34, 104, 179, 33, 233, 1};
    const unsigned r_sz = 8;
    redupe_gf_poly_scale(p, p_sz, 145);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test381)
{
    unsigned char p[] = {201, 195, 65, 141, 64, 61, 253, 223, 0};
    const unsigned p_sz = 9;
    unsigned char r[] = {10, 250, 86, 36, 78, 2, 208, 199, 0};
    const unsigned r_sz = 9;
    redupe_gf_poly_scale(p, p_sz, 24);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test382)
{
    unsigned char p[] = {1, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {152, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 152);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test383)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char r[] = {11};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 11);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test384)
{
    unsigned char p[] = {11};
    const unsigned p_sz = 1;
    unsigned char r[] = {1};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 152);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test385)
{
    unsigned char p[] = {11, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {239, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 247);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test386)
{
    unsigned char p[] = {139, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {70, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 97);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test387)
{
    unsigned char p[] = {139, 0, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {59, 0, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 33);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test388)
{
    unsigned char p[] = {107, 1};
    const unsigned p_sz = 2;
    unsigned char r[] = {56, 237};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 237);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test389)
{
    unsigned char p[] = {56, 237};
    const unsigned p_sz = 2;
    unsigned char r[] = {107, 1};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 33);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test390)
{
    unsigned char p[] = {56, 237, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {220, 136, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 88);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test391)
{
    unsigned char p[] = {1, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {149, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 149);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test392)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char r[] = {188};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 188);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test393)
{
    unsigned char p[] = {188};
    const unsigned p_sz = 1;
    unsigned char r[] = {1};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 149);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test394)
{
    unsigned char p[] = {188, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {186, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 88);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test395)
{
    unsigned char p[] = {188, 0, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {125, 0, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 123);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test396)
{
    unsigned char p[] = {47, 1};
    const unsigned p_sz = 2;
    unsigned char r[] = {73, 187};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 187);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test397)
{
    unsigned char p[] = {73, 187};
    const unsigned p_sz = 2;
    unsigned char r[] = {47, 1};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 123);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test398)
{
    unsigned char p[] = {73, 187, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {83, 158, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 80);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test399)
{
    unsigned char p[] = {73, 187, 0, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {122, 230, 0, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 60);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test400)
{
    unsigned char p[] = {46, 177, 1};
    const unsigned p_sz = 3;
    unsigned char r[] = {40, 58, 171};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 171);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test401)
{
    unsigned char p[] = {40, 58, 171};
    const unsigned p_sz = 3;
    unsigned char r[] = {46, 177, 1};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 60);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test402)
{
    unsigned char p[] = {253, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {203, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 228);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test403)
{
    unsigned char p[] = {253, 0, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {131, 0, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 126);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test404)
{
    unsigned char p[] = {52, 1};
    const unsigned p_sz = 2;
    unsigned char r[] = {50, 254};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 254);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test405)
{
    unsigned char p[] = {50, 254};
    const unsigned p_sz = 2;
    unsigned char r[] = {52, 1};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 126);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test406)
{
    unsigned char p[] = {50, 254, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {20, 56, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 31);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test407)
{
    unsigned char p[] = {50, 254, 0, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {13, 71, 0, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 145);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test408)
{
    unsigned char p[] = {151, 12, 1};
    const unsigned p_sz = 3;
    unsigned char r[] = {249, 237, 223};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 223);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test409)
{
    unsigned char p[] = {249, 237, 223};
    const unsigned p_sz = 3;
    unsigned char r[] = {151, 12, 1};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 145);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test410)
{
    unsigned char p[] = {249, 237, 223, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {214, 125, 195, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 102);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test411)
{
    unsigned char p[] = {249, 237, 223, 0, 0};
    const unsigned p_sz = 5;
    unsigned char r[] = {24, 110, 115, 0, 0};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 47);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test412)
{
    unsigned char p[] = {219, 173, 207, 1};
    const unsigned p_sz = 4;
    unsigned char r[] = {208, 196, 219, 110};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 110);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test413)
{
    unsigned char p[] = {208, 196, 219, 110};
    const unsigned p_sz = 4;
    unsigned char r[] = {219, 173, 207, 1};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 47);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test414)
{
    unsigned char p[] = {208, 196, 219, 110, 0};
    const unsigned p_sz = 5;
    unsigned char r[] = {43, 148, 157, 212, 0};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 103);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test415)
{
    unsigned char p[] = {1, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {175, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 175);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test416)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char r[] = {183};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 183);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test417)
{
    unsigned char p[] = {183};
    const unsigned p_sz = 1;
    unsigned char r[] = {1};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 175);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test418)
{
    unsigned char p[] = {183, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {43, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 185);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test419)
{
    unsigned char p[] = {183, 0, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {188, 0, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 252);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test420)
{
    unsigned char p[] = {132, 1};
    const unsigned p_sz = 2;
    unsigned char r[] = {144, 127};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 127);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test421)
{
    unsigned char p[] = {144, 127};
    const unsigned p_sz = 2;
    unsigned char r[] = {132, 1};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 252);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test422)
{
    unsigned char p[] = {144, 127, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {104, 138, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 169);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test423)
{
    unsigned char p[] = {144, 127, 0, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {115, 90, 0, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 220);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test424)
{
    unsigned char p[] = {212, 14, 1};
    const unsigned p_sz = 3;
    unsigned char r[] = {189, 205, 153};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 153);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test425)
{
    unsigned char p[] = {189, 205, 153};
    const unsigned p_sz = 3;
    unsigned char r[] = {212, 14, 1};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 220);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test426)
{
    unsigned char p[] = {189, 205, 153, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {192, 87, 233, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 219);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test427)
{
    unsigned char p[] = {189, 205, 153, 0, 0};
    const unsigned p_sz = 5;
    unsigned char r[] = {213, 185, 248, 0, 0};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 70);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test428)
{
    unsigned char p[] = {179, 217, 231, 1};
    const unsigned p_sz = 4;
    unsigned char r[] = {197, 70, 39, 166};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 166);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test429)
{
    unsigned char p[] = {197, 70, 39, 166};
    const unsigned p_sz = 4;
    unsigned char r[] = {179, 217, 231, 1};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 70);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test430)
{
    unsigned char p[] = {197, 70, 39, 166, 0};
    const unsigned p_sz = 5;
    unsigned char r[] = {39, 242, 7, 237, 0};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 145);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test431)
{
    unsigned char p[] = {197, 70, 39, 166, 0, 0};
    const unsigned p_sz = 6;
    unsigned char r[] = {204, 20, 74, 178, 0, 0};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 16);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test432)
{
    unsigned char p[] = {242, 248, 38, 10, 1};
    const unsigned p_sz = 5;
    unsigned char r[] = {162, 129, 232, 35, 216};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 216);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test433)
{
    unsigned char p[] = {162, 129, 232, 35, 216};
    const unsigned p_sz = 5;
    unsigned char r[] = {242, 248, 38, 10, 1};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 16);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test434)
{
    unsigned char p[] = {162, 129, 232, 35, 216, 0};
    const unsigned p_sz = 6;
    unsigned char r[] = {75, 211, 203, 152, 69, 0};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 36);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test435)
{
    unsigned char p[] = {1, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {43, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 43);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test436)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char r[] = {74};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 74);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test437)
{
    unsigned char p[] = {74};
    const unsigned p_sz = 1;
    unsigned char r[] = {1};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 43);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test438)
{
    unsigned char p[] = {74, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {40, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 76);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test439)
{
    unsigned char p[] = {74, 0, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {172, 0, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 196);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test440)
{
    unsigned char p[] = {3, 1};
    const unsigned p_sz = 2;
    unsigned char r[] = {175, 101};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 101);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test441)
{
    unsigned char p[] = {175, 101};
    const unsigned p_sz = 2;
    unsigned char r[] = {3, 1};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 196);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test442)
{
    unsigned char p[] = {175, 101, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {180, 108, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 171);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test443)
{
    unsigned char p[] = {175, 101, 0, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {167, 150, 0, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 208);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test444)
{
    unsigned char p[] = {24, 111, 1};
    const unsigned p_sz = 3;
    unsigned char r[] = {255, 81, 41};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 41);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test445)
{
    unsigned char p[] = {255, 81, 41};
    const unsigned p_sz = 3;
    unsigned char r[] = {24, 111, 1};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 208);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test446)
{
    unsigned char p[] = {255, 81, 41, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {195, 54, 165, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 212);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test447)
{
    unsigned char p[] = {255, 81, 41, 0, 0};
    const unsigned p_sz = 5;
    unsigned char r[] = {27, 6, 172, 0, 0};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 202);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test448)
{
    unsigned char p[] = {100, 184, 202, 1};
    const unsigned p_sz = 4;
    unsigned char r[] = {236, 210, 1, 98};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 98);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test449)
{
    unsigned char p[] = {236, 210, 1, 98};
    const unsigned p_sz = 4;
    unsigned char r[] = {100, 184, 202, 1};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 202);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test450)
{
    unsigned char p[] = {236, 210, 1, 98, 0};
    const unsigned p_sz = 5;
    unsigned char r[] = {23, 97, 128, 87, 0};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 128);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test451)
{
    unsigned char p[] = {236, 210, 1, 98, 0, 0};
    const unsigned p_sz = 6;
    unsigned char r[] = {186, 54, 174, 237, 0, 0};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 174);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test452)
{
    unsigned char p[] = {12, 3, 148, 157, 1};
    const unsigned p_sz = 5;
    unsigned char r[] = {91, 223, 136, 175, 190};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 190);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test453)
{
    unsigned char p[] = {91, 223, 136, 175, 190};
    const unsigned p_sz = 5;
    unsigned char r[] = {12, 3, 148, 157, 1};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 174);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test454)
{
    unsigned char p[] = {91, 223, 136, 175, 190, 0};
    const unsigned p_sz = 6;
    unsigned char r[] = {118, 147, 184, 102, 113, 0};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 48);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test455)
{
    unsigned char p[] = {91, 223, 136, 175, 190, 0, 0};
    const unsigned p_sz = 7;
    unsigned char r[] = {82, 154, 115, 146, 118, 0, 0};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 93);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test456)
{
    unsigned char p[] = {204, 169, 21, 31, 236, 1};
    const unsigned p_sz = 6;
    unsigned char r[] = {188, 240, 214, 186, 97, 14};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 14);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test457)
{
    unsigned char p[] = {188, 240, 214, 186, 97, 14};
    const unsigned p_sz = 6;
    unsigned char r[] = {204, 169, 21, 31, 236, 1};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 93);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test458)
{
    unsigned char p[] = {188, 240, 214, 186, 97, 14, 0};
    const unsigned p_sz = 7;
    unsigned char r[] = {205, 180, 6, 71, 128, 132, 0};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 200);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test459)
{
    unsigned char p[] = {102, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {226, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 18);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test460)
{
    unsigned char p[] = {102, 0, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {167, 0, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 240);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test461)
{
    unsigned char p[] = {245, 1};
    const unsigned p_sz = 2;
    unsigned char r[] = {73, 227};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 227);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test462)
{
    unsigned char p[] = {73, 227};
    const unsigned p_sz = 2;
    unsigned char r[] = {245, 1};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 240);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test463)
{
    unsigned char p[] = {73, 227, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {201, 35, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 102);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test464)
{
    unsigned char p[] = {73, 227, 0, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {214, 189, 0, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 165);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test465)
{
    unsigned char p[] = {110, 214, 1};
    const unsigned p_sz = 3;
    unsigned char r[] = {71, 73, 194};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 194);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test466)
{
    unsigned char p[] = {71, 73, 194};
    const unsigned p_sz = 3;
    unsigned char r[] = {110, 214, 1};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 165);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test467)
{
    unsigned char p[] = {71, 73, 194, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {209, 185, 244, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 99);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test468)
{
    unsigned char p[] = {71, 73, 194, 0, 0};
    const unsigned p_sz = 5;
    unsigned char r[] = {214, 22, 57, 0, 0};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 127);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test469)
{
    unsigned char p[] = {7, 106, 34, 1};
    const unsigned p_sz = 4;
    unsigned char r[] = {206, 81, 19, 252};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 252);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test470)
{
    unsigned char p[] = {206, 81, 19, 252};
    const unsigned p_sz = 4;
    unsigned char r[] = {7, 106, 34, 1};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 127);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test471)
{
    unsigned char p[] = {206, 81, 19, 252, 0};
    const unsigned p_sz = 5;
    unsigned char r[] = {111, 183, 86, 199, 0};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 167);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test472)
{
    unsigned char p[] = {206, 81, 19, 252, 0, 0};
    const unsigned p_sz = 6;
    unsigned char r[] = {177, 196, 250, 84, 0, 0};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 244);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test473)
{
    unsigned char p[] = {185, 166, 5, 229, 1};
    const unsigned p_sz = 5;
    unsigned char r[] = {214, 247, 15, 50, 3};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 3);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test474)
{
    unsigned char p[] = {214, 247, 15, 50, 3};
    const unsigned p_sz = 5;
    unsigned char r[] = {185, 166, 5, 229, 1};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 244);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test475)
{
    unsigned char p[] = {214, 247, 15, 50, 3, 0};
    const unsigned p_sz = 6;
    unsigned char r[] = {194, 249, 186, 227, 128, 0};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 139);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test476)
{
    unsigned char p[] = {214, 247, 15, 50, 3, 0, 0};
    const unsigned p_sz = 7;
    unsigned char r[] = {130, 107, 98, 159, 184, 0, 0};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 104);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test477)
{
    unsigned char p[] = {115, 132, 230, 178, 101, 1};
    const unsigned p_sz = 6;
    unsigned char r[] = {20, 39, 40, 13, 172, 82};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 82);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test478)
{
    unsigned char p[] = {20, 39, 40, 13, 172, 82};
    const unsigned p_sz = 6;
    unsigned char r[] = {115, 132, 230, 178, 101, 1};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 104);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test479)
{
    unsigned char p[] = {20, 39, 40, 13, 172, 82, 0};
    const unsigned p_sz = 7;
    unsigned char r[] = {29, 250, 58, 185, 227, 13, 0};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 178);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test480)
{
    unsigned char p[] = {1, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {215, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 215);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test481)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char r[] = {214};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 214);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test482)
{
    unsigned char p[] = {214};
    const unsigned p_sz = 1;
    unsigned char r[] = {1};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 215);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test483)
{
    unsigned char p[] = {214, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {153, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 11);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test484)
{
    unsigned char p[] = {214, 0, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {252, 0, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 187);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test485)
{
    unsigned char p[] = {78, 1};
    const unsigned p_sz = 2;
    unsigned char r[] = {83, 123};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 123);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test486)
{
    unsigned char p[] = {83, 123};
    const unsigned p_sz = 2;
    unsigned char r[] = {78, 1};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 187);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test487)
{
    unsigned char p[] = {83, 123, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {85, 248, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 14);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test488)
{
    unsigned char p[] = {83, 123, 0, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {116, 245, 0, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 210);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test489)
{
    unsigned char p[] = {169, 182, 1};
    const unsigned p_sz = 3;
    unsigned char r[] = {30, 78, 200};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 200);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test490)
{
    unsigned char p[] = {30, 78, 200};
    const unsigned p_sz = 3;
    unsigned char r[] = {169, 182, 1};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 210);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test491)
{
    unsigned char p[] = {30, 78, 200, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {225, 35, 162, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 135);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test492)
{
    unsigned char p[] = {30, 78, 200, 0, 0};
    const unsigned p_sz = 5;
    unsigned char r[] = {228, 62, 117, 0, 0};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 253);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test493)
{
    unsigned char p[] = {149, 127, 20, 1};
    const unsigned p_sz = 4;
    unsigned char r[] = {13, 128, 144, 255};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 255);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test494)
{
    unsigned char p[] = {13, 128, 144, 255};
    const unsigned p_sz = 4;
    unsigned char r[] = {149, 127, 20, 1};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 253);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test495)
{
    unsigned char p[] = {13, 128, 144, 255, 0};
    const unsigned p_sz = 5;
    unsigned char r[] = {73, 160, 180, 9, 0};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 70);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test496)
{
    unsigned char p[] = {13, 128, 144, 255, 0, 0};
    const unsigned p_sz = 6;
    unsigned char r[] = {173, 114, 59, 153, 0, 0};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 82);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test497)
{
    unsigned char p[] = {173, 11, 190, 29, 1};
    const unsigned p_sz = 5;
    unsigned char r[] = {13, 223, 123, 124, 104};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 104);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test498)
{
    unsigned char p[] = {13, 223, 123, 124, 104};
    const unsigned p_sz = 5;
    unsigned char r[] = {173, 11, 190, 29, 1};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 82);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test499)
{
    unsigned char p[] = {13, 223, 123, 124, 104, 0};
    const unsigned p_sz = 6;
    unsigned char r[] = {158, 197, 167, 82, 132, 0};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 39);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test500)
{
    unsigned char p[] = {13, 223, 123, 124, 104, 0, 0};
    const unsigned p_sz = 7;
    unsigned char r[] = {144, 242, 106, 11, 244, 0, 0};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 197);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test501)
{
    unsigned char p[] = {51, 26, 151, 117, 153, 1};
    const unsigned p_sz = 6;
    unsigned char r[] = {4, 139, 2, 146, 28, 184};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 184);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test502)
{
    unsigned char p[] = {4, 139, 2, 146, 28, 184};
    const unsigned p_sz = 6;
    unsigned char r[] = {51, 26, 151, 117, 153, 1};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 197);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test503)
{
    unsigned char p[] = {4, 139, 2, 146, 28, 184, 0};
    const unsigned p_sz = 7;
    unsigned char r[] = {61, 81, 144, 151, 179, 136, 0};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 72);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test504)
{
    unsigned char p[] = {4, 139, 2, 146, 28, 184, 0, 0};
    const unsigned p_sz = 8;
    unsigned char r[] = {164, 23, 82, 193, 91, 143, 0, 0};
    const unsigned r_sz = 8;
    redupe_gf_poly_scale(p, p_sz, 41);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test505)
{
    unsigned char p[] = {173, 144, 224, 11, 50, 17, 1};
    const unsigned p_sz = 7;
    unsigned char r[] = {26, 253, 93, 163, 35, 81, 208};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 208);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test506)
{
    unsigned char p[] = {26, 253, 93, 163, 35, 81, 208};
    const unsigned p_sz = 7;
    unsigned char r[] = {173, 144, 224, 11, 50, 17, 1};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 41);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test507)
{
    unsigned char p[] = {26, 253, 93, 163, 35, 81, 208, 0};
    const unsigned p_sz = 8;
    unsigned char r[] = {201, 71, 122, 58, 172, 102, 6, 0};
    const unsigned r_sz = 8;
    redupe_gf_poly_scale(p, p_sz, 246);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test508)
{
    unsigned char p[] = {1, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {58, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 58);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test509)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char r[] = {207};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 207);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test510)
{
    unsigned char p[] = {207};
    const unsigned p_sz = 1;
    unsigned char r[] = {1};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 58);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test511)
{
    unsigned char p[] = {207, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {225, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 67);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test512)
{
    unsigned char p[] = {207, 0, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {182, 0, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 68);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test513)
{
    unsigned char p[] = {219, 1};
    const unsigned p_sz = 2;
    unsigned char r[] = {15, 146};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 146);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test514)
{
    unsigned char p[] = {15, 146};
    const unsigned p_sz = 2;
    unsigned char r[] = {219, 1};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 68);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test515)
{
    unsigned char p[] = {15, 146, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {157, 103, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 121);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test516)
{
    unsigned char p[] = {15, 146, 0, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {6, 13, 0, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 83);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test517)
{
    unsigned char p[] = {43, 188, 1};
    const unsigned p_sz = 3;
    unsigned char r[] = {205, 59, 140};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 140);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test518)
{
    unsigned char p[] = {205, 59, 140};
    const unsigned p_sz = 3;
    unsigned char r[] = {43, 188, 1};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 83);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test519)
{
    unsigned char p[] = {205, 59, 140, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {87, 181, 72, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 219);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test520)
{
    unsigned char p[] = {205, 59, 140, 0, 0};
    const unsigned p_sz = 5;
    unsigned char r[] = {52, 249, 84, 0, 0};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 113);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test521)
{
    unsigned char p[] = {81, 147, 244, 1};
    const unsigned p_sz = 4;
    unsigned char r[] = {62, 3, 79, 209};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 209);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test522)
{
    unsigned char p[] = {62, 3, 79, 209};
    const unsigned p_sz = 4;
    unsigned char r[] = {81, 147, 244, 1};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 113);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test523)
{
    unsigned char p[] = {62, 3, 79, 209, 0};
    const unsigned p_sz = 5;
    unsigned char r[] = {234, 165, 238, 47, 0};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 99);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test524)
{
    unsigned char p[] = {62, 3, 79, 209, 0, 0};
    const unsigned p_sz = 6;
    unsigned char r[] = {58, 255, 192, 93, 0, 0};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 85);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test525)
{
    unsigned char p[] = {222, 13, 41, 219, 1};
    const unsigned p_sz = 5;
    unsigned char r[] = {126, 162, 173, 12, 26};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 26);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test526)
{
    unsigned char p[] = {126, 162, 173, 12, 26};
    const unsigned p_sz = 5;
    unsigned char r[] = {222, 13, 41, 219, 1};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 85);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test527)
{
    unsigned char p[] = {126, 162, 173, 12, 26, 0};
    const unsigned p_sz = 6;
    unsigned char r[] = {128, 140, 91, 236, 28, 0};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 226);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test528)
{
    unsigned char p[] = {126, 162, 173, 12, 26, 0, 0};
    const unsigned p_sz = 7;
    unsigned char r[] = {213, 14, 176, 152, 226, 0, 0};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 233);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test529)
{
    unsigned char p[] = {186, 173, 150, 152, 199, 1};
    const unsigned p_sz = 6;
    unsigned char r[] = {194, 128, 174, 12, 133, 116};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 116);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test530)
{
    unsigned char p[] = {194, 128, 174, 12, 133, 116};
    const unsigned p_sz = 6;
    unsigned char r[] = {186, 173, 150, 152, 199, 1};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 233);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test531)
{
    unsigned char p[] = {194, 128, 174, 12, 133, 116, 0};
    const unsigned p_sz = 7;
    unsigned char r[] = {76, 178, 66, 245, 60, 249, 0};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 221);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test532)
{
    unsigned char p[] = {194, 128, 174, 12, 133, 116, 0, 0};
    const unsigned p_sz = 8;
    unsigned char r[] = {129, 20, 235, 101, 246, 160, 0, 0};
    const unsigned r_sz = 8;
    redupe_gf_poly_scale(p, p_sz, 193);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test533)
{
    unsigned char p[] = {153, 6, 95, 251, 70, 62, 1};
    const unsigned p_sz = 7;
    unsigned char r[] = {201, 203, 90, 87, 8, 47, 89};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 89);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test534)
{
    unsigned char p[] = {201, 203, 90, 87, 8, 47, 89};
    const unsigned p_sz = 7;
    unsigned char r[] = {153, 6, 95, 251, 70, 62, 1};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 193);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test535)
{
    unsigned char p[] = {201, 203, 90, 87, 8, 47, 89, 0};
    const unsigned p_sz = 8;
    unsigned char r[] = {190, 201, 111, 245, 193, 206, 173, 0};
    const unsigned r_sz = 8;
    redupe_gf_poly_scale(p, p_sz, 181);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test536)
{
    unsigned char p[] = {201, 203, 90, 87, 8, 47, 89, 0, 0};
    const unsigned p_sz = 9;
    unsigned char r[] = {122, 220, 36, 132, 162, 180, 209, 0, 0};
    const unsigned r_sz = 9;
    redupe_gf_poly_scale(p, p_sz, 83);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test537)
{
    unsigned char p[] = {63, 68, 130, 207, 204, 40, 147, 1};
    const unsigned p_sz = 8;
    unsigned char r[] = {239, 170, 88, 106, 227, 68, 252, 140};
    const unsigned r_sz = 8;
    redupe_gf_poly_scale(p, p_sz, 140);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test538)
{
    unsigned char p[] = {239, 170, 88, 106, 227, 68, 252, 140};
    const unsigned p_sz = 8;
    unsigned char r[] = {63, 68, 130, 207, 204, 40, 147, 1};
    const unsigned r_sz = 8;
    redupe_gf_poly_scale(p, p_sz, 83);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test539)
{
    unsigned char p[] = {239, 170, 88, 106, 227, 68, 252, 140, 0};
    const unsigned p_sz = 9;
    unsigned char r[] = {166, 84, 243, 157, 252, 113, 230, 212, 0};
    const unsigned r_sz = 9;
    redupe_gf_poly_scale(p, p_sz, 131);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test540)
{
    unsigned char p[] = {89, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {63, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 178);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test541)
{
    unsigned char p[] = {89, 0, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {254, 0, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 109);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test542)
{
    unsigned char p[] = {254, 1};
    const unsigned p_sz = 2;
    unsigned char r[] = {89, 236};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 236);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test543)
{
    unsigned char p[] = {89, 236};
    const unsigned p_sz = 2;
    unsigned char r[] = {254, 1};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 109);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test544)
{
    unsigned char p[] = {89, 236, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {13, 76, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 164);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test545)
{
    unsigned char p[] = {89, 236, 0, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {191, 137, 0, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 166);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test546)
{
    unsigned char p[] = {243, 178, 1};
    const unsigned p_sz = 3;
    unsigned char r[] = {6, 16, 70};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 70);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test547)
{
    unsigned char p[] = {6, 16, 70};
    const unsigned p_sz = 3;
    unsigned char r[] = {243, 178, 1};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 166);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test548)
{
    unsigned char p[] = {6, 16, 70, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {158, 124, 115, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 206);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test549)
{
    unsigned char p[] = {6, 16, 70, 0, 0};
    const unsigned p_sz = 5;
    unsigned char r[] = {251, 121, 2, 0, 0};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 81);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test550)
{
    unsigned char p[] = {33, 6, 193, 1};
    const unsigned p_sz = 4;
    unsigned char r[] = {55, 202, 91, 35};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 35);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test551)
{
    unsigned char p[] = {55, 202, 91, 35};
    const unsigned p_sz = 4;
    unsigned char r[] = {33, 6, 193, 1};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 81);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test552)
{
    unsigned char p[] = {55, 202, 91, 35, 0};
    const unsigned p_sz = 5;
    unsigned char r[] = {7, 177, 26, 185, 0};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 135);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test553)
{
    unsigned char p[] = {55, 202, 91, 35, 0, 0};
    const unsigned p_sz = 6;
    unsigned char r[] = {196, 188, 223, 193, 0, 0};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 71);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test554)
{
    unsigned char p[] = {252, 233, 30, 120, 1};
    const unsigned p_sz = 5;
    unsigned char r[] = {215, 131, 120, 253, 4};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 4);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test555)
{
    unsigned char p[] = {215, 131, 120, 253, 4};
    const unsigned p_sz = 5;
    unsigned char r[] = {252, 233, 30, 120, 1};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 71);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test556)
{
    unsigned char p[] = {215, 131, 120, 253, 4, 0};
    const unsigned p_sz = 6;
    unsigned char r[] = {183, 235, 97, 153, 233, 0};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 125);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test557)
{
    unsigned char p[] = {215, 131, 120, 253, 4, 0, 0};
    const unsigned p_sz = 7;
    unsigned char r[] = {12, 13, 174, 130, 62, 0, 0};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 129);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test558)
{
    unsigned char p[] = {115, 171, 87, 70, 145, 1};
    const unsigned p_sz = 6;
    unsigned char r[] = {35, 97, 60, 65, 40, 84};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 84);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test559)
{
    unsigned char p[] = {35, 97, 60, 65, 40, 84};
    const unsigned p_sz = 6;
    unsigned char r[] = {115, 171, 87, 70, 145, 1};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 129);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test560)
{
    unsigned char p[] = {35, 97, 60, 65, 40, 84, 0};
    const unsigned p_sz = 7;
    unsigned char r[] = {3, 238, 160, 229, 192, 118, 0};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 243);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test561)
{
    unsigned char p[] = {35, 97, 60, 65, 40, 84, 0, 0};
    const unsigned p_sz = 8;
    unsigned char r[] = {160, 137, 214, 14, 111, 170, 0, 0};
    const unsigned r_sz = 8;
    redupe_gf_poly_scale(p, p_sz, 29);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test562)
{
    unsigned char p[] = {15, 144, 165, 48, 184, 231, 1};
    const unsigned p_sz = 7;
    unsigned char r[] = {194, 86, 150, 117, 151, 202, 131};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 131);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test563)
{
    unsigned char p[] = {194, 86, 150, 117, 151, 202, 131};
    const unsigned p_sz = 7;
    unsigned char r[] = {15, 144, 165, 48, 184, 231, 1};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 29);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test564)
{
    unsigned char p[] = {194, 86, 150, 117, 151, 202, 131, 0};
    const unsigned p_sz = 8;
    unsigned char r[] = {158, 78, 108, 163, 50, 84, 222, 0};
    const unsigned r_sz = 8;
    redupe_gf_poly_scale(p, p_sz, 94);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test565)
{
    unsigned char p[] = {194, 86, 150, 117, 151, 202, 131, 0, 0};
    const unsigned p_sz = 9;
    unsigned char r[] = {198, 111, 234, 199, 69, 215, 225, 0, 0};
    const unsigned r_sz = 9;
    redupe_gf_poly_scale(p, p_sz, 175);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test566)
{
    unsigned char p[] = {62, 200, 42, 8, 109, 70, 57, 1};
    const unsigned p_sz = 8;
    unsigned char r[] = {152, 134, 193, 209, 37, 83, 186, 183};
    const unsigned r_sz = 8;
    redupe_gf_poly_scale(p, p_sz, 183);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test567)
{
    unsigned char p[] = {152, 134, 193, 209, 37, 83, 186, 183};
    const unsigned p_sz = 8;
    unsigned char r[] = {62, 200, 42, 8, 109, 70, 57, 1};
    const unsigned r_sz = 8;
    redupe_gf_poly_scale(p, p_sz, 175);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test568)
{
    unsigned char p[] = {152, 134, 193, 209, 37, 83, 186, 183, 0};
    const unsigned p_sz = 9;
    unsigned char r[] = {40, 169, 231, 141, 101, 176, 182, 50, 0};
    const unsigned r_sz = 9;
    redupe_gf_poly_scale(p, p_sz, 37);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test569)
{
    unsigned char p[] = {152, 134, 193, 209, 37, 83, 186, 183, 0, 0};
    const unsigned p_sz = 10;
    unsigned char r[] = {149, 232, 121, 202, 224, 199, 18, 94, 0, 0};
    const unsigned r_sz = 10;
    redupe_gf_poly_scale(p, p_sz, 126);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test570)
{
    unsigned char p[] = {238, 248, 197, 96, 40, 10, 17, 11, 1};
    const unsigned p_sz = 9;
    unsigned char r[] = {184, 221, 178, 199, 21, 66, 165, 188, 254};
    const unsigned r_sz = 9;
    redupe_gf_poly_scale(p, p_sz, 254);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test571)
{
    unsigned char p[] = {184, 221, 178, 199, 21, 66, 165, 188, 254};
    const unsigned p_sz = 9;
    unsigned char r[] = {238, 248, 197, 96, 40, 10, 17, 11, 1};
    const unsigned r_sz = 9;
    redupe_gf_poly_scale(p, p_sz, 126);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test572)
{
    unsigned char p[] = {184, 221, 178, 199, 21, 66, 165, 188, 254, 0};
    const unsigned p_sz = 10;
    unsigned char r[] = {102, 7, 167, 129, 169, 109, 98, 190, 211, 0};
    const unsigned r_sz = 10;
    redupe_gf_poly_scale(p, p_sz, 54);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test573)
{
    unsigned char p[] = {1, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {142, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 142);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test574)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char r[] = {2};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 2);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test575)
{
    unsigned char p[] = {2};
    const unsigned p_sz = 1;
    unsigned char r[] = {1};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 142);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test576)
{
    unsigned char p[] = {2, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {255, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 241);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test577)
{
    unsigned char p[] = {2, 0, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {163, 0, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 223);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test578)
{
    unsigned char p[] = {113, 1};
    const unsigned p_sz = 2;
    unsigned char r[] = {16, 145};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 145);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test579)
{
    unsigned char p[] = {16, 145};
    const unsigned p_sz = 2;
    unsigned char r[] = {113, 1};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 223);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test580)
{
    unsigned char p[] = {16, 145, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {134, 32, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 226);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test581)
{
    unsigned char p[] = {16, 145, 0, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {173, 183, 0, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 27);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test582)
{
    unsigned char p[] = {37, 81, 1};
    const unsigned p_sz = 3;
    unsigned char r[] = {119, 239, 128};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 128);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test583)
{
    unsigned char p[] = {119, 239, 128};
    const unsigned p_sz = 3;
    unsigned char r[] = {37, 81, 1};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 27);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test584)
{
    unsigned char p[] = {119, 239, 128, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {234, 50, 88, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 251);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test585)
{
    unsigned char p[] = {119, 239, 128, 0, 0};
    const unsigned p_sz = 5;
    unsigned char r[] = {148, 89, 4, 0, 0};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 108);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test586)
{
    unsigned char p[] = {71, 160, 9, 1};
    const unsigned p_sz = 4;
    unsigned char r[] = {8, 185, 61, 32};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 32);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test587)
{
    unsigned char p[] = {8, 185, 61, 32};
    const unsigned p_sz = 4;
    unsigned char r[] = {71, 160, 9, 1};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 108);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test588)
{
    unsigned char p[] = {8, 185, 61, 32, 0};
    const unsigned p_sz = 5;
    unsigned char r[] = {175, 57, 194, 134, 0};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 113);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test589)
{
    unsigned char p[] = {8, 185, 61, 32, 0, 0};
    const unsigned p_sz = 6;
    unsigned char r[] = {222, 147, 157, 95, 0, 0};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 210);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test590)
{
    unsigned char p[] = {59, 39, 102, 143, 1};
    const unsigned p_sz = 5;
    unsigned char r[] = {111, 122, 194, 172, 200};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 200);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test591)
{
    unsigned char p[] = {111, 122, 194, 172, 200};
    const unsigned p_sz = 5;
    unsigned char r[] = {59, 39, 102, 143, 1};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 210);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test592)
{
    unsigned char p[] = {111, 122, 194, 172, 200, 0};
    const unsigned p_sz = 6;
    unsigned char r[] = {198, 60, 215, 153, 238, 0};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 136);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test593)
{
    unsigned char p[] = {111, 122, 194, 172, 200, 0, 0};
    const unsigned p_sz = 7;
    unsigned char r[] = {173, 145, 8, 228, 184, 0, 0};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 65);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test594)
{
    unsigned char p[] = {24, 148, 109, 160, 97, 1};
    const unsigned p_sz = 6;
    unsigned char r[] = {91, 68, 141, 147, 46, 95};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 95);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test595)
{
    unsigned char p[] = {91, 68, 141, 147, 46, 95};
    const unsigned p_sz = 6;
    unsigned char r[] = {24, 148, 109, 160, 97, 1};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 65);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test596)
{
    unsigned char p[] = {91, 68, 141, 147, 46, 95, 0};
    const unsigned p_sz = 7;
    unsigned char r[] = {232, 117, 248, 148, 140, 11, 0};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 241);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test597)
{
    unsigned char p[] = {91, 68, 141, 147, 46, 95, 0, 0};
    const unsigned p_sz = 8;
    unsigned char r[] = {10, 111, 228, 120, 225, 201, 0, 0};
    const unsigned r_sz = 8;
    redupe_gf_poly_scale(p, p_sz, 249);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test598)
{
    unsigned char p[] = {69, 252, 100, 29, 148, 106, 1};
    const unsigned p_sz = 7;
    unsigned char r[] = {128, 162, 203, 140, 240, 231, 212};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 212);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test599)
{
    unsigned char p[] = {128, 162, 203, 140, 240, 231, 212};
    const unsigned p_sz = 7;
    unsigned char r[] = {69, 252, 100, 29, 148, 106, 1};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 249);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test600)
{
    unsigned char p[] = {128, 162, 203, 140, 240, 231, 212, 0};
    const unsigned p_sz = 8;
    unsigned char r[] = {251, 49, 81, 117, 10, 40, 135, 0};
    const unsigned r_sz = 8;
    redupe_gf_poly_scale(p, p_sz, 144);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test601)
{
    unsigned char p[] = {128, 162, 203, 140, 240, 231, 212, 0, 0};
    const unsigned p_sz = 9;
    unsigned char r[] = {127, 78, 111, 23, 115, 209, 118, 0, 0};
    const unsigned r_sz = 9;
    redupe_gf_poly_scale(p, p_sz, 253);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test602)
{
    unsigned char p[] = {241, 27, 73, 105, 246, 117, 237, 1};
    const unsigned p_sz = 8;
    unsigned char r[] = {113, 252, 101, 243, 182, 200, 74, 255};
    const unsigned r_sz = 8;
    redupe_gf_poly_scale(p, p_sz, 255);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test603)
{
    unsigned char p[] = {113, 252, 101, 243, 182, 200, 74, 255};
    const unsigned p_sz = 8;
    unsigned char r[] = {241, 27, 73, 105, 246, 117, 237, 1};
    const unsigned r_sz = 8;
    redupe_gf_poly_scale(p, p_sz, 253);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test604)
{
    unsigned char p[] = {113, 252, 101, 243, 182, 200, 74, 255, 0};
    const unsigned p_sz = 9;
    unsigned char r[] = {46, 221, 208, 19, 23, 247, 202, 178, 0};
    const unsigned r_sz = 9;
    redupe_gf_poly_scale(p, p_sz, 37);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test605)
{
    unsigned char p[] = {113, 252, 101, 243, 182, 200, 74, 255, 0, 0};
    const unsigned p_sz = 10;
    unsigned char r[] = {121, 192, 174, 217, 178, 210, 114, 148, 0, 0};
    const unsigned r_sz = 10;
    redupe_gf_poly_scale(p, p_sz, 199);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test606)
{
    unsigned char p[] = {81, 98, 164, 77, 13, 208, 201, 95, 1};
    const unsigned p_sz = 9;
    unsigned char r[] = {223, 95, 192, 12, 88, 233, 230, 56, 158};
    const unsigned r_sz = 9;
    redupe_gf_poly_scale(p, p_sz, 158);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test607)
{
    unsigned char p[] = {223, 95, 192, 12, 88, 233, 230, 56, 158};
    const unsigned p_sz = 9;
    unsigned char r[] = {81, 98, 164, 77, 13, 208, 201, 95, 1};
    const unsigned r_sz = 9;
    redupe_gf_poly_scale(p, p_sz, 199);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test608)
{
    unsigned char p[] = {223, 95, 192, 12, 88, 233, 230, 56, 158, 0};
    const unsigned p_sz = 10;
    unsigned char r[] = {190, 53, 64, 4, 195, 172, 169, 227, 129, 0};
    const unsigned r_sz = 10;
    redupe_gf_poly_scale(p, p_sz, 244);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test609)
{
    unsigned char p[] = {223, 95, 192, 12, 88, 233, 230, 56, 158, 0, 0};
    const unsigned p_sz = 11;
    unsigned char r[] = {129, 177, 40, 140, 29, 205, 98, 9, 115, 0, 0};
    const unsigned r_sz = 11;
    redupe_gf_poly_scale(p, p_sz, 234);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test610)
{
    unsigned char p[] = {199, 164, 140, 121, 60, 115, 11, 190, 222, 1};
    const unsigned p_sz = 10;
    unsigned char r[] = {217, 204, 12, 174, 160, 158, 195, 119, 106, 243};
    const unsigned r_sz = 10;
    redupe_gf_poly_scale(p, p_sz, 243);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test611)
{
    unsigned char p[] = {217, 204, 12, 174, 160, 158, 195, 119, 106, 243};
    const unsigned p_sz = 10;
    unsigned char r[] = {199, 164, 140, 121, 60, 115, 11, 190, 222, 1};
    const unsigned r_sz = 10;
    redupe_gf_poly_scale(p, p_sz, 234);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test612)
{
    unsigned char p[] = {217, 204, 12, 174, 160, 158, 195, 119, 106, 243, 0};
    const unsigned p_sz = 11;
    unsigned char r[] = {219, 81, 208, 76, 79, 43, 181, 151, 118, 210, 0};
    const unsigned r_sz = 11;
    redupe_gf_poly_scale(p, p_sz, 231);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test613)
{
    unsigned char p[] = {1, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {68, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 68);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test614)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char r[] = {146};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 146);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test615)
{
    unsigned char p[] = {146};
    const unsigned p_sz = 1;
    unsigned char r[] = {1};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 68);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test616)
{
    unsigned char p[] = {146, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {19, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 248);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test617)
{
    unsigned char p[] = {146, 0, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {207, 0, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 182);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test618)
{
    unsigned char p[] = {87, 1};
    const unsigned p_sz = 2;
    unsigned char r[] = {217, 191};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 191);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test619)
{
    unsigned char p[] = {217, 191};
    const unsigned p_sz = 2;
    unsigned char r[] = {87, 1};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 182);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test620)
{
    unsigned char p[] = {217, 191, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {184, 7, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 37);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test621)
{
    unsigned char p[] = {217, 191, 0, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {164, 239, 0, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 40);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test622)
{
    unsigned char p[] = {119, 80, 1};
    const unsigned p_sz = 3;
    unsigned char r[] = {233, 2, 112};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 112);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test623)
{
    unsigned char p[] = {233, 2, 112};
    const unsigned p_sz = 3;
    unsigned char r[] = {119, 80, 1};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 40);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test624)
{
    unsigned char p[] = {233, 2, 112, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {191, 246, 147, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 123);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test625)
{
    unsigned char p[] = {233, 2, 112, 0, 0};
    const unsigned p_sz = 5;
    unsigned char r[] = {150, 65, 158, 0, 0};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 174);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test626)
{
    unsigned char p[] = {27, 110, 195, 1};
    const unsigned p_sz = 4;
    unsigned char r[] = {105, 216, 6, 190};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 190);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test627)
{
    unsigned char p[] = {105, 216, 6, 190};
    const unsigned p_sz = 4;
    unsigned char r[] = {27, 110, 195, 1};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 174);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test628)
{
    unsigned char p[] = {105, 216, 6, 190, 0};
    const unsigned p_sz = 5;
    unsigned char r[] = {253, 45, 70, 127, 0};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 234);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test629)
{
    unsigned char p[] = {105, 216, 6, 190, 0, 0};
    const unsigned p_sz = 6;
    unsigned char r[] = {94, 29, 148, 60, 0, 0};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 205);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test630)
{
    unsigned char p[] = {107, 119, 182, 188, 1};
    const unsigned p_sz = 5;
    unsigned char r[] = {101, 192, 231, 210, 125};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 125);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test631)
{
    unsigned char p[] = {101, 192, 231, 210, 125};
    const unsigned p_sz = 5;
    unsigned char r[] = {107, 119, 182, 188, 1};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 205);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test632)
{
    unsigned char p[] = {101, 192, 231, 210, 125, 0};
    const unsigned p_sz = 6;
    unsigned char r[] = {170, 103, 230, 33, 194, 0};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 240);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test633)
{
    unsigned char p[] = {101, 192, 231, 210, 125, 0, 0};
    const unsigned p_sz = 7;
    unsigned char r[] = {31, 101, 236, 17, 48, 0, 0};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 212);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test634)
{
    unsigned char p[] = {244, 17, 5, 171, 126, 1};
    const unsigned p_sz = 6;
    unsigned char r[] = {87, 210, 58, 158, 102, 249};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 249);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test635)
{
    unsigned char p[] = {87, 210, 58, 158, 102, 249};
    const unsigned p_sz = 6;
    unsigned char r[] = {244, 17, 5, 171, 126, 1};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 212);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test636)
{
    unsigned char p[] = {87, 210, 58, 158, 102, 249, 0};
    const unsigned p_sz = 7;
    unsigned char r[] = {227, 159, 216, 151, 31, 56, 0};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 176);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test637)
{
    unsigned char p[] = {87, 210, 58, 158, 102, 249, 0, 0};
    const unsigned p_sz = 8;
    unsigned char r[] = {244, 17, 5, 171, 126, 1, 0, 0};
    const unsigned r_sz = 8;
    redupe_gf_poly_scale(p, p_sz, 212);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test638)
{
    unsigned char p[] = {252, 14, 37, 131, 132, 70, 1};
    const unsigned p_sz = 7;
    unsigned char r[] = {204, 183, 108, 83, 134, 128, 249};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 249);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test639)
{
    unsigned char p[] = {204, 183, 108, 83, 134, 128, 249};
    const unsigned p_sz = 7;
    unsigned char r[] = {252, 14, 37, 131, 132, 70, 1};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 212);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test640)
{
    unsigned char p[] = {204, 183, 108, 83, 134, 128, 249, 0};
    const unsigned p_sz = 8;
    unsigned char r[] = {233, 117, 31, 47, 155, 51, 60, 0};
    const unsigned r_sz = 8;
    redupe_gf_poly_scale(p, p_sz, 199);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test641)
{
    unsigned char p[] = {204, 183, 108, 83, 134, 128, 249, 0, 0};
    const unsigned p_sz = 9;
    unsigned char r[] = {226, 102, 43, 241, 194, 244, 98, 0, 0};
    const unsigned r_sz = 9;
    redupe_gf_poly_scale(p, p_sz, 9);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test642)
{
    unsigned char p[] = {29, 152, 20, 161, 102, 182, 122, 1};
    const unsigned p_sz = 8;
    unsigned char r[] = {106, 140, 107, 226, 183, 51, 64, 157};
    const unsigned r_sz = 8;
    redupe_gf_poly_scale(p, p_sz, 157);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test643)
{
    unsigned char p[] = {106, 140, 107, 226, 183, 51, 64, 157};
    const unsigned p_sz = 8;
    unsigned char r[] = {29, 152, 20, 161, 102, 182, 122, 1};
    const unsigned r_sz = 8;
    redupe_gf_poly_scale(p, p_sz, 9);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test644)
{
    unsigned char p[] = {106, 140, 107, 226, 183, 51, 64, 157, 0};
    const unsigned p_sz = 9;
    unsigned char r[] = {51, 218, 229, 150, 125, 89, 163, 237, 0};
    const unsigned r_sz = 9;
    redupe_gf_poly_scale(p, p_sz, 214);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test645)
{
    unsigned char p[] = {106, 140, 107, 226, 183, 51, 64, 157, 0, 0};
    const unsigned p_sz = 10;
    unsigned char r[] = {219, 110, 69, 247, 106, 128, 84, 229, 0, 0};
    const unsigned r_sz = 10;
    redupe_gf_poly_scale(p, p_sz, 158);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test646)
{
    unsigned char p[] = {209, 161, 86, 115, 30, 203, 119, 151, 1};
    const unsigned p_sz = 9;
    unsigned char r[] = {143, 49, 211, 234, 50, 134, 209, 176, 199};
    const unsigned r_sz = 9;
    redupe_gf_poly_scale(p, p_sz, 199);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test647)
{
    unsigned char p[] = {143, 49, 211, 234, 50, 134, 209, 176, 199};
    const unsigned p_sz = 9;
    unsigned char r[] = {209, 161, 86, 115, 30, 203, 119, 151, 1};
    const unsigned r_sz = 9;
    redupe_gf_poly_scale(p, p_sz, 158);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test648)
{
    unsigned char p[] = {143, 49, 211, 234, 50, 134, 209, 176, 199, 0};
    const unsigned p_sz = 10;
    unsigned char r[] = {114, 186, 242, 146, 94, 244, 74, 199, 54, 0};
    const unsigned r_sz = 10;
    redupe_gf_poly_scale(p, p_sz, 92);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test649)
{
    unsigned char p[] = {143, 49, 211, 234, 50, 134, 209, 176, 199, 0, 0};
    const unsigned p_sz = 11;
    unsigned char r[] = {226, 173, 146, 182, 116, 215, 247, 105, 87, 0, 0};
    const unsigned r_sz = 11;
    redupe_gf_poly_scale(p, p_sz, 188);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test650)
{
    unsigned char p[] = {169, 5, 22, 51, 71, 106, 213, 85, 161, 1};
    const unsigned p_sz = 10;
    unsigned char r[] = {95, 251, 252, 80, 98, 18, 177, 240, 131, 149};
    const unsigned r_sz = 10;
    redupe_gf_poly_scale(p, p_sz, 149);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test651)
{
    unsigned char p[] = {95, 251, 252, 80, 98, 18, 177, 240, 131, 149};
    const unsigned p_sz = 10;
    unsigned char r[] = {169, 5, 22, 51, 71, 106, 213, 85, 161, 1};
    const unsigned r_sz = 10;
    redupe_gf_poly_scale(p, p_sz, 188);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test652)
{
    unsigned char p[] = {95, 251, 252, 80, 98, 18, 177, 240, 131, 149, 0};
    const unsigned p_sz = 11;
    unsigned char r[] = {184, 35, 203, 236, 108, 74, 57, 41, 185, 173, 0};
    const unsigned r_sz = 11;
    redupe_gf_poly_scale(p, p_sz, 153);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test653)
{
    unsigned char p[] = {1, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {199, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 199);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test654)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char r[] = {158};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 158);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test655)
{
    unsigned char p[] = {158};
    const unsigned p_sz = 1;
    unsigned char r[] = {1};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 199);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test656)
{
    unsigned char p[] = {158, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {75, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 181);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test657)
{
    unsigned char p[] = {158, 0, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {86, 0, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 211);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test658)
{
    unsigned char p[] = {140, 1};
    const unsigned p_sz = 2;
    unsigned char r[] = {138, 246};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 246);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test659)
{
    unsigned char p[] = {138, 246};
    const unsigned p_sz = 2;
    unsigned char r[] = {140, 1};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 211);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test660)
{
    unsigned char p[] = {138, 246, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {137, 3, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 104);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test661)
{
    unsigned char p[] = {138, 246, 0, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {216, 112, 0, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 48);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test662)
{
    unsigned char p[] = {223, 143, 1};
    const unsigned p_sz = 3;
    unsigned char r[] = {111, 108, 72};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 72);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test663)
{
    unsigned char p[] = {111, 108, 72};
    const unsigned p_sz = 3;
    unsigned char r[] = {223, 143, 1};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 48);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test664)
{
    unsigned char p[] = {111, 108, 72, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {239, 164, 51, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 57);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test665)
{
    unsigned char p[] = {111, 108, 72, 0, 0};
    const unsigned p_sz = 5;
    unsigned char r[] = {150, 62, 223, 0, 0};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 147);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test666)
{
    unsigned char p[] = {55, 11, 188, 1};
    const unsigned p_sz = 4;
    unsigned char r[] = {97, 147, 166, 79};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 79);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test667)
{
    unsigned char p[] = {97, 147, 166, 79};
    const unsigned p_sz = 4;
    unsigned char r[] = {55, 11, 188, 1};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 147);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test668)
{
    unsigned char p[] = {97, 147, 166, 79, 0};
    const unsigned p_sz = 5;
    unsigned char r[] = {218, 220, 180, 221, 0};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 153);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test669)
{
    unsigned char p[] = {97, 147, 166, 79, 0, 0};
    const unsigned p_sz = 6;
    unsigned char r[] = {185, 31, 56, 46, 0, 0};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 54);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test670)
{
    unsigned char p[] = {76, 213, 96, 97, 1};
    const unsigned p_sz = 5;
    unsigned char r[] = {234, 99, 37, 101, 64};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 64);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test671)
{
    unsigned char p[] = {234, 99, 37, 101, 64};
    const unsigned p_sz = 5;
    unsigned char r[] = {76, 213, 96, 97, 1};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 54);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test672)
{
    unsigned char p[] = {234, 99, 37, 101, 64, 0};
    const unsigned p_sz = 6;
    unsigned char r[] = {167, 163, 86, 1, 87, 0};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 196);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test673)
{
    unsigned char p[] = {234, 99, 37, 101, 64, 0, 0};
    const unsigned p_sz = 7;
    unsigned char r[] = {110, 101, 28, 203, 215, 0, 0};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 198);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test674)
{
    unsigned char p[] = {30, 240, 187, 79, 54, 1};
    const unsigned p_sz = 6;
    unsigned char r[] = {126, 215, 241, 144, 214, 163};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 163);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test675)
{
    unsigned char p[] = {126, 215, 241, 144, 214, 163};
    const unsigned p_sz = 6;
    unsigned char r[] = {30, 240, 187, 79, 54, 1};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 198);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test676)
{
    unsigned char p[] = {126, 215, 241, 144, 214, 163, 0};
    const unsigned p_sz = 7;
    unsigned char r[] = {154, 164, 146, 83, 95, 94, 0};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 251);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test677)
{
    unsigned char p[] = {126, 215, 241, 144, 214, 163, 0, 0};
    const unsigned p_sz = 8;
    unsigned char r[] = {195, 86, 9, 117, 218, 132, 0, 0};
    const unsigned r_sz = 8;
    redupe_gf_poly_scale(p, p_sz, 140);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test678)
{
    unsigned char p[] = {244, 223, 126, 35, 199, 104, 1};
    const unsigned p_sz = 7;
    unsigned char r[] = {49, 212, 199, 71, 47, 105, 83};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 83);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test679)
{
    unsigned char p[] = {49, 212, 199, 71, 47, 105, 83};
    const unsigned p_sz = 7;
    unsigned char r[] = {244, 223, 126, 35, 199, 104, 1};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 140);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test680)
{
    unsigned char p[] = {49, 212, 199, 71, 47, 105, 83, 0};
    const unsigned p_sz = 8;
    unsigned char r[] = {150, 106, 237, 173, 153, 186, 167, 0};
    const unsigned r_sz = 8;
    redupe_gf_poly_scale(p, p_sz, 142);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test681)
{
    unsigned char p[] = {49, 212, 199, 71, 47, 105, 83, 0, 0};
    const unsigned p_sz = 9;
    unsigned char r[] = {154, 64, 187, 43, 78, 201, 179, 0, 0};
    const unsigned r_sz = 9;
    redupe_gf_poly_scale(p, p_sz, 172);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test682)
{
    unsigned char p[] = {85, 200, 59, 166, 96, 249, 207, 1};
    const unsigned p_sz = 8;
    unsigned char r[] = {55, 245, 114, 176, 190, 54, 6, 156};
    const unsigned r_sz = 8;
    redupe_gf_poly_scale(p, p_sz, 156);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test683)
{
    unsigned char p[] = {55, 245, 114, 176, 190, 54, 6, 156};
    const unsigned p_sz = 8;
    unsigned char r[] = {85, 200, 59, 166, 96, 249, 207, 1};
    const unsigned r_sz = 8;
    redupe_gf_poly_scale(p, p_sz, 172);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test684)
{
    unsigned char p[] = {55, 245, 114, 176, 190, 54, 6, 156, 0};
    const unsigned p_sz = 9;
    unsigned char r[] = {235, 6, 167, 74, 124, 238, 30, 214, 0};
    const unsigned r_sz = 9;
    redupe_gf_poly_scale(p, p_sz, 5);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test685)
{
    unsigned char p[] = {55, 245, 114, 176, 190, 54, 6, 156, 0, 0};
    const unsigned p_sz = 10;
    unsigned char r[] = {6, 101, 216, 187, 209, 223, 236, 92, 0, 0};
    const unsigned r_sz = 10;
    redupe_gf_poly_scale(p, p_sz, 217);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test686)
{
    unsigned char p[] = {113, 19, 212, 90, 148, 71, 84, 25, 1};
    const unsigned p_sz = 9;
    unsigned char r[] = {71, 246, 28, 171, 141, 213, 35, 175, 115};
    const unsigned r_sz = 9;
    redupe_gf_poly_scale(p, p_sz, 115);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test687)
{
    unsigned char p[] = {71, 246, 28, 171, 141, 213, 35, 175, 115};
    const unsigned p_sz = 9;
    unsigned char r[] = {113, 19, 212, 90, 148, 71, 84, 25, 1};
    const unsigned r_sz = 9;
    redupe_gf_poly_scale(p, p_sz, 217);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test688)
{
    unsigned char p[] = {71, 246, 28, 171, 141, 213, 35, 175, 115, 0};
    const unsigned p_sz = 10;
    unsigned char r[] = {162, 23, 228, 218, 146, 31, 8, 40, 124, 0};
    const unsigned r_sz = 10;
    redupe_gf_poly_scale(p, p_sz, 178);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test689)
{
    unsigned char p[] = {71, 246, 28, 171, 141, 213, 35, 175, 115, 0, 0};
    const unsigned p_sz = 11;
    unsigned char r[] = {206, 192, 105, 37, 160, 38, 230, 89, 152, 0, 0};
    const unsigned r_sz = 11;
    redupe_gf_poly_scale(p, p_sz, 31);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test690)
{
    unsigned char p[] = {164, 3, 47, 181, 25, 84, 163, 32, 101, 1};
    const unsigned p_sz = 10;
    unsigned char r[] = {37, 126, 178, 149, 253, 96, 243, 41, 249, 42};
    const unsigned r_sz = 10;
    redupe_gf_poly_scale(p, p_sz, 42);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test691)
{
    unsigned char p[] = {37, 126, 178, 149, 253, 96, 243, 41, 249, 42};
    const unsigned p_sz = 10;
    unsigned char r[] = {164, 3, 47, 181, 25, 84, 163, 32, 101, 1};
    const unsigned r_sz = 10;
    redupe_gf_poly_scale(p, p_sz, 31);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test692)
{
    unsigned char p[] = {37, 126, 178, 149, 253, 96, 243, 41, 249, 42, 0};
    const unsigned p_sz = 11;
    unsigned char r[] = {61, 13, 82, 118, 152, 138, 215, 107, 170, 240, 0};
    const unsigned r_sz = 11;
    redupe_gf_poly_scale(p, p_sz, 130);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test693)
{
    unsigned char p[] = {37, 126, 178, 149, 253, 96, 243, 41, 249, 42, 0, 0};
    const unsigned p_sz = 12;
    unsigned char r[] = {116, 21, 55, 183, 80, 16, 166, 118, 165, 248, 0, 0};
    const unsigned r_sz = 12;
    redupe_gf_poly_scale(p, p_sz, 122);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test694)
{
    unsigned char p[] = {243, 105, 56, 124, 141, 181, 101, 145, 18, 149, 1};
    const unsigned p_sz = 11;
    unsigned char r[] = {16, 107, 144, 21, 9, 153, 67, 65, 108, 89, 6};
    const unsigned r_sz = 11;
    redupe_gf_poly_scale(p, p_sz, 6);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test695)
{
    unsigned char p[] = {16, 107, 144, 21, 9, 153, 67, 65, 108, 89, 6};
    const unsigned p_sz = 11;
    unsigned char r[] = {243, 105, 56, 124, 141, 181, 101, 145, 18, 149, 1};
    const unsigned r_sz = 11;
    redupe_gf_poly_scale(p, p_sz, 122);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test696)
{
    unsigned char p[] = {16, 107, 144, 21, 9, 153, 67, 65, 108, 89, 6, 0};
    const unsigned p_sz = 12;
    unsigned char r[] = {231, 209, 140, 43, 193, 77, 255, 135, 101, 157, 136, 0};
    const unsigned r_sz = 12;
    redupe_gf_poly_scale(p, p_sz, 60);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test697)
{
    unsigned char p[] = {60, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {153, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 207);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test698)
{
    unsigned char p[] = {60, 0, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {52, 0, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 48);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test699)
{
    unsigned char p[] = {50, 1};
    const unsigned p_sz = 2;
    unsigned char r[] = {145, 72};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 72);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test700)
{
    unsigned char p[] = {145, 72};
    const unsigned p_sz = 2;
    unsigned char r[] = {50, 1};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 48);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test701)
{
    unsigned char p[] = {145, 72, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {107, 77, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 241);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test702)
{
    unsigned char p[] = {145, 72, 0, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {58, 94, 0, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 134);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test703)
{
    unsigned char p[] = {95, 127, 1};
    const unsigned p_sz = 3;
    unsigned char r[] = {172, 125, 228};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 228);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test704)
{
    unsigned char p[] = {172, 125, 228};
    const unsigned p_sz = 3;
    unsigned char r[] = {95, 127, 1};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 134);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test705)
{
    unsigned char p[] = {172, 125, 228, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {111, 107, 173, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 217);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test706)
{
    unsigned char p[] = {172, 125, 228, 0, 0};
    const unsigned p_sz = 5;
    unsigned char r[] = {134, 236, 156, 0, 0};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 218);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test707)
{
    unsigned char p[] = {85, 106, 210, 1};
    const unsigned p_sz = 4;
    unsigned char r[] = {76, 209, 150, 118};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 118);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test708)
{
    unsigned char p[] = {76, 209, 150, 118};
    const unsigned p_sz = 4;
    unsigned char r[] = {85, 106, 210, 1};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 218);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test709)
{
    unsigned char p[] = {76, 209, 150, 118, 0};
    const unsigned p_sz = 5;
    unsigned char r[] = {167, 226, 62, 160, 0};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 87);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test710)
{
    unsigned char p[] = {76, 209, 150, 118, 0, 0};
    const unsigned p_sz = 6;
    unsigned char r[] = {57, 238, 161, 16, 0, 0};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 33);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test711)
{
    unsigned char p[] = {33, 91, 200, 114, 1};
    const unsigned p_sz = 5;
    unsigned char r[] = {1, 162, 105, 152, 237};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 237);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test712)
{
    unsigned char p[] = {1, 162, 105, 152, 237};
    const unsigned p_sz = 5;
    unsigned char r[] = {33, 91, 200, 114, 1};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 33);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test713)
{
    unsigned char p[] = {1, 162, 105, 152, 237, 0};
    const unsigned p_sz = 6;
    unsigned char r[] = {215, 151, 61, 220, 157, 0};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 215);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test714)
{
    unsigned char p[] = {1, 162, 105, 152, 237, 0, 0};
    const unsigned p_sz = 7;
    unsigned char r[] = {162, 99, 205, 72, 188, 0, 0};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 162);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test715)
{
    unsigned char p[] = {238, 88, 199, 4, 239, 1};
    const unsigned p_sz = 6;
    unsigned char r[] = {223, 157, 198, 70, 64, 159};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 159);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test716)
{
    unsigned char p[] = {223, 157, 198, 70, 64, 159};
    const unsigned p_sz = 6;
    unsigned char r[] = {238, 88, 199, 4, 239, 1};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 162);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test717)
{
    unsigned char p[] = {223, 157, 198, 70, 64, 159, 0};
    const unsigned p_sz = 7;
    unsigned char r[] = {112, 168, 117, 230, 199, 183, 0};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 129);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test718)
{
    unsigned char p[] = {223, 157, 198, 70, 64, 159, 0, 0};
    const unsigned p_sz = 8;
    unsigned char r[] = {254, 96, 191, 159, 16, 238, 0, 0};
    const unsigned r_sz = 8;
    redupe_gf_poly_scale(p, p_sz, 71);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test719)
{
    unsigned char p[] = {210, 37, 224, 105, 127, 88, 1};
    const unsigned p_sz = 7;
    unsigned char r[] = {111, 148, 167, 185, 225, 125, 4};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 4);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test720)
{
    unsigned char p[] = {111, 148, 167, 185, 225, 125, 4};
    const unsigned p_sz = 7;
    unsigned char r[] = {210, 37, 224, 105, 127, 88, 1};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 71);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test721)
{
    unsigned char p[] = {111, 148, 167, 185, 225, 125, 4, 0};
    const unsigned p_sz = 8;
    unsigned char r[] = {58, 88, 146, 29, 74, 65, 167, 0};
    const unsigned r_sz = 8;
    redupe_gf_poly_scale(p, p_sz, 224);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test722)
{
    unsigned char p[] = {111, 148, 167, 185, 225, 125, 4, 0, 0};
    const unsigned p_sz = 9;
    unsigned char r[] = {49, 183, 94, 150, 162, 208, 236, 0, 0};
    const unsigned r_sz = 9;
    redupe_gf_poly_scale(p, p_sz, 59);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test723)
{
    unsigned char p[] = {196, 234, 8, 98, 51, 208, 255, 1};
    const unsigned p_sz = 8;
    unsigned char r[] = {161, 213, 33, 222, 32, 125, 160, 169};
    const unsigned r_sz = 8;
    redupe_gf_poly_scale(p, p_sz, 169);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test724)
{
    unsigned char p[] = {161, 213, 33, 222, 32, 125, 160, 169};
    const unsigned p_sz = 8;
    unsigned char r[] = {196, 234, 8, 98, 51, 208, 255, 1};
    const unsigned r_sz = 8;
    redupe_gf_poly_scale(p, p_sz, 59);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test725)
{
    unsigned char p[] = {161, 213, 33, 222, 32, 125, 160, 169, 0};
    const unsigned p_sz = 9;
    unsigned char r[] = {129, 83, 220, 206, 80, 74, 13, 149, 0};
    const unsigned r_sz = 9;
    redupe_gf_poly_scale(p, p_sz, 140);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test726)
{
    unsigned char p[] = {161, 213, 33, 222, 32, 125, 160, 169, 0, 0};
    const unsigned p_sz = 10;
    unsigned char r[] = {12, 118, 68, 6, 18, 166, 90, 134, 0, 0};
    const unsigned r_sz = 10;
    redupe_gf_poly_scale(p, p_sz, 86);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test727)
{
    unsigned char p[] = {176, 32, 104, 80, 144, 169, 49, 106, 1};
    const unsigned p_sz = 9;
    unsigned char r[] = {201, 212, 84, 223, 29, 179, 155, 30, 37};
    const unsigned r_sz = 9;
    redupe_gf_poly_scale(p, p_sz, 37);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test728)
{
    unsigned char p[] = {201, 212, 84, 223, 29, 179, 155, 30, 37};
    const unsigned p_sz = 9;
    unsigned char r[] = {176, 32, 104, 80, 144, 169, 49, 106, 1};
    const unsigned r_sz = 9;
    redupe_gf_poly_scale(p, p_sz, 86);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test729)
{
    unsigned char p[] = {201, 212, 84, 223, 29, 179, 155, 30, 37, 0};
    const unsigned p_sz = 10;
    unsigned char r[] = {27, 232, 31, 185, 243, 21, 220, 159, 64, 0};
    const unsigned r_sz = 10;
    redupe_gf_poly_scale(p, p_sz, 36);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test730)
{
    unsigned char p[] = {201, 212, 84, 223, 29, 179, 155, 30, 37, 0, 0};
    const unsigned p_sz = 11;
    unsigned char r[] = {81, 72, 202, 180, 25, 34, 41, 64, 69, 0, 0};
    const unsigned r_sz = 11;
    redupe_gf_poly_scale(p, p_sz, 55);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test731)
{
    unsigned char p[] = {23, 46, 123, 215, 177, 35, 47, 40, 42, 1};
    const unsigned p_sz = 10;
    unsigned char r[] = {14, 28, 176, 44, 228, 237, 66, 197, 121, 94};
    const unsigned r_sz = 10;
    redupe_gf_poly_scale(p, p_sz, 94);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test732)
{
    unsigned char p[] = {14, 28, 176, 44, 228, 237, 66, 197, 121, 94};
    const unsigned p_sz = 10;
    unsigned char r[] = {23, 46, 123, 215, 177, 35, 47, 40, 42, 1};
    const unsigned r_sz = 10;
    redupe_gf_poly_scale(p, p_sz, 55);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test733)
{
    unsigned char p[] = {14, 28, 176, 44, 228, 237, 66, 197, 121, 94, 0};
    const unsigned p_sz = 11;
    unsigned char r[] = {84, 168, 110, 149, 17, 111, 187, 194, 228, 19, 0};
    const unsigned r_sz = 11;
    redupe_gf_poly_scale(p, p_sz, 14);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test734)
{
    unsigned char p[] = {14, 28, 176, 44, 228, 237, 66, 197, 121, 94, 0, 0};
    const unsigned p_sz = 12;
    unsigned char r[] = {101, 202, 124, 31, 48, 233, 205, 216, 214, 7, 0, 0};
    const unsigned r_sz = 12;
    redupe_gf_poly_scale(p, p_sz, 133);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test735)
{
    unsigned char p[] = {5, 247, 138, 90, 223, 252, 177, 173, 137, 57, 1};
    const unsigned p_sz = 11;
    unsigned char r[] = {219, 13, 113, 154, 155, 106, 242, 151, 56, 6, 204};
    const unsigned r_sz = 11;
    redupe_gf_poly_scale(p, p_sz, 204);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test736)
{
    unsigned char p[] = {219, 13, 113, 154, 155, 106, 242, 151, 56, 6, 204};
    const unsigned p_sz = 11;
    unsigned char r[] = {5, 247, 138, 90, 223, 252, 177, 173, 137, 57, 1};
    const unsigned r_sz = 11;
    redupe_gf_poly_scale(p, p_sz, 133);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test737)
{
    unsigned char p[] = {219, 13, 113, 154, 155, 106, 242, 151, 56, 6, 204, 0};
    const unsigned p_sz = 12;
    unsigned char r[] = {21, 153, 105, 103, 49, 16, 219, 254, 145, 233, 163, 0};
    const unsigned r_sz = 12;
    redupe_gf_poly_scale(p, p_sz, 86);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test738)
{
    unsigned char p[] = {219, 13, 113, 154, 155, 106, 242, 151, 56, 6, 204, 0, 0};
    const unsigned p_sz = 13;
    unsigned char r[] = {46, 186, 35, 134, 215, 27, 63, 60, 57, 251, 253, 0, 0};
    const unsigned r_sz = 13;
    redupe_gf_poly_scale(p, p_sz, 81);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test739)
{
    unsigned char p[] = {112, 86, 226, 242, 91, 38, 234, 151, 234, 103, 154, 1};
    const unsigned p_sz = 12;
    unsigned char r[] = {54, 232, 42, 32, 66, 222, 47, 179, 47, 213, 25, 35};
    const unsigned r_sz = 12;
    redupe_gf_poly_scale(p, p_sz, 35);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test740)
{
    unsigned char p[] = {54, 232, 42, 32, 66, 222, 47, 179, 47, 213, 25, 35};
    const unsigned p_sz = 12;
    unsigned char r[] = {112, 86, 226, 242, 91, 38, 234, 151, 234, 103, 154, 1};
    const unsigned r_sz = 12;
    redupe_gf_poly_scale(p, p_sz, 81);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test741)
{
    unsigned char p[] = {54, 232, 42, 32, 66, 222, 47, 179, 47, 213, 25, 35, 0};
    const unsigned p_sz = 13;
    unsigned char r[] = {83, 9, 134, 155, 217, 90, 6, 133, 6, 62, 85, 16, 0};
    const unsigned r_sz = 13;
    redupe_gf_poly_scale(p, p_sz, 121);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test742)
{
    unsigned char p[] = {1, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {90, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 90);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test743)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char r[] = {203};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 203);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test744)
{
    unsigned char p[] = {203};
    const unsigned p_sz = 1;
    unsigned char r[] = {1};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 90);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test745)
{
    unsigned char p[] = {203, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {224, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 138);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test746)
{
    unsigned char p[] = {203, 0, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {45, 0, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 74);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test747)
{
    unsigned char p[] = {186, 1};
    const unsigned p_sz = 2;
    unsigned char r[] = {180, 43};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 43);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test748)
{
    unsigned char p[] = {180, 43};
    const unsigned p_sz = 2;
    unsigned char r[] = {186, 1};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 74);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test749)
{
    unsigned char p[] = {180, 43, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {181, 44, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 234);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test750)
{
    unsigned char p[] = {180, 43, 0, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {200, 66, 0, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 227);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test751)
{
    unsigned char p[] = {152, 150, 1};
    const unsigned p_sz = 3;
    unsigned char r[] = {217, 16, 240};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 240);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test752)
{
    unsigned char p[] = {217, 16, 240};
    const unsigned p_sz = 3;
    unsigned char r[] = {152, 150, 1};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 227);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test753)
{
    unsigned char p[] = {217, 16, 240, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {165, 217, 179, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 91);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test754)
{
    unsigned char p[] = {217, 16, 240, 0, 0};
    const unsigned p_sz = 5;
    unsigned char r[] = {179, 240, 57, 0, 0};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 15);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test755)
{
    unsigned char p[] = {109, 3, 37, 1};
    const unsigned p_sz = 4;
    unsigned char r[] = {105, 167, 195, 150};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 150);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test756)
{
    unsigned char p[] = {105, 167, 195, 150};
    const unsigned p_sz = 4;
    unsigned char r[] = {109, 3, 37, 1};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 15);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test757)
{
    unsigned char p[] = {105, 167, 195, 150, 0};
    const unsigned p_sz = 5;
    unsigned char r[] = {91, 22, 108, 249, 0};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 78);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test758)
{
    unsigned char p[] = {105, 167, 195, 150, 0, 0};
    const unsigned p_sz = 6;
    unsigned char r[] = {35, 50, 167, 229, 0, 0};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 250);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test759)
{
    unsigned char p[] = {232, 139, 86, 220, 1};
    const unsigned p_sz = 5;
    unsigned char r[] = {234, 27, 244, 7, 232};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 232);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test760)
{
    unsigned char p[] = {234, 27, 244, 7, 232};
    const unsigned p_sz = 5;
    unsigned char r[] = {232, 139, 86, 220, 1};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 250);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test761)
{
    unsigned char p[] = {234, 27, 244, 7, 232, 0};
    const unsigned p_sz = 6;
    unsigned char r[] = {80, 3, 128, 244, 119, 0};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 157);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test762)
{
    unsigned char p[] = {234, 27, 244, 7, 232, 0, 0};
    const unsigned p_sz = 7;
    unsigned char r[] = {22, 89, 130, 230, 61, 0, 0};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 155);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test763)
{
    unsigned char p[] = {115, 217, 172, 71, 171, 1};
    const unsigned p_sz = 6;
    unsigned char r[] = {141, 218, 8, 37, 195, 148};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 148);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test764)
{
    unsigned char p[] = {141, 218, 8, 37, 195, 148};
    const unsigned p_sz = 6;
    unsigned char r[] = {115, 217, 172, 71, 171, 1};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 155);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test765)
{
    unsigned char p[] = {141, 218, 8, 37, 195, 148, 0};
    const unsigned p_sz = 7;
    unsigned char r[] = {37, 61, 175, 46, 160, 184, 0};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 113);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test766)
{
    unsigned char p[] = {141, 218, 8, 37, 195, 148, 0, 0};
    const unsigned p_sz = 8;
    unsigned char r[] = {186, 54, 199, 170, 30, 146, 0, 0};
    const unsigned r_sz = 8;
    redupe_gf_poly_scale(p, p_sz, 124);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test767)
{
    unsigned char p[] = {51, 23, 244, 100, 218, 19, 1};
    const unsigned p_sz = 7;
    unsigned char r[] = {116, 19, 124, 253, 90, 57, 132};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 132);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test768)
{
    unsigned char p[] = {116, 19, 124, 253, 90, 57, 132};
    const unsigned p_sz = 7;
    unsigned char r[] = {51, 23, 244, 100, 218, 19, 1};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 124);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test769)
{
    unsigned char p[] = {116, 19, 124, 253, 90, 57, 132, 0};
    const unsigned p_sz = 8;
    unsigned char r[] = {245, 235, 231, 159, 44, 59, 52, 0};
    const unsigned r_sz = 8;
    redupe_gf_poly_scale(p, p_sz, 69);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test770)
{
    unsigned char p[] = {116, 19, 124, 253, 90, 57, 132, 0, 0};
    const unsigned p_sz = 9;
    unsigned char r[] = {66, 84, 250, 162, 82, 24, 19, 0, 0};
    const unsigned r_sz = 9;
    redupe_gf_poly_scale(p, p_sz, 23);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test771)
{
    unsigned char p[] = {79, 238, 55, 193, 86, 115, 39, 1};
    const unsigned p_sz = 8;
    unsigned char r[] = {128, 215, 93, 179, 223, 96, 115, 102};
    const unsigned r_sz = 8;
    redupe_gf_poly_scale(p, p_sz, 102);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test772)
{
    unsigned char p[] = {128, 215, 93, 179, 223, 96, 115, 102};
    const unsigned p_sz = 8;
    unsigned char r[] = {79, 238, 55, 193, 86, 115, 39, 1};
    const unsigned r_sz = 8;
    redupe_gf_poly_scale(p, p_sz, 23);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test773)
{
    unsigned char p[] = {128, 215, 93, 179, 223, 96, 115, 102, 0};
    const unsigned p_sz = 9;
    unsigned char r[] = {42, 5, 65, 10, 36, 145, 53, 64, 0};
    const unsigned r_sz = 9;
    redupe_gf_poly_scale(p, p_sz, 169);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test774)
{
    unsigned char p[] = {128, 215, 93, 179, 223, 96, 115, 102, 0, 0};
    const unsigned p_sz = 10;
    unsigned char r[] = {90, 98, 153, 196, 68, 181, 179, 33, 0, 0};
    const unsigned r_sz = 10;
    redupe_gf_poly_scale(p, p_sz, 205);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test775)
{
    unsigned char p[] = {104, 30, 85, 159, 183, 223, 85, 103, 1};
    const unsigned p_sz = 9;
    unsigned char r[] = {226, 95, 33, 78, 154, 120, 33, 67, 125};
    const unsigned r_sz = 9;
    redupe_gf_poly_scale(p, p_sz, 125);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test776)
{
    unsigned char p[] = {226, 95, 33, 78, 154, 120, 33, 67, 125};
    const unsigned p_sz = 9;
    unsigned char r[] = {104, 30, 85, 159, 183, 223, 85, 103, 1};
    const unsigned r_sz = 9;
    redupe_gf_poly_scale(p, p_sz, 205);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test777)
{
    unsigned char p[] = {226, 95, 33, 78, 154, 120, 33, 67, 125, 0};
    const unsigned p_sz = 10;
    unsigned char r[] = {151, 182, 126, 161, 255, 104, 126, 204, 152, 0};
    const unsigned r_sz = 10;
    redupe_gf_poly_scale(p, p_sz, 48);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test778)
{
    unsigned char p[] = {226, 95, 33, 78, 154, 120, 33, 67, 125, 0, 0};
    const unsigned p_sz = 11;
    unsigned char r[] = {255, 168, 43, 62, 72, 183, 43, 171, 153, 0, 0};
    const unsigned r_sz = 11;
    redupe_gf_poly_scale(p, p_sz, 253);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test779)
{
    unsigned char p[] = {205, 188, 249, 48, 36, 106, 18, 184, 255, 1};
    const unsigned p_sz = 10;
    unsigned char r[] = {220, 207, 218, 221, 77, 239, 168, 20, 226, 255};
    const unsigned r_sz = 10;
    redupe_gf_poly_scale(p, p_sz, 255);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test780)
{
    unsigned char p[] = {220, 207, 218, 221, 77, 239, 168, 20, 226, 255};
    const unsigned p_sz = 10;
    unsigned char r[] = {205, 188, 249, 48, 36, 106, 18, 184, 255, 1};
    const unsigned r_sz = 10;
    redupe_gf_poly_scale(p, p_sz, 253);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test781)
{
    unsigned char p[] = {220, 207, 218, 221, 77, 239, 168, 20, 226, 255, 0};
    const unsigned p_sz = 11;
    unsigned char r[] = {188, 46, 45, 254, 48, 134, 24, 65, 251, 210, 0};
    const unsigned r_sz = 11;
    redupe_gf_poly_scale(p, p_sz, 66);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test782)
{
    unsigned char p[] = {220, 207, 218, 221, 77, 239, 168, 20, 226, 255, 0, 0};
    const unsigned p_sz = 12;
    unsigned char r[] = {132, 14, 127, 213, 67, 252, 175, 32, 70, 133, 0, 0};
    const unsigned r_sz = 12;
    redupe_gf_poly_scale(p, p_sz, 81);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test783)
{
    unsigned char p[] = {67, 75, 186, 57, 72, 21, 89, 248, 218, 45, 1};
    const unsigned p_sz = 11;
    unsigned char r[] = {77, 72, 13, 56, 45, 165, 4, 99, 49, 190, 35};
    const unsigned r_sz = 11;
    redupe_gf_poly_scale(p, p_sz, 35);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test784)
{
    unsigned char p[] = {77, 72, 13, 56, 45, 165, 4, 99, 49, 190, 35};
    const unsigned p_sz = 11;
    unsigned char r[] = {67, 75, 186, 57, 72, 21, 89, 248, 218, 45, 1};
    const unsigned r_sz = 11;
    redupe_gf_poly_scale(p, p_sz, 81);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test785)
{
    unsigned char p[] = {77, 72, 13, 56, 45, 165, 4, 99, 49, 190, 35, 0};
    const unsigned p_sz = 12;
    unsigned char r[] = {95, 77, 201, 59, 130, 104, 227, 211, 17, 22, 69, 0};
    const unsigned r_sz = 12;
    redupe_gf_poly_scale(p, p_sz, 241);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test786)
{
    unsigned char p[] = {77, 72, 13, 56, 45, 165, 4, 99, 49, 190, 35, 0, 0};
    const unsigned p_sz = 13;
    unsigned char r[] = {97, 41, 3, 236, 50, 189, 171, 107, 68, 88, 9, 0, 0};
    const unsigned r_sz = 13;
    redupe_gf_poly_scale(p, p_sz, 227);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test787)
{
    unsigned char p[] = {219, 0, 253, 84, 248, 220, 89, 170, 175, 73, 104, 1};
    const unsigned p_sz = 12;
    unsigned char r[] = {2, 0, 115, 138, 100, 232, 78, 244, 227, 245, 110, 240};
    const unsigned r_sz = 12;
    redupe_gf_poly_scale(p, p_sz, 240);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test788)
{
    unsigned char p[] = {2, 0, 115, 138, 100, 232, 78, 244, 227, 245, 110, 240};
    const unsigned p_sz = 12;
    unsigned char r[] = {219, 0, 253, 84, 248, 220, 89, 170, 175, 73, 104, 1};
    const unsigned r_sz = 12;
    redupe_gf_poly_scale(p, p_sz, 227);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test789)
{
    unsigned char p[] = {2, 0, 115, 138, 100, 232, 78, 244, 227, 245, 110, 240, 0};
    const unsigned p_sz = 13;
    unsigned char r[] = {105, 0, 195, 143, 173, 153, 163, 157, 243, 39, 125, 79, 0};
    const unsigned r_sz = 13;
    redupe_gf_poly_scale(p, p_sz, 186);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test790)
{
    unsigned char p[] = {2, 0, 115, 138, 100, 232, 78, 244, 227, 245, 110, 240, 0, 0};
    const unsigned p_sz = 14;
    unsigned char r[] = {252, 0, 188, 218, 104, 171, 56, 42, 254, 84, 67, 207, 0, 0};
    const unsigned r_sz = 14;
    redupe_gf_poly_scale(p, p_sz, 126);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test791)
{
    unsigned char p[] = {8, 242, 192, 158, 203, 220, 212, 175, 29, 208, 61, 39, 1};
    const unsigned p_sz = 13;
    unsigned char r[] = {163, 159, 147, 36, 47, 180, 23, 55, 217, 200, 111, 118, 254};
    const unsigned r_sz = 13;
    redupe_gf_poly_scale(p, p_sz, 254);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test792)
{
    unsigned char p[] = {163, 159, 147, 36, 47, 180, 23, 55, 217, 200, 111, 118, 254};
    const unsigned p_sz = 13;
    unsigned char r[] = {8, 242, 192, 158, 203, 220, 212, 175, 29, 208, 61, 39, 1};
    const unsigned r_sz = 13;
    redupe_gf_poly_scale(p, p_sz, 126);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test793)
{
    unsigned char p[] = {163, 159, 147, 36, 47, 180, 23, 55, 217, 200, 111, 118, 254, 0};
    const unsigned p_sz = 14;
    unsigned char r[] = {223, 193, 199, 18, 153, 90, 133, 149, 226, 100, 185, 59, 127, 0};
    const unsigned r_sz = 14;
    redupe_gf_poly_scale(p, p_sz, 142);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test794)
{
    unsigned char p[] = {1, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {86, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 86);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test795)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char r[] = {37};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 37);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test796)
{
    unsigned char p[] = {37};
    const unsigned p_sz = 1;
    unsigned char r[] = {1};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 86);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test797)
{
    unsigned char p[] = {37, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {93, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 180);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test798)
{
    unsigned char p[] = {37, 0, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {12, 0, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 207);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test799)
{
    unsigned char p[] = {11, 1};
    const unsigned p_sz = 2;
    unsigned char r[] = {131, 58};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 58);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test800)
{
    unsigned char p[] = {131, 58};
    const unsigned p_sz = 2;
    unsigned char r[] = {11, 1};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 207);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test801)
{
    unsigned char p[] = {131, 58, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {207, 29, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 142);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test802)
{
    unsigned char p[] = {131, 58, 0, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {45, 156, 0, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 6);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test803)
{
    unsigned char p[] = {195, 22, 1};
    const unsigned p_sz = 3;
    unsigned char r[] = {174, 242, 122};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 122);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test804)
{
    unsigned char p[] = {174, 242, 122};
    const unsigned p_sz = 3;
    unsigned char r[] = {195, 22, 1};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 6);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test805)
{
    unsigned char p[] = {174, 242, 122, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {223, 31, 23, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 114);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test806)
{
    unsigned char p[] = {174, 242, 122, 0, 0};
    const unsigned p_sz = 5;
    unsigned char r[] = {23, 73, 252, 0, 0};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 50);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test807)
{
    unsigned char p[] = {242, 64, 1, 1};
    const unsigned p_sz = 4;
    unsigned char r[] = {90, 194, 111, 111};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 111);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test808)
{
    unsigned char p[] = {90, 194, 111, 111};
    const unsigned p_sz = 4;
    unsigned char r[] = {242, 64, 1, 1};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 50);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test809)
{
    unsigned char p[] = {90, 194, 111, 111, 0};
    const unsigned p_sz = 5;
    unsigned char r[] = {25, 88, 235, 235, 0};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 241);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test810)
{
    unsigned char p[] = {90, 194, 111, 111, 0, 0};
    const unsigned p_sz = 6;
    unsigned char r[] = {91, 132, 218, 218, 0, 0};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 202);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test811)
{
    unsigned char p[] = {14, 227, 87, 234, 1};
    const unsigned p_sz = 5;
    unsigned char r[] = {102, 136, 248, 221, 98};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 98);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test812)
{
    unsigned char p[] = {102, 136, 248, 221, 98};
    const unsigned p_sz = 5;
    unsigned char r[] = {14, 227, 87, 234, 1};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 202);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test813)
{
    unsigned char p[] = {102, 136, 248, 221, 98, 0};
    const unsigned p_sz = 6;
    unsigned char r[] = {193, 234, 156, 197, 34, 0};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 241);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test814)
{
    unsigned char p[] = {102, 136, 248, 221, 98, 0, 0};
    const unsigned p_sz = 7;
    unsigned char r[] = {10, 24, 212, 23, 104, 0, 0};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 150);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test815)
{
    unsigned char p[] = {154, 96, 165, 72, 200, 1};
    const unsigned p_sz = 6;
    unsigned char r[] = {69, 26, 29, 159, 76, 15};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 15);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test816)
{
    unsigned char p[] = {69, 26, 29, 159, 76, 15};
    const unsigned p_sz = 6;
    unsigned char r[] = {154, 96, 165, 72, 200, 1};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 150);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test817)
{
    unsigned char p[] = {69, 26, 29, 159, 76, 15, 0};
    const unsigned p_sz = 7;
    unsigned char r[] = {48, 252, 188, 189, 240, 33, 0};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 161);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test818)
{
    unsigned char p[] = {69, 26, 29, 159, 76, 15, 0, 0};
    const unsigned p_sz = 8;
    unsigned char r[] = {108, 218, 74, 15, 193, 13, 0, 0};
    const unsigned r_sz = 8;
    redupe_gf_poly_scale(p, p_sz, 48);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test819)
{
    unsigned char p[] = {58, 126, 8, 15, 208, 233, 1};
    const unsigned p_sz = 7;
    unsigned char r[] = {235, 33, 122, 159, 240, 195, 72};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 72);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test820)
{
    unsigned char p[] = {235, 33, 122, 159, 240, 195, 72};
    const unsigned p_sz = 7;
    unsigned char r[] = {58, 126, 8, 15, 208, 233, 1};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 48);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test821)
{
    unsigned char p[] = {235, 33, 122, 159, 240, 195, 72, 0};
    const unsigned p_sz = 8;
    unsigned char r[] = {102, 48, 59, 130, 36, 104, 237, 0};
    const unsigned r_sz = 8;
    redupe_gf_poly_scale(p, p_sz, 154);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test822)
{
    unsigned char p[] = {235, 33, 122, 159, 240, 195, 72, 0, 0};
    const unsigned p_sz = 9;
    unsigned char r[] = {205, 215, 64, 120, 206, 27, 8, 0, 0};
    const unsigned r_sz = 9;
    redupe_gf_poly_scale(p, p_sz, 157);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test823)
{
    unsigned char p[] = {10, 208, 15, 133, 234, 181, 4, 1};
    const unsigned p_sz = 8;
    unsigned char r[] = {90, 30, 119, 217, 233, 116, 36, 9};
    const unsigned r_sz = 8;
    redupe_gf_poly_scale(p, p_sz, 9);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test824)
{
    unsigned char p[] = {90, 30, 119, 217, 233, 116, 36, 9};
    const unsigned p_sz = 8;
    unsigned char r[] = {10, 208, 15, 133, 234, 181, 4, 1};
    const unsigned r_sz = 8;
    redupe_gf_poly_scale(p, p_sz, 157);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test825)
{
    unsigned char p[] = {90, 30, 119, 217, 233, 116, 36, 9, 0};
    const unsigned p_sz = 9;
    unsigned char r[] = {83, 29, 244, 24, 219, 141, 213, 114, 0};
    const unsigned r_sz = 9;
    redupe_gf_poly_scale(p, p_sz, 220);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test826)
{
    unsigned char p[] = {90, 30, 119, 217, 233, 116, 36, 9, 0, 0};
    const unsigned p_sz = 10;
    unsigned char r[] = {119, 17, 194, 59, 19, 78, 54, 131, 0, 0};
    const unsigned r_sz = 10;
    redupe_gf_poly_scale(p, p_sz, 143);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test827)
{
    unsigned char p[] = {158, 192, 100, 111, 144, 124, 104, 118, 1};
    const unsigned p_sz = 9;
    unsigned char r[] = {31, 128, 179, 74, 224, 163, 187, 175, 245};
    const unsigned r_sz = 9;
    redupe_gf_poly_scale(p, p_sz, 245);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test828)
{
    unsigned char p[] = {31, 128, 179, 74, 224, 163, 187, 175, 245};
    const unsigned p_sz = 9;
    unsigned char r[] = {158, 192, 100, 111, 144, 124, 104, 118, 1};
    const unsigned r_sz = 9;
    redupe_gf_poly_scale(p, p_sz, 143);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test829)
{
    unsigned char p[] = {31, 128, 179, 74, 224, 163, 187, 175, 245, 0};
    const unsigned p_sz = 10;
    unsigned char r[] = {97, 239, 151, 233, 228, 238, 37, 5, 149, 0};
    const unsigned r_sz = 10;
    redupe_gf_poly_scale(p, p_sz, 81);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test830)
{
    unsigned char p[] = {31, 128, 179, 74, 224, 163, 187, 175, 245, 0, 0};
    const unsigned p_sz = 11;
    unsigned char r[] = {107, 243, 42, 29, 241, 222, 80, 153, 112, 0, 0};
    const unsigned r_sz = 11;
    redupe_gf_poly_scale(p, p_sz, 72);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test831)
{
    unsigned char p[] = {22, 96, 149, 182, 152, 48, 111, 238, 227, 1};
    const unsigned p_sz = 10;
    unsigned char r[] = {135, 210, 242, 236, 159, 105, 223, 202, 167, 48};
    const unsigned r_sz = 10;
    redupe_gf_poly_scale(p, p_sz, 48);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test832)
{
    unsigned char p[] = {135, 210, 242, 236, 159, 105, 223, 202, 167, 48};
    const unsigned p_sz = 10;
    unsigned char r[] = {22, 96, 149, 182, 152, 48, 111, 238, 227, 1};
    const unsigned r_sz = 10;
    redupe_gf_poly_scale(p, p_sz, 72);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test833)
{
    unsigned char p[] = {135, 210, 242, 236, 159, 105, 223, 202, 167, 48, 0};
    const unsigned p_sz = 11;
    unsigned char r[] = {177, 184, 192, 100, 147, 92, 99, 154, 201, 68, 0};
    const unsigned r_sz = 11;
    redupe_gf_poly_scale(p, p_sz, 202);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test834)
{
    unsigned char p[] = {135, 210, 242, 236, 159, 105, 223, 202, 167, 48, 0, 0};
    const unsigned p_sz = 12;
    unsigned char r[] = {247, 201, 219, 177, 116, 234, 80, 74, 229, 27, 0, 0};
    const unsigned r_sz = 12;
    redupe_gf_poly_scale(p, p_sz, 86);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test835)
{
    unsigned char p[] = {218, 93, 138, 236, 212, 26, 3, 108, 87, 167, 1};
    const unsigned p_sz = 11;
    unsigned char r[] = {215, 91, 8, 183, 60, 21, 111, 192, 36, 88, 37};
    const unsigned r_sz = 11;
    redupe_gf_poly_scale(p, p_sz, 37);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test836)
{
    unsigned char p[] = {215, 91, 8, 183, 60, 21, 111, 192, 36, 88, 37};
    const unsigned p_sz = 11;
    unsigned char r[] = {218, 93, 138, 236, 212, 26, 3, 108, 87, 167, 1};
    const unsigned r_sz = 11;
    redupe_gf_poly_scale(p, p_sz, 86);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test837)
{
    unsigned char p[] = {215, 91, 8, 183, 60, 21, 111, 192, 36, 88, 37, 0};
    const unsigned p_sz = 12;
    unsigned char r[] = {132, 222, 61, 133, 35, 206, 192, 2, 100, 178, 64, 0};
    const unsigned r_sz = 12;
    redupe_gf_poly_scale(p, p_sz, 36);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test838)
{
    unsigned char p[] = {215, 91, 8, 183, 60, 21, 111, 192, 36, 88, 37, 0, 0};
    const unsigned p_sz = 13;
    unsigned char r[] = {33, 185, 72, 102, 193, 189, 48, 142, 25, 162, 16, 0, 0};
    const unsigned r_sz = 13;
    redupe_gf_poly_scale(p, p_sz, 9);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test839)
{
    unsigned char p[] = {115, 205, 187, 190, 187, 240, 138, 75, 237, 254, 231, 1};
    const unsigned p_sz = 12;
    unsigned char r[] = {65, 238, 124, 175, 124, 206, 142, 178, 164, 59, 31, 157};
    const unsigned r_sz = 12;
    redupe_gf_poly_scale(p, p_sz, 157);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test840)
{
    unsigned char p[] = {65, 238, 124, 175, 124, 206, 142, 178, 164, 59, 31, 157};
    const unsigned p_sz = 12;
    unsigned char r[] = {115, 205, 187, 190, 187, 240, 138, 75, 237, 254, 231, 1};
    const unsigned r_sz = 12;
    redupe_gf_poly_scale(p, p_sz, 9);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test841)
{
    unsigned char p[] = {65, 238, 124, 175, 124, 206, 142, 178, 164, 59, 31, 157, 0};
    const unsigned p_sz = 13;
    unsigned char r[] = {125, 217, 126, 164, 126, 99, 10, 29, 56, 123, 145, 107, 0};
    const unsigned r_sz = 13;
    redupe_gf_poly_scale(p, p_sz, 20);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test842)
{
    unsigned char p[] = {65, 238, 124, 175, 124, 206, 142, 178, 164, 59, 31, 157, 0, 0};
    const unsigned p_sz = 14;
    unsigned char r[] = {251, 127, 183, 132, 183, 57, 181, 142, 130, 99, 228, 15, 0, 0};
    const unsigned r_sz = 14;
    redupe_gf_poly_scale(p, p_sz, 119);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test843)
{
    unsigned char p[] = {92, 19, 251, 121, 1, 101, 202, 25, 106, 52, 127, 140, 1};
    const unsigned p_sz = 13;
    unsigned char r[] = {254, 72, 65, 229, 121, 48, 96, 85, 173, 161, 238, 64, 121};
    const unsigned r_sz = 13;
    redupe_gf_poly_scale(p, p_sz, 121);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test844)
{
    unsigned char p[] = {254, 72, 65, 229, 121, 48, 96, 85, 173, 161, 238, 64, 121};
    const unsigned p_sz = 13;
    unsigned char r[] = {92, 19, 251, 121, 1, 101, 202, 25, 106, 52, 127, 140, 1};
    const unsigned r_sz = 13;
    redupe_gf_poly_scale(p, p_sz, 119);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test845)
{
    unsigned char p[] = {254, 72, 65, 229, 121, 48, 96, 85, 173, 161, 238, 64, 121, 0};
    const unsigned p_sz = 14;
    unsigned char r[] = {107, 138, 220, 145, 81, 3, 6, 154, 27, 210, 106, 4, 81, 0};
    const unsigned r_sz = 14;
    redupe_gf_poly_scale(p, p_sz, 216);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test846)
{
    unsigned char p[] = {254, 72, 65, 229, 121, 48, 96, 85, 173, 161, 238, 64, 121, 0, 0};
    const unsigned p_sz = 15;
    unsigned char r[] = {30, 249, 75, 213, 28, 152, 45, 33, 44, 10, 157, 54, 28, 0, 0};
    const unsigned r_sz = 15;
    redupe_gf_poly_scale(p, p_sz, 125);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test847)
{
    unsigned char p[] = {144, 169, 120, 238, 159, 59, 214, 222, 128, 219, 186, 116, 221, 1};
    const unsigned p_sz = 14;
    unsigned char r[] = {22, 41, 223, 93, 105, 184, 175, 137, 90, 87, 47, 234, 195, 205};
    const unsigned r_sz = 14;
    redupe_gf_poly_scale(p, p_sz, 205);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test848)
{
    unsigned char p[] = {22, 41, 223, 93, 105, 184, 175, 137, 90, 87, 47, 234, 195, 205};
    const unsigned p_sz = 14;
    unsigned char r[] = {144, 169, 120, 238, 159, 59, 214, 222, 128, 219, 186, 116, 221, 1};
    const unsigned r_sz = 14;
    redupe_gf_poly_scale(p, p_sz, 125);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test849)
{
    unsigned char p[] = {22, 41, 223, 93, 105, 184, 175, 137, 90, 87, 47, 234, 195, 205, 0};
    const unsigned p_sz = 15;
    unsigned char r[] = {77, 40, 216, 155, 86, 148, 8, 235, 150, 226, 244, 196, 236, 246, 0};
    const unsigned r_sz = 15;
    redupe_gf_poly_scale(p, p_sz, 209);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test850)
{
    unsigned char p[] = {1, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {35, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 35);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test851)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char r[] = {81};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 81);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test852)
{
    unsigned char p[] = {81};
    const unsigned p_sz = 1;
    unsigned char r[] = {1};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 35);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test853)
{
    unsigned char p[] = {81, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {122, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 117);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test854)
{
    unsigned char p[] = {1, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {177, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 177);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test855)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char r[] = {229};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 229);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test856)
{
    unsigned char p[] = {229};
    const unsigned p_sz = 1;
    unsigned char r[] = {1};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 177);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test857)
{
    unsigned char p[] = {229, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {106, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 102);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test858)
{
    unsigned char p[] = {229, 0, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {201, 0, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 189);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test859)
{
    unsigned char p[] = {219, 1};
    const unsigned p_sz = 2;
    unsigned char r[] = {153, 154};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 154);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test860)
{
    unsigned char p[] = {153, 154};
    const unsigned p_sz = 2;
    unsigned char r[] = {219, 1};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 189);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test861)
{
    unsigned char p[] = {153, 154, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {165, 232, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 59);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test862)
{
    unsigned char p[] = {1, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {27, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 27);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test863)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char r[] = {128};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 128);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test864)
{
    unsigned char p[] = {128};
    const unsigned p_sz = 1;
    unsigned char r[] = {1};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 27);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test865)
{
    unsigned char p[] = {128, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {48, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 234);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test866)
{
    unsigned char p[] = {128, 0, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {78, 0, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 12);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test867)
{
    unsigned char p[] = {43, 1};
    const unsigned p_sz = 2;
    unsigned char r[] = {65, 61};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 61);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test868)
{
    unsigned char p[] = {65, 61};
    const unsigned p_sz = 2;
    unsigned char r[] = {43, 1};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 12);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test869)
{
    unsigned char p[] = {65, 61, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {118, 183, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 55);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test870)
{
    unsigned char p[] = {65, 61, 0, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {150, 155, 0, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 250);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test871)
{
    unsigned char p[] = {56, 156, 1};
    const unsigned p_sz = 3;
    unsigned char r[] = {121, 159, 232};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 232);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test872)
{
    unsigned char p[] = {121, 159, 232};
    const unsigned p_sz = 3;
    unsigned char r[] = {56, 156, 1};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 250);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test873)
{
    unsigned char p[] = {121, 159, 232, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {94, 115, 151, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 31);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test874)
{
    unsigned char p[] = {1, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {6, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 6);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test875)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char r[] = {122};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 122);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test876)
{
    unsigned char p[] = {122};
    const unsigned p_sz = 1;
    unsigned char r[] = {1};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 6);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test877)
{
    unsigned char p[] = {122, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {32, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 192);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test878)
{
    unsigned char p[] = {122, 0, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {27, 0, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 90);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test879)
{
    unsigned char p[] = {38, 1};
    const unsigned p_sz = 2;
    unsigned char r[] = {216, 203};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 203);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test880)
{
    unsigned char p[] = {216, 203};
    const unsigned p_sz = 2;
    unsigned char r[] = {38, 1};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 90);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test881)
{
    unsigned char p[] = {216, 203, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {22, 18, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 125);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test882)
{
    unsigned char p[] = {216, 203, 0, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {226, 253, 0, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 134);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test883)
{
    unsigned char p[] = {13, 52, 1};
    const unsigned p_sz = 3;
    unsigned char r[] = {32, 128, 228};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 228);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test884)
{
    unsigned char p[] = {32, 128, 228};
    const unsigned p_sz = 3;
    unsigned char r[] = {13, 52, 1};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 134);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test885)
{
    unsigned char p[] = {32, 128, 228, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {246, 255, 47, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 252);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test886)
{
    unsigned char p[] = {32, 128, 228, 0, 0};
    const unsigned p_sz = 5;
    unsigned char r[] = {88, 125, 158, 0, 0};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 203);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test887)
{
    unsigned char p[] = {20, 15, 27, 1};
    const unsigned p_sz = 4;
    unsigned char r[] = {188, 113, 205, 90};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 90);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test888)
{
    unsigned char p[] = {188, 113, 205, 90};
    const unsigned p_sz = 4;
    unsigned char r[] = {20, 15, 27, 1};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 203);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test889)
{
    unsigned char p[] = {188, 113, 205, 90, 0};
    const unsigned p_sz = 5;
    unsigned char r[] = {138, 233, 99, 215, 0};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 170);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test890)
{
    unsigned char p[] = {1, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {192, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 192);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test891)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char r[] = {18};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 18);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test892)
{
    unsigned char p[] = {18};
    const unsigned p_sz = 1;
    unsigned char r[] = {1};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 192);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test893)
{
    unsigned char p[] = {18, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {215, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 56);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test894)
{
    unsigned char p[] = {18, 0, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {111, 0, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 91);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test895)
{
    unsigned char p[] = {23, 1};
    const unsigned p_sz = 2;
    unsigned char r[] = {74, 99};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 99);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test896)
{
    unsigned char p[] = {74, 99};
    const unsigned p_sz = 2;
    unsigned char r[] = {23, 1};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 91);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test897)
{
    unsigned char p[] = {74, 99, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {234, 82, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 44);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test898)
{
    unsigned char p[] = {74, 99, 0, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {168, 38, 0, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 104);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test899)
{
    unsigned char p[] = {133, 69, 1};
    const unsigned p_sz = 3;
    unsigned char r[] = {117, 62, 82};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 82);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test900)
{
    unsigned char p[] = {117, 62, 82};
    const unsigned p_sz = 3;
    unsigned char r[] = {133, 69, 1};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 104);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test901)
{
    unsigned char p[] = {117, 62, 82, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {198, 4, 37, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 84);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test902)
{
    unsigned char p[] = {117, 62, 82, 0, 0};
    const unsigned p_sz = 5;
    unsigned char r[] = {156, 133, 191, 0, 0};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 19);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test903)
{
    unsigned char p[] = {110, 167, 96, 1};
    const unsigned p_sz = 4;
    unsigned char r[] = {123, 65, 76, 88};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 88);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test904)
{
    unsigned char p[] = {123, 65, 76, 88};
    const unsigned p_sz = 4;
    unsigned char r[] = {110, 167, 96, 1};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 19);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test905)
{
    unsigned char p[] = {123, 65, 76, 88, 0};
    const unsigned p_sz = 5;
    unsigned char r[] = {72, 233, 94, 106, 0};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 80);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test906)
{
    unsigned char p[] = {123, 65, 76, 88, 0, 0};
    const unsigned p_sz = 6;
    unsigned char r[] = {250, 29, 254, 105, 0, 0};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 101);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test907)
{
    unsigned char p[] = {212, 2, 70, 10, 1};
    const unsigned p_sz = 5;
    unsigned char r[] = {18, 149, 245, 251, 196};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 196);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test908)
{
    unsigned char p[] = {18, 149, 245, 251, 196};
    const unsigned p_sz = 5;
    unsigned char r[] = {212, 2, 70, 10, 1};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 101);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test909)
{
    unsigned char p[] = {18, 149, 245, 251, 196, 0};
    const unsigned p_sz = 6;
    unsigned char r[] = {27, 81, 1, 8, 166, 0};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 143);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test910)
{
    unsigned char p[] = {1, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {220, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 220);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test911)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char r[] = {153};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 153);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test912)
{
    unsigned char p[] = {153};
    const unsigned p_sz = 1;
    unsigned char r[] = {1};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 220);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test913)
{
    unsigned char p[] = {153, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {162, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 21);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test914)
{
    unsigned char p[] = {153, 0, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {150, 0, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 129);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test915)
{
    unsigned char p[] = {126, 1};
    const unsigned p_sz = 2;
    unsigned char r[] = {160, 84};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 84);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test916)
{
    unsigned char p[] = {160, 84};
    const unsigned p_sz = 2;
    unsigned char r[] = {126, 1};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 129);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test917)
{
    unsigned char p[] = {160, 84, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {179, 16, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 248);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test918)
{
    unsigned char p[] = {160, 84, 0, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {181, 46, 0, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 176);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test919)
{
    unsigned char p[] = {37, 110, 1};
    const unsigned p_sz = 3;
    unsigned char r[] = {140, 14, 135};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 135);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test920)
{
    unsigned char p[] = {140, 14, 135};
    const unsigned p_sz = 3;
    unsigned char r[] = {37, 110, 1};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 176);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test921)
{
    unsigned char p[] = {140, 14, 135, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {177, 203, 5, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 74);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test922)
{
    unsigned char p[] = {140, 14, 135, 0, 0};
    const unsigned p_sz = 5;
    unsigned char r[] = {190, 239, 48, 0, 0};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 76);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test923)
{
    unsigned char p[] = {4, 192, 107, 1};
    const unsigned p_sz = 4;
    unsigned char r[] = {88, 38, 153, 22};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 22);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test924)
{
    unsigned char p[] = {88, 38, 153, 22};
    const unsigned p_sz = 4;
    unsigned char r[] = {4, 192, 107, 1};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 76);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test925)
{
    unsigned char p[] = {88, 38, 153, 22, 0};
    const unsigned p_sz = 5;
    unsigned char r[] = {228, 55, 11, 57, 0};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 215);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test926)
{
    unsigned char p[] = {88, 38, 153, 22, 0, 0};
    const unsigned p_sz = 6;
    unsigned char r[] = {34, 46, 196, 134, 0, 0};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 124);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test927)
{
    unsigned char p[] = {90, 220, 251, 82, 1};
    const unsigned p_sz = 5;
    unsigned char r[] = {115, 101, 147, 39, 132};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 132);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test928)
{
    unsigned char p[] = {115, 101, 147, 39, 132};
    const unsigned p_sz = 5;
    unsigned char r[] = {90, 220, 251, 82, 1};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 124);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test929)
{
    unsigned char p[] = {115, 101, 147, 39, 132, 0};
    const unsigned p_sz = 6;
    unsigned char r[] = {29, 227, 9, 158, 250, 0};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 13);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test930)
{
    unsigned char p[] = {115, 101, 147, 39, 132, 0, 0};
    const unsigned p_sz = 7;
    unsigned char r[] = {213, 94, 237, 192, 33, 0, 0};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 71);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test931)
{
    unsigned char p[] = {63, 151, 17, 227, 168, 1};
    const unsigned p_sz = 6;
    unsigned char r[] = {252, 102, 68, 171, 154, 4};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 4);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test932)
{
    unsigned char p[] = {252, 102, 68, 171, 154, 4};
    const unsigned p_sz = 6;
    unsigned char r[] = {63, 151, 17, 227, 168, 1};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 71);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test933)
{
    unsigned char p[] = {252, 102, 68, 171, 154, 4, 0};
    const unsigned p_sz = 7;
    unsigned char r[] = {36, 196, 115, 235, 224, 210, 0};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 186);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test934)
{
    unsigned char p[] = {1, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {160, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 160);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test935)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char r[] = {28};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 28);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test936)
{
    unsigned char p[] = {28};
    const unsigned p_sz = 1;
    unsigned char r[] = {1};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 160);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test937)
{
    unsigned char p[] = {28, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {26, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 230);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test938)
{
    unsigned char p[] = {28, 0, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {126, 0, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 138);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test939)
{
    unsigned char p[] = {186, 1};
    const unsigned p_sz = 2;
    unsigned char r[] = {223, 39};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 39);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test940)
{
    unsigned char p[] = {223, 39};
    const unsigned p_sz = 2;
    unsigned char r[] = {186, 1};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 138);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test941)
{
    unsigned char p[] = {223, 39, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {181, 44, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 166);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test942)
{
    unsigned char p[] = {223, 39, 0, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {95, 128, 0, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 122);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test943)
{
    unsigned char p[] = {203, 150, 1};
    const unsigned p_sz = 3;
    unsigned char r[] = {128, 83, 6};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 6);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test944)
{
    unsigned char p[] = {128, 83, 6};
    const unsigned p_sz = 3;
    unsigned char r[] = {203, 150, 1};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 122);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test945)
{
    unsigned char p[] = {128, 83, 6, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {69, 145, 44, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 249);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test946)
{
    unsigned char p[] = {128, 83, 6, 0, 0};
    const unsigned p_sz = 5;
    unsigned char r[] = {82, 91, 126, 0, 0};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 21);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test947)
{
    unsigned char p[] = {26, 218, 186, 1};
    const unsigned p_sz = 4;
    unsigned char r[] = {86, 27, 179, 62};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 62);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test948)
{
    unsigned char p[] = {86, 27, 179, 62};
    const unsigned p_sz = 4;
    unsigned char r[] = {26, 218, 186, 1};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 21);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test949)
{
    unsigned char p[] = {86, 27, 179, 62, 0};
    const unsigned p_sz = 5;
    unsigned char r[] = {35, 30, 142, 141, 0};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 187);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test950)
{
    unsigned char p[] = {86, 27, 179, 62, 0, 0};
    const unsigned p_sz = 6;
    unsigned char r[] = {80, 187, 64, 221, 0, 0};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 223);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test951)
{
    unsigned char p[] = {113, 95, 42, 55, 1};
    const unsigned p_sz = 5;
    unsigned char r[] = {16, 122, 20, 226, 145};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 145);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test952)
{
    unsigned char p[] = {16, 122, 20, 226, 145};
    const unsigned p_sz = 5;
    unsigned char r[] = {113, 95, 42, 55, 1};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 223);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test953)
{
    unsigned char p[] = {16, 122, 20, 226, 145, 0};
    const unsigned p_sz = 6;
    unsigned char r[] = {5, 180, 67, 21, 178, 0};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 159);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test954)
{
    unsigned char p[] = {16, 122, 20, 226, 145, 0, 0};
    const unsigned p_sz = 7;
    unsigned char r[] = {61, 7, 117, 95, 218, 0, 0};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 18);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test955)
{
    unsigned char p[] = {85, 126, 92, 226, 133, 1};
    const unsigned p_sz = 6;
    unsigned char r[] = {49, 7, 191, 102, 115, 192};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 192);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test956)
{
    unsigned char p[] = {49, 7, 191, 102, 115, 192};
    const unsigned p_sz = 6;
    unsigned char r[] = {85, 126, 92, 226, 133, 1};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 18);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test957)
{
    unsigned char p[] = {49, 7, 191, 102, 115, 192, 0};
    const unsigned p_sz = 7;
    unsigned char r[] = {9, 44, 221, 252, 56, 202, 0};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 181);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test958)
{
    unsigned char p[] = {49, 7, 191, 102, 115, 192, 0, 0};
    const unsigned p_sz = 8;
    unsigned char r[] = {30, 182, 186, 117, 80, 49, 0, 0};
    const unsigned r_sz = 8;
    redupe_gf_poly_scale(p, p_sz, 85);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test959)
{
    unsigned char p[] = {52, 126, 214, 255, 0, 79, 1};
    const unsigned p_sz = 7;
    unsigned char r[] = {178, 152, 174, 3, 0, 88, 26};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 26);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test960)
{
    unsigned char p[] = {178, 152, 174, 3, 0, 88, 26};
    const unsigned p_sz = 7;
    unsigned char r[] = {52, 126, 214, 255, 0, 79, 1};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 85);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test961)
{
    unsigned char p[] = {178, 152, 174, 3, 0, 88, 26, 0};
    const unsigned p_sz = 8;
    unsigned char r[] = {26, 63, 107, 241, 0, 169, 142, 0};
    const unsigned r_sz = 8;
    redupe_gf_poly_scale(p, p_sz, 164);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test962)
{
    unsigned char p[] = {1, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {113, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 113);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test963)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char r[] = {209};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 209);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test964)
{
    unsigned char p[] = {209};
    const unsigned p_sz = 1;
    unsigned char r[] = {1};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 113);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test965)
{
    unsigned char p[] = {209, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {28, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 53);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test966)
{
    unsigned char p[] = {209, 0, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {126, 0, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 64);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test967)
{
    unsigned char p[] = {109, 1};
    const unsigned p_sz = 2;
    unsigned char r[] = {204, 54};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 54);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test968)
{
    unsigned char p[] = {204, 54};
    const unsigned p_sz = 2;
    unsigned char r[] = {109, 1};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 64);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test969)
{
    unsigned char p[] = {204, 54, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {206, 243, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 22);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test970)
{
    unsigned char p[] = {204, 54, 0, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {5, 123, 0, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 171);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test971)
{
    unsigned char p[] = {176, 158, 1};
    const unsigned p_sz = 3;
    unsigned char r[] = {95, 249, 60};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 60);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test972)
{
    unsigned char p[] = {95, 249, 60};
    const unsigned p_sz = 3;
    unsigned char r[] = {176, 158, 1};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 171);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test973)
{
    unsigned char p[] = {95, 249, 60, 0};
    const unsigned p_sz = 4;
    unsigned char r[] = {50, 225, 166, 0};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 46);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test974)
{
    unsigned char p[] = {95, 249, 60, 0, 0};
    const unsigned p_sz = 5;
    unsigned char r[] = {50, 225, 166, 0, 0};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 46);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test975)
{
    unsigned char p[] = {55, 42, 56, 1};
    const unsigned p_sz = 4;
    unsigned char r[] = {160, 205, 188, 51};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 51);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test976)
{
    unsigned char p[] = {160, 205, 188, 51};
    const unsigned p_sz = 4;
    unsigned char r[] = {55, 42, 56, 1};
    const unsigned r_sz = 4;
    redupe_gf_poly_scale(p, p_sz, 46);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test977)
{
    unsigned char p[] = {160, 205, 188, 51, 0};
    const unsigned p_sz = 5;
    unsigned char r[] = {158, 113, 146, 166, 0};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 211);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test978)
{
    unsigned char p[] = {160, 205, 188, 51, 0, 0};
    const unsigned p_sz = 6;
    unsigned char r[] = {8, 239, 90, 202, 0, 0};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 224);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test979)
{
    unsigned char p[] = {172, 167, 30, 158, 1};
    const unsigned p_sz = 5;
    unsigned char r[] = {152, 4, 133, 87, 20};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 20);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test980)
{
    unsigned char p[] = {152, 4, 133, 87, 20};
    const unsigned p_sz = 5;
    unsigned char r[] = {172, 167, 30, 158, 1};
    const unsigned r_sz = 5;
    redupe_gf_poly_scale(p, p_sz, 224);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test981)
{
    unsigned char p[] = {152, 4, 133, 87, 20, 0};
    const unsigned p_sz = 6;
    unsigned char r[] = {236, 104, 243, 53, 213, 0};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 26);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test982)
{
    unsigned char p[] = {152, 4, 133, 87, 20, 0, 0};
    const unsigned p_sz = 7;
    unsigned char r[] = {150, 145, 37, 175, 239, 0, 0};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 99);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test983)
{
    unsigned char p[] = {228, 43, 14, 225, 75, 1};
    const unsigned p_sz = 6;
    unsigned char r[] = {27, 160, 37, 49, 76, 91};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 91);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test984)
{
    unsigned char p[] = {27, 160, 37, 49, 76, 91};
    const unsigned p_sz = 6;
    unsigned char r[] = {228, 43, 14, 225, 75, 1};
    const unsigned r_sz = 6;
    redupe_gf_poly_scale(p, p_sz, 99);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test985)
{
    unsigned char p[] = {27, 160, 37, 49, 76, 91, 0};
    const unsigned p_sz = 7;
    unsigned char r[] = {157, 113, 15, 172, 160, 92, 0};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 53);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test986)
{
    unsigned char p[] = {27, 160, 37, 49, 76, 91, 0, 0};
    const unsigned p_sz = 8;
    unsigned char r[] = {92, 25, 241, 95, 57, 244, 0, 0};
    const unsigned r_sz = 8;
    redupe_gf_poly_scale(p, p_sz, 33);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test987)
{
    unsigned char p[] = {11, 4, 1, 13, 174, 23, 1};
    const unsigned p_sz = 7;
    unsigned char r[] = {17, 147, 237, 69, 20, 207, 237};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 237);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test988)
{
    unsigned char p[] = {17, 147, 237, 69, 20, 207, 237};
    const unsigned p_sz = 7;
    unsigned char r[] = {11, 4, 1, 13, 174, 23, 1};
    const unsigned r_sz = 7;
    redupe_gf_poly_scale(p, p_sz, 33);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test989)
{
    unsigned char p[] = {17, 147, 237, 69, 20, 207, 237, 0};
    const unsigned p_sz = 8;
    unsigned char r[] = {99, 98, 150, 48, 124, 80, 150, 0};
    const unsigned r_sz = 8;
    redupe_gf_poly_scale(p, p_sz, 161);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test990)
{
    unsigned char p[] = {17, 147, 237, 69, 20, 207, 237, 0, 0};
    const unsigned p_sz = 9;
    unsigned char r[] = {169, 57, 73, 2, 127, 6, 73, 0, 0};
    const unsigned r_sz = 9;
    redupe_gf_poly_scale(p, p_sz, 156);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test991)
{
    unsigned char p[] = {63, 112, 99, 110, 72, 10, 129, 1};
    const unsigned p_sz = 8;
    unsigned char r[] = {92, 126, 133, 170, 65, 76, 60, 172};
    const unsigned r_sz = 8;
    redupe_gf_poly_scale(p, p_sz, 172);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test992)
{
    unsigned char p[] = {92, 126, 133, 170, 65, 76, 60, 172};
    const unsigned p_sz = 8;
    unsigned char r[] = {63, 112, 99, 110, 72, 10, 129, 1};
    const unsigned r_sz = 8;
    redupe_gf_poly_scale(p, p_sz, 156);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test993)
{
    unsigned char p[] = {92, 126, 133, 170, 65, 76, 60, 172, 0};
    const unsigned p_sz = 9;
    unsigned char r[] = {97, 68, 161, 177, 102, 83, 205, 114, 0};
    const unsigned r_sz = 9;
    redupe_gf_poly_scale(p, p_sz, 174);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test994)
{
    unsigned char p[] = {1, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {178, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 178);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test995)
{
    unsigned char p[] = {1};
    const unsigned p_sz = 1;
    unsigned char r[] = {238};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 238);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test996)
{
    unsigned char p[] = {238};
    const unsigned p_sz = 1;
    unsigned char r[] = {1};
    const unsigned r_sz = 1;
    redupe_gf_poly_scale(p, p_sz, 178);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test997)
{
    unsigned char p[] = {238, 0};
    const unsigned p_sz = 2;
    unsigned char r[] = {253, 0};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 37);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test998)
{
    unsigned char p[] = {238, 0, 0};
    const unsigned p_sz = 3;
    unsigned char r[] = {248, 0, 0};
    const unsigned r_sz = 3;
    redupe_gf_poly_scale(p, p_sz, 101);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test999)
{
    unsigned char p[] = {79, 1};
    const unsigned p_sz = 2;
    unsigned char r[] = {95, 196};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 196);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}

TEST(GfPolyScale, Test1000)
{
    unsigned char p[] = {95, 196};
    const unsigned p_sz = 2;
    unsigned char r[] = {79, 1};
    const unsigned r_sz = 2;
    redupe_gf_poly_scale(p, p_sz, 101);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(p[i], r[i]);
    }
}
