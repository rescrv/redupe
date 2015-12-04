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

TEST(RsFindErrorEvaluator, Test0)
{
    unsigned char synd[] = {74, 44, 165, 79, 0};
    const unsigned synd_sz = 5;
    unsigned char err_loc[] = {20, 1};
    const unsigned err_loc_sz = 2;
    unsigned char r[] = {79, 0};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 1, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test1)
{
    unsigned char synd[] = {189, 79, 212, 76, 0};
    const unsigned synd_sz = 5;
    unsigned char err_loc[] = {118, 59, 1};
    const unsigned err_loc_sz = 3;
    unsigned char r[] = {155, 76, 0};
    const unsigned r_sz = 3;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 2, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test2)
{
    unsigned char synd[] = {144, 30, 150, 48, 0};
    const unsigned synd_sz = 5;
    unsigned char err_loc[] = {170, 1};
    const unsigned err_loc_sz = 2;
    unsigned char r[] = {48, 0};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 1, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test3)
{
    unsigned char synd[] = {119, 101, 139, 182, 0};
    const unsigned synd_sz = 5;
    unsigned char err_loc[] = {185, 108, 1};
    const unsigned err_loc_sz = 3;
    unsigned char r[] = {117, 182, 0};
    const unsigned r_sz = 3;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 2, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test4)
{
    unsigned char synd[] = {123, 91, 205, 220, 104, 12, 112, 236, 0};
    const unsigned synd_sz = 9;
    unsigned char err_loc[] = {253, 1};
    const unsigned err_loc_sz = 2;
    unsigned char r[] = {236, 0};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 1, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test5)
{
    unsigned char synd[] = {18, 85, 27, 148, 233, 75, 50, 239, 0};
    const unsigned synd_sz = 9;
    unsigned char err_loc[] = {50, 195, 1};
    const unsigned err_loc_sz = 3;
    unsigned char r[] = {209, 239, 0};
    const unsigned r_sz = 3;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 2, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test6)
{
    unsigned char synd[] = {54, 36, 48, 235, 91, 182, 239, 37, 0};
    const unsigned synd_sz = 9;
    unsigned char err_loc[] = {94, 105, 159, 1};
    const unsigned err_loc_sz = 4;
    unsigned char r[] = {135, 60, 37, 0};
    const unsigned r_sz = 4;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 3, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test7)
{
    unsigned char synd[] = {242, 175, 21, 52, 243, 177, 66, 47, 0};
    const unsigned synd_sz = 9;
    unsigned char err_loc[] = {76, 78, 234, 167, 1};
    const unsigned err_loc_sz = 5;
    unsigned char r[] = {143, 243, 24, 47, 0};
    const unsigned r_sz = 5;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 4, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test8)
{
    unsigned char synd[] = {85, 41, 168, 21, 33, 169, 184, 23, 0};
    const unsigned synd_sz = 9;
    unsigned char err_loc[] = {8, 1};
    const unsigned err_loc_sz = 2;
    unsigned char r[] = {23, 0};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 1, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test9)
{
    unsigned char synd[] = {237, 51, 208, 31, 174, 4, 156, 16, 0};
    const unsigned synd_sz = 9;
    unsigned char err_loc[] = {96, 4, 1};
    const unsigned err_loc_sz = 3;
    unsigned char r[] = {220, 16, 0};
    const unsigned r_sz = 3;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 2, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test10)
{
    unsigned char synd[] = {252, 170, 245, 15, 62, 96, 255, 76, 0};
    const unsigned synd_sz = 9;
    unsigned char err_loc[] = {222, 46, 153, 1};
    const unsigned err_loc_sz = 4;
    unsigned char r[] = {135, 148, 76, 0};
    const unsigned r_sz = 4;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 3, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test11)
{
    unsigned char synd[] = {184, 165, 179, 122, 8, 234, 155, 176, 0};
    const unsigned synd_sz = 9;
    unsigned char err_loc[] = {222, 46, 153, 1};
    const unsigned err_loc_sz = 4;
    unsigned char r[] = {103, 59, 176, 0};
    const unsigned r_sz = 4;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 3, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test12)
{
    unsigned char synd[] = {239, 220, 115, 92, 136, 15, 35, 90, 207, 43, 174, 191, 218, 52, 120, 5, 0};
    const unsigned synd_sz = 17;
    unsigned char err_loc[] = {24, 1};
    const unsigned err_loc_sz = 2;
    unsigned char r[] = {5, 0};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 1, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test13)
{
    unsigned char synd[] = {126, 175, 225, 117, 157, 166, 52, 159, 34, 229, 180, 57, 108, 75, 159, 10, 0};
    const unsigned synd_sz = 17;
    unsigned char err_loc[] = {78, 88, 1};
    const unsigned err_loc_sz = 3;
    unsigned char r[] = {213, 10, 0};
    const unsigned r_sz = 3;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 2, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test14)
{
    unsigned char synd[] = {70, 107, 112, 92, 138, 104, 130, 144, 152, 208, 193, 49, 64, 193, 66, 100, 0};
    const unsigned synd_sz = 17;
    unsigned char err_loc[] = {20, 94, 117, 1};
    const unsigned err_loc_sz = 4;
    unsigned char r[] = {83, 129, 100, 0};
    const unsigned r_sz = 4;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 3, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test15)
{
    unsigned char synd[] = {29, 200, 175, 189, 116, 23, 51, 70, 243, 107, 18, 214, 189, 49, 58, 88, 0};
    const unsigned synd_sz = 17;
    unsigned char err_loc[] = {40, 168, 180, 119, 1};
    const unsigned err_loc_sz = 5;
    unsigned char r[] = {177, 101, 10, 88, 0};
    const unsigned r_sz = 5;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 4, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test16)
{
    unsigned char synd[] = {107, 210, 78, 119, 206, 195, 48, 124, 232, 156, 209, 202, 40, 205, 115, 23, 0};
    const unsigned synd_sz = 17;
    unsigned char err_loc[] = {47, 206, 141, 102, 59, 1};
    const unsigned err_loc_sz = 6;
    unsigned char r[] = {19, 76, 67, 69, 23, 0};
    const unsigned r_sz = 6;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 5, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test17)
{
    unsigned char synd[] = {12, 113, 43, 95, 128, 229, 232, 139, 26, 174, 46, 46, 182, 10, 245, 234, 0};
    const unsigned synd_sz = 17;
    unsigned char err_loc[] = {254, 1, 13, 192, 36, 97, 1};
    const unsigned err_loc_sz = 7;
    unsigned char r[] = {131, 206, 75, 60, 11, 234, 0};
    const unsigned r_sz = 7;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 6, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test18)
{
    unsigned char synd[] = {244, 137, 211, 167, 120, 29, 16, 115, 226, 86, 214, 214, 78, 242, 13, 18, 0};
    const unsigned synd_sz = 17;
    unsigned char err_loc[] = {254, 255, 12, 205, 228, 69, 96, 1};
    const unsigned err_loc_sz = 8;
    unsigned char r[] = {94, 181, 41, 94, 134, 131, 18, 0};
    const unsigned r_sz = 8;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 7, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test19)
{
    unsigned char synd[] = {95, 182, 234, 141, 86, 218, 36, 2, 49, 8, 191, 73, 0, 24, 121, 85, 0};
    const unsigned synd_sz = 17;
    unsigned char err_loc[] = {17, 34, 202, 131, 49, 23, 240, 173, 1};
    const unsigned err_loc_sz = 9;
    unsigned char r[] = {98, 248, 197, 142, 169, 192, 80, 85, 0};
    const unsigned r_sz = 9;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 8, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test20)
{
    unsigned char synd[] = {147, 186, 108, 165, 102, 95, 4, 100, 109, 188, 58, 112, 132, 120, 76, 162, 0};
    const unsigned synd_sz = 17;
    unsigned char err_loc[] = {222, 1};
    const unsigned err_loc_sz = 2;
    unsigned char r[] = {162, 0};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 1, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test21)
{
    unsigned char synd[] = {208, 35, 248, 184, 149, 191, 242, 48, 114, 7, 18, 185, 159, 83, 233, 21, 0};
    const unsigned synd_sz = 17;
    unsigned char err_loc[] = {91, 190, 1};
    const unsigned err_loc_sz = 3;
    unsigned char r[] = {186, 21, 0};
    const unsigned r_sz = 3;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 2, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test22)
{
    unsigned char synd[] = {76, 192, 38, 88, 116, 75, 10, 52, 38, 55, 197, 228, 18, 232, 251, 114, 0};
    const unsigned synd_sz = 17;
    unsigned char err_loc[] = {83, 16, 128, 1};
    const unsigned err_loc_sz = 4;
    unsigned char r[] = {195, 68, 114, 0};
    const unsigned r_sz = 4;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 3, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test23)
{
    unsigned char synd[] = {191, 27, 80, 230, 78, 26, 67, 237, 76, 33, 1, 40, 174, 206, 2, 197, 0};
    const unsigned synd_sz = 17;
    unsigned char err_loc[] = {128, 234, 177, 221, 1};
    const unsigned err_loc_sz = 5;
    unsigned char r[] = {37, 203, 103, 197, 0};
    const unsigned r_sz = 5;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 4, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test24)
{
    unsigned char synd[] = {178, 56, 185, 67, 18, 147, 219, 2, 251, 3, 239, 152, 153, 75, 190, 214, 0};
    const unsigned synd_sz = 17;
    unsigned char err_loc[] = {95, 112, 190, 241, 103, 1};
    const unsigned err_loc_sz = 6;
    unsigned char r[] = {195, 148, 164, 218, 214, 0};
    const unsigned r_sz = 6;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 5, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test25)
{
    unsigned char synd[] = {194, 54, 113, 90, 188, 79, 78, 51, 80, 252, 148, 125, 166, 40, 88, 3, 0};
    const unsigned synd_sz = 17;
    unsigned char err_loc[] = {194, 248, 233, 101, 238, 111, 1};
    const unsigned err_loc_sz = 7;
    unsigned char r[] = {19, 26, 87, 36, 233, 3, 0};
    const unsigned r_sz = 7;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 6, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test26)
{
    unsigned char synd[] = {155, 187, 228, 233, 11, 2, 246, 160, 100, 74, 105, 191, 246, 252, 64, 37, 0};
    const unsigned synd_sz = 17;
    unsigned char err_loc[] = {253, 213, 240, 63, 223, 103, 232, 1};
    const unsigned err_loc_sz = 8;
    unsigned char r[] = {223, 136, 74, 35, 254, 99, 37, 0};
    const unsigned r_sz = 8;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 7, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test27)
{
    unsigned char synd[] = {174, 241, 120, 206, 203, 50, 250, 163, 173, 63, 51, 39, 208, 123, 168, 31, 0};
    const unsigned synd_sz = 17;
    unsigned char err_loc[] = {211, 142, 50, 12, 100, 94, 224, 236, 1};
    const unsigned err_loc_sz = 9;
    unsigned char r[] = {186, 250, 67, 57, 122, 252, 67, 31, 0};
    const unsigned r_sz = 9;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 8, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test28)
{
    unsigned char synd[] = {44, 25, 154, 134, 20, 32, 242, 63, 147, 101, 3, 243, 110, 66, 91, 193, 71, 83, 115, 129, 190, 45, 72, 75, 184, 214, 148, 207, 14, 73, 26, 105, 0};
    const unsigned synd_sz = 33;
    unsigned char err_loc[] = {35, 1};
    const unsigned err_loc_sz = 2;
    unsigned char r[] = {105, 0};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 1, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test29)
{
    unsigned char synd[] = {149, 9, 122, 175, 183, 188, 9, 148, 127, 4, 119, 81, 252, 237, 143, 237, 210, 214, 22, 205, 81, 94, 192, 104, 119, 120, 78, 183, 228, 12, 139, 212, 0};
    const unsigned synd_sz = 33;
    unsigned char err_loc[] = {136, 126, 1};
    const unsigned err_loc_sz = 3;
    unsigned char r[] = {218, 212, 0};
    const unsigned r_sz = 3;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 2, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test30)
{
    unsigned char synd[] = {56, 56, 29, 154, 190, 245, 238, 224, 77, 193, 99, 154, 109, 156, 70, 75, 157, 104, 32, 102, 57, 123, 108, 204, 15, 248, 15, 140, 104, 255, 52, 119, 0};
    const unsigned synd_sz = 33;
    unsigned char err_loc[] = {241, 131, 194, 1};
    const unsigned err_loc_sz = 4;
    unsigned char r[] = {149, 83, 119, 0};
    const unsigned r_sz = 4;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 3, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test31)
{
    unsigned char synd[] = {191, 92, 241, 22, 75, 66, 56, 45, 127, 183, 37, 110, 184, 247, 174, 82, 166, 75, 90, 130, 130, 15, 238, 95, 144, 197, 125, 95, 82, 190, 243, 182, 0};
    const unsigned synd_sz = 33;
    unsigned char err_loc[] = {131, 79, 7, 8, 1};
    const unsigned err_loc_sz = 5;
    unsigned char r[] = {82, 80, 42, 182, 0};
    const unsigned r_sz = 5;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 4, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test32)
{
    unsigned char synd[] = {219, 39, 85, 112, 195, 191, 130, 99, 151, 202, 137, 227, 73, 93, 43, 72, 117, 153, 127, 5, 107, 133, 224, 188, 2, 235, 21, 52, 61, 42, 213, 53, 0};
    const unsigned synd_sz = 33;
    unsigned char err_loc[] = {38, 240, 10, 1, 193, 1};
    const unsigned err_loc_sz = 6;
    unsigned char r[] = {165, 235, 111, 190, 53, 0};
    const unsigned r_sz = 6;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 5, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test33)
{
    unsigned char synd[] = {177, 212, 230, 205, 224, 147, 41, 155, 199, 73, 190, 38, 38, 211, 169, 102, 236, 217, 113, 155, 100, 2, 179, 20, 209, 95, 231, 158, 220, 38, 121, 130, 0};
    const unsigned synd_sz = 33;
    unsigned char err_loc[] = {60, 51, 239, 212, 105, 31, 1};
    const unsigned err_loc_sz = 7;
    unsigned char r[] = {154, 155, 140, 20, 124, 130, 0};
    const unsigned r_sz = 7;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 6, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test34)
{
    unsigned char synd[] = {102, 203, 187, 67, 109, 23, 146, 157, 213, 55, 217, 14, 254, 225, 55, 155, 37, 156, 183, 243, 97, 25, 242, 206, 237, 235, 204, 79, 209, 5, 144, 39, 0};
    const unsigned synd_sz = 33;
    unsigned char err_loc[] = {218, 94, 171, 172, 168, 190, 165, 1};
    const unsigned err_loc_sz = 8;
    unsigned char r[] = {148, 169, 253, 75, 160, 213, 39, 0};
    const unsigned r_sz = 8;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 7, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test35)
{
    unsigned char synd[] = {96, 72, 73, 8, 32, 217, 174, 234, 239, 195, 17, 177, 123, 144, 142, 157, 166, 110, 252, 190, 175, 37, 133, 244, 25, 35, 115, 202, 160, 188, 150, 164, 0};
    const unsigned synd_sz = 33;
    unsigned char err_loc[] = {252, 215, 39, 37, 7, 46, 52, 235, 1};
    const unsigned err_loc_sz = 9;
    unsigned char r[] = {3, 175, 64, 118, 229, 91, 129, 164, 0};
    const unsigned r_sz = 9;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 8, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test36)
{
    unsigned char synd[] = {75, 56, 39, 223, 25, 248, 66, 222, 48, 74, 120, 4, 125, 228, 184, 110, 61, 86, 203, 91, 61, 187, 243, 238, 248, 233, 201, 30, 163, 134, 141, 83, 0};
    const unsigned synd_sz = 33;
    unsigned char err_loc[] = {149, 146, 91, 51, 220, 157, 194, 236, 167, 1};
    const unsigned err_loc_sz = 10;
    unsigned char r[] = {153, 53, 49, 89, 190, 93, 101, 105, 83, 0};
    const unsigned r_sz = 10;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 9, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test37)
{
    unsigned char synd[] = {107, 28, 137, 173, 34, 46, 71, 248, 219, 86, 233, 42, 159, 93, 187, 135, 100, 169, 79, 65, 99, 39, 242, 66, 207, 188, 181, 227, 98, 242, 121, 55, 0};
    const unsigned synd_sz = 33;
    unsigned char err_loc[] = {86, 48, 94, 189, 185, 30, 217, 23, 192, 59, 1};
    const unsigned err_loc_sz = 11;
    unsigned char r[] = {31, 166, 107, 102, 132, 141, 181, 13, 124, 55, 0};
    const unsigned r_sz = 11;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 10, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test38)
{
    unsigned char synd[] = {123, 178, 255, 185, 41, 203, 86, 56, 64, 4, 25, 94, 87, 145, 210, 125, 155, 157, 5, 72, 90, 241, 190, 50, 162, 227, 217, 210, 227, 133, 3, 209, 0};
    const unsigned synd_sz = 33;
    unsigned char err_loc[] = {39, 21, 114, 245, 170, 244, 143, 222, 6, 151, 20, 1};
    const unsigned err_loc_sz = 12;
    unsigned char r[] = {245, 61, 192, 28, 104, 167, 65, 13, 217, 241, 209, 0};
    const unsigned r_sz = 12;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 11, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test39)
{
    unsigned char synd[] = {81, 246, 33, 83, 162, 70, 131, 213, 124, 78, 180, 39, 44, 41, 137, 105, 86, 13, 217, 97, 50, 51, 178, 130, 210, 92, 53, 1, 86, 129, 152, 10, 0};
    const unsigned synd_sz = 33;
    unsigned char err_loc[] = {202, 22, 113, 62, 180, 140, 171, 203, 191, 192, 204, 126, 1};
    const unsigned err_loc_sz = 13;
    unsigned char r[] = {21, 211, 189, 126, 255, 200, 106, 255, 162, 191, 179, 10, 0};
    const unsigned r_sz = 13;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 12, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test40)
{
    unsigned char synd[] = {247, 81, 193, 107, 172, 203, 231, 204, 61, 25, 104, 16, 232, 24, 194, 178, 169, 251, 106, 132, 76, 162, 209, 83, 161, 137, 71, 147, 252, 37, 177, 71, 0};
    const unsigned synd_sz = 33;
    unsigned char err_loc[] = {15, 146, 207, 137, 212, 190, 26, 160, 13, 152, 215, 41, 122, 1};
    const unsigned err_loc_sz = 14;
    unsigned char r[] = {127, 105, 11, 72, 52, 202, 228, 215, 89, 135, 209, 33, 71, 0};
    const unsigned r_sz = 14;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 13, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test41)
{
    unsigned char synd[] = {151, 8, 104, 210, 128, 90, 56, 234, 89, 34, 169, 52, 189, 23, 195, 36, 179, 155, 51, 45, 245, 142, 64, 140, 135, 237, 124, 82, 216, 112, 190, 70, 0};
    const unsigned synd_sz = 33;
    unsigned char err_loc[] = {85, 50, 243, 107, 113, 80, 40, 52, 235, 86, 113, 93, 165, 117, 1};
    const unsigned err_loc_sz = 15;
    unsigned char r[] = {176, 128, 207, 29, 173, 216, 37, 173, 186, 63, 155, 10, 145, 70, 0};
    const unsigned r_sz = 15;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 14, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test42)
{
    unsigned char synd[] = {174, 246, 130, 96, 205, 170, 191, 154, 22, 124, 185, 45, 113, 120, 175, 177, 116, 143, 107, 210, 72, 249, 183, 179, 150, 163, 117, 135, 123, 115, 71, 20, 0};
    const unsigned synd_sz = 33;
    unsigned char err_loc[] = {195, 117, 220, 166, 141, 74, 195, 83, 171, 139, 176, 157, 211, 218, 20, 1};
    const unsigned err_loc_sz = 16;
    unsigned char r[] = {95, 5, 92, 177, 12, 3, 164, 10, 237, 204, 151, 171, 24, 74, 20, 0};
    const unsigned r_sz = 16;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 15, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test43)
{
    unsigned char synd[] = {143, 249, 79, 189, 216, 210, 153, 60, 190, 155, 148, 116, 88, 19, 218, 67, 33, 240, 228, 17, 218, 38, 187, 229, 114, 21, 21, 13, 8, 170, 96, 48, 0};
    const unsigned synd_sz = 33;
    unsigned char err_loc[] = {143, 168, 25, 250, 134, 156, 197, 208, 11, 106, 142, 82, 208, 94, 166, 181, 1};
    const unsigned err_loc_sz = 17;
    unsigned char r[] = {162, 143, 226, 35, 16, 114, 20, 121, 206, 229, 105, 203, 28, 4, 220, 48, 0};
    const unsigned r_sz = 17;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 16, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test44)
{
    unsigned char synd[] = {102, 131, 31, 251, 17, 69, 127, 81, 137, 100, 111, 98, 70, 229, 156, 228, 234, 84, 58, 46, 216, 237, 11, 13, 36, 163, 121, 120, 14, 190, 110, 20, 0};
    const unsigned synd_sz = 33;
    unsigned char err_loc[] = {218, 1};
    const unsigned err_loc_sz = 2;
    unsigned char r[] = {20, 0};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 1, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test45)
{
    unsigned char synd[] = {7, 236, 66, 241, 142, 145, 90, 145, 143, 17, 35, 138, 6, 231, 68, 43, 178, 159, 207, 102, 157, 46, 185, 94, 28, 107, 56, 22, 63, 93, 221, 43, 0};
    const unsigned synd_sz = 33;
    unsigned char err_loc[] = {66, 250, 1};
    const unsigned err_loc_sz = 3;
    unsigned char r[] = {123, 43, 0};
    const unsigned r_sz = 3;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 2, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test46)
{
    unsigned char synd[] = {14, 165, 165, 133, 188, 84, 78, 90, 30, 96, 234, 44, 73, 89, 114, 128, 218, 186, 99, 194, 229, 174, 248, 101, 144, 152, 135, 181, 139, 128, 176, 245, 0};
    const unsigned synd_sz = 33;
    unsigned char err_loc[] = {89, 251, 70, 1};
    const unsigned err_loc_sz = 4;
    unsigned char r[] = {69, 63, 245, 0};
    const unsigned r_sz = 4;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 3, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test47)
{
    unsigned char synd[] = {25, 141, 82, 97, 65, 68, 138, 50, 222, 57, 48, 69, 194, 136, 164, 186, 127, 59, 70, 45, 167, 15, 72, 90, 79, 139, 158, 88, 95, 44, 24, 108, 0};
    const unsigned synd_sz = 33;
    unsigned char err_loc[] = {192, 249, 108, 88, 1};
    const unsigned err_loc_sz = 5;
    unsigned char r[] = {124, 214, 211, 108, 0};
    const unsigned r_sz = 5;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 4, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test48)
{
    unsigned char synd[] = {109, 240, 23, 111, 154, 54, 231, 252, 63, 251, 241, 140, 192, 115, 221, 20, 131, 161, 209, 105, 90, 102, 109, 73, 204, 175, 126, 105, 44, 178, 100, 218, 0};
    const unsigned synd_sz = 33;
    unsigned char err_loc[] = {40, 11, 97, 113, 178, 1};
    const unsigned err_loc_sz = 6;
    unsigned char r[] = {9, 0, 37, 187, 218, 0};
    const unsigned r_sz = 6;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 5, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test49)
{
    unsigned char synd[] = {237, 165, 131, 94, 181, 79, 246, 129, 99, 161, 78, 137, 217, 148, 207, 149, 130, 245, 17, 152, 132, 193, 219, 130, 91, 98, 12, 30, 66, 59, 255, 192, 0};
    const unsigned synd_sz = 33;
    unsigned char err_loc[] = {145, 202, 160, 50, 232, 51, 1};
    const unsigned err_loc_sz = 7;
    unsigned char r[] = {74, 247, 225, 79, 27, 192, 0};
    const unsigned r_sz = 7;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 6, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test50)
{
    unsigned char synd[] = {245, 7, 42, 49, 5, 179, 135, 53, 91, 109, 102, 114, 63, 37, 2, 140, 17, 52, 89, 209, 252, 209, 236, 76, 17, 73, 164, 64, 154, 224, 119, 240, 0};
    const unsigned synd_sz = 33;
    unsigned char err_loc[] = {22, 184, 221, 39, 228, 230, 186, 1};
    const unsigned err_loc_sz = 8;
    unsigned char r[] = {252, 4, 255, 177, 231, 56, 240, 0};
    const unsigned r_sz = 8;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 7, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test51)
{
    unsigned char synd[] = {9, 198, 241, 97, 107, 18, 227, 80, 134, 138, 148, 173, 181, 163, 247, 92, 61, 217, 111, 183, 244, 120, 33, 228, 100, 219, 196, 255, 175, 83, 49, 102, 0};
    const unsigned synd_sz = 33;
    unsigned char err_loc[] = {104, 23, 221, 57, 168, 252, 112, 127, 1};
    const unsigned err_loc_sz = 9;
    unsigned char r[] = {227, 117, 100, 175, 139, 30, 195, 102, 0};
    const unsigned r_sz = 9;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 8, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test52)
{
    unsigned char synd[] = {174, 125, 50, 16, 251, 8, 232, 168, 176, 70, 180, 140, 249, 7, 251, 186, 169, 106, 227, 213, 77, 97, 157, 57, 183, 52, 114, 183, 162, 216, 77, 125, 0};
    const unsigned synd_sz = 33;
    unsigned char err_loc[] = {122, 176, 171, 168, 209, 52, 211, 210, 147, 1};
    const unsigned err_loc_sz = 10;
    unsigned char r[] = {102, 91, 38, 27, 60, 93, 193, 37, 125, 0};
    const unsigned r_sz = 10;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 9, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test53)
{
    unsigned char synd[] = {17, 94, 238, 117, 130, 167, 99, 68, 48, 111, 41, 247, 67, 138, 40, 48, 193, 233, 91, 77, 152, 212, 255, 251, 17, 111, 133, 90, 166, 242, 65, 3, 0};
    const unsigned synd_sz = 33;
    unsigned char err_loc[] = {225, 62, 36, 187, 221, 148, 185, 34, 41, 239, 1};
    const unsigned err_loc_sz = 11;
    unsigned char r[] = {77, 249, 170, 171, 83, 162, 141, 35, 109, 3, 0};
    const unsigned r_sz = 11;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 10, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test54)
{
    unsigned char synd[] = {198, 204, 161, 230, 198, 113, 250, 78, 126, 247, 40, 252, 6, 87, 244, 231, 83, 166, 200, 9, 78, 77, 245, 181, 137, 110, 142, 31, 123, 46, 150, 145, 0};
    const unsigned synd_sz = 33;
    unsigned char err_loc[] = {52, 189, 142, 53, 254, 125, 168, 126, 228, 222, 119, 1};
    const unsigned err_loc_sz = 12;
    unsigned char r[] = {15, 117, 192, 5, 230, 90, 169, 92, 183, 199, 145, 0};
    const unsigned r_sz = 12;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 11, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test55)
{
    unsigned char synd[] = {19, 163, 13, 113, 222, 173, 89, 34, 71, 158, 179, 138, 5, 194, 10, 100, 249, 6, 49, 206, 164, 124, 35, 79, 219, 122, 60, 99, 33, 133, 69, 201, 0};
    const unsigned synd_sz = 33;
    unsigned char err_loc[] = {112, 147, 95, 39, 160, 149, 81, 181, 211, 83, 156, 174, 1};
    const unsigned err_loc_sz = 13;
    unsigned char r[] = {232, 0, 149, 89, 142, 224, 129, 171, 248, 8, 183, 201, 0};
    const unsigned r_sz = 13;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 12, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test56)
{
    unsigned char synd[] = {60, 86, 44, 176, 120, 147, 44, 230, 152, 51, 192, 235, 56, 107, 191, 185, 55, 43, 167, 177, 146, 152, 130, 107, 99, 79, 4, 179, 7, 94, 46, 6, 0};
    const unsigned synd_sz = 33;
    unsigned char err_loc[] = {106, 9, 70, 57, 117, 74, 10, 248, 74, 61, 214, 132, 24, 1};
    const unsigned err_loc_sz = 14;
    unsigned char r[] = {20, 143, 74, 92, 157, 165, 73, 234, 195, 172, 214, 126, 6, 0};
    const unsigned r_sz = 14;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 13, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test57)
{
    unsigned char synd[] = {53, 105, 145, 164, 20, 138, 99, 22, 114, 159, 163, 223, 180, 232, 17, 212, 41, 113, 60, 87, 26, 7, 120, 183, 77, 133, 72, 74, 210, 79, 89, 94, 0};
    const unsigned synd_sz = 33;
    unsigned char err_loc[] = {175, 105, 19, 244, 65, 4, 154, 252, 137, 42, 23, 91, 82, 162, 1};
    const unsigned err_loc_sz = 15;
    unsigned char r[] = {187, 81, 176, 107, 61, 189, 77, 253, 14, 208, 58, 162, 214, 94, 0};
    const unsigned r_sz = 15;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 14, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test58)
{
    unsigned char synd[] = {5, 4, 26, 21, 186, 191, 55, 149, 171, 131, 47, 77, 176, 220, 72, 6, 74, 188, 196, 251, 53, 241, 146, 209, 185, 117, 140, 215, 157, 99, 184, 71, 0};
    const unsigned synd_sz = 33;
    unsigned char err_loc[] = {27, 13, 248, 117, 139, 211, 177, 197, 216, 29, 41, 106, 181, 72, 8, 1};
    const unsigned err_loc_sz = 16;
    unsigned char r[] = {103, 110, 214, 167, 235, 121, 2, 140, 210, 227, 244, 64, 216, 186, 71, 0};
    const unsigned r_sz = 16;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 15, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test59)
{
    unsigned char synd[] = {225, 206, 243, 170, 74, 103, 203, 67, 175, 114, 140, 80, 38, 115, 91, 104, 194, 8, 70, 70, 51, 246, 238, 76, 100, 3, 24, 142, 81, 141, 123, 42, 0};
    const unsigned synd_sz = 33;
    unsigned char err_loc[] = {30, 199, 3, 245, 203, 26, 54, 226, 53, 123, 233, 236, 89, 229, 249, 179, 1};
    const unsigned err_loc_sz = 17;
    unsigned char r[] = {127, 255, 164, 200, 122, 110, 68, 184, 177, 215, 137, 227, 79, 81, 18, 42, 0};
    const unsigned r_sz = 17;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 16, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test60)
{
    unsigned char synd[] = {38, 195, 191, 0};
    const unsigned synd_sz = 4;
    unsigned char err_loc[] = {80, 1};
    const unsigned err_loc_sz = 2;
    unsigned char r[] = {191, 0};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 1, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test61)
{
    unsigned char synd[] = {222, 7, 240, 0};
    const unsigned synd_sz = 4;
    unsigned char err_loc[] = {147, 1};
    const unsigned err_loc_sz = 2;
    unsigned char r[] = {240, 0};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 1, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test62)
{
    unsigned char synd[] = {139, 242, 87, 145, 21, 0};
    const unsigned synd_sz = 6;
    unsigned char err_loc[] = {143, 1};
    const unsigned err_loc_sz = 2;
    unsigned char r[] = {21, 0};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 1, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test63)
{
    unsigned char synd[] = {1, 58, 128, 57, 210, 0};
    const unsigned synd_sz = 6;
    unsigned char err_loc[] = {5, 137, 1};
    const unsigned err_loc_sz = 3;
    unsigned char r[] = {84, 210, 0};
    const unsigned r_sz = 3;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 2, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test64)
{
    unsigned char synd[] = {82, 46, 129, 113, 30, 0};
    const unsigned synd_sz = 6;
    unsigned char err_loc[] = {45, 1};
    const unsigned err_loc_sz = 2;
    unsigned char r[] = {30, 0};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 1, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test65)
{
    unsigned char synd[] = {149, 47, 31, 43, 250, 0};
    const unsigned synd_sz = 6;
    unsigned char err_loc[] = {79, 234, 1};
    const unsigned err_loc_sz = 3;
    unsigned char r[] = {195, 250, 0};
    const unsigned r_sz = 3;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 2, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test66)
{
    unsigned char synd[] = {99, 104, 10, 108, 50, 33, 211, 0};
    const unsigned synd_sz = 8;
    unsigned char err_loc[] = {93, 1};
    const unsigned err_loc_sz = 2;
    unsigned char r[] = {211, 0};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 1, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test67)
{
    unsigned char synd[] = {168, 195, 49, 178, 34, 25, 135, 0};
    const unsigned synd_sz = 8;
    unsigned char err_loc[] = {62, 52, 1};
    const unsigned err_loc_sz = 3;
    unsigned char r[] = {138, 135, 0};
    const unsigned r_sz = 3;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 2, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test68)
{
    unsigned char synd[] = {84, 80, 111, 199, 178, 178, 144, 0};
    const unsigned synd_sz = 8;
    unsigned char err_loc[] = {99, 76, 184, 1};
    const unsigned err_loc_sz = 4;
    unsigned char r[] = {49, 191, 144, 0};
    const unsigned r_sz = 4;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 3, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test69)
{
    unsigned char synd[] = {12, 121, 42, 101, 4, 220, 237, 0};
    const unsigned synd_sz = 8;
    unsigned char err_loc[] = {94, 1};
    const unsigned err_loc_sz = 2;
    unsigned char r[] = {237, 0};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 1, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test70)
{
    unsigned char synd[] = {53, 108, 175, 25, 64, 61, 243, 0};
    const unsigned synd_sz = 8;
    unsigned char err_loc[] = {187, 217, 1};
    const unsigned err_loc_sz = 3;
    unsigned char r[] = {180, 243, 0};
    const unsigned r_sz = 3;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 2, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test71)
{
    unsigned char synd[] = {168, 16, 168, 31, 253, 191, 71, 0};
    const unsigned synd_sz = 8;
    unsigned char err_loc[] = {1, 60, 162, 1};
    const unsigned err_loc_sz = 4;
    unsigned char r[] = {10, 25, 71, 0};
    const unsigned r_sz = 4;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 3, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test72)
{
    unsigned char synd[] = {118, 13, 127, 94, 40, 37, 90, 4, 44, 9, 83, 0};
    const unsigned synd_sz = 12;
    unsigned char err_loc[] = {152, 1};
    const unsigned err_loc_sz = 2;
    unsigned char r[] = {83, 0};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 1, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test73)
{
    unsigned char synd[] = {103, 102, 230, 74, 13, 145, 74, 121, 188, 187, 55, 0};
    const unsigned synd_sz = 12;
    unsigned char err_loc[] = {39, 212, 1};
    const unsigned err_loc_sz = 3;
    unsigned char r[] = {243, 55, 0};
    const unsigned r_sz = 3;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 2, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test74)
{
    unsigned char synd[] = {216, 209, 223, 31, 151, 187, 107, 163, 146, 221, 219, 0};
    const unsigned synd_sz = 12;
    unsigned char err_loc[] = {74, 230, 196, 1};
    const unsigned err_loc_sz = 4;
    unsigned char r[] = {249, 199, 219, 0};
    const unsigned r_sz = 4;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 3, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test75)
{
    unsigned char synd[] = {118, 110, 5, 43, 239, 190, 129, 149, 215, 196, 74, 0};
    const unsigned synd_sz = 12;
    unsigned char err_loc[] = {190, 239, 84, 220, 1};
    const unsigned err_loc_sz = 5;
    unsigned char r[] = {192, 61, 214, 74, 0};
    const unsigned r_sz = 5;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 4, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test76)
{
    unsigned char synd[] = {152, 72, 93, 82, 43, 135, 178, 76, 21, 80, 112, 0};
    const unsigned synd_sz = 12;
    unsigned char err_loc[] = {113, 68, 148, 151, 236, 1};
    const unsigned err_loc_sz = 6;
    unsigned char r[] = {48, 214, 74, 127, 112, 0};
    const unsigned r_sz = 6;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 5, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test77)
{
    unsigned char synd[] = {143, 198, 140, 87, 137, 249, 134, 22, 151, 58, 164, 0};
    const unsigned synd_sz = 12;
    unsigned char err_loc[] = {124, 1};
    const unsigned err_loc_sz = 2;
    unsigned char r[] = {164, 0};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 1, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test78)
{
    unsigned char synd[] = {120, 87, 207, 151, 223, 176, 80, 59, 196, 120, 193, 0};
    const unsigned synd_sz = 12;
    unsigned char err_loc[] = {98, 190, 1};
    const unsigned err_loc_sz = 3;
    unsigned char r[] = {31, 193, 0};
    const unsigned r_sz = 3;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 2, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test79)
{
    unsigned char synd[] = {138, 26, 243, 173, 23, 53, 233, 184, 143, 182, 182, 0};
    const unsigned synd_sz = 12;
    unsigned char err_loc[] = {108, 15, 39, 1};
    const unsigned err_loc_sz = 4;
    unsigned char r[] = {21, 208, 182, 0};
    const unsigned r_sz = 4;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 3, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test80)
{
    unsigned char synd[] = {79, 32, 166, 136, 204, 148, 52, 103, 122, 91, 190, 0};
    const unsigned synd_sz = 12;
    unsigned char err_loc[] = {189, 59, 38, 25, 1};
    const unsigned err_loc_sz = 5;
    unsigned char r[] = {70, 231, 83, 190, 0};
    const unsigned r_sz = 5;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 4, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test81)
{
    unsigned char synd[] = {114, 241, 215, 132, 35, 198, 211, 116, 10, 242, 39, 0};
    const unsigned synd_sz = 12;
    unsigned char err_loc[] = {189, 59, 38, 25, 1};
    const unsigned err_loc_sz = 5;
    unsigned char r[] = {33, 230, 186, 39, 0};
    const unsigned r_sz = 5;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 4, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test82)
{
    unsigned char synd[] = {75, 153, 121, 34, 233, 218, 201, 126, 93, 28, 225, 243, 236, 0};
    const unsigned synd_sz = 14;
    unsigned char err_loc[] = {206, 1};
    const unsigned err_loc_sz = 2;
    unsigned char r[] = {236, 0};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 1, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test83)
{
    unsigned char synd[] = {153, 180, 142, 99, 188, 103, 80, 114, 5, 0, 146, 52, 208, 0};
    const unsigned synd_sz = 14;
    unsigned char err_loc[] = {73, 26, 1};
    const unsigned err_loc_sz = 3;
    unsigned char r[] = {198, 208, 0};
    const unsigned r_sz = 3;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 2, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test84)
{
    unsigned char synd[] = {81, 107, 152, 14, 176, 132, 14, 36, 26, 128, 118, 49, 222, 0};
    const unsigned synd_sz = 14;
    unsigned char err_loc[] = {8, 251, 46, 1};
    const unsigned err_loc_sz = 4;
    unsigned char r[] = {255, 179, 222, 0};
    const unsigned r_sz = 4;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 3, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test85)
{
    unsigned char synd[] = {209, 96, 97, 160, 143, 174, 201, 85, 68, 31, 156, 118, 164, 0};
    const unsigned synd_sz = 14;
    unsigned char err_loc[] = {12, 0, 194, 161, 1};
    const unsigned err_loc_sz = 5;
    unsigned char r[] = {249, 202, 15, 164, 0};
    const unsigned r_sz = 5;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 4, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test86)
{
    unsigned char synd[] = {104, 218, 49, 170, 201, 111, 124, 96, 97, 56, 252, 122, 43, 0};
    const unsigned synd_sz = 14;
    unsigned char err_loc[] = {96, 12, 94, 163, 169, 1};
    const unsigned err_loc_sz = 6;
    unsigned char r[] = {145, 231, 17, 57, 43, 0};
    const unsigned r_sz = 6;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 5, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test87)
{
    unsigned char synd[] = {98, 141, 84, 243, 127, 154, 66, 205, 200, 21, 24, 79, 240, 0};
    const unsigned synd_sz = 14;
    unsigned char err_loc[] = {41, 200, 208, 15, 14, 68, 1};
    const unsigned err_loc_sz = 7;
    unsigned char r[] = {170, 75, 255, 218, 126, 240, 0};
    const unsigned r_sz = 7;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 6, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test88)
{
    unsigned char synd[] = {223, 75, 135, 68, 65, 3, 62, 224, 74, 102, 239, 140, 33, 0};
    const unsigned synd_sz = 14;
    unsigned char err_loc[] = {63, 1};
    const unsigned err_loc_sz = 2;
    unsigned char r[] = {33, 0};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 1, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test89)
{
    unsigned char synd[] = {108, 197, 84, 213, 90, 29, 77, 80, 20, 244, 36, 211, 8, 0};
    const unsigned synd_sz = 14;
    unsigned char err_loc[] = {187, 68, 1};
    const unsigned err_loc_sz = 3;
    unsigned char r[] = {201, 8, 0};
    const unsigned r_sz = 3;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 2, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test90)
{
    unsigned char synd[] = {83, 217, 175, 82, 121, 250, 49, 244, 208, 111, 252, 179, 87, 0};
    const unsigned synd_sz = 14;
    unsigned char err_loc[] = {140, 34, 1, 1};
    const unsigned err_loc_sz = 4;
    unsigned char r[] = {211, 228, 87, 0};
    const unsigned r_sz = 4;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 3, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test91)
{
    unsigned char synd[] = {240, 172, 252, 29, 24, 34, 0, 58, 4, 39, 24, 2, 27, 0};
    const unsigned synd_sz = 14;
    unsigned char err_loc[] = {147, 63, 124, 95, 1};
    const unsigned err_loc_sz = 5;
    unsigned char r[] = {247, 118, 184, 27, 0};
    const unsigned r_sz = 5;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 4, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test92)
{
    unsigned char synd[] = {163, 255, 175, 78, 75, 113, 83, 105, 87, 116, 75, 81, 72, 0};
    const unsigned synd_sz = 14;
    unsigned char err_loc[] = {147, 172, 67, 35, 94, 1};
    const unsigned err_loc_sz = 6;
    unsigned char r[] = {169, 108, 175, 133, 72, 0};
    const unsigned r_sz = 6;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 5, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorEvaluator, Test93)
{
    unsigned char synd[] = {161, 17, 208, 96, 189, 178, 67, 74, 136, 25, 168, 7, 200, 0};
    const unsigned synd_sz = 14;
    unsigned char err_loc[] = {30, 72, 12, 83, 47, 39, 1};
    const unsigned err_loc_sz = 7;
    unsigned char r[] = {61, 159, 38, 41, 125, 200, 0};
    const unsigned r_sz = 7;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_evaluator(synd, synd_sz, err_loc, err_loc_sz, 6, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}
