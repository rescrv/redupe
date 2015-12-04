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

TEST(RsGeneratorPoly, Test0)
{
    unsigned char r[] = {1, 15, 54, 120, 64};
    const unsigned r_sz = 5;
    unsigned char buf[6];
    const unsigned last = 5;
    buf[last] = 0;
    redupe_generator_poly(4, buf);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
    ASSERT_EQ(buf[last], 0);
}

TEST(RsGeneratorPoly, Test1)
{
    unsigned char r[] = {1, 255, 11, 81, 54, 239, 173, 200, 24};
    const unsigned r_sz = 9;
    unsigned char buf[10];
    const unsigned last = 9;
    buf[last] = 0;
    redupe_generator_poly(8, buf);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
    ASSERT_EQ(buf[last], 0);
}

TEST(RsGeneratorPoly, Test2)
{
    unsigned char r[] = {1, 59, 13, 104, 189, 68, 209, 30, 8, 163, 65, 41, 229, 98, 50, 36, 59};
    const unsigned r_sz = 17;
    unsigned char buf[18];
    const unsigned last = 17;
    buf[last] = 0;
    redupe_generator_poly(16, buf);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
    ASSERT_EQ(buf[last], 0);
}

TEST(RsGeneratorPoly, Test3)
{
    unsigned char r[] = {1, 116, 64, 52, 174, 54, 126, 16, 194, 162, 33, 33, 157, 176, 197, 225, 12, 59, 55, 253, 228, 148, 47, 179, 185, 24, 138, 253, 20, 142, 55, 172, 88};
    const unsigned r_sz = 33;
    unsigned char buf[34];
    const unsigned last = 33;
    buf[last] = 0;
    redupe_generator_poly(32, buf);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
    ASSERT_EQ(buf[last], 0);
}

TEST(RsGeneratorPoly, Test4)
{
    unsigned char r[] = {1, 1};
    const unsigned r_sz = 2;
    unsigned char buf[3];
    const unsigned last = 2;
    buf[last] = 0;
    redupe_generator_poly(1, buf);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
    ASSERT_EQ(buf[last], 0);
}

TEST(RsGeneratorPoly, Test5)
{
    unsigned char r[] = {1, 7, 14, 8};
    const unsigned r_sz = 4;
    unsigned char buf[5];
    const unsigned last = 4;
    buf[last] = 0;
    redupe_generator_poly(3, buf);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
    ASSERT_EQ(buf[last], 0);
}

TEST(RsGeneratorPoly, Test6)
{
    unsigned char r[] = {1, 31, 198, 63, 147, 116};
    const unsigned r_sz = 6;
    unsigned char buf[7];
    const unsigned last = 6;
    buf[last] = 0;
    redupe_generator_poly(5, buf);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
    ASSERT_EQ(buf[last], 0);
}

TEST(RsGeneratorPoly, Test7)
{
    unsigned char r[] = {1, 127, 122, 154, 164, 11, 68, 117};
    const unsigned r_sz = 8;
    unsigned char buf[9];
    const unsigned last = 8;
    buf[last] = 0;
    redupe_generator_poly(7, buf);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
    ASSERT_EQ(buf[last], 0);
}

TEST(RsGeneratorPoly, Test8)
{
    unsigned char r[] = {1, 172, 130, 163, 50, 123, 219, 162, 248, 144, 116, 160};
    const unsigned r_sz = 12;
    unsigned char buf[13];
    const unsigned last = 12;
    buf[last] = 0;
    redupe_generator_poly(11, buf);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
    ASSERT_EQ(buf[last], 0);
}

TEST(RsGeneratorPoly, Test9)
{
    unsigned char r[] = {1, 137, 73, 227, 17, 177, 17, 52, 13, 46, 43, 83, 132, 120};
    const unsigned r_sz = 14;
    unsigned char buf[15];
    const unsigned last = 14;
    buf[last] = 0;
    redupe_generator_poly(13, buf);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ(buf[i], r[i]);
    }
    ASSERT_EQ(buf[last], 0);
}
