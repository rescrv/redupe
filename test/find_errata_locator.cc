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

// C
#include "stdio.h"
#include "string.h"

// redupe
#include "redupe.h"
#include "redupe-internal.h"

// testing
#include "th.h"

TEST(RsFindErrataLocator, Test0)
{
    unsigned char e_pos[] = {52};
    const unsigned e_pos_sz = 1;
    unsigned char r[] = {20, 1};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test1)
{
    unsigned char e_pos[] = {52, 69};
    const unsigned e_pos_sz = 2;
    unsigned char r[] = {118, 59, 1};
    const unsigned r_sz = 3;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test2)
{
    unsigned char e_pos[] = {151};
    const unsigned e_pos_sz = 1;
    unsigned char r[] = {170, 1};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test3)
{
    unsigned char e_pos[] = {151, 164};
    const unsigned e_pos_sz = 2;
    unsigned char r[] = {185, 108, 1};
    const unsigned r_sz = 3;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test4)
{
    unsigned char e_pos[] = {80};
    const unsigned e_pos_sz = 1;
    unsigned char r[] = {253, 1};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test5)
{
    unsigned char e_pos[] = {80, 114};
    const unsigned e_pos_sz = 2;
    unsigned char r[] = {50, 195, 1};
    const unsigned r_sz = 3;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test6)
{
    unsigned char e_pos[] = {80, 114, 131};
    const unsigned e_pos_sz = 3;
    unsigned char r[] = {94, 105, 159, 1};
    const unsigned r_sz = 4;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test7)
{
    unsigned char e_pos[] = {80, 114, 131, 201};
    const unsigned e_pos_sz = 4;
    unsigned char r[] = {76, 78, 234, 167, 1};
    const unsigned r_sz = 5;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test8)
{
    unsigned char e_pos[] = {3};
    const unsigned e_pos_sz = 1;
    unsigned char r[] = {8, 1};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test9)
{
    unsigned char e_pos[] = {3, 27};
    const unsigned e_pos_sz = 2;
    unsigned char r[] = {96, 4, 1};
    const unsigned r_sz = 3;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test10)
{
    unsigned char e_pos[] = {3, 27, 32};
    const unsigned e_pos_sz = 3;
    unsigned char r[] = {222, 46, 153, 1};
    const unsigned r_sz = 4;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test11)
{
    unsigned char e_pos[] = {28};
    const unsigned e_pos_sz = 1;
    unsigned char r[] = {24, 1};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test12)
{
    unsigned char e_pos[] = {6, 28};
    const unsigned e_pos_sz = 2;
    unsigned char r[] = {78, 88, 1};
    const unsigned r_sz = 3;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test13)
{
    unsigned char e_pos[] = {6, 18, 28};
    const unsigned e_pos_sz = 3;
    unsigned char r[] = {20, 94, 117, 1};
    const unsigned r_sz = 4;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test14)
{
    unsigned char e_pos[] = {1, 6, 18, 28};
    const unsigned e_pos_sz = 4;
    unsigned char r[] = {40, 168, 180, 119, 1};
    const unsigned r_sz = 5;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test15)
{
    unsigned char e_pos[] = {1, 6, 16, 18, 28};
    const unsigned e_pos_sz = 5;
    unsigned char r[] = {47, 206, 141, 102, 59, 1};
    const unsigned r_sz = 6;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test16)
{
    unsigned char e_pos[] = {1, 6, 16, 18, 19, 28};
    const unsigned e_pos_sz = 6;
    unsigned char r[] = {254, 1, 13, 192, 36, 97, 1};
    const unsigned r_sz = 7;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test17)
{
    unsigned char e_pos[] = {0, 1, 6, 16, 18, 19, 28};
    const unsigned e_pos_sz = 7;
    unsigned char r[] = {254, 255, 12, 205, 228, 69, 96, 1};
    const unsigned r_sz = 8;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test18)
{
    unsigned char e_pos[] = {0, 1, 6, 12, 16, 18, 19, 28};
    const unsigned e_pos_sz = 8;
    unsigned char r[] = {17, 34, 202, 131, 49, 23, 240, 173, 1};
    const unsigned r_sz = 9;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test19)
{
    unsigned char e_pos[] = {62};
    const unsigned e_pos_sz = 1;
    unsigned char r[] = {222, 1};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test20)
{
    unsigned char e_pos[] = {30, 62};
    const unsigned e_pos_sz = 2;
    unsigned char r[] = {91, 190, 1};
    const unsigned r_sz = 3;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test21)
{
    unsigned char e_pos[] = {30, 62, 114};
    const unsigned e_pos_sz = 3;
    unsigned char r[] = {83, 16, 128, 1};
    const unsigned r_sz = 4;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test22)
{
    unsigned char e_pos[] = {30, 56, 62, 114};
    const unsigned e_pos_sz = 4;
    unsigned char r[] = {128, 234, 177, 221, 1};
    const unsigned r_sz = 5;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test23)
{
    unsigned char e_pos[] = {30, 56, 57, 62, 114};
    const unsigned e_pos_sz = 5;
    unsigned char r[] = {95, 112, 190, 241, 103, 1};
    const unsigned r_sz = 6;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test24)
{
    unsigned char e_pos[] = {3, 30, 56, 57, 62, 114};
    const unsigned e_pos_sz = 6;
    unsigned char r[] = {194, 248, 233, 101, 238, 111, 1};
    const unsigned r_sz = 7;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test25)
{
    unsigned char e_pos[] = {3, 13, 30, 56, 57, 62, 114};
    const unsigned e_pos_sz = 7;
    unsigned char r[] = {253, 213, 240, 63, 223, 103, 232, 1};
    const unsigned r_sz = 8;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test26)
{
    unsigned char e_pos[] = {2, 3, 13, 30, 56, 57, 62, 114};
    const unsigned e_pos_sz = 8;
    unsigned char r[] = {211, 142, 50, 12, 100, 94, 224, 236, 1};
    const unsigned r_sz = 9;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test27)
{
    unsigned char e_pos[] = {47};
    const unsigned e_pos_sz = 1;
    unsigned char r[] = {35, 1};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test28)
{
    unsigned char e_pos[] = {47, 56};
    const unsigned e_pos_sz = 2;
    unsigned char r[] = {136, 126, 1};
    const unsigned r_sz = 3;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test29)
{
    unsigned char e_pos[] = {47, 56, 71};
    const unsigned e_pos_sz = 3;
    unsigned char r[] = {241, 131, 194, 1};
    const unsigned r_sz = 4;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test30)
{
    unsigned char e_pos[] = {47, 56, 71, 73};
    const unsigned e_pos_sz = 4;
    unsigned char r[] = {131, 79, 7, 8, 1};
    const unsigned r_sz = 5;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test31)
{
    unsigned char e_pos[] = {23, 47, 56, 71, 73};
    const unsigned e_pos_sz = 5;
    unsigned char r[] = {38, 240, 10, 1, 193, 1};
    const unsigned r_sz = 6;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test32)
{
    unsigned char e_pos[] = {23, 47, 56, 62, 71, 73};
    const unsigned e_pos_sz = 6;
    unsigned char r[] = {60, 51, 239, 212, 105, 31, 1};
    const unsigned r_sz = 7;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test33)
{
    unsigned char e_pos[] = {23, 47, 56, 57, 62, 71, 73};
    const unsigned e_pos_sz = 7;
    unsigned char r[] = {218, 94, 171, 172, 168, 190, 165, 1};
    const unsigned r_sz = 8;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test34)
{
    unsigned char e_pos[] = {23, 34, 47, 56, 57, 62, 71, 73};
    const unsigned e_pos_sz = 8;
    unsigned char r[] = {252, 215, 39, 37, 7, 46, 52, 235, 1};
    const unsigned r_sz = 9;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test35)
{
    unsigned char e_pos[] = {16, 23, 34, 47, 56, 57, 62, 71, 73};
    const unsigned e_pos_sz = 9;
    unsigned char r[] = {149, 146, 91, 51, 220, 157, 194, 236, 167, 1};
    const unsigned r_sz = 10;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test36)
{
    unsigned char e_pos[] = {16, 23, 34, 35, 47, 56, 57, 62, 71, 73};
    const unsigned e_pos_sz = 10;
    unsigned char r[] = {86, 48, 94, 189, 185, 30, 217, 23, 192, 59, 1};
    const unsigned r_sz = 11;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test37)
{
    unsigned char e_pos[] = {16, 23, 34, 35, 47, 56, 57, 62, 69, 71, 73};
    const unsigned e_pos_sz = 11;
    unsigned char r[] = {39, 21, 114, 245, 170, 244, 143, 222, 6, 151, 20, 1};
    const unsigned r_sz = 12;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test38)
{
    unsigned char e_pos[] = {16, 23, 34, 35, 40, 47, 56, 57, 62, 69, 71, 73};
    const unsigned e_pos_sz = 12;
    unsigned char r[] = {202, 22, 113, 62, 180, 140, 171, 203, 191, 192, 204, 126, 1};
    const unsigned r_sz = 13;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test39)
{
    unsigned char e_pos[] = {2, 16, 23, 34, 35, 40, 47, 56, 57, 62, 69, 71, 73};
    const unsigned e_pos_sz = 13;
    unsigned char r[] = {15, 146, 207, 137, 212, 190, 26, 160, 13, 152, 215, 41, 122, 1};
    const unsigned r_sz = 14;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test40)
{
    unsigned char e_pos[] = {2, 16, 23, 34, 35, 40, 47, 56, 57, 62, 69, 71, 73, 75};
    const unsigned e_pos_sz = 14;
    unsigned char r[] = {85, 50, 243, 107, 113, 80, 40, 52, 235, 86, 113, 93, 165, 117, 1};
    const unsigned r_sz = 15;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test41)
{
    unsigned char e_pos[] = {2, 16, 23, 34, 35, 40, 47, 56, 57, 62, 66, 69, 71, 73, 75};
    const unsigned e_pos_sz = 15;
    unsigned char r[] = {195, 117, 220, 166, 141, 74, 195, 83, 171, 139, 176, 157, 211, 218, 20, 1};
    const unsigned r_sz = 16;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test42)
{
    unsigned char e_pos[] = {2, 16, 23, 34, 35, 40, 47, 56, 57, 62, 63, 66, 69, 71, 73, 75};
    const unsigned e_pos_sz = 16;
    unsigned char r[] = {143, 168, 25, 250, 134, 156, 197, 208, 11, 106, 142, 82, 208, 94, 166, 181, 1};
    const unsigned r_sz = 17;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test43)
{
    unsigned char e_pos[] = {134};
    const unsigned e_pos_sz = 1;
    unsigned char r[] = {218, 1};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test44)
{
    unsigned char e_pos[] = {5, 134};
    const unsigned e_pos_sz = 2;
    unsigned char r[] = {66, 250, 1};
    const unsigned r_sz = 3;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test45)
{
    unsigned char e_pos[] = {5, 71, 134};
    const unsigned e_pos_sz = 3;
    unsigned char r[] = {89, 251, 70, 1};
    const unsigned r_sz = 4;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test46)
{
    unsigned char e_pos[] = {5, 71, 76, 134};
    const unsigned e_pos_sz = 4;
    unsigned char r[] = {192, 249, 108, 88, 1};
    const unsigned r_sz = 5;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test47)
{
    unsigned char e_pos[] = {5, 22, 71, 76, 134};
    const unsigned e_pos_sz = 5;
    unsigned char r[] = {40, 11, 97, 113, 178, 1};
    const unsigned r_sz = 6;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test48)
{
    unsigned char e_pos[] = {5, 22, 71, 76, 112, 134};
    const unsigned e_pos_sz = 6;
    unsigned char r[] = {145, 202, 160, 50, 232, 51, 1};
    const unsigned r_sz = 7;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test49)
{
    unsigned char e_pos[] = {5, 22, 71, 74, 76, 112, 134};
    const unsigned e_pos_sz = 7;
    unsigned char r[] = {22, 184, 221, 39, 228, 230, 186, 1};
    const unsigned r_sz = 8;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test50)
{
    unsigned char e_pos[] = {5, 22, 71, 74, 76, 112, 123, 134};
    const unsigned e_pos_sz = 8;
    unsigned char r[] = {104, 23, 221, 57, 168, 252, 112, 127, 1};
    const unsigned r_sz = 9;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test51)
{
    unsigned char e_pos[] = {5, 22, 71, 74, 76, 112, 122, 123, 134};
    const unsigned e_pos_sz = 9;
    unsigned char r[] = {122, 176, 171, 168, 209, 52, 211, 210, 147, 1};
    const unsigned r_sz = 10;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test52)
{
    unsigned char e_pos[] = {5, 22, 71, 74, 76, 112, 115, 122, 123, 134};
    const unsigned e_pos_sz = 10;
    unsigned char r[] = {225, 62, 36, 187, 221, 148, 185, 34, 41, 239, 1};
    const unsigned r_sz = 11;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test53)
{
    unsigned char e_pos[] = {5, 17, 22, 71, 74, 76, 112, 115, 122, 123, 134};
    const unsigned e_pos_sz = 11;
    unsigned char r[] = {52, 189, 142, 53, 254, 125, 168, 126, 228, 222, 119, 1};
    const unsigned r_sz = 12;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test54)
{
    unsigned char e_pos[] = {5, 17, 22, 71, 74, 76, 96, 112, 115, 122, 123, 134};
    const unsigned e_pos_sz = 12;
    unsigned char r[] = {112, 147, 95, 39, 160, 149, 81, 181, 211, 83, 156, 174, 1};
    const unsigned r_sz = 13;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test55)
{
    unsigned char e_pos[] = {5, 17, 22, 71, 74, 76, 93, 96, 112, 115, 122, 123, 134};
    const unsigned e_pos_sz = 13;
    unsigned char r[] = {106, 9, 70, 57, 117, 74, 10, 248, 74, 61, 214, 132, 24, 1};
    const unsigned r_sz = 14;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test56)
{
    unsigned char e_pos[] = {5, 17, 22, 57, 71, 74, 76, 93, 96, 112, 115, 122, 123, 134};
    const unsigned e_pos_sz = 14;
    unsigned char r[] = {175, 105, 19, 244, 65, 4, 154, 252, 137, 42, 23, 91, 82, 162, 1};
    const unsigned r_sz = 15;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test57)
{
    unsigned char e_pos[] = {5, 17, 22, 57, 71, 74, 76, 93, 96, 112, 115, 122, 123, 134, 151};
    const unsigned e_pos_sz = 15;
    unsigned char r[] = {27, 13, 248, 117, 139, 211, 177, 197, 216, 29, 41, 106, 181, 72, 8, 1};
    const unsigned r_sz = 16;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test58)
{
    unsigned char e_pos[] = {5, 17, 22, 57, 71, 74, 76, 83, 93, 96, 112, 115, 122, 123, 134, 151};
    const unsigned e_pos_sz = 16;
    unsigned char r[] = {30, 199, 3, 245, 203, 26, 54, 226, 53, 123, 233, 236, 89, 229, 249, 179, 1};
    const unsigned r_sz = 17;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test59)
{
    unsigned char e_pos[] = {54};
    const unsigned e_pos_sz = 1;
    unsigned char r[] = {80, 1};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test60)
{
    unsigned char e_pos[] = {119};
    const unsigned e_pos_sz = 1;
    unsigned char r[] = {147, 1};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test61)
{
    unsigned char e_pos[] = {24};
    const unsigned e_pos_sz = 1;
    unsigned char r[] = {143, 1};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test62)
{
    unsigned char e_pos[] = {24, 26};
    const unsigned e_pos_sz = 2;
    unsigned char r[] = {5, 137, 1};
    const unsigned r_sz = 3;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test63)
{
    unsigned char e_pos[] = {18};
    const unsigned e_pos_sz = 1;
    unsigned char r[] = {45, 1};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test64)
{
    unsigned char e_pos[] = {18, 118};
    const unsigned e_pos_sz = 2;
    unsigned char r[] = {79, 234, 1};
    const unsigned r_sz = 3;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test65)
{
    unsigned char e_pos[] = {56};
    const unsigned e_pos_sz = 1;
    unsigned char r[] = {93, 1};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test66)
{
    unsigned char e_pos[] = {56, 58};
    const unsigned e_pos_sz = 2;
    unsigned char r[] = {62, 52, 1};
    const unsigned r_sz = 3;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test67)
{
    unsigned char e_pos[] = {49, 56, 58};
    const unsigned e_pos_sz = 3;
    unsigned char r[] = {99, 76, 184, 1};
    const unsigned r_sz = 4;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test68)
{
    unsigned char e_pos[] = {70};
    const unsigned e_pos_sz = 1;
    unsigned char r[] = {94, 1};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test69)
{
    unsigned char e_pos[] = {13, 70};
    const unsigned e_pos_sz = 2;
    unsigned char r[] = {187, 217, 1};
    const unsigned r_sz = 3;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test70)
{
    unsigned char e_pos[] = {13, 70, 172};
    const unsigned e_pos_sz = 3;
    unsigned char r[] = {1, 60, 162, 1};
    const unsigned r_sz = 4;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test71)
{
    unsigned char e_pos[] = {17};
    const unsigned e_pos_sz = 1;
    unsigned char r[] = {152, 1};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test72)
{
    unsigned char e_pos[] = {16, 17};
    const unsigned e_pos_sz = 2;
    unsigned char r[] = {39, 212, 1};
    const unsigned r_sz = 3;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test73)
{
    unsigned char e_pos[] = {4, 16, 17};
    const unsigned e_pos_sz = 3;
    unsigned char r[] = {74, 230, 196, 1};
    const unsigned r_sz = 4;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test74)
{
    unsigned char e_pos[] = {4, 16, 17, 28};
    const unsigned e_pos_sz = 4;
    unsigned char r[] = {190, 239, 84, 220, 1};
    const unsigned r_sz = 5;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test75)
{
    unsigned char e_pos[] = {4, 16, 17, 28, 29};
    const unsigned e_pos_sz = 5;
    unsigned char r[] = {113, 68, 148, 151, 236, 1};
    const unsigned r_sz = 6;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test76)
{
    unsigned char e_pos[] = {115};
    const unsigned e_pos_sz = 1;
    unsigned char r[] = {124, 1};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test77)
{
    unsigned char e_pos[] = {67, 115};
    const unsigned e_pos_sz = 2;
    unsigned char r[] = {98, 190, 1};
    const unsigned r_sz = 3;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test78)
{
    unsigned char e_pos[] = {67, 68, 115};
    const unsigned e_pos_sz = 3;
    unsigned char r[] = {108, 15, 39, 1};
    const unsigned r_sz = 4;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test79)
{
    unsigned char e_pos[] = {67, 68, 114, 115};
    const unsigned e_pos_sz = 4;
    unsigned char r[] = {189, 59, 38, 25, 1};
    const unsigned r_sz = 5;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test80)
{
    unsigned char e_pos[] = {111};
    const unsigned e_pos_sz = 1;
    unsigned char r[] = {206, 1};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test81)
{
    unsigned char e_pos[] = {41, 111};
    const unsigned e_pos_sz = 2;
    unsigned char r[] = {73, 26, 1};
    const unsigned r_sz = 3;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test82)
{
    unsigned char e_pos[] = {41, 106, 111};
    const unsigned e_pos_sz = 3;
    unsigned char r[] = {8, 251, 46, 1};
    const unsigned r_sz = 4;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test83)
{
    unsigned char e_pos[] = {24, 41, 106, 111};
    const unsigned e_pos_sz = 4;
    unsigned char r[] = {12, 0, 194, 161, 1};
    const unsigned r_sz = 5;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test84)
{
    unsigned char e_pos[] = {3, 24, 41, 106, 111};
    const unsigned e_pos_sz = 5;
    unsigned char r[] = {96, 12, 94, 163, 169, 1};
    const unsigned r_sz = 6;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test85)
{
    unsigned char e_pos[] = {3, 24, 41, 106, 111, 117};
    const unsigned e_pos_sz = 6;
    unsigned char r[] = {41, 200, 208, 15, 14, 68, 1};
    const unsigned r_sz = 7;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test86)
{
    unsigned char e_pos[] = {166};
    const unsigned e_pos_sz = 1;
    unsigned char r[] = {63, 1};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test87)
{
    unsigned char e_pos[] = {166, 172};
    const unsigned e_pos_sz = 2;
    unsigned char r[] = {187, 68, 1};
    const unsigned r_sz = 3;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test88)
{
    unsigned char e_pos[] = {166, 172, 221};
    const unsigned e_pos_sz = 3;
    unsigned char r[] = {140, 34, 1, 1};
    const unsigned r_sz = 4;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test89)
{
    unsigned char e_pos[] = {70, 166, 172, 221};
    const unsigned e_pos_sz = 4;
    unsigned char r[] = {147, 63, 124, 95, 1};
    const unsigned r_sz = 5;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test90)
{
    unsigned char e_pos[] = {0, 70, 166, 172, 221};
    const unsigned e_pos_sz = 5;
    unsigned char r[] = {147, 172, 67, 35, 94, 1};
    const unsigned r_sz = 6;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrataLocator, Test91)
{
    unsigned char e_pos[] = {0, 70, 166, 172, 212, 221};
    const unsigned e_pos_sz = 6;
    unsigned char r[] = {30, 72, 12, 83, 47, 39, 1};
    const unsigned r_sz = 7;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errata_locator(e_pos, e_pos_sz, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}
