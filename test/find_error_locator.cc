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

TEST(RsFindErrorLocator, Test0)
{
    unsigned char synd[] = {131, 177, 150, 90};
    const unsigned synd_sz = 4;
    unsigned char r[] = {113, 1};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 4, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test1)
{
    unsigned char synd[] = {166, 147, 169, 175};
    const unsigned synd_sz = 4;
    unsigned char r[] = {115, 207, 1};
    const unsigned r_sz = 3;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 4, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test2)
{
    unsigned char synd[] = {92, 89, 78, 31};
    const unsigned synd_sz = 4;
    unsigned char r[] = {240, 1};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 4, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test3)
{
    unsigned char synd[] = {54, 42, 135, 53};
    const unsigned synd_sz = 4;
    unsigned char r[] = {7, 99, 1};
    const unsigned r_sz = 3;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 4, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test4)
{
    unsigned char synd[] = {100, 234, 13, 110, 135, 226, 219, 16};
    const unsigned synd_sz = 8;
    unsigned char r[] = {211, 1};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 8, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test5)
{
    unsigned char synd[] = {74, 190, 233, 139, 229, 134, 138, 85};
    const unsigned synd_sz = 8;
    unsigned char r[] = {226, 84, 1};
    const unsigned r_sz = 3;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 8, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test6)
{
    unsigned char synd[] = {247, 38, 127, 117, 61, 245, 72, 161};
    const unsigned synd_sz = 8;
    unsigned char r[] = {8, 232, 55, 1};
    const unsigned r_sz = 4;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 8, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test7)
{
    unsigned char synd[] = {248, 24, 100, 104, 90, 110, 67, 116};
    const unsigned synd_sz = 8;
    unsigned char r[] = {126, 1};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 8, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test8)
{
    unsigned char synd[] = {14, 55, 200, 144, 151, 13, 145, 45};
    const unsigned synd_sz = 8;
    unsigned char r[] = {161, 212, 1};
    const unsigned r_sz = 3;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 8, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test9)
{
    unsigned char synd[] = {15, 232, 94, 182, 141, 105, 241, 22};
    const unsigned synd_sz = 8;
    unsigned char r[] = {146, 253, 11, 1};
    const unsigned r_sz = 4;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 8, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test10)
{
    unsigned char synd[] = {248, 15, 105, 248, 172, 217, 82, 114};
    const unsigned synd_sz = 8;
    unsigned char r[] = {4, 7, 130, 6, 1};
    const unsigned r_sz = 5;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 8, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test11)
{
    unsigned char synd[] = {211, 175, 129, 204, 42, 213, 123, 220, 112, 155, 247, 131, 128, 234, 74, 20};
    const unsigned synd_sz = 16;
    unsigned char r[] = {38, 1};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 16, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test12)
{
    unsigned char synd[] = {148, 206, 91, 188, 12, 110, 209, 138, 237, 138, 11, 72, 12, 7, 125, 83};
    const unsigned synd_sz = 16;
    unsigned char r[] = {187, 191, 1};
    const unsigned r_sz = 3;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 16, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test13)
{
    unsigned char synd[] = {20, 86, 87, 246, 47, 212, 19, 182, 146, 37, 99, 165, 192, 153, 84, 134};
    const unsigned synd_sz = 16;
    unsigned char r[] = {182, 192, 203, 1};
    const unsigned r_sz = 4;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 16, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test14)
{
    unsigned char synd[] = {164, 134, 45, 20, 236, 7, 243, 153, 60, 120, 184, 210, 6, 249, 254, 30};
    const unsigned synd_sz = 16;
    unsigned char r[] = {249, 255, 132, 189, 1};
    const unsigned r_sz = 5;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 16, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test15)
{
    unsigned char synd[] = {28, 90, 157, 161, 67, 78, 85, 25, 226, 149, 195, 66, 10, 42, 96, 156};
    const unsigned synd_sz = 16;
    unsigned char r[] = {19, 13, 155, 66, 29, 1};
    const unsigned r_sz = 6;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 16, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test16)
{
    unsigned char synd[] = {81, 29, 169, 88, 129, 177, 77, 86, 24, 58, 100, 43, 53, 112, 172, 119};
    const unsigned synd_sz = 16;
    unsigned char r[] = {236, 106, 83, 24, 186, 205, 1};
    const unsigned r_sz = 7;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 16, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test17)
{
    unsigned char synd[] = {97, 73, 173, 160, 117, 80, 173, 136, 251, 166, 192, 54, 217, 187, 78, 213};
    const unsigned synd_sz = 16;
    unsigned char r[] = {203, 213, 212, 121, 171, 220, 243, 1};
    const unsigned r_sz = 8;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 16, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test18)
{
    unsigned char synd[] = {214, 52, 103, 23, 8, 154, 26, 245, 49, 17, 189, 252, 110, 198, 132, 98};
    const unsigned synd_sz = 16;
    unsigned char r[] = {97, 123, 179, 97, 100, 51, 125, 37, 1};
    const unsigned r_sz = 9;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 16, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test19)
{
    unsigned char synd[] = {64, 191, 161, 86, 59, 117, 219, 120, 251, 169, 37, 130, 182, 54, 85, 10};
    const unsigned synd_sz = 16;
    unsigned char r[] = {228, 1};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 16, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test20)
{
    unsigned char synd[] = {136, 62, 185, 88, 71, 181, 171, 191, 181, 14, 83, 200, 231, 161, 63, 184};
    const unsigned synd_sz = 16;
    unsigned char r[] = {101, 87, 1};
    const unsigned r_sz = 3;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 16, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test21)
{
    unsigned char synd[] = {62, 182, 166, 157, 42, 225, 57, 220, 67, 202, 74, 40, 21, 168, 204, 197};
    const unsigned synd_sz = 16;
    unsigned char r[] = {211, 107, 35, 1};
    const unsigned r_sz = 4;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 16, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test22)
{
    unsigned char synd[] = {234, 208, 20, 73, 76, 83, 237, 186, 241, 30, 44, 154, 193, 206, 126, 17};
    const unsigned synd_sz = 16;
    unsigned char r[] = {126, 54, 211, 245, 1};
    const unsigned r_sz = 5;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 16, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test23)
{
    unsigned char synd[] = {126, 243, 73, 247, 197, 232, 182, 152, 150, 141, 169, 4, 91, 188, 184, 231};
    const unsigned synd_sz = 16;
    unsigned char r[] = {227, 118, 149, 255, 207, 1};
    const unsigned r_sz = 6;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 16, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test24)
{
    unsigned char synd[] = {157, 179, 234, 20, 133, 75, 85, 216, 53, 110, 233, 167, 184, 252, 27, 4};
    const unsigned synd_sz = 16;
    unsigned char r[] = {227, 118, 149, 255, 207, 1};
    const unsigned r_sz = 6;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 16, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test25)
{
    unsigned char synd[] = {79, 72, 211, 157, 179, 174, 180, 226, 160, 99, 102, 169, 43, 201, 226, 222};
    const unsigned synd_sz = 16;
    unsigned char r[] = {217, 55, 123, 119, 192, 48, 1};
    const unsigned r_sz = 7;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 16, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test26)
{
    unsigned char synd[] = {126, 91, 151, 51, 122, 96, 186, 127, 155, 50, 178, 190, 176, 204, 195, 150};
    const unsigned synd_sz = 16;
    unsigned char r[] = {149, 244, 23, 39, 228, 45, 206, 1};
    const unsigned r_sz = 8;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 16, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test27)
{
    unsigned char synd[] = {143, 193, 97, 127, 208, 23, 85, 179, 130, 242, 251, 1, 117, 181, 161, 107, 26, 102, 41, 252, 87, 89, 245, 173, 45, 53, 185, 231, 68, 197, 168, 145};
    const unsigned synd_sz = 32;
    unsigned char r[] = {117, 1};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 32, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test28)
{
    unsigned char synd[] = {125, 187, 136, 63, 58, 131, 5, 237, 51, 182, 60, 219, 32, 138, 195, 108, 227, 146, 230, 124, 158, 108, 85, 17, 82, 189, 42, 78, 238, 187, 108, 159};
    const unsigned synd_sz = 32;
    unsigned char r[] = {74, 57, 1};
    const unsigned r_sz = 3;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 32, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test29)
{
    unsigned char synd[] = {137, 191, 184, 98, 129, 228, 155, 43, 114, 157, 213, 67, 206, 54, 128, 95, 170, 217, 181, 143, 190, 241, 135, 160, 77, 57, 84, 124, 171, 160, 216, 188};
    const unsigned synd_sz = 32;
    unsigned char r[] = {95, 123, 53, 1};
    const unsigned r_sz = 4;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 32, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test30)
{
    unsigned char synd[] = {230, 94, 85, 47, 119, 220, 225, 47, 18, 244, 100, 125, 228, 225, 135, 23, 36, 213, 21, 52, 112, 179, 249, 196, 68, 225, 219, 104, 86, 112, 151, 122};
    const unsigned synd_sz = 32;
    unsigned char r[] = {91, 67, 185, 45, 1};
    const unsigned r_sz = 5;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 32, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test31)
{
    unsigned char synd[] = {152, 108, 16, 52, 195, 255, 104, 13, 151, 134, 6, 223, 47, 252, 27, 201, 197, 45, 65, 227, 253, 161, 33, 13, 65, 221, 214, 52, 225, 71, 238, 108};
    const unsigned synd_sz = 32;
    unsigned char r[] = {91, 67, 185, 45, 1};
    const unsigned r_sz = 5;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 32, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test32)
{
    unsigned char synd[] = {99, 100, 28, 62, 204, 121, 173, 36, 36, 226, 80, 162, 226, 217, 162, 162, 21, 149, 165, 117, 32, 156, 140, 120, 128, 242, 96, 217, 244, 214, 185, 158};
    const unsigned synd_sz = 32;
    unsigned char r[] = {248, 183, 40, 12, 162, 1};
    const unsigned r_sz = 6;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 32, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test33)
{
    unsigned char synd[] = {73, 192, 248, 93, 27, 162, 56, 101, 35, 69, 41, 244, 170, 42, 142, 33, 155, 213, 34, 193, 44, 210, 88, 62, 32, 44, 79, 199, 79, 9, 22, 147};
    const unsigned synd_sz = 32;
    unsigned char r[] = {197, 105, 14, 102, 207, 34, 1};
    const unsigned r_sz = 7;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 32, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test34)
{
    unsigned char synd[] = {80, 228, 252, 19, 122, 225, 22, 218, 17, 13, 33, 104, 104, 172, 210, 66, 255, 69, 50, 228, 181, 195, 224, 248, 232, 17, 111, 141, 96, 43, 123, 2};
    const unsigned synd_sz = 32;
    unsigned char r[] = {114, 26, 156, 185, 175, 162, 191, 1};
    const unsigned r_sz = 8;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 32, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test35)
{
    unsigned char synd[] = {160, 101, 177, 184, 200, 27, 252, 122, 239, 123, 24, 180, 196, 235, 18, 29, 80, 107, 81, 44, 207, 67, 138, 50, 220, 83, 20, 42, 107, 103, 247, 209};
    const unsigned synd_sz = 32;
    unsigned char r[] = {165, 83, 131, 42, 151, 31, 198, 152, 1};
    const unsigned r_sz = 9;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 32, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test36)
{
    unsigned char synd[] = {165, 106, 160, 139, 157, 228, 224, 94, 131, 207, 217, 234, 38, 208, 95, 202, 52, 199, 184, 10, 165, 253, 85, 78, 88, 194, 186, 197, 71, 19, 107, 104};
    const unsigned synd_sz = 32;
    unsigned char r[] = {242, 80, 203, 253, 142, 182, 72, 115, 155, 1};
    const unsigned r_sz = 10;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 32, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test37)
{
    unsigned char synd[] = {171, 51, 229, 124, 224, 106, 148, 43, 30, 184, 137, 84, 56, 175, 28, 119, 15, 155, 146, 152, 99, 2, 59, 195, 9, 148, 78, 157, 234, 14, 49, 8};
    const unsigned synd_sz = 32;
    unsigned char r[] = {18, 76, 211, 104, 137, 131, 61, 159, 78, 115, 1};
    const unsigned r_sz = 11;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 32, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test38)
{
    unsigned char synd[] = {226, 194, 45, 87, 204, 234, 164, 33, 212, 90, 100, 22, 233, 107, 187, 231, 57, 215, 6, 33, 176, 15, 93, 145, 222, 22, 183, 86, 226, 13, 18, 39};
    const unsigned synd_sz = 32;
    unsigned char r[] = {207, 134, 65, 196, 177, 154, 239, 164, 194, 127, 153, 1};
    const unsigned r_sz = 12;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 32, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test39)
{
    unsigned char synd[] = {166, 249, 12, 179, 61, 104, 253, 28, 27, 96, 104, 215, 72, 140, 61, 10, 144, 69, 181, 118, 22, 43, 32, 209, 81, 163, 14, 46, 59, 51, 170, 114};
    const unsigned synd_sz = 32;
    unsigned char r[] = {58, 34, 36, 121, 201, 119, 105, 145, 114, 216, 206, 180, 1};
    const unsigned r_sz = 13;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 32, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test40)
{
    unsigned char synd[] = {83, 114, 113, 133, 60, 40, 48, 49, 148, 0, 77, 98, 14, 220, 132, 107, 245, 61, 222, 169, 207, 111, 240, 239, 106, 197, 182, 15, 147, 102, 78, 205};
    const unsigned synd_sz = 32;
    unsigned char r[] = {38, 82, 215, 15, 73, 69, 40, 218, 64, 118, 53, 200, 244, 1};
    const unsigned r_sz = 14;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 32, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test41)
{
    unsigned char synd[] = {71, 102, 101, 145, 40, 60, 36, 37, 128, 20, 89, 118, 26, 200, 144, 127, 225, 41, 202, 189, 219, 123, 228, 251, 126, 209, 162, 27, 135, 114, 90, 217};
    const unsigned synd_sz = 32;
    unsigned char r[] = {38, 116, 133, 216, 70, 12, 109, 242, 154, 54, 67, 253, 60, 245, 1};
    const unsigned r_sz = 15;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 32, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test42)
{
    unsigned char synd[] = {200, 99, 123, 213, 173, 5, 178, 118, 119, 28, 105, 214, 253, 160, 253, 12, 214, 155, 65, 160, 149, 194, 85, 122, 95, 23, 12, 216, 55, 245, 111, 103};
    const unsigned synd_sz = 32;
    unsigned char r[] = {212, 3, 77, 111, 81, 110, 127, 123, 137, 46, 161, 119, 117, 56, 243, 1};
    const unsigned r_sz = 16;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 32, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test43)
{
    unsigned char synd[] = {163, 82, 167, 128, 95, 118, 171, 235, 74, 113, 170, 81, 116, 194, 151, 49, 11, 106, 175, 57, 178, 135, 94, 204, 149, 88, 119, 17, 213, 249, 76, 202};
    const unsigned synd_sz = 32;
    unsigned char r[] = {186, 1};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 32, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test44)
{
    unsigned char synd[] = {36, 153, 122, 251, 219, 166, 181, 5, 135, 154, 74, 226, 54, 170, 152, 70, 227, 145, 223, 238, 147, 179, 215, 121, 225, 171, 79, 244, 75, 227, 134, 30};
    const unsigned synd_sz = 32;
    unsigned char r[] = {3, 179, 1};
    const unsigned r_sz = 3;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 32, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test45)
{
    unsigned char synd[] = {93, 143, 146, 111, 101, 253, 38, 159, 113, 134, 218, 108, 48, 130, 101, 46, 57, 64, 122, 1, 35, 160, 3, 224, 3, 71, 235, 23, 171, 23, 130, 46};
    const unsigned synd_sz = 32;
    unsigned char r[] = {20, 4, 191, 1};
    const unsigned r_sz = 4;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 32, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test46)
{
    unsigned char synd[] = {55, 1, 96, 20, 57, 34, 170, 130, 251, 183, 94, 234, 89, 26, 144, 128, 157, 144, 184, 7, 15, 174, 180, 13, 29, 219, 221, 70, 213, 113, 84, 192};
    const unsigned synd_sz = 32;
    unsigned char r[] = {232, 215, 114, 70, 1};
    const unsigned r_sz = 5;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 32, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test47)
{
    unsigned char synd[] = {168, 14, 109, 121, 134, 99, 6, 180, 50, 163, 185, 141, 27, 230, 29, 200, 156, 160, 209, 120, 247, 227, 69, 237, 234, 155, 65, 25, 99, 157, 254, 86};
    const unsigned synd_sz = 32;
    unsigned char r[] = {106, 230, 66, 78, 118, 1};
    const unsigned r_sz = 6;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 32, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test48)
{
    unsigned char synd[] = {208, 232, 221, 86, 44, 144, 191, 158, 32, 169, 212, 98, 174, 113, 78, 239, 224, 45, 94, 76, 82, 197, 234, 166, 170, 101, 150, 180, 147, 76, 131, 8};
    const unsigned synd_sz = 32;
    unsigned char r[] = {236, 218, 163, 186, 174, 165, 1};
    const unsigned r_sz = 7;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 32, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test49)
{
    unsigned char synd[] = {77, 176, 185, 242, 164, 42, 87, 50, 209, 44, 7, 71, 71, 127, 220, 135, 143, 11, 76, 231, 234, 116, 128, 144, 74, 176, 88, 10, 201, 113, 225, 71};
    const unsigned synd_sz = 32;
    unsigned char r[] = {30, 18, 27, 75, 18, 132, 7, 1};
    const unsigned r_sz = 8;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 32, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test50)
{
    unsigned char synd[] = {94, 237, 250, 118, 198, 56, 191, 26, 51, 178, 76, 2, 90, 122, 135, 93, 108, 32, 108, 196, 11, 40, 118, 127, 78, 94, 233, 143, 30, 8, 111, 147};
    const unsigned synd_sz = 32;
    unsigned char r[] = {199, 246, 142, 94, 163, 112, 168, 178, 1};
    const unsigned r_sz = 9;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 32, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test51)
{
    unsigned char synd[] = {124, 115, 12, 212, 47, 62, 97, 89, 233, 101, 31, 178, 147, 168, 101, 1, 18, 192, 122, 112, 86, 115, 243, 185, 82, 149, 113, 167, 255, 59, 190, 30};
    const unsigned synd_sz = 32;
    unsigned char r[] = {57, 101, 106, 186, 146, 168, 230, 43, 151, 1};
    const unsigned r_sz = 10;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 32, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test52)
{
    unsigned char synd[] = {101, 197, 23, 134, 105, 222, 233, 81, 94, 12, 237, 173, 20, 84, 252, 8, 215, 9, 209, 8, 165, 30, 212, 28, 172, 232, 37, 208, 248, 120, 249, 140};
    const unsigned synd_sz = 32;
    unsigned char r[] = {80, 169, 1, 19, 146, 124, 17, 33, 164, 229, 1};
    const unsigned r_sz = 11;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 32, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test53)
{
    unsigned char synd[] = {224, 169, 250, 144, 93, 227, 11, 202, 53, 95, 39, 201, 202, 193, 246, 254, 189, 182, 225, 162, 136, 154, 84, 11, 116, 47, 9, 184, 130, 161, 210, 90};
    const unsigned synd_sz = 32;
    unsigned char r[] = {227, 84, 69, 78, 167, 25, 246, 49, 109, 129, 9, 1};
    const unsigned r_sz = 12;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 32, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test54)
{
    unsigned char synd[] = {101, 67, 73, 46, 164, 51, 15, 96, 244, 109, 217, 66, 150, 194, 7, 103, 38, 120, 193, 155, 206, 23, 247, 39, 174, 55, 210, 4, 46, 159, 207, 143};
    const unsigned synd_sz = 32;
    unsigned char r[] = {94, 169, 40, 129, 200, 216, 219, 249, 61, 45, 108, 173, 1};
    const unsigned r_sz = 13;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 32, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test55)
{
    unsigned char synd[] = {46, 164, 66, 170, 17, 61, 45, 104, 18, 179, 143, 52, 95, 84, 212, 113, 51, 15, 221, 223, 222, 198, 86, 139, 66, 184, 227, 191, 2, 181, 33, 183};
    const unsigned synd_sz = 32;
    unsigned char r[] = {144, 20, 240, 59, 194, 90, 40, 35, 215, 194, 100, 85, 120, 1};
    const unsigned r_sz = 14;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 32, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test56)
{
    unsigned char synd[] = {16, 237, 236, 151, 249, 177, 82, 91, 113, 139, 153, 222, 230, 23, 155, 128, 74, 99, 250, 99, 99, 239, 97, 130, 2, 86, 48, 132, 181, 125, 218, 47};
    const unsigned synd_sz = 32;
    unsigned char r[] = {116, 79, 249, 71, 33, 120, 249, 254, 114, 205, 49, 193, 173, 236, 1};
    const unsigned r_sz = 15;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 32, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test57)
{
    unsigned char synd[] = {173, 225, 240, 80, 220, 19, 158, 154, 90, 196, 201, 78, 171, 182, 80, 185, 47, 138, 153, 132, 237, 148, 190, 159, 51, 208, 168, 42, 101, 123, 212, 194};
    const unsigned synd_sz = 32;
    unsigned char r[] = {196, 36, 247, 74, 26, 249, 192, 185, 52, 69, 75, 26, 22, 199, 26, 1};
    const unsigned r_sz = 16;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 32, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test58)
{
    unsigned char synd[] = {212, 181, 121, 112, 157, 255, 182, 140, 141, 230, 84, 101, 15, 75, 184, 52, 170, 88, 112, 103, 133, 0, 172, 237, 130, 72, 72, 240, 219, 163, 182, 221};
    const unsigned synd_sz = 32;
    unsigned char r[] = {62, 32, 71, 254, 111, 87, 98, 15, 243, 125, 34, 110, 205, 154, 226, 116, 1};
    const unsigned r_sz = 17;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 32, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test59)
{
    unsigned char synd[] = {142, 143, 140};
    const unsigned synd_sz = 3;
    unsigned char r[] = {3, 1};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 3, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test60)
{
    unsigned char synd[] = {189, 77, 49};
    const unsigned synd_sz = 3;
    unsigned char r[] = {37, 1};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 3, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test61)
{
    unsigned char synd[] = {87, 58, 107, 115, 251};
    const unsigned synd_sz = 5;
    unsigned char r[] = {15, 1};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 5, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test62)
{
    unsigned char synd[] = {6, 99, 18, 138, 56};
    const unsigned synd_sz = 5;
    unsigned char r[] = {60, 11, 1};
    const unsigned r_sz = 3;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 5, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test63)
{
    unsigned char synd[] = {135, 10, 225, 204, 145};
    const unsigned synd_sz = 5;
    unsigned char r[] = {148, 1};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 5, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test64)
{
    unsigned char synd[] = {232, 182, 6, 111, 179};
    const unsigned synd_sz = 5;
    unsigned char r[] = {70, 224, 1};
    const unsigned r_sz = 3;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 5, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test65)
{
    unsigned char synd[] = {198, 245, 119, 103, 219, 250, 93};
    const unsigned synd_sz = 7;
    unsigned char r[] = {194, 1};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 7, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test66)
{
    unsigned char synd[] = {45, 165, 242, 23, 174, 24, 184};
    const unsigned synd_sz = 7;
    unsigned char r[] = {21, 75, 1};
    const unsigned r_sz = 3;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 7, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test67)
{
    unsigned char synd[] = {61, 196, 119, 185, 3, 202, 206};
    const unsigned synd_sz = 7;
    unsigned char r[] = {224, 77, 149, 1};
    const unsigned r_sz = 4;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 7, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test68)
{
    unsigned char synd[] = {93, 253, 13, 133, 73, 227, 28};
    const unsigned synd_sz = 7;
    unsigned char r[] = {143, 1};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 7, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test69)
{
    unsigned char synd[] = {62, 59, 156, 186, 55, 31, 249};
    const unsigned synd_sz = 7;
    unsigned char r[] = {3, 141, 1};
    const unsigned r_sz = 3;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 7, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test70)
{
    unsigned char synd[] = {223, 179, 113, 230, 122, 108, 15};
    const unsigned synd_sz = 7;
    unsigned char r[] = {53, 177, 158, 1};
    const unsigned r_sz = 4;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 7, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test71)
{
    unsigned char synd[] = {189, 69, 120, 174, 35, 115, 76, 133, 44, 175, 162};
    const unsigned synd_sz = 11;
    unsigned char r[] = {129, 1};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 11, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test72)
{
    unsigned char synd[] = {156, 33, 213, 254, 237, 143, 104, 137, 71, 186, 165};
    const unsigned synd_sz = 11;
    unsigned char r[] = {229, 59, 1};
    const unsigned r_sz = 3;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 11, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test73)
{
    unsigned char synd[] = {64, 167, 61, 85, 50, 139, 141, 110, 92, 92, 192};
    const unsigned synd_sz = 11;
    unsigned char r[] = {231, 120, 69, 1};
    const unsigned r_sz = 4;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 11, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test74)
{
    unsigned char synd[] = {152, 238, 21, 247, 85, 99, 243, 247, 78, 111, 198};
    const unsigned synd_sz = 11;
    unsigned char r[] = {139, 28, 148, 161, 1};
    const unsigned r_sz = 5;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 11, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test75)
{
    unsigned char synd[] = {52, 58, 248, 238, 70, 188, 204, 71, 239, 45, 41};
    const unsigned synd_sz = 11;
    unsigned char r[] = {105, 254, 34, 214, 191, 1};
    const unsigned r_sz = 6;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 11, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test76)
{
    unsigned char synd[] = {150, 149, 165, 130, 200, 28, 221, 81, 121, 195, 172};
    const unsigned synd_sz = 11;
    unsigned char r[] = {16, 1};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 11, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test77)
{
    unsigned char synd[] = {223, 157, 24, 109, 169, 103, 20, 70, 146, 114, 46};
    const unsigned synd_sz = 11;
    unsigned char r[] = {103, 36, 1};
    const unsigned r_sz = 3;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 11, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test78)
{
    unsigned char synd[] = {45, 130, 159, 145, 48, 110, 209, 143, 57, 10, 221};
    const unsigned synd_sz = 11;
    unsigned char r[] = {116, 84, 86, 1};
    const unsigned r_sz = 4;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 11, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test79)
{
    unsigned char synd[] = {121, 146, 164, 90, 159, 156, 88, 33, 51, 116, 197};
    const unsigned synd_sz = 11;
    unsigned char r[] = {102, 100, 169, 174, 1};
    const unsigned r_sz = 5;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 11, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test80)
{
    unsigned char synd[] = {18, 93, 54, 227, 21, 139, 125, 38, 41, 185, 52};
    const unsigned synd_sz = 11;
    unsigned char r[] = {39, 34, 209, 6, 17, 1};
    const unsigned r_sz = 6;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 11, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test81)
{
    unsigned char synd[] = {19, 51, 203, 91, 224, 210, 215, 6, 158, 27, 13, 239, 188};
    const unsigned synd_sz = 13;
    unsigned char r[] = {206, 1};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 13, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test82)
{
    unsigned char synd[] = {159, 211, 143, 89, 146, 130, 134, 110, 222, 253, 223, 29, 61};
    const unsigned synd_sz = 13;
    unsigned char r[] = {116, 247, 1};
    const unsigned r_sz = 3;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 13, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test83)
{
    unsigned char synd[] = {45, 151, 148, 27, 242, 97, 68, 156, 211, 145, 202, 128, 150};
    const unsigned synd_sz = 13;
    unsigned char r[] = {228, 177, 109, 1};
    const unsigned r_sz = 4;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 13, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test84)
{
    unsigned char synd[] = {86, 210, 178, 68, 237, 222, 246, 188, 131, 25, 131, 184, 250};
    const unsigned synd_sz = 13;
    unsigned char r[] = {167, 77, 211, 225, 1};
    const unsigned r_sz = 5;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 13, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test85)
{
    unsigned char synd[] = {60, 139, 129, 46, 180, 237, 156, 229, 176, 115, 218, 139, 144};
    const unsigned synd_sz = 13;
    unsigned char r[] = {59, 30, 224, 195, 54, 1};
    const unsigned r_sz = 6;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 13, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test86)
{
    unsigned char synd[] = {77, 210, 61, 242, 242, 43, 159, 240, 180, 180, 33, 105, 34};
    const unsigned synd_sz = 13;
    unsigned char r[] = {203, 185, 65, 220, 164, 206, 1};
    const unsigned r_sz = 7;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 13, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test87)
{
    unsigned char synd[] = {106, 20, 95, 30, 254, 17, 129, 151, 79, 82, 230, 123, 149};
    const unsigned synd_sz = 13;
    unsigned char r[] = {205, 1};
    const unsigned r_sz = 2;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 13, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test88)
{
    unsigned char synd[] = {33, 129, 8, 44, 240, 204, 35, 110, 25, 64, 156, 128, 131};
    const unsigned synd_sz = 13;
    unsigned char r[] = {152, 237, 1};
    const unsigned r_sz = 3;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 13, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test89)
{
    unsigned char synd[] = {119, 123, 27, 25, 175, 45, 29, 44, 223, 23, 101, 150, 185};
    const unsigned synd_sz = 13;
    unsigned char r[] = {181, 178, 238, 1};
    const unsigned r_sz = 4;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 13, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test90)
{
    unsigned char synd[] = {164, 216, 10, 164, 104, 225, 82, 97, 230, 116, 30, 167, 23};
    const unsigned synd_sz = 13;
    unsigned char r[] = {10, 25, 154, 212, 1};
    const unsigned r_sz = 5;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 13, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test91)
{
    unsigned char synd[] = {107, 152, 127, 129, 98, 128, 181, 184, 40, 18, 11, 67, 164};
    const unsigned synd_sz = 13;
    unsigned char r[] = {97, 91, 200, 199, 242, 1};
    const unsigned r_sz = 6;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 13, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsFindErrorLocator, Test92)
{
    unsigned char synd[] = {73, 130, 194, 158, 143, 246, 134, 175, 69, 140, 30, 14, 0};
    const unsigned synd_sz = 13;
    unsigned char r[] = {94, 184, 71, 36, 92, 226, 1};
    const unsigned r_sz = 7;
    unsigned char buf[300];
    unsigned buf_sz;
    redupe_find_error_locator(synd, synd_sz, 13, buf, &buf_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}
