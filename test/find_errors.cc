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

TEST(RsFindErrors, Test0)
{
    unsigned char err_loc[] = {1, 1};
    const unsigned err_loc_sz = 2;
    unsigned char r[] = {142};
    const unsigned r_sz = 1;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 143, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test1)
{
    unsigned char err_loc[] = {1, 44, 45};
    const unsigned err_loc_sz = 3;
    unsigned char r[] = {142, 124};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 143, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test2)
{
    unsigned char err_loc[] = {1, 74};
    const unsigned err_loc_sz = 2;
    unsigned char r[] = {170};
    const unsigned r_sz = 1;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 208, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test3)
{
    unsigned char err_loc[] = {1, 169, 242};
    const unsigned err_loc_sz = 3;
    unsigned char r[] = {170, 31};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 208, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test4)
{
    unsigned char err_loc[] = {1, 135};
    const unsigned err_loc_sz = 2;
    unsigned char r[] = {6};
    const unsigned r_sz = 1;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 20, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test5)
{
    unsigned char err_loc[] = {1, 131, 38};
    const unsigned err_loc_sz = 3;
    unsigned char r[] = {17, 6};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 20, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test6)
{
    unsigned char err_loc[] = {1, 158, 39, 201};
    const unsigned err_loc_sz = 4;
    unsigned char r[] = {17, 11, 6};
    const unsigned r_sz = 3;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 20, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test7)
{
    unsigned char err_loc[] = {1, 142, 50, 131, 12};
    const unsigned err_loc_sz = 5;
    unsigned char r[] = {17, 15, 11, 6};
    const unsigned r_sz = 4;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 20, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test8)
{
    unsigned char err_loc[] = {1, 201};
    const unsigned err_loc_sz = 2;
    unsigned char r[] = {157};
    const unsigned r_sz = 1;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 181, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test9)
{
    unsigned char err_loc[] = {1, 155, 179};
    const unsigned err_loc_sz = 3;
    unsigned char r[] = {157, 32};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 181, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test10)
{
    unsigned char err_loc[] = {1, 140, 16, 193};
    const unsigned err_loc_sz = 4;
    unsigned char r[] = {157, 51, 32};
    const unsigned r_sz = 3;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 181, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test11)
{
    unsigned char err_loc[] = {1, 227, 119, 127, 52};
    const unsigned err_loc_sz = 5;
    unsigned char r[] = {157, 119, 51, 32};
    const unsigned r_sz = 4;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 181, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test12)
{
    unsigned char err_loc[] = {1, 152};
    const unsigned err_loc_sz = 2;
    unsigned char r[] = {9};
    const unsigned r_sz = 1;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 27, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test13)
{
    unsigned char err_loc[] = {1, 133, 3};
    const unsigned err_loc_sz = 3;
    unsigned char r[] = {18, 9};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 27, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test14)
{
    unsigned char err_loc[] = {1, 111, 86, 35};
    const unsigned err_loc_sz = 4;
    unsigned char r[] = {18, 9, 4};
    const unsigned r_sz = 3;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 27, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test15)
{
    unsigned char err_loc[] = {1, 103, 9, 169, 5};
    const unsigned err_loc_sz = 5;
    unsigned char r[] = {23, 18, 9, 4};
    const unsigned r_sz = 4;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 27, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test16)
{
    unsigned char err_loc[] = {1, 211, 39, 212, 119, 94};
    const unsigned err_loc_sz = 6;
    unsigned char r[] = {23, 18, 9, 6, 4};
    const unsigned r_sz = 5;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 27, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test17)
{
    unsigned char err_loc[] = {1, 233, 132, 97, 114, 74, 240};
    const unsigned err_loc_sz = 7;
    unsigned char r[] = {23, 18, 17, 9, 6, 4};
    const unsigned r_sz = 6;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 27, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test18)
{
    unsigned char err_loc[] = {1, 35};
    const unsigned err_loc_sz = 2;
    unsigned char r[] = {92};
    const unsigned r_sz = 1;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 140, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test19)
{
    unsigned char err_loc[] = {1, 233, 59};
    const unsigned err_loc_sz = 3;
    unsigned char r[] = {92, 66};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 140, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test20)
{
    unsigned char err_loc[] = {1, 37, 214, 131};
    const unsigned err_loc_sz = 4;
    unsigned char r[] = {92, 66, 12};
    const unsigned r_sz = 3;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 140, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test21)
{
    unsigned char err_loc[] = {1, 58, 114, 132, 26};
    const unsigned err_loc_sz = 5;
    unsigned char r[] = {92, 66, 26, 12};
    const unsigned r_sz = 4;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 140, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test22)
{
    unsigned char err_loc[] = {1, 102, 246, 68, 86, 203};
    const unsigned err_loc_sz = 6;
    unsigned char r[] = {92, 66, 26, 12, 8};
    const unsigned r_sz = 5;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 140, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test23)
{
    unsigned char err_loc[] = {1, 201, 255, 98, 88, 164, 120};
    const unsigned err_loc_sz = 7;
    unsigned char r[] = {92, 66, 42, 26, 12, 8};
    const unsigned r_sz = 6;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 140, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test24)
{
    unsigned char err_loc[] = {1, 172, 29, 225, 214, 205, 61, 85};
    const unsigned err_loc_sz = 8;
    unsigned char r[] = {92, 67, 66, 42, 26, 12, 8};
    const unsigned r_sz = 7;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 140, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test25)
{
    unsigned char err_loc[] = {1, 197};
    const unsigned err_loc_sz = 2;
    unsigned char r[] = {109};
    const unsigned r_sz = 1;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 233, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test26)
{
    unsigned char err_loc[] = {1, 220, 111};
    const unsigned err_loc_sz = 3;
    unsigned char r[] = {109, 39};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 233, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test27)
{
    unsigned char err_loc[] = {1, 76, 28, 39};
    const unsigned err_loc_sz = 4;
    unsigned char r[] = {109, 39, 5};
    const unsigned r_sz = 3;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 233, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test28)
{
    unsigned char err_loc[] = {1, 86, 106, 34, 33};
    const unsigned err_loc_sz = 5;
    unsigned char r[] = {127, 109, 39, 5};
    const unsigned r_sz = 4;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 233, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test29)
{
    unsigned char err_loc[] = {1, 105, 68, 113, 236, 140};
    const unsigned err_loc_sz = 6;
    unsigned char r[] = {127, 109, 66, 39, 5};
    const unsigned r_sz = 5;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 233, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test30)
{
    unsigned char err_loc[] = {1, 142, 6, 181, 19, 108, 46};
    const unsigned err_loc_sz = 7;
    unsigned char r[] = {151, 127, 109, 66, 39, 5};
    const unsigned r_sz = 6;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 233, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test31)
{
    unsigned char err_loc[] = {1, 29, 193, 248, 194, 1, 16, 54};
    const unsigned err_loc_sz = 8;
    unsigned char r[] = {151, 127, 113, 109, 66, 39, 5};
    const unsigned r_sz = 7;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 233, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test32)
{
    unsigned char err_loc[] = {1, 110, 191, 37, 118, 73, 99, 85, 146};
    const unsigned err_loc_sz = 9;
    unsigned char r[] = {151, 127, 113, 109, 73, 66, 39, 5};
    const unsigned r_sz = 8;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 233, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test33)
{
    unsigned char err_loc[] = {1, 169, 51, 38, 79, 95, 69, 83, 21, 76};
    const unsigned err_loc_sz = 10;
    unsigned char r[] = {151, 127, 114, 113, 109, 73, 66, 39, 5};
    const unsigned r_sz = 9;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 233, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test34)
{
    unsigned char err_loc[] = {1, 199, 82, 123, 119, 157, 41, 26, 139, 41, 112};
    const unsigned err_loc_sz = 11;
    unsigned char r[] = {151, 127, 114, 113, 109, 73, 66, 46, 39, 5};
    const unsigned r_sz = 10;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 233, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test35)
{
    unsigned char err_loc[] = {1, 108, 134, 199, 149, 216, 112, 68, 147, 207, 46, 51};
    const unsigned err_loc_sz = 12;
    unsigned char r[] = {151, 127, 114, 113, 109, 73, 66, 54, 46, 39, 5};
    const unsigned r_sz = 11;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 233, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test36)
{
    unsigned char err_loc[] = {1, 198, 28, 171, 134, 37, 89, 7, 212, 233, 4, 53, 117};
    const unsigned err_loc_sz = 13;
    unsigned char r[] = {151, 127, 114, 113, 109, 81, 73, 66, 54, 46, 39, 5};
    const unsigned r_sz = 12;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 233, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test37)
{
    unsigned char err_loc[] = {1, 152, 231, 141, 157, 192, 109, 4, 83, 39, 189, 80, 200, 163};
    const unsigned err_loc_sz = 14;
    unsigned char r[] = {162, 151, 127, 114, 113, 109, 81, 73, 66, 54, 46, 39, 5};
    const unsigned r_sz = 13;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 233, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test38)
{
    unsigned char err_loc[] = {1, 193, 119, 168, 212, 112, 53, 250, 42, 246, 192, 15, 242, 9, 159};
    const unsigned err_loc_sz = 15;
    unsigned char r[] = {162, 151, 127, 114, 113, 109, 81, 73, 66, 54, 46, 39, 22, 5};
    const unsigned r_sz = 14;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 233, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test39)
{
    unsigned char err_loc[] = {1, 232, 245, 6, 241, 213, 68, 148, 101, 184, 126, 164, 120, 19, 227, 25};
    const unsigned err_loc_sz = 16;
    unsigned char r[] = {162, 151, 127, 114, 113, 109, 85, 81, 73, 66, 54, 46, 39, 22, 5};
    const unsigned r_sz = 15;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 233, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test40)
{
    unsigned char err_loc[] = {1, 210, 65, 42, 109, 17, 123, 90, 70, 95, 107, 71, 207, 108, 42, 46, 112};
    const unsigned err_loc_sz = 17;
    unsigned char r[] = {223, 162, 151, 127, 114, 113, 109, 85, 81, 73, 66, 54, 46, 39, 22, 5};
    const unsigned r_sz = 16;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 233, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test41)
{
    unsigned char err_loc[] = {1, 113};
    const unsigned err_loc_sz = 2;
    unsigned char r[] = {11};
    const unsigned r_sz = 1;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 106, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test42)
{
    unsigned char err_loc[] = {1, 249, 141};
    const unsigned err_loc_sz = 3;
    unsigned char r[] = {11, 2};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 106, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test43)
{
    unsigned char err_loc[] = {1, 42, 89, 143};
    const unsigned err_loc_sz = 4;
    unsigned char r[] = {23, 11, 2};
    const unsigned r_sz = 3;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 106, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test44)
{
    unsigned char err_loc[] = {1, 163, 154, 191, 67};
    const unsigned err_loc_sz = 5;
    unsigned char r[] = {31, 23, 11, 2};
    const unsigned r_sz = 4;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 106, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test45)
{
    unsigned char err_loc[] = {1, 204, 211, 25, 74, 115};
    const unsigned err_loc_sz = 6;
    unsigned char r[] = {44, 31, 23, 11, 2};
    const unsigned r_sz = 5;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 106, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test46)
{
    unsigned char err_loc[] = {1, 45, 16, 170, 70, 21, 27};
    const unsigned err_loc_sz = 7;
    unsigned char r[] = {44, 31, 23, 16, 11, 2};
    const unsigned r_sz = 6;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 106, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test47)
{
    unsigned char err_loc[] = {1, 224, 112, 230, 37, 172, 137, 32};
    const unsigned err_loc_sz = 8;
    unsigned char r[] = {93, 44, 31, 23, 16, 11, 2};
    const unsigned r_sz = 7;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 106, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test48)
{
    unsigned char err_loc[] = {1, 121, 60, 192, 24, 161, 174, 10, 202};
    const unsigned err_loc_sz = 9;
    unsigned char r[] = {93, 44, 37, 31, 23, 16, 11, 2};
    const unsigned r_sz = 8;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 106, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test49)
{
    unsigned char err_loc[] = {1, 125, 197, 48, 63, 193, 16, 136, 226, 15};
    const unsigned err_loc_sz = 10;
    unsigned char r[] = {103, 93, 44, 37, 31, 23, 16, 11, 2};
    const unsigned r_sz = 9;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 106, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test50)
{
    unsigned char err_loc[] = {1, 251, 186, 186, 186, 181, 184, 0, 146, 61, 241};
    const unsigned err_loc_sz = 11;
    unsigned char r[] = {103, 93, 44, 37, 31, 23, 16, 11, 6, 2};
    const unsigned r_sz = 10;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 106, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test51)
{
    unsigned char err_loc[] = {1, 161, 253, 164, 164, 171, 215, 170, 146, 70, 114, 25};
    const unsigned err_loc_sz = 12;
    unsigned char r[] = {103, 93, 86, 44, 37, 31, 23, 16, 11, 6, 2};
    const unsigned r_sz = 11;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 106, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test52)
{
    unsigned char err_loc[] = {1, 21, 70, 181, 65, 78, 208, 4, 33, 176, 235, 230, 242};
    const unsigned err_loc_sz = 13;
    unsigned char r[] = {103, 93, 86, 85, 44, 37, 31, 23, 16, 11, 6, 2};
    const unsigned r_sz = 12;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 106, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test53)
{
    unsigned char err_loc[] = {1, 8, 226, 232, 68, 64, 101, 252, 85, 42, 135, 155, 14, 69};
    const unsigned err_loc_sz = 14;
    unsigned char r[] = {103, 97, 93, 86, 85, 44, 37, 31, 23, 16, 11, 6, 2};
    const unsigned r_sz = 13;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 106, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test54)
{
    unsigned char err_loc[] = {1, 72, 216, 202, 220, 144, 168, 132, 164, 206, 213, 193, 7, 226, 144};
    const unsigned err_loc_sz = 15;
    unsigned char r[] = {103, 99, 97, 93, 86, 85, 44, 37, 31, 23, 16, 11, 6, 2};
    const unsigned r_sz = 14;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 106, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test55)
{
    unsigned char err_loc[] = {1, 2};
    const unsigned err_loc_sz = 2;
    unsigned char r[] = {64};
    const unsigned r_sz = 1;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 66, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test56)
{
    unsigned char err_loc[] = {1, 171};
    const unsigned err_loc_sz = 2;
    unsigned char r[] = {61};
    const unsigned r_sz = 1;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 240, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test57)
{
    unsigned char err_loc[] = {1, 188};
    const unsigned err_loc_sz = 2;
    unsigned char r[] = {74};
    const unsigned r_sz = 1;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 146, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test58)
{
    unsigned char err_loc[] = {1, 121, 50};
    const unsigned err_loc_sz = 3;
    unsigned char r[] = {74, 22};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 146, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test59)
{
    unsigned char err_loc[] = {1, 40};
    const unsigned err_loc_sz = 2;
    unsigned char r[] = {33};
    const unsigned r_sz = 1;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 87, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test60)
{
    unsigned char err_loc[] = {1, 137, 248};
    const unsigned err_loc_sz = 3;
    unsigned char r[] = {33, 23};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 87, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test61)
{
    unsigned char err_loc[] = {1, 222};
    const unsigned err_loc_sz = 2;
    unsigned char r[] = {123};
    const unsigned r_sz = 1;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 186, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test62)
{
    unsigned char err_loc[] = {1, 88, 209};
    const unsigned err_loc_sz = 3;
    unsigned char r[] = {123, 86};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 186, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test63)
{
    unsigned char err_loc[] = {1, 191, 19, 176};
    const unsigned err_loc_sz = 4;
    unsigned char r[] = {123, 104, 86};
    const unsigned r_sz = 3;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 186, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test64)
{
    unsigned char err_loc[] = {1, 159};
    const unsigned err_loc_sz = 2;
    unsigned char r[] = {0};
    const unsigned r_sz = 1;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 47, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test65)
{
    unsigned char err_loc[] = {1, 211, 222};
    const unsigned err_loc_sz = 3;
    unsigned char r[] = {30, 0};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 47, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test66)
{
    unsigned char err_loc[] = {1, 19, 193, 182};
    const unsigned err_loc_sz = 4;
    unsigned char r[] = {30, 15, 0};
    const unsigned r_sz = 3;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 47, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test67)
{
    unsigned char err_loc[] = {1, 1};
    const unsigned err_loc_sz = 2;
    unsigned char r[] = {43};
    const unsigned r_sz = 1;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 44, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test68)
{
    unsigned char err_loc[] = {1, 193, 192};
    const unsigned err_loc_sz = 3;
    unsigned char r[] = {43, 12};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 44, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test69)
{
    unsigned char err_loc[] = {1, 220, 232, 53};
    const unsigned err_loc_sz = 4;
    unsigned char r[] = {43, 35, 12};
    const unsigned r_sz = 3;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 44, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test70)
{
    unsigned char err_loc[] = {1, 91, 244, 186, 20};
    const unsigned err_loc_sz = 5;
    unsigned char r[] = {43, 35, 30, 12};
    const unsigned r_sz = 4;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 44, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test71)
{
    unsigned char err_loc[] = {1, 239, 117, 214, 40, 101};
    const unsigned err_loc_sz = 6;
    unsigned char r[] = {43, 35, 30, 23, 12};
    const unsigned r_sz = 5;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 44, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test72)
{
    unsigned char err_loc[] = {1, 225};
    const unsigned err_loc_sz = 2;
    unsigned char r[] = {156};
    const unsigned r_sz = 1;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 246, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test73)
{
    unsigned char err_loc[] = {1, 137, 200};
    const unsigned err_loc_sz = 3;
    unsigned char r[] = {156, 138};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 246, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test74)
{
    unsigned char err_loc[] = {1, 168, 177, 240};
    const unsigned err_loc_sz = 4;
    unsigned char r[] = {156, 138, 107};
    const unsigned r_sz = 3;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 246, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test75)
{
    unsigned char err_loc[] = {1, 139, 240, 157, 102};
    const unsigned err_loc_sz = 5;
    unsigned char r[] = {198, 156, 138, 107};
    const unsigned r_sz = 4;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 246, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test76)
{
    unsigned char err_loc[] = {1, 163, 108, 37, 176, 75};
    const unsigned err_loc_sz = 6;
    unsigned char r[] = {198, 192, 156, 138, 107};
    const unsigned r_sz = 5;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 246, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test77)
{
    unsigned char err_loc[] = {1, 90};
    const unsigned err_loc_sz = 2;
    unsigned char r[] = {182};
    const unsigned r_sz = 1;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 202, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test78)
{
    unsigned char err_loc[] = {1, 94, 117};
    const unsigned err_loc_sz = 3;
    unsigned char r[] = {199, 182};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 202, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test79)
{
    unsigned char err_loc[] = {1, 34, 66, 79};
    const unsigned err_loc_sz = 4;
    unsigned char r[] = {199, 182, 86};
    const unsigned r_sz = 3;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 202, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test80)
{
    unsigned char err_loc[] = {1, 89, 111, 18, 40};
    const unsigned err_loc_sz = 5;
    unsigned char r[] = {199, 182, 86, 29};
    const unsigned r_sz = 4;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 202, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test81)
{
    unsigned char err_loc[] = {1, 97, 139, 146, 255, 142};
    const unsigned err_loc_sz = 6;
    unsigned char r[] = {199, 182, 86, 29, 0};
    const unsigned r_sz = 5;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 202, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test82)
{
    unsigned char err_loc[] = {1, 78, 34, 152, 117, 116, 153};
    const unsigned err_loc_sz = 7;
    unsigned char r[] = {199, 182, 132, 86, 29, 0};
    const unsigned r_sz = 6;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 202, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test83)
{
    unsigned char err_loc[] = {1, 5};
    const unsigned err_loc_sz = 2;
    unsigned char r[] = {22};
    const unsigned r_sz = 1;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 73, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test84)
{
    unsigned char err_loc[] = {1, 200, 222};
    const unsigned err_loc_sz = 3;
    unsigned char r[] = {60, 22};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 73, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test85)
{
    unsigned char err_loc[] = {1, 130, 45, 134};
    const unsigned err_loc_sz = 4;
    unsigned char r[] = {60, 35, 22};
    const unsigned r_sz = 3;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 73, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test86)
{
    unsigned char err_loc[] = {1, 2, 35, 133, 52};
    const unsigned err_loc_sz = 5;
    unsigned char r[] = {65, 60, 35, 22};
    const unsigned r_sz = 4;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 73, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test87)
{
    unsigned char err_loc[] = {1, 0, 39, 195, 35, 104};
    const unsigned err_loc_sz = 6;
    unsigned char r[] = {71, 65, 60, 35, 22};
    const unsigned r_sz = 5;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 73, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrors, Test88)
{
    unsigned char err_loc[] = {1, 135, 39, 92, 89, 209, 59};
    const unsigned err_loc_sz = 7;
    unsigned char r[] = {71, 65, 60, 59, 35, 22};
    const unsigned r_sz = 6;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_errors(err_loc, err_loc_sz, 73, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}
