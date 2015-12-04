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

TEST(GfPolyDiv, Test0)
{
    unsigned char dividend[] = {50, 0, 0, 0, 222, 0};
    const unsigned dividend_sz = 6;
    unsigned char divisor[] = {1, 0, 0};
    const unsigned divisor_sz = 3;
    unsigned char quotient[] = {50, 0, 0, 0};
    const unsigned quotient_sz = 4;
    unsigned char remainder[] = {222, 0};
    const unsigned remainder_sz = 2;
    unsigned char qbuf[9];
    unsigned char rbuf[9];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test1)
{
    unsigned char dividend[] = {221, 81, 0, 0, 168, 229, 0};
    const unsigned dividend_sz = 7;
    unsigned char divisor[] = {1, 0, 0, 0};
    const unsigned divisor_sz = 4;
    unsigned char quotient[] = {221, 81, 0, 0};
    const unsigned quotient_sz = 4;
    unsigned char remainder[] = {168, 229, 0};
    const unsigned remainder_sz = 3;
    unsigned char qbuf[11];
    unsigned char rbuf[11];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test2)
{
    unsigned char dividend[] = {82, 0, 0, 0, 143, 0};
    const unsigned dividend_sz = 6;
    unsigned char divisor[] = {1, 0, 0};
    const unsigned divisor_sz = 3;
    unsigned char quotient[] = {82, 0, 0, 0};
    const unsigned quotient_sz = 4;
    unsigned char remainder[] = {143, 0};
    const unsigned remainder_sz = 2;
    unsigned char qbuf[9];
    unsigned char rbuf[9];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test3)
{
    unsigned char dividend[] = {63, 9, 0, 0, 13, 164, 0};
    const unsigned dividend_sz = 7;
    unsigned char divisor[] = {1, 0, 0, 0};
    const unsigned divisor_sz = 4;
    unsigned char quotient[] = {63, 9, 0, 0};
    const unsigned quotient_sz = 4;
    unsigned char remainder[] = {13, 164, 0};
    const unsigned remainder_sz = 3;
    unsigned char qbuf[11];
    unsigned char rbuf[11];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test4)
{
    unsigned char dividend[] = {33, 0, 0, 0, 0, 0, 0, 0, 146, 0};
    const unsigned dividend_sz = 10;
    unsigned char divisor[] = {1, 0, 0};
    const unsigned divisor_sz = 3;
    unsigned char quotient[] = {33, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 8;
    unsigned char remainder[] = {146, 0};
    const unsigned remainder_sz = 2;
    unsigned char qbuf[13];
    unsigned char rbuf[13];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test5)
{
    unsigned char dividend[] = {103, 199, 0, 0, 0, 0, 0, 0, 75, 43, 0};
    const unsigned dividend_sz = 11;
    unsigned char divisor[] = {1, 0, 0, 0};
    const unsigned divisor_sz = 4;
    unsigned char quotient[] = {103, 199, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 8;
    unsigned char remainder[] = {75, 43, 0};
    const unsigned remainder_sz = 3;
    unsigned char qbuf[15];
    unsigned char rbuf[15];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test6)
{
    unsigned char dividend[] = {59, 232, 16, 0, 0, 0, 0, 0, 94, 73, 21, 0};
    const unsigned dividend_sz = 12;
    unsigned char divisor[] = {1, 0, 0, 0, 0};
    const unsigned divisor_sz = 5;
    unsigned char quotient[] = {59, 232, 16, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 8;
    unsigned char remainder[] = {94, 73, 21, 0};
    const unsigned remainder_sz = 4;
    unsigned char qbuf[17];
    unsigned char rbuf[17];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test7)
{
    unsigned char dividend[] = {38, 165, 243, 215, 0, 0, 0, 0, 45, 191, 48, 34, 0};
    const unsigned dividend_sz = 13;
    unsigned char divisor[] = {1, 0, 0, 0, 0, 0};
    const unsigned divisor_sz = 6;
    unsigned char quotient[] = {38, 165, 243, 215, 0, 0, 0, 0};
    const unsigned quotient_sz = 8;
    unsigned char remainder[] = {45, 191, 48, 34, 0};
    const unsigned remainder_sz = 5;
    unsigned char qbuf[19];
    unsigned char rbuf[19];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test8)
{
    unsigned char dividend[] = {170, 0, 0, 0, 0, 0, 0, 0, 125, 0};
    const unsigned dividend_sz = 10;
    unsigned char divisor[] = {1, 0, 0};
    const unsigned divisor_sz = 3;
    unsigned char quotient[] = {170, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 8;
    unsigned char remainder[] = {125, 0};
    const unsigned remainder_sz = 2;
    unsigned char qbuf[13];
    unsigned char rbuf[13];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test9)
{
    unsigned char dividend[] = {113, 50, 0, 0, 0, 0, 0, 0, 146, 212, 0};
    const unsigned dividend_sz = 11;
    unsigned char divisor[] = {1, 0, 0, 0};
    const unsigned divisor_sz = 4;
    unsigned char quotient[] = {113, 50, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 8;
    unsigned char remainder[] = {146, 212, 0};
    const unsigned remainder_sz = 3;
    unsigned char qbuf[15];
    unsigned char rbuf[15];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test10)
{
    unsigned char dividend[] = {8, 249, 142, 0, 0, 0, 0, 0, 183, 194, 168, 0};
    const unsigned dividend_sz = 12;
    unsigned char divisor[] = {1, 0, 0, 0, 0};
    const unsigned divisor_sz = 5;
    unsigned char quotient[] = {8, 249, 142, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 8;
    unsigned char remainder[] = {183, 194, 168, 0};
    const unsigned remainder_sz = 4;
    unsigned char qbuf[17];
    unsigned char rbuf[17];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test11)
{
    unsigned char dividend[] = {34, 157, 243, 191, 0, 0, 0, 0, 60, 139, 49, 156, 0};
    const unsigned dividend_sz = 13;
    unsigned char divisor[] = {1, 0, 0, 0, 0, 0};
    const unsigned divisor_sz = 6;
    unsigned char quotient[] = {34, 157, 243, 191, 0, 0, 0, 0};
    const unsigned quotient_sz = 8;
    unsigned char remainder[] = {60, 139, 49, 156, 0};
    const unsigned remainder_sz = 5;
    unsigned char qbuf[19];
    unsigned char rbuf[19];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test12)
{
    unsigned char dividend[] = {55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0};
    const unsigned dividend_sz = 18;
    unsigned char divisor[] = {1, 0, 0};
    const unsigned divisor_sz = 3;
    unsigned char quotient[] = {55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 16;
    unsigned char remainder[] = {58, 0};
    const unsigned remainder_sz = 2;
    unsigned char qbuf[21];
    unsigned char rbuf[21];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test13)
{
    unsigned char dividend[] = {212, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 87, 0};
    const unsigned dividend_sz = 19;
    unsigned char divisor[] = {1, 0, 0, 0};
    const unsigned divisor_sz = 4;
    unsigned char quotient[] = {212, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 16;
    unsigned char remainder[] = {173, 87, 0};
    const unsigned remainder_sz = 3;
    unsigned char qbuf[23];
    unsigned char rbuf[23];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test14)
{
    unsigned char dividend[] = {97, 241, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 45, 28, 0};
    const unsigned dividend_sz = 20;
    unsigned char divisor[] = {1, 0, 0, 0, 0};
    const unsigned divisor_sz = 5;
    unsigned char quotient[] = {97, 241, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 16;
    unsigned char remainder[] = {244, 45, 28, 0};
    const unsigned remainder_sz = 4;
    unsigned char qbuf[25];
    unsigned char rbuf[25];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test15)
{
    unsigned char dividend[] = {152, 178, 87, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 221, 150, 117, 0};
    const unsigned dividend_sz = 21;
    unsigned char divisor[] = {1, 0, 0, 0, 0, 0};
    const unsigned divisor_sz = 6;
    unsigned char quotient[] = {152, 178, 87, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 16;
    unsigned char remainder[] = {50, 221, 150, 117, 0};
    const unsigned remainder_sz = 5;
    unsigned char qbuf[27];
    unsigned char rbuf[27];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test16)
{
    unsigned char dividend[] = {242, 210, 51, 82, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 185, 218, 194, 191, 0};
    const unsigned dividend_sz = 22;
    unsigned char divisor[] = {1, 0, 0, 0, 0, 0, 0};
    const unsigned divisor_sz = 7;
    unsigned char quotient[] = {242, 210, 51, 82, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 16;
    unsigned char remainder[] = {61, 185, 218, 194, 191, 0};
    const unsigned remainder_sz = 6;
    unsigned char qbuf[29];
    unsigned char rbuf[29];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test17)
{
    unsigned char dividend[] = {110, 36, 88, 137, 103, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 13, 229, 91, 110, 170, 0};
    const unsigned dividend_sz = 23;
    unsigned char divisor[] = {1, 0, 0, 0, 0, 0, 0, 0};
    const unsigned divisor_sz = 8;
    unsigned char quotient[] = {110, 36, 88, 137, 103, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 16;
    unsigned char remainder[] = {230, 13, 229, 91, 110, 170, 0};
    const unsigned remainder_sz = 7;
    unsigned char qbuf[31];
    unsigned char rbuf[31];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test18)
{
    unsigned char dividend[] = {179, 223, 153, 213, 235, 228, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 117, 154, 190, 253, 110, 31, 0};
    const unsigned dividend_sz = 24;
    unsigned char divisor[] = {1, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned divisor_sz = 9;
    unsigned char quotient[] = {179, 223, 153, 213, 235, 228, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 16;
    unsigned char remainder[] = {121, 117, 154, 190, 253, 110, 31, 0};
    const unsigned remainder_sz = 8;
    unsigned char qbuf[33];
    unsigned char rbuf[33];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test19)
{
    unsigned char dividend[] = {137, 225, 122, 214, 183, 77, 170, 119, 0, 0, 0, 0, 0, 0, 0, 0, 94, 91, 44, 114, 214, 103, 135, 59, 0};
    const unsigned dividend_sz = 25;
    unsigned char divisor[] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned divisor_sz = 10;
    unsigned char quotient[] = {137, 225, 122, 214, 183, 77, 170, 119, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 16;
    unsigned char remainder[] = {94, 91, 44, 114, 214, 103, 135, 59, 0};
    const unsigned remainder_sz = 9;
    unsigned char qbuf[35];
    unsigned char rbuf[35];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test20)
{
    unsigned char dividend[] = {130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0};
    const unsigned dividend_sz = 18;
    unsigned char divisor[] = {1, 0, 0};
    const unsigned divisor_sz = 3;
    unsigned char quotient[] = {130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 16;
    unsigned char remainder[] = {161, 0};
    const unsigned remainder_sz = 2;
    unsigned char qbuf[21];
    unsigned char rbuf[21];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test21)
{
    unsigned char dividend[] = {53, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 224, 0};
    const unsigned dividend_sz = 19;
    unsigned char divisor[] = {1, 0, 0, 0};
    const unsigned divisor_sz = 4;
    unsigned char quotient[] = {53, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 16;
    unsigned char remainder[] = {138, 224, 0};
    const unsigned remainder_sz = 3;
    unsigned char qbuf[23];
    unsigned char rbuf[23];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test22)
{
    unsigned char dividend[] = {127, 3, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 166, 109, 0};
    const unsigned dividend_sz = 20;
    unsigned char divisor[] = {1, 0, 0, 0, 0};
    const unsigned divisor_sz = 5;
    unsigned char quotient[] = {127, 3, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 16;
    unsigned char remainder[] = {236, 166, 109, 0};
    const unsigned remainder_sz = 4;
    unsigned char qbuf[25];
    unsigned char rbuf[25];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test23)
{
    unsigned char dividend[] = {158, 12, 28, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 224, 28, 40, 0};
    const unsigned dividend_sz = 21;
    unsigned char divisor[] = {1, 0, 0, 0, 0, 0};
    const unsigned divisor_sz = 6;
    unsigned char quotient[] = {158, 12, 28, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 16;
    unsigned char remainder[] = {199, 224, 28, 40, 0};
    const unsigned remainder_sz = 5;
    unsigned char qbuf[27];
    unsigned char rbuf[27];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test24)
{
    unsigned char dividend[] = {150, 54, 189, 227, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 161, 62, 44, 47, 0};
    const unsigned dividend_sz = 22;
    unsigned char divisor[] = {1, 0, 0, 0, 0, 0, 0};
    const unsigned divisor_sz = 7;
    unsigned char quotient[] = {150, 54, 189, 227, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 16;
    unsigned char remainder[] = {160, 161, 62, 44, 47, 0};
    const unsigned remainder_sz = 6;
    unsigned char qbuf[29];
    unsigned char rbuf[29];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test25)
{
    unsigned char dividend[] = {155, 234, 55, 47, 111, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 236, 148, 251, 92, 83, 0};
    const unsigned dividend_sz = 23;
    unsigned char divisor[] = {1, 0, 0, 0, 0, 0, 0, 0};
    const unsigned divisor_sz = 8;
    unsigned char quotient[] = {155, 234, 55, 47, 111, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 16;
    unsigned char remainder[] = {148, 236, 148, 251, 92, 83, 0};
    const unsigned remainder_sz = 7;
    unsigned char qbuf[31];
    unsigned char rbuf[31];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test26)
{
    unsigned char dividend[] = {60, 38, 34, 4, 58, 227, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 57, 168, 193, 179, 179, 143, 0};
    const unsigned dividend_sz = 24;
    unsigned char divisor[] = {1, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned divisor_sz = 9;
    unsigned char quotient[] = {60, 38, 34, 4, 58, 227, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 16;
    unsigned char remainder[] = {14, 57, 168, 193, 179, 179, 143, 0};
    const unsigned remainder_sz = 8;
    unsigned char qbuf[33];
    unsigned char rbuf[33];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test27)
{
    unsigned char dividend[] = {135, 193, 12, 74, 255, 124, 19, 158, 0, 0, 0, 0, 0, 0, 0, 0, 229, 186, 153, 249, 219, 97, 1, 60, 0};
    const unsigned dividend_sz = 25;
    unsigned char divisor[] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned divisor_sz = 10;
    unsigned char quotient[] = {135, 193, 12, 74, 255, 124, 19, 158, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 16;
    unsigned char remainder[] = {229, 186, 153, 249, 219, 97, 1, 60, 0};
    const unsigned remainder_sz = 9;
    unsigned char qbuf[35];
    unsigned char rbuf[35];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test28)
{
    unsigned char dividend[] = {2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0};
    const unsigned dividend_sz = 34;
    unsigned char divisor[] = {1, 0, 0};
    const unsigned divisor_sz = 3;
    unsigned char quotient[] = {2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 32;
    unsigned char remainder[] = {91, 0};
    const unsigned remainder_sz = 2;
    unsigned char qbuf[37];
    unsigned char rbuf[37];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test29)
{
    unsigned char dividend[] = {20, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 243, 0};
    const unsigned dividend_sz = 35;
    unsigned char divisor[] = {1, 0, 0, 0};
    const unsigned divisor_sz = 4;
    unsigned char quotient[] = {20, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 32;
    unsigned char remainder[] = {46, 243, 0};
    const unsigned remainder_sz = 3;
    unsigned char qbuf[39];
    unsigned char rbuf[39];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test30)
{
    unsigned char dividend[] = {78, 244, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 83, 22, 0};
    const unsigned dividend_sz = 36;
    unsigned char divisor[] = {1, 0, 0, 0, 0};
    const unsigned divisor_sz = 5;
    unsigned char quotient[] = {78, 244, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 32;
    unsigned char remainder[] = {227, 83, 22, 0};
    const unsigned remainder_sz = 4;
    unsigned char qbuf[41];
    unsigned char rbuf[41];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test31)
{
    unsigned char dividend[] = {164, 206, 37, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 66, 172, 12, 0};
    const unsigned dividend_sz = 37;
    unsigned char divisor[] = {1, 0, 0, 0, 0, 0};
    const unsigned divisor_sz = 6;
    unsigned char quotient[] = {164, 206, 37, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 32;
    unsigned char remainder[] = {238, 66, 172, 12, 0};
    const unsigned remainder_sz = 5;
    unsigned char qbuf[43];
    unsigned char rbuf[43];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test32)
{
    unsigned char dividend[] = {124, 31, 79, 109, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 2, 27, 8, 125, 0};
    const unsigned dividend_sz = 38;
    unsigned char divisor[] = {1, 0, 0, 0, 0, 0, 0};
    const unsigned divisor_sz = 7;
    unsigned char quotient[] = {124, 31, 79, 109, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 32;
    unsigned char remainder[] = {103, 2, 27, 8, 125, 0};
    const unsigned remainder_sz = 6;
    unsigned char qbuf[45];
    unsigned char rbuf[45];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test33)
{
    unsigned char dividend[] = {191, 45, 184, 248, 213, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 250, 36, 210, 22, 24, 0};
    const unsigned dividend_sz = 39;
    unsigned char divisor[] = {1, 0, 0, 0, 0, 0, 0, 0};
    const unsigned divisor_sz = 8;
    unsigned char quotient[] = {191, 45, 184, 248, 213, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 32;
    unsigned char remainder[] = {95, 250, 36, 210, 22, 24, 0};
    const unsigned remainder_sz = 7;
    unsigned char qbuf[47];
    unsigned char rbuf[47];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test34)
{
    unsigned char dividend[] = {4, 84, 149, 32, 27, 179, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 108, 228, 116, 87, 169, 161, 0};
    const unsigned dividend_sz = 40;
    unsigned char divisor[] = {1, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned divisor_sz = 9;
    unsigned char quotient[] = {4, 84, 149, 32, 27, 179, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 32;
    unsigned char remainder[] = {17, 108, 228, 116, 87, 169, 161, 0};
    const unsigned remainder_sz = 8;
    unsigned char qbuf[49];
    unsigned char rbuf[49];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test35)
{
    unsigned char dividend[] = {4, 6, 56, 214, 117, 230, 229, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 232, 25, 176, 123, 126, 154, 89, 0};
    const unsigned dividend_sz = 41;
    unsigned char divisor[] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned divisor_sz = 10;
    unsigned char quotient[] = {4, 6, 56, 214, 117, 230, 229, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 32;
    unsigned char remainder[] = {153, 232, 25, 176, 123, 126, 154, 89, 0};
    const unsigned remainder_sz = 9;
    unsigned char qbuf[51];
    unsigned char rbuf[51];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test36)
{
    unsigned char dividend[] = {212, 72, 216, 209, 150, 237, 191, 220, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 247, 63, 66, 95, 28, 233, 188, 8, 0};
    const unsigned dividend_sz = 42;
    unsigned char divisor[] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned divisor_sz = 11;
    unsigned char quotient[] = {212, 72, 216, 209, 150, 237, 191, 220, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 32;
    unsigned char remainder[] = {253, 247, 63, 66, 95, 28, 233, 188, 8, 0};
    const unsigned remainder_sz = 10;
    unsigned char qbuf[53];
    unsigned char rbuf[53];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test37)
{
    unsigned char dividend[] = {144, 126, 67, 144, 68, 233, 135, 216, 5, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 253, 137, 110, 23, 217, 28, 45, 134, 194, 0};
    const unsigned dividend_sz = 43;
    unsigned char divisor[] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned divisor_sz = 12;
    unsigned char quotient[] = {144, 126, 67, 144, 68, 233, 135, 216, 5, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 32;
    unsigned char remainder[] = {153, 253, 137, 110, 23, 217, 28, 45, 134, 194, 0};
    const unsigned remainder_sz = 11;
    unsigned char qbuf[55];
    unsigned char rbuf[55];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test38)
{
    unsigned char dividend[] = {85, 49, 145, 80, 48, 255, 130, 51, 133, 20, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 194, 57, 166, 194, 54, 149, 85, 162, 195, 127, 0};
    const unsigned dividend_sz = 44;
    unsigned char divisor[] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned divisor_sz = 13;
    unsigned char quotient[] = {85, 49, 145, 80, 48, 255, 130, 51, 133, 20, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 32;
    unsigned char remainder[] = {213, 194, 57, 166, 194, 54, 149, 85, 162, 195, 127, 0};
    const unsigned remainder_sz = 12;
    unsigned char qbuf[57];
    unsigned char rbuf[57];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test39)
{
    unsigned char dividend[] = {190, 95, 200, 12, 113, 193, 128, 166, 190, 55, 217, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 129, 75, 125, 148, 120, 113, 9, 144, 170, 235, 200, 0};
    const unsigned dividend_sz = 45;
    unsigned char divisor[] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned divisor_sz = 14;
    unsigned char quotient[] = {190, 95, 200, 12, 113, 193, 128, 166, 190, 55, 217, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 32;
    unsigned char remainder[] = {3, 129, 75, 125, 148, 120, 113, 9, 144, 170, 235, 200, 0};
    const unsigned remainder_sz = 13;
    unsigned char qbuf[59];
    unsigned char rbuf[59];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test40)
{
    unsigned char dividend[] = {205, 12, 211, 167, 204, 100, 231, 192, 5, 147, 251, 166, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 113, 39, 114, 232, 39, 62, 151, 99, 22, 242, 164, 71, 0};
    const unsigned dividend_sz = 46;
    unsigned char divisor[] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned divisor_sz = 15;
    unsigned char quotient[] = {205, 12, 211, 167, 204, 100, 231, 192, 5, 147, 251, 166, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 32;
    unsigned char remainder[] = {58, 113, 39, 114, 232, 39, 62, 151, 99, 22, 242, 164, 71, 0};
    const unsigned remainder_sz = 14;
    unsigned char qbuf[61];
    unsigned char rbuf[61];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test41)
{
    unsigned char dividend[] = {237, 141, 69, 156, 75, 90, 58, 55, 142, 208, 35, 249, 183, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 171, 52, 121, 221, 8, 210, 122, 48, 137, 79, 27, 254, 93, 0};
    const unsigned dividend_sz = 47;
    unsigned char divisor[] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned divisor_sz = 16;
    unsigned char quotient[] = {237, 141, 69, 156, 75, 90, 58, 55, 142, 208, 35, 249, 183, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 32;
    unsigned char remainder[] = {125, 171, 52, 121, 221, 8, 210, 122, 48, 137, 79, 27, 254, 93, 0};
    const unsigned remainder_sz = 15;
    unsigned char qbuf[63];
    unsigned char rbuf[63];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test42)
{
    unsigned char dividend[] = {76, 110, 38, 20, 128, 53, 219, 37, 168, 216, 106, 145, 97, 171, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 167, 149, 248, 191, 139, 109, 142, 189, 170, 112, 9, 86, 110, 43, 0};
    const unsigned dividend_sz = 48;
    unsigned char divisor[] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned divisor_sz = 17;
    unsigned char quotient[] = {76, 110, 38, 20, 128, 53, 219, 37, 168, 216, 106, 145, 97, 171, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 32;
    unsigned char remainder[] = {219, 167, 149, 248, 191, 139, 109, 142, 189, 170, 112, 9, 86, 110, 43, 0};
    const unsigned remainder_sz = 16;
    unsigned char qbuf[65];
    unsigned char rbuf[65];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test43)
{
    unsigned char dividend[] = {72, 24, 223, 104, 128, 40, 119, 219, 15, 51, 139, 49, 98, 119, 19, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 150, 191, 123, 223, 202, 233, 121, 77, 197, 62, 82, 254, 135, 163, 115, 0};
    const unsigned dividend_sz = 49;
    unsigned char divisor[] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned divisor_sz = 18;
    unsigned char quotient[] = {72, 24, 223, 104, 128, 40, 119, 219, 15, 51, 139, 49, 98, 119, 19, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 32;
    unsigned char remainder[] = {132, 150, 191, 123, 223, 202, 233, 121, 77, 197, 62, 82, 254, 135, 163, 115, 0};
    const unsigned remainder_sz = 17;
    unsigned char qbuf[67];
    unsigned char rbuf[67];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test44)
{
    unsigned char dividend[] = {13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0};
    const unsigned dividend_sz = 34;
    unsigned char divisor[] = {1, 0, 0};
    const unsigned divisor_sz = 3;
    unsigned char quotient[] = {13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 32;
    unsigned char remainder[] = {200, 0};
    const unsigned remainder_sz = 2;
    unsigned char qbuf[37];
    unsigned char rbuf[37];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test45)
{
    unsigned char dividend[] = {23, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0};
    const unsigned dividend_sz = 35;
    unsigned char divisor[] = {1, 0, 0, 0};
    const unsigned divisor_sz = 4;
    unsigned char quotient[] = {23, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 32;
    unsigned char remainder[] = {131, 0, 0};
    const unsigned remainder_sz = 3;
    unsigned char qbuf[39];
    unsigned char rbuf[39];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test46)
{
    unsigned char dividend[] = {26, 26, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 219, 174, 0};
    const unsigned dividend_sz = 36;
    unsigned char divisor[] = {1, 0, 0, 0, 0};
    const unsigned divisor_sz = 5;
    unsigned char quotient[] = {26, 26, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 32;
    unsigned char remainder[] = {7, 219, 174, 0};
    const unsigned remainder_sz = 4;
    unsigned char qbuf[41];
    unsigned char rbuf[41];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test47)
{
    unsigned char dividend[] = {234, 65, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 178, 46, 0};
    const unsigned dividend_sz = 36;
    unsigned char divisor[] = {1, 0, 0, 0, 0};
    const unsigned divisor_sz = 5;
    unsigned char quotient[] = {234, 65, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 32;
    unsigned char remainder[] = {198, 178, 46, 0};
    const unsigned remainder_sz = 4;
    unsigned char qbuf[41];
    unsigned char rbuf[41];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test48)
{
    unsigned char dividend[] = {207, 1, 46, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 24, 137, 158, 0};
    const unsigned dividend_sz = 37;
    unsigned char divisor[] = {1, 0, 0, 0, 0, 0};
    const unsigned divisor_sz = 6;
    unsigned char quotient[] = {207, 1, 46, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 32;
    unsigned char remainder[] = {125, 24, 137, 158, 0};
    const unsigned remainder_sz = 5;
    unsigned char qbuf[43];
    unsigned char rbuf[43];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test49)
{
    unsigned char dividend[] = {97, 112, 244, 5, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 23, 72, 22, 226, 0};
    const unsigned dividend_sz = 38;
    unsigned char divisor[] = {1, 0, 0, 0, 0, 0, 0};
    const unsigned divisor_sz = 7;
    unsigned char quotient[] = {97, 112, 244, 5, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 32;
    unsigned char remainder[] = {237, 23, 72, 22, 226, 0};
    const unsigned remainder_sz = 6;
    unsigned char qbuf[45];
    unsigned char rbuf[45];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test50)
{
    unsigned char dividend[] = {180, 249, 82, 69, 24, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 95, 218, 76, 166, 104, 0};
    const unsigned dividend_sz = 39;
    unsigned char divisor[] = {1, 0, 0, 0, 0, 0, 0, 0};
    const unsigned divisor_sz = 8;
    unsigned char quotient[] = {180, 249, 82, 69, 24, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 32;
    unsigned char remainder[] = {1, 95, 218, 76, 166, 104, 0};
    const unsigned remainder_sz = 7;
    unsigned char qbuf[47];
    unsigned char rbuf[47];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test51)
{
    unsigned char dividend[] = {223, 114, 132, 243, 98, 16, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 11, 59, 183, 46, 78, 79, 0};
    const unsigned dividend_sz = 40;
    unsigned char divisor[] = {1, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned divisor_sz = 9;
    unsigned char quotient[] = {223, 114, 132, 243, 98, 16, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 32;
    unsigned char remainder[] = {219, 11, 59, 183, 46, 78, 79, 0};
    const unsigned remainder_sz = 8;
    unsigned char qbuf[49];
    unsigned char rbuf[49];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test52)
{
    unsigned char dividend[] = {102, 57, 48, 162, 100, 0, 95, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 99, 178, 1, 119, 207, 73, 241, 0};
    const unsigned dividend_sz = 41;
    unsigned char divisor[] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned divisor_sz = 10;
    unsigned char quotient[] = {102, 57, 48, 162, 100, 0, 95, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 32;
    unsigned char remainder[] = {133, 99, 178, 1, 119, 207, 73, 241, 0};
    const unsigned remainder_sz = 9;
    unsigned char qbuf[51];
    unsigned char rbuf[51];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test53)
{
    unsigned char dividend[] = {179, 135, 226, 207, 84, 44, 177, 39, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 226, 114, 73, 178, 217, 123, 147, 47, 0};
    const unsigned dividend_sz = 42;
    unsigned char divisor[] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned divisor_sz = 11;
    unsigned char quotient[] = {179, 135, 226, 207, 84, 44, 177, 39, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 32;
    unsigned char remainder[] = {146, 226, 114, 73, 178, 217, 123, 147, 47, 0};
    const unsigned remainder_sz = 10;
    unsigned char qbuf[53];
    unsigned char rbuf[53];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test54)
{
    unsigned char dividend[] = {69, 211, 40, 135, 90, 184, 82, 63, 96, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 37, 125, 109, 93, 85, 212, 233, 86, 31, 0};
    const unsigned dividend_sz = 43;
    unsigned char divisor[] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned divisor_sz = 12;
    unsigned char quotient[] = {69, 211, 40, 135, 90, 184, 82, 63, 96, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 32;
    unsigned char remainder[] = {231, 37, 125, 109, 93, 85, 212, 233, 86, 31, 0};
    const unsigned remainder_sz = 11;
    unsigned char qbuf[55];
    unsigned char rbuf[55];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test55)
{
    unsigned char dividend[] = {72, 199, 19, 246, 178, 103, 139, 83, 182, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 191, 132, 200, 71, 192, 122, 8, 29, 232, 0};
    const unsigned dividend_sz = 43;
    unsigned char divisor[] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned divisor_sz = 12;
    unsigned char quotient[] = {72, 199, 19, 246, 178, 103, 139, 83, 182, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 32;
    unsigned char remainder[] = {224, 191, 132, 200, 71, 192, 122, 8, 29, 232, 0};
    const unsigned remainder_sz = 11;
    unsigned char qbuf[55];
    unsigned char rbuf[55];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test56)
{
    unsigned char dividend[] = {162, 206, 28, 179, 124, 0, 47, 175, 55, 151, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 131, 24, 130, 183, 179, 138, 158, 163, 48, 165, 0};
    const unsigned dividend_sz = 44;
    unsigned char divisor[] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned divisor_sz = 13;
    unsigned char quotient[] = {162, 206, 28, 179, 124, 0, 47, 175, 55, 151, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 32;
    unsigned char remainder[] = {28, 131, 24, 130, 183, 179, 138, 158, 163, 48, 165, 0};
    const unsigned remainder_sz = 12;
    unsigned char qbuf[57];
    unsigned char rbuf[57];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test57)
{
    unsigned char dividend[] = {104, 2, 224, 12, 146, 88, 14, 237, 52, 43, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 81, 9, 243, 66, 69, 212, 34, 218, 56, 163, 0};
    const unsigned dividend_sz = 44;
    unsigned char divisor[] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned divisor_sz = 13;
    unsigned char quotient[] = {104, 2, 224, 12, 146, 88, 14, 237, 52, 43, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 32;
    unsigned char remainder[] = {60, 81, 9, 243, 66, 69, 212, 34, 218, 56, 163, 0};
    const unsigned remainder_sz = 12;
    unsigned char qbuf[57];
    unsigned char rbuf[57];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test58)
{
    unsigned char dividend[] = {212, 28, 249, 9, 208, 224, 204, 163, 88, 212, 120, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 49, 28, 156, 41, 162, 165, 24, 252, 219, 52, 21, 0};
    const unsigned dividend_sz = 45;
    unsigned char divisor[] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned divisor_sz = 14;
    unsigned char quotient[] = {212, 28, 249, 9, 208, 224, 204, 163, 88, 212, 120, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 32;
    unsigned char remainder[] = {241, 49, 28, 156, 41, 162, 165, 24, 252, 219, 52, 21, 0};
    const unsigned remainder_sz = 13;
    unsigned char qbuf[59];
    unsigned char rbuf[59];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test59)
{
    unsigned char dividend[] = {123, 46, 66, 7, 82, 20, 183, 70, 231, 239, 49, 123, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 235, 24, 122, 250, 75, 251, 105, 5, 206, 32, 137, 9, 0};
    const unsigned dividend_sz = 46;
    unsigned char divisor[] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned divisor_sz = 15;
    unsigned char quotient[] = {123, 46, 66, 7, 82, 20, 183, 70, 231, 239, 49, 123, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 32;
    unsigned char remainder[] = {33, 235, 24, 122, 250, 75, 251, 105, 5, 206, 32, 137, 9, 0};
    const unsigned remainder_sz = 14;
    unsigned char qbuf[61];
    unsigned char rbuf[61];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test60)
{
    unsigned char dividend[] = {210, 0, 0, 210, 0};
    const unsigned dividend_sz = 5;
    unsigned char divisor[] = {1, 0, 0};
    const unsigned divisor_sz = 3;
    unsigned char quotient[] = {210, 0, 0};
    const unsigned quotient_sz = 3;
    unsigned char remainder[] = {210, 0};
    const unsigned remainder_sz = 2;
    unsigned char qbuf[8];
    unsigned char rbuf[8];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test61)
{
    unsigned char dividend[] = {189, 0, 0, 14, 0};
    const unsigned dividend_sz = 5;
    unsigned char divisor[] = {1, 0, 0};
    const unsigned divisor_sz = 3;
    unsigned char quotient[] = {189, 0, 0};
    const unsigned quotient_sz = 3;
    unsigned char remainder[] = {14, 0};
    const unsigned remainder_sz = 2;
    unsigned char qbuf[8];
    unsigned char rbuf[8];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test62)
{
    unsigned char dividend[] = {146, 0, 0, 0, 0, 33, 0};
    const unsigned dividend_sz = 7;
    unsigned char divisor[] = {1, 0, 0};
    const unsigned divisor_sz = 3;
    unsigned char quotient[] = {146, 0, 0, 0, 0};
    const unsigned quotient_sz = 5;
    unsigned char remainder[] = {33, 0};
    const unsigned remainder_sz = 2;
    unsigned char qbuf[10];
    unsigned char rbuf[10];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test63)
{
    unsigned char dividend[] = {176, 80, 0, 0, 0, 197, 236, 0};
    const unsigned dividend_sz = 8;
    unsigned char divisor[] = {1, 0, 0, 0};
    const unsigned divisor_sz = 4;
    unsigned char quotient[] = {176, 80, 0, 0, 0};
    const unsigned quotient_sz = 5;
    unsigned char remainder[] = {197, 236, 0};
    const unsigned remainder_sz = 3;
    unsigned char qbuf[12];
    unsigned char rbuf[12];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test64)
{
    unsigned char dividend[] = {235, 0, 0, 0, 0, 106, 0};
    const unsigned dividend_sz = 7;
    unsigned char divisor[] = {1, 0, 0};
    const unsigned divisor_sz = 3;
    unsigned char quotient[] = {235, 0, 0, 0, 0};
    const unsigned quotient_sz = 5;
    unsigned char remainder[] = {106, 0};
    const unsigned remainder_sz = 2;
    unsigned char qbuf[10];
    unsigned char rbuf[10];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test65)
{
    unsigned char dividend[] = {129, 45, 0, 0, 0, 126, 144, 0};
    const unsigned dividend_sz = 8;
    unsigned char divisor[] = {1, 0, 0, 0};
    const unsigned divisor_sz = 4;
    unsigned char quotient[] = {129, 45, 0, 0, 0};
    const unsigned quotient_sz = 5;
    unsigned char remainder[] = {126, 144, 0};
    const unsigned remainder_sz = 3;
    unsigned char qbuf[12];
    unsigned char rbuf[12];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test66)
{
    unsigned char dividend[] = {126, 0, 0, 0, 0, 0, 0, 12, 0};
    const unsigned dividend_sz = 9;
    unsigned char divisor[] = {1, 0, 0};
    const unsigned divisor_sz = 3;
    unsigned char quotient[] = {126, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 7;
    unsigned char remainder[] = {12, 0};
    const unsigned remainder_sz = 2;
    unsigned char qbuf[12];
    unsigned char rbuf[12];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test67)
{
    unsigned char dividend[] = {102, 249, 0, 0, 0, 0, 0, 49, 29, 0};
    const unsigned dividend_sz = 10;
    unsigned char divisor[] = {1, 0, 0, 0};
    const unsigned divisor_sz = 4;
    unsigned char quotient[] = {102, 249, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 7;
    unsigned char remainder[] = {49, 29, 0};
    const unsigned remainder_sz = 3;
    unsigned char qbuf[14];
    unsigned char rbuf[14];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test68)
{
    unsigned char dividend[] = {246, 12, 172, 0, 0, 0, 0, 14, 233, 93, 0};
    const unsigned dividend_sz = 11;
    unsigned char divisor[] = {1, 0, 0, 0, 0};
    const unsigned divisor_sz = 5;
    unsigned char quotient[] = {246, 12, 172, 0, 0, 0, 0};
    const unsigned quotient_sz = 7;
    unsigned char remainder[] = {14, 233, 93, 0};
    const unsigned remainder_sz = 4;
    unsigned char qbuf[16];
    unsigned char rbuf[16];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test69)
{
    unsigned char dividend[] = {130, 0, 0, 0, 0, 0, 0, 85, 0};
    const unsigned dividend_sz = 9;
    unsigned char divisor[] = {1, 0, 0};
    const unsigned divisor_sz = 3;
    unsigned char quotient[] = {130, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 7;
    unsigned char remainder[] = {85, 0};
    const unsigned remainder_sz = 2;
    unsigned char qbuf[12];
    unsigned char rbuf[12];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test70)
{
    unsigned char dividend[] = {121, 200, 0, 0, 0, 0, 0, 227, 40, 0};
    const unsigned dividend_sz = 10;
    unsigned char divisor[] = {1, 0, 0, 0};
    const unsigned divisor_sz = 4;
    unsigned char quotient[] = {121, 200, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 7;
    unsigned char remainder[] = {227, 40, 0};
    const unsigned remainder_sz = 3;
    unsigned char qbuf[14];
    unsigned char rbuf[14];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test71)
{
    unsigned char dividend[] = {101, 154, 20, 0, 0, 0, 0, 255, 224, 244, 0};
    const unsigned dividend_sz = 11;
    unsigned char divisor[] = {1, 0, 0, 0, 0};
    const unsigned divisor_sz = 5;
    unsigned char quotient[] = {101, 154, 20, 0, 0, 0, 0};
    const unsigned quotient_sz = 7;
    unsigned char remainder[] = {255, 224, 244, 0};
    const unsigned remainder_sz = 4;
    unsigned char qbuf[16];
    unsigned char rbuf[16];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test72)
{
    unsigned char dividend[] = {109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0};
    const unsigned dividend_sz = 13;
    unsigned char divisor[] = {1, 0, 0};
    const unsigned divisor_sz = 3;
    unsigned char quotient[] = {109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 11;
    unsigned char remainder[] = {159, 0};
    const unsigned remainder_sz = 2;
    unsigned char qbuf[16];
    unsigned char rbuf[16];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test73)
{
    unsigned char dividend[] = {162, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 230, 0};
    const unsigned dividend_sz = 14;
    unsigned char divisor[] = {1, 0, 0, 0};
    const unsigned divisor_sz = 4;
    unsigned char quotient[] = {162, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 11;
    unsigned char remainder[] = {70, 230, 0};
    const unsigned remainder_sz = 3;
    unsigned char qbuf[18];
    unsigned char rbuf[18];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test74)
{
    unsigned char dividend[] = {93, 135, 70, 0, 0, 0, 0, 0, 0, 0, 0, 46, 118, 99, 0};
    const unsigned dividend_sz = 15;
    unsigned char divisor[] = {1, 0, 0, 0, 0};
    const unsigned divisor_sz = 5;
    unsigned char quotient[] = {93, 135, 70, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 11;
    unsigned char remainder[] = {46, 118, 99, 0};
    const unsigned remainder_sz = 4;
    unsigned char qbuf[20];
    unsigned char rbuf[20];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test75)
{
    unsigned char dividend[] = {244, 132, 193, 217, 0, 0, 0, 0, 0, 0, 0, 178, 113, 94, 57, 0};
    const unsigned dividend_sz = 16;
    unsigned char divisor[] = {1, 0, 0, 0, 0, 0};
    const unsigned divisor_sz = 6;
    unsigned char quotient[] = {244, 132, 193, 217, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 11;
    unsigned char remainder[] = {178, 113, 94, 57, 0};
    const unsigned remainder_sz = 5;
    unsigned char qbuf[22];
    unsigned char rbuf[22];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test76)
{
    unsigned char dividend[] = {142, 165, 244, 71, 53, 0, 0, 0, 0, 0, 0, 159, 224, 4, 16, 252, 0};
    const unsigned dividend_sz = 17;
    unsigned char divisor[] = {1, 0, 0, 0, 0, 0, 0};
    const unsigned divisor_sz = 7;
    unsigned char quotient[] = {142, 165, 244, 71, 53, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 11;
    unsigned char remainder[] = {159, 224, 4, 16, 252, 0};
    const unsigned remainder_sz = 6;
    unsigned char qbuf[24];
    unsigned char rbuf[24];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test77)
{
    unsigned char dividend[] = {3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0};
    const unsigned dividend_sz = 13;
    unsigned char divisor[] = {1, 0, 0};
    const unsigned divisor_sz = 3;
    unsigned char quotient[] = {3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 11;
    unsigned char remainder[] = {54, 0};
    const unsigned remainder_sz = 2;
    unsigned char qbuf[16];
    unsigned char rbuf[16];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test78)
{
    unsigned char dividend[] = {145, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 84, 0};
    const unsigned dividend_sz = 14;
    unsigned char divisor[] = {1, 0, 0, 0};
    const unsigned divisor_sz = 4;
    unsigned char quotient[] = {145, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 11;
    unsigned char remainder[] = {168, 84, 0};
    const unsigned remainder_sz = 3;
    unsigned char qbuf[18];
    unsigned char rbuf[18];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test79)
{
    unsigned char dividend[] = {82, 241, 217, 0, 0, 0, 0, 0, 0, 0, 0, 3, 193, 138, 0};
    const unsigned dividend_sz = 15;
    unsigned char divisor[] = {1, 0, 0, 0, 0};
    const unsigned divisor_sz = 5;
    unsigned char quotient[] = {82, 241, 217, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 11;
    unsigned char remainder[] = {3, 193, 138, 0};
    const unsigned remainder_sz = 4;
    unsigned char qbuf[20];
    unsigned char rbuf[20];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test80)
{
    unsigned char dividend[] = {89, 146, 151, 20, 0, 0, 0, 0, 0, 0, 0, 143, 176, 117, 49, 0};
    const unsigned dividend_sz = 16;
    unsigned char divisor[] = {1, 0, 0, 0, 0, 0};
    const unsigned divisor_sz = 6;
    unsigned char quotient[] = {89, 146, 151, 20, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 11;
    unsigned char remainder[] = {143, 176, 117, 49, 0};
    const unsigned remainder_sz = 5;
    unsigned char qbuf[22];
    unsigned char rbuf[22];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test81)
{
    unsigned char dividend[] = {57, 252, 3, 108, 71, 0, 0, 0, 0, 0, 0, 62, 189, 15, 243, 77, 0};
    const unsigned dividend_sz = 17;
    unsigned char divisor[] = {1, 0, 0, 0, 0, 0, 0};
    const unsigned divisor_sz = 7;
    unsigned char quotient[] = {57, 252, 3, 108, 71, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 11;
    unsigned char remainder[] = {62, 189, 15, 243, 77, 0};
    const unsigned remainder_sz = 6;
    unsigned char qbuf[24];
    unsigned char rbuf[24];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test82)
{
    unsigned char dividend[] = {87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0};
    const unsigned dividend_sz = 15;
    unsigned char divisor[] = {1, 0, 0};
    const unsigned divisor_sz = 3;
    unsigned char quotient[] = {87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 13;
    unsigned char remainder[] = {52, 0};
    const unsigned remainder_sz = 2;
    unsigned char qbuf[18];
    unsigned char rbuf[18];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test83)
{
    unsigned char dividend[] = {89, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 219, 0};
    const unsigned dividend_sz = 16;
    unsigned char divisor[] = {1, 0, 0, 0};
    const unsigned divisor_sz = 4;
    unsigned char quotient[] = {89, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 13;
    unsigned char remainder[] = {174, 219, 0};
    const unsigned remainder_sz = 3;
    unsigned char qbuf[20];
    unsigned char rbuf[20];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test84)
{
    unsigned char dividend[] = {47, 28, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 92, 83, 0};
    const unsigned dividend_sz = 17;
    unsigned char divisor[] = {1, 0, 0, 0, 0};
    const unsigned divisor_sz = 5;
    unsigned char quotient[] = {47, 28, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 13;
    unsigned char remainder[] = {110, 92, 83, 0};
    const unsigned remainder_sz = 4;
    unsigned char qbuf[22];
    unsigned char rbuf[22];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test85)
{
    unsigned char dividend[] = {214, 45, 244, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 101, 215, 36, 0};
    const unsigned dividend_sz = 18;
    unsigned char divisor[] = {1, 0, 0, 0, 0, 0};
    const unsigned divisor_sz = 6;
    unsigned char quotient[] = {214, 45, 244, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 13;
    unsigned char remainder[] = {48, 101, 215, 36, 0};
    const unsigned remainder_sz = 5;
    unsigned char qbuf[24];
    unsigned char rbuf[24];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test86)
{
    unsigned char dividend[] = {201, 113, 21, 166, 160, 0, 0, 0, 0, 0, 0, 0, 0, 109, 214, 43, 36, 20, 0};
    const unsigned dividend_sz = 19;
    unsigned char divisor[] = {1, 0, 0, 0, 0, 0, 0};
    const unsigned divisor_sz = 7;
    unsigned char quotient[] = {201, 113, 21, 166, 160, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 13;
    unsigned char remainder[] = {109, 214, 43, 36, 20, 0};
    const unsigned remainder_sz = 6;
    unsigned char qbuf[26];
    unsigned char rbuf[26];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test87)
{
    unsigned char dividend[] = {173, 9, 83, 105, 129, 246, 0, 0, 0, 0, 0, 0, 0, 155, 157, 43, 245, 92, 195, 0};
    const unsigned dividend_sz = 20;
    unsigned char divisor[] = {1, 0, 0, 0, 0, 0, 0, 0};
    const unsigned divisor_sz = 8;
    unsigned char quotient[] = {173, 9, 83, 105, 129, 246, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 13;
    unsigned char remainder[] = {155, 157, 43, 245, 92, 195, 0};
    const unsigned remainder_sz = 7;
    unsigned char qbuf[28];
    unsigned char rbuf[28];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test88)
{
    unsigned char dividend[] = {116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0};
    const unsigned dividend_sz = 15;
    unsigned char divisor[] = {1, 0, 0};
    const unsigned divisor_sz = 3;
    unsigned char quotient[] = {116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 13;
    unsigned char remainder[] = {186, 0};
    const unsigned remainder_sz = 2;
    unsigned char qbuf[18];
    unsigned char rbuf[18];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test89)
{
    unsigned char dividend[] = {61, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 120, 0};
    const unsigned dividend_sz = 16;
    unsigned char divisor[] = {1, 0, 0, 0};
    const unsigned divisor_sz = 4;
    unsigned char quotient[] = {61, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 13;
    unsigned char remainder[] = {34, 120, 0};
    const unsigned remainder_sz = 3;
    unsigned char qbuf[20];
    unsigned char rbuf[20];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test90)
{
    unsigned char dividend[] = {100, 240, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 164, 121, 0};
    const unsigned dividend_sz = 17;
    unsigned char divisor[] = {1, 0, 0, 0, 0};
    const unsigned divisor_sz = 5;
    unsigned char quotient[] = {100, 240, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 13;
    unsigned char remainder[] = {155, 164, 121, 0};
    const unsigned remainder_sz = 4;
    unsigned char qbuf[22];
    unsigned char rbuf[22];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test91)
{
    unsigned char dividend[] = {130, 193, 20, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 1, 48, 76, 0};
    const unsigned dividend_sz = 18;
    unsigned char divisor[] = {1, 0, 0, 0, 0, 0};
    const unsigned divisor_sz = 6;
    unsigned char quotient[] = {130, 193, 20, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 13;
    unsigned char remainder[] = {77, 1, 48, 76, 0};
    const unsigned remainder_sz = 5;
    unsigned char qbuf[24];
    unsigned char rbuf[24];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test92)
{
    unsigned char dividend[] = {184, 29, 189, 195, 56, 0, 0, 0, 0, 0, 0, 0, 0, 251, 148, 40, 199, 252, 0};
    const unsigned dividend_sz = 19;
    unsigned char divisor[] = {1, 0, 0, 0, 0, 0, 0};
    const unsigned divisor_sz = 7;
    unsigned char quotient[] = {184, 29, 189, 195, 56, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 13;
    unsigned char remainder[] = {251, 148, 40, 199, 252, 0};
    const unsigned remainder_sz = 6;
    unsigned char qbuf[26];
    unsigned char rbuf[26];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}

TEST(GfPolyDiv, Test93)
{
    unsigned char dividend[] = {146, 246, 33, 18, 217, 0, 0, 0, 0, 0, 0, 0, 0, 101, 96, 72, 35, 151, 0};
    const unsigned dividend_sz = 19;
    unsigned char divisor[] = {1, 0, 0, 0, 0, 0, 0};
    const unsigned divisor_sz = 7;
    unsigned char quotient[] = {146, 246, 33, 18, 217, 0, 0, 0, 0, 0, 0, 0, 0};
    const unsigned quotient_sz = 13;
    unsigned char remainder[] = {101, 96, 72, 35, 151, 0};
    const unsigned remainder_sz = 6;
    unsigned char qbuf[26];
    unsigned char rbuf[26];
    unsigned qbuf_sz;
    unsigned rbuf_sz;
    redupe_gf_poly_div(dividend, dividend_sz, divisor, divisor_sz, qbuf, &qbuf_sz, rbuf, &rbuf_sz);
    ASSERT_EQ(qbuf_sz, quotient_sz);
    ASSERT_EQ(rbuf_sz, remainder_sz);
    for (unsigned i = 0; i < quotient_sz; ++i)
    {
        ASSERT_EQ(qbuf[i], quotient[i]);
    }
    for (unsigned i = 0; i < remainder_sz; ++i)
    {
        ASSERT_EQ(rbuf[i], remainder[i]);
    }
}
