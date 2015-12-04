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

TEST(GfPolyEval, Test0)
{
    unsigned char poly[] = {164, 88, 61, 10, 112, 253, 115, 222, 224, 57, 50};
    const unsigned poly_sz = 11;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 1), 0);
}

TEST(GfPolyEval, Test1)
{
    unsigned char poly[] = {164, 88, 61, 10, 112, 253, 115, 222, 224, 57, 50};
    const unsigned poly_sz = 11;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 2), 0);
}

TEST(GfPolyEval, Test2)
{
    unsigned char poly[] = {164, 88, 61, 10, 112, 253, 115, 222, 224, 57, 50};
    const unsigned poly_sz = 11;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 4), 0);
}

TEST(GfPolyEval, Test3)
{
    unsigned char poly[] = {164, 88, 61, 10, 112, 253, 115, 222, 224, 57, 50};
    const unsigned poly_sz = 11;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 8), 0);
}

TEST(GfPolyEval, Test4)
{
    unsigned char poly[] = {164, 88, 61, 160, 112, 253, 115, 222, 224, 57, 50};
    const unsigned poly_sz = 11;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 1), 170);
}

TEST(GfPolyEval, Test5)
{
    unsigned char poly[] = {164, 88, 61, 160, 112, 253, 115, 222, 224, 57, 50};
    const unsigned poly_sz = 11;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 2), 183);
}

TEST(GfPolyEval, Test6)
{
    unsigned char poly[] = {164, 88, 61, 160, 112, 253, 115, 222, 224, 57, 50};
    const unsigned poly_sz = 11;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 4), 145);
}

TEST(GfPolyEval, Test7)
{
    unsigned char poly[] = {164, 88, 61, 160, 112, 253, 115, 222, 224, 57, 50};
    const unsigned poly_sz = 11;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 8), 123);
}

TEST(GfPolyEval, Test8)
{
    unsigned char poly[] = {1, 128};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 1), 129);
}

TEST(GfPolyEval, Test9)
{
    unsigned char poly[] = {1, 128};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 2), 130);
}

TEST(GfPolyEval, Test10)
{
    unsigned char poly[] = {1, 128};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 4), 132);
}

TEST(GfPolyEval, Test11)
{
    unsigned char poly[] = {1, 128};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 8), 136);
}

TEST(GfPolyEval, Test12)
{
    unsigned char poly[] = {1, 128};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 16), 144);
}

TEST(GfPolyEval, Test13)
{
    unsigned char poly[] = {1, 128};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 32), 160);
}

TEST(GfPolyEval, Test14)
{
    unsigned char poly[] = {1, 128};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 64), 192);
}

TEST(GfPolyEval, Test15)
{
    unsigned char poly[] = {1, 128};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 128), 0);
}

TEST(GfPolyEval, Test16)
{
    unsigned char poly[] = {1, 128};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 29), 157);
}

TEST(GfPolyEval, Test17)
{
    unsigned char poly[] = {1, 128};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 58), 186);
}

TEST(GfPolyEval, Test18)
{
    unsigned char poly[] = {1, 128};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 116), 244);
}

TEST(GfPolyEval, Test19)
{
    unsigned char poly[] = {170, 0};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 27), 168);
}

TEST(GfPolyEval, Test20)
{
    unsigned char poly[] = {164, 88, 61, 160, 36, 253, 115, 222, 224, 57, 50};
    const unsigned poly_sz = 11;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 1), 254);
}

TEST(GfPolyEval, Test21)
{
    unsigned char poly[] = {164, 88, 61, 160, 36, 253, 115, 222, 224, 57, 50};
    const unsigned poly_sz = 11;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 2), 19);
}

TEST(GfPolyEval, Test22)
{
    unsigned char poly[] = {164, 88, 61, 160, 36, 253, 115, 222, 224, 57, 50};
    const unsigned poly_sz = 11;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 4), 227);
}

TEST(GfPolyEval, Test23)
{
    unsigned char poly[] = {164, 88, 61, 160, 36, 253, 115, 222, 224, 57, 50};
    const unsigned poly_sz = 11;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 8), 170);
}

TEST(GfPolyEval, Test24)
{
    unsigned char poly[] = {1, 192, 135};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 1), 70);
}

TEST(GfPolyEval, Test25)
{
    unsigned char poly[] = {1, 192, 135};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 2), 30);
}

TEST(GfPolyEval, Test26)
{
    unsigned char poly[] = {1, 192, 135};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 4), 176);
}

TEST(GfPolyEval, Test27)
{
    unsigned char poly[] = {1, 192, 135};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 8), 137);
}

TEST(GfPolyEval, Test28)
{
    unsigned char poly[] = {1, 192, 135};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 16), 6);
}

TEST(GfPolyEval, Test29)
{
    unsigned char poly[] = {1, 192, 135};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 32), 214);
}

TEST(GfPolyEval, Test30)
{
    unsigned char poly[] = {1, 192, 135};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 64), 0);
}

TEST(GfPolyEval, Test31)
{
    unsigned char poly[] = {1, 192, 135};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 128), 0);
}

TEST(GfPolyEval, Test32)
{
    unsigned char poly[] = {1, 192, 135};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 29), 254);
}

TEST(GfPolyEval, Test33)
{
    unsigned char poly[] = {1, 192, 135};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 58), 192);
}

TEST(GfPolyEval, Test34)
{
    unsigned char poly[] = {1, 192, 135};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 116), 231);
}

TEST(GfPolyEval, Test35)
{
    unsigned char poly[] = {128, 254, 0};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 54), 191);
}

TEST(GfPolyEval, Test36)
{
    unsigned char poly[] = {128, 254, 0};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 27), 252);
}

TEST(GfPolyEval, Test37)
{
    unsigned char poly[] = {249, 80, 4, 111, 235, 203, 105, 18, 177, 240, 207, 198, 227, 29, 111, 190, 1, 235, 170, 221, 165, 65, 45, 221, 185, 74, 139, 167, 106, 131, 228, 166, 121, 230, 176, 54, 38, 0, 23, 248, 121, 66, 158, 160, 247, 242, 60, 159, 1, 147, 63, 242, 49, 184, 248, 99, 146, 184, 192, 9, 30, 128, 182, 118, 26, 83, 16, 229, 247, 154, 165, 185, 193, 78, 251, 168, 204, 212, 243, 18, 162, 219, 61, 91, 149, 67, 86, 218, 172, 111, 141, 183, 18, 36, 245, 70, 244, 66, 84, 3, 110, 189, 239, 83, 201, 27, 126, 145, 208, 15, 56, 139, 94, 190, 250, 134, 250, 192, 209, 62, 61, 238, 162, 248, 217, 59, 91, 223, 59, 94, 103, 101, 214, 30, 151, 105, 84, 189, 165, 59, 252, 139, 193, 71, 34, 234, 209, 28, 80, 127, 177, 127, 30, 208, 56, 131, 47, 98, 7, 1, 126, 102, 176, 149, 199, 12, 104, 49, 47, 158, 150, 158, 35, 16, 242, 161, 63, 68, 1, 106, 1, 243, 218, 26, 134, 141, 82, 4, 186, 45, 158, 198, 243, 241, 108, 44, 161};
    const unsigned poly_sz = 197;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 1), 0);
}

TEST(GfPolyEval, Test38)
{
    unsigned char poly[] = {249, 80, 4, 111, 235, 203, 105, 18, 177, 240, 207, 198, 227, 29, 111, 190, 1, 235, 170, 221, 165, 65, 45, 221, 185, 74, 139, 167, 106, 131, 228, 166, 121, 230, 176, 54, 38, 0, 23, 248, 121, 66, 158, 160, 247, 242, 60, 159, 1, 147, 63, 242, 49, 184, 248, 99, 146, 184, 192, 9, 30, 128, 182, 118, 26, 83, 16, 229, 247, 154, 165, 185, 193, 78, 251, 168, 204, 212, 243, 18, 162, 219, 61, 91, 149, 67, 86, 218, 172, 111, 141, 183, 18, 36, 245, 70, 244, 66, 84, 3, 110, 189, 239, 83, 201, 27, 126, 145, 208, 15, 56, 139, 94, 190, 250, 134, 250, 192, 209, 62, 61, 238, 162, 248, 217, 59, 91, 223, 59, 94, 103, 101, 214, 30, 151, 105, 84, 189, 165, 59, 252, 139, 193, 71, 34, 234, 209, 28, 80, 127, 177, 127, 30, 208, 56, 131, 47, 98, 7, 1, 126, 102, 176, 149, 199, 12, 104, 49, 47, 158, 150, 158, 35, 16, 242, 161, 63, 68, 1, 106, 1, 243, 218, 26, 134, 141, 82, 4, 186, 45, 158, 198, 243, 241, 108, 44, 161};
    const unsigned poly_sz = 197;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 2), 0);
}

TEST(GfPolyEval, Test39)
{
    unsigned char poly[] = {249, 80, 4, 111, 235, 203, 105, 18, 177, 240, 207, 198, 227, 29, 111, 190, 1, 235, 170, 221, 165, 65, 45, 221, 185, 74, 139, 167, 106, 131, 228, 166, 121, 230, 176, 54, 38, 0, 23, 248, 121, 66, 158, 160, 247, 242, 60, 159, 1, 147, 63, 242, 49, 184, 248, 99, 146, 184, 192, 9, 30, 128, 182, 118, 26, 83, 16, 229, 247, 154, 165, 185, 193, 78, 251, 168, 204, 212, 243, 18, 162, 219, 61, 91, 149, 67, 86, 218, 172, 111, 141, 183, 18, 36, 245, 70, 244, 66, 84, 3, 110, 189, 239, 83, 201, 27, 126, 145, 208, 15, 56, 139, 94, 190, 250, 134, 250, 192, 209, 62, 61, 238, 162, 248, 217, 59, 91, 223, 59, 94, 103, 101, 214, 30, 151, 105, 84, 189, 165, 59, 252, 139, 193, 71, 34, 234, 209, 28, 80, 127, 177, 127, 30, 208, 56, 131, 47, 98, 7, 1, 126, 102, 176, 149, 199, 12, 104, 49, 47, 158, 150, 158, 35, 16, 242, 161, 63, 68, 1, 106, 1, 243, 218, 26, 134, 141, 82, 4, 186, 45, 158, 198, 243, 241, 108, 44, 161};
    const unsigned poly_sz = 197;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 4), 0);
}

TEST(GfPolyEval, Test40)
{
    unsigned char poly[] = {249, 80, 4, 111, 235, 203, 105, 18, 177, 240, 207, 198, 227, 29, 111, 190, 1, 235, 170, 221, 165, 65, 45, 221, 185, 74, 139, 167, 106, 131, 228, 166, 121, 230, 176, 54, 38, 0, 23, 248, 121, 66, 158, 160, 247, 242, 60, 159, 1, 147, 63, 242, 49, 184, 248, 99, 146, 184, 192, 9, 30, 128, 182, 118, 26, 83, 16, 229, 247, 154, 165, 185, 193, 78, 251, 168, 204, 212, 243, 18, 162, 219, 61, 91, 149, 67, 86, 218, 172, 111, 141, 183, 18, 36, 245, 70, 244, 66, 84, 3, 110, 189, 239, 83, 201, 27, 126, 145, 208, 15, 56, 139, 94, 190, 250, 134, 250, 192, 209, 62, 61, 238, 162, 248, 217, 59, 91, 223, 59, 94, 103, 101, 214, 30, 151, 105, 84, 189, 165, 59, 252, 139, 193, 71, 34, 234, 209, 28, 80, 127, 177, 127, 30, 208, 56, 131, 47, 98, 7, 1, 126, 102, 176, 149, 199, 12, 104, 49, 47, 158, 150, 158, 35, 16, 242, 161, 63, 68, 1, 106, 1, 243, 218, 26, 134, 141, 82, 4, 186, 45, 158, 198, 243, 241, 108, 44, 161};
    const unsigned poly_sz = 197;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 8), 0);
}

TEST(GfPolyEval, Test41)
{
    unsigned char poly[] = {249, 80, 4, 111, 235, 203, 105, 18, 177, 240, 207, 198, 227, 29, 111, 190, 1, 235, 170, 221, 165, 56, 45, 221, 185, 74, 139, 167, 106, 131, 228, 166, 121, 230, 176, 54, 38, 0, 23, 248, 121, 66, 158, 160, 247, 242, 60, 159, 1, 147, 63, 242, 49, 184, 248, 99, 146, 184, 192, 9, 30, 128, 182, 118, 26, 83, 16, 229, 247, 154, 165, 185, 193, 78, 251, 168, 204, 212, 243, 18, 162, 219, 61, 91, 149, 67, 86, 218, 172, 111, 141, 183, 18, 36, 245, 70, 244, 66, 84, 3, 110, 189, 239, 83, 201, 27, 126, 145, 208, 15, 56, 139, 94, 190, 250, 134, 250, 192, 209, 62, 61, 238, 162, 248, 217, 59, 91, 223, 59, 94, 103, 101, 214, 30, 151, 105, 84, 189, 165, 59, 252, 139, 193, 71, 34, 234, 209, 28, 80, 127, 177, 127, 30, 208, 56, 131, 47, 98, 7, 1, 126, 102, 176, 149, 199, 12, 104, 49, 47, 158, 150, 158, 35, 16, 242, 161, 63, 68, 1, 106, 1, 243, 218, 26, 134, 141, 82, 4, 186, 45, 158, 198, 243, 241, 108, 44, 161};
    const unsigned poly_sz = 197;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 1), 121);
}

TEST(GfPolyEval, Test42)
{
    unsigned char poly[] = {249, 80, 4, 111, 235, 203, 105, 18, 177, 240, 207, 198, 227, 29, 111, 190, 1, 235, 170, 221, 165, 56, 45, 221, 185, 74, 139, 167, 106, 131, 228, 166, 121, 230, 176, 54, 38, 0, 23, 248, 121, 66, 158, 160, 247, 242, 60, 159, 1, 147, 63, 242, 49, 184, 248, 99, 146, 184, 192, 9, 30, 128, 182, 118, 26, 83, 16, 229, 247, 154, 165, 185, 193, 78, 251, 168, 204, 212, 243, 18, 162, 219, 61, 91, 149, 67, 86, 218, 172, 111, 141, 183, 18, 36, 245, 70, 244, 66, 84, 3, 110, 189, 239, 83, 201, 27, 126, 145, 208, 15, 56, 139, 94, 190, 250, 134, 250, 192, 209, 62, 61, 238, 162, 248, 217, 59, 91, 223, 59, 94, 103, 101, 214, 30, 151, 105, 84, 189, 165, 59, 252, 139, 193, 71, 34, 234, 209, 28, 80, 127, 177, 127, 30, 208, 56, 131, 47, 98, 7, 1, 126, 102, 176, 149, 199, 12, 104, 49, 47, 158, 150, 158, 35, 16, 242, 161, 63, 68, 1, 106, 1, 243, 218, 26, 134, 141, 82, 4, 186, 45, 158, 198, 243, 241, 108, 44, 161};
    const unsigned poly_sz = 197;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 2), 184);
}

TEST(GfPolyEval, Test43)
{
    unsigned char poly[] = {249, 80, 4, 111, 235, 203, 105, 18, 177, 240, 207, 198, 227, 29, 111, 190, 1, 235, 170, 221, 165, 56, 45, 221, 185, 74, 139, 167, 106, 131, 228, 166, 121, 230, 176, 54, 38, 0, 23, 248, 121, 66, 158, 160, 247, 242, 60, 159, 1, 147, 63, 242, 49, 184, 248, 99, 146, 184, 192, 9, 30, 128, 182, 118, 26, 83, 16, 229, 247, 154, 165, 185, 193, 78, 251, 168, 204, 212, 243, 18, 162, 219, 61, 91, 149, 67, 86, 218, 172, 111, 141, 183, 18, 36, 245, 70, 244, 66, 84, 3, 110, 189, 239, 83, 201, 27, 126, 145, 208, 15, 56, 139, 94, 190, 250, 134, 250, 192, 209, 62, 61, 238, 162, 248, 217, 59, 91, 223, 59, 94, 103, 101, 214, 30, 151, 105, 84, 189, 165, 59, 252, 139, 193, 71, 34, 234, 209, 28, 80, 127, 177, 127, 30, 208, 56, 131, 47, 98, 7, 1, 126, 102, 176, 149, 199, 12, 104, 49, 47, 158, 150, 158, 35, 16, 242, 161, 63, 68, 1, 106, 1, 243, 218, 26, 134, 141, 82, 4, 186, 45, 158, 198, 243, 241, 108, 44, 161};
    const unsigned poly_sz = 197;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 4), 20);
}

TEST(GfPolyEval, Test44)
{
    unsigned char poly[] = {249, 80, 4, 111, 235, 203, 105, 18, 177, 240, 207, 198, 227, 29, 111, 190, 1, 235, 170, 221, 165, 56, 45, 221, 185, 74, 139, 167, 106, 131, 228, 166, 121, 230, 176, 54, 38, 0, 23, 248, 121, 66, 158, 160, 247, 242, 60, 159, 1, 147, 63, 242, 49, 184, 248, 99, 146, 184, 192, 9, 30, 128, 182, 118, 26, 83, 16, 229, 247, 154, 165, 185, 193, 78, 251, 168, 204, 212, 243, 18, 162, 219, 61, 91, 149, 67, 86, 218, 172, 111, 141, 183, 18, 36, 245, 70, 244, 66, 84, 3, 110, 189, 239, 83, 201, 27, 126, 145, 208, 15, 56, 139, 94, 190, 250, 134, 250, 192, 209, 62, 61, 238, 162, 248, 217, 59, 91, 223, 59, 94, 103, 101, 214, 30, 151, 105, 84, 189, 165, 59, 252, 139, 193, 71, 34, 234, 209, 28, 80, 127, 177, 127, 30, 208, 56, 131, 47, 98, 7, 1, 126, 102, 176, 149, 199, 12, 104, 49, 47, 158, 150, 158, 35, 16, 242, 161, 63, 68, 1, 106, 1, 243, 218, 26, 134, 141, 82, 4, 186, 45, 158, 198, 243, 241, 108, 44, 161};
    const unsigned poly_sz = 197;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 8), 144);
}

TEST(GfPolyEval, Test45)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 1), 254);
}

TEST(GfPolyEval, Test46)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 2), 253);
}

TEST(GfPolyEval, Test47)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 4), 251);
}

TEST(GfPolyEval, Test48)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 8), 247);
}

TEST(GfPolyEval, Test49)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 16), 239);
}

TEST(GfPolyEval, Test50)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 32), 223);
}

TEST(GfPolyEval, Test51)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 64), 191);
}

TEST(GfPolyEval, Test52)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 128), 127);
}

TEST(GfPolyEval, Test53)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 29), 226);
}

TEST(GfPolyEval, Test54)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 58), 197);
}

TEST(GfPolyEval, Test55)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 116), 139);
}

TEST(GfPolyEval, Test56)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 232), 23);
}

TEST(GfPolyEval, Test57)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 205), 50);
}

TEST(GfPolyEval, Test58)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 135), 120);
}

TEST(GfPolyEval, Test59)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 19), 236);
}

TEST(GfPolyEval, Test60)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 38), 217);
}

TEST(GfPolyEval, Test61)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 76), 179);
}

TEST(GfPolyEval, Test62)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 152), 103);
}

TEST(GfPolyEval, Test63)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 45), 210);
}

TEST(GfPolyEval, Test64)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 90), 165);
}

TEST(GfPolyEval, Test65)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 180), 75);
}

TEST(GfPolyEval, Test66)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 117), 138);
}

TEST(GfPolyEval, Test67)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 234), 21);
}

TEST(GfPolyEval, Test68)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 201), 54);
}

TEST(GfPolyEval, Test69)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 143), 112);
}

TEST(GfPolyEval, Test70)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 3), 252);
}

TEST(GfPolyEval, Test71)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 6), 249);
}

TEST(GfPolyEval, Test72)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 12), 243);
}

TEST(GfPolyEval, Test73)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 24), 231);
}

TEST(GfPolyEval, Test74)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 48), 207);
}

TEST(GfPolyEval, Test75)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 96), 159);
}

TEST(GfPolyEval, Test76)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 192), 63);
}

TEST(GfPolyEval, Test77)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 157), 98);
}

TEST(GfPolyEval, Test78)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 39), 216);
}

TEST(GfPolyEval, Test79)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 78), 177);
}

TEST(GfPolyEval, Test80)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 156), 99);
}

TEST(GfPolyEval, Test81)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 37), 218);
}

TEST(GfPolyEval, Test82)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 74), 181);
}

TEST(GfPolyEval, Test83)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 148), 107);
}

TEST(GfPolyEval, Test84)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 53), 202);
}

TEST(GfPolyEval, Test85)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 106), 149);
}

TEST(GfPolyEval, Test86)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 212), 43);
}

TEST(GfPolyEval, Test87)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 181), 74);
}

TEST(GfPolyEval, Test88)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 119), 136);
}

TEST(GfPolyEval, Test89)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 238), 17);
}

TEST(GfPolyEval, Test90)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 193), 62);
}

TEST(GfPolyEval, Test91)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 159), 96);
}

TEST(GfPolyEval, Test92)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 35), 220);
}

TEST(GfPolyEval, Test93)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 70), 185);
}

TEST(GfPolyEval, Test94)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 140), 115);
}

TEST(GfPolyEval, Test95)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 5), 250);
}

TEST(GfPolyEval, Test96)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 10), 245);
}

TEST(GfPolyEval, Test97)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 20), 235);
}

TEST(GfPolyEval, Test98)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 40), 215);
}

TEST(GfPolyEval, Test99)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 80), 175);
}

TEST(GfPolyEval, Test100)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 160), 95);
}

TEST(GfPolyEval, Test101)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 93), 162);
}

TEST(GfPolyEval, Test102)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 186), 69);
}

TEST(GfPolyEval, Test103)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 105), 150);
}

TEST(GfPolyEval, Test104)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 210), 45);
}

TEST(GfPolyEval, Test105)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 185), 70);
}

TEST(GfPolyEval, Test106)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 111), 144);
}

TEST(GfPolyEval, Test107)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 222), 33);
}

TEST(GfPolyEval, Test108)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 161), 94);
}

TEST(GfPolyEval, Test109)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 95), 160);
}

TEST(GfPolyEval, Test110)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 190), 65);
}

TEST(GfPolyEval, Test111)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 97), 158);
}

TEST(GfPolyEval, Test112)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 194), 61);
}

TEST(GfPolyEval, Test113)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 153), 102);
}

TEST(GfPolyEval, Test114)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 47), 208);
}

TEST(GfPolyEval, Test115)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 94), 161);
}

TEST(GfPolyEval, Test116)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 188), 67);
}

TEST(GfPolyEval, Test117)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 101), 154);
}

TEST(GfPolyEval, Test118)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 202), 53);
}

TEST(GfPolyEval, Test119)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 137), 118);
}

TEST(GfPolyEval, Test120)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 15), 240);
}

TEST(GfPolyEval, Test121)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 30), 225);
}

TEST(GfPolyEval, Test122)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 60), 195);
}

TEST(GfPolyEval, Test123)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 120), 135);
}

TEST(GfPolyEval, Test124)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 240), 15);
}

TEST(GfPolyEval, Test125)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 253), 2);
}

TEST(GfPolyEval, Test126)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 231), 24);
}

TEST(GfPolyEval, Test127)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 211), 44);
}

TEST(GfPolyEval, Test128)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 187), 68);
}

TEST(GfPolyEval, Test129)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 107), 148);
}

TEST(GfPolyEval, Test130)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 214), 41);
}

TEST(GfPolyEval, Test131)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 177), 78);
}

TEST(GfPolyEval, Test132)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 127), 128);
}

TEST(GfPolyEval, Test133)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 254), 1);
}

TEST(GfPolyEval, Test134)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 225), 30);
}

TEST(GfPolyEval, Test135)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 223), 32);
}

TEST(GfPolyEval, Test136)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 163), 92);
}

TEST(GfPolyEval, Test137)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 91), 164);
}

TEST(GfPolyEval, Test138)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 182), 73);
}

TEST(GfPolyEval, Test139)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 113), 142);
}

TEST(GfPolyEval, Test140)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 226), 29);
}

TEST(GfPolyEval, Test141)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 217), 38);
}

TEST(GfPolyEval, Test142)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 175), 80);
}

TEST(GfPolyEval, Test143)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 67), 188);
}

TEST(GfPolyEval, Test144)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 134), 121);
}

TEST(GfPolyEval, Test145)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 17), 238);
}

TEST(GfPolyEval, Test146)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 34), 221);
}

TEST(GfPolyEval, Test147)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 68), 187);
}

TEST(GfPolyEval, Test148)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 136), 119);
}

TEST(GfPolyEval, Test149)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 13), 242);
}

TEST(GfPolyEval, Test150)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 26), 229);
}

TEST(GfPolyEval, Test151)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 52), 203);
}

TEST(GfPolyEval, Test152)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 104), 151);
}

TEST(GfPolyEval, Test153)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 208), 47);
}

TEST(GfPolyEval, Test154)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 189), 66);
}

TEST(GfPolyEval, Test155)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 103), 152);
}

TEST(GfPolyEval, Test156)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 206), 49);
}

TEST(GfPolyEval, Test157)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 129), 126);
}

TEST(GfPolyEval, Test158)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 31), 224);
}

TEST(GfPolyEval, Test159)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 62), 193);
}

TEST(GfPolyEval, Test160)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 124), 131);
}

TEST(GfPolyEval, Test161)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 248), 7);
}

TEST(GfPolyEval, Test162)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 237), 18);
}

TEST(GfPolyEval, Test163)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 199), 56);
}

TEST(GfPolyEval, Test164)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 147), 108);
}

TEST(GfPolyEval, Test165)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 59), 196);
}

TEST(GfPolyEval, Test166)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 118), 137);
}

TEST(GfPolyEval, Test167)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 236), 19);
}

TEST(GfPolyEval, Test168)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 197), 58);
}

TEST(GfPolyEval, Test169)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 151), 104);
}

TEST(GfPolyEval, Test170)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 51), 204);
}

TEST(GfPolyEval, Test171)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 102), 153);
}

TEST(GfPolyEval, Test172)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 204), 51);
}

TEST(GfPolyEval, Test173)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 133), 122);
}

TEST(GfPolyEval, Test174)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 23), 232);
}

TEST(GfPolyEval, Test175)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 46), 209);
}

TEST(GfPolyEval, Test176)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 92), 163);
}

TEST(GfPolyEval, Test177)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 184), 71);
}

TEST(GfPolyEval, Test178)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 109), 146);
}

TEST(GfPolyEval, Test179)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 218), 37);
}

TEST(GfPolyEval, Test180)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 169), 86);
}

TEST(GfPolyEval, Test181)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 79), 176);
}

TEST(GfPolyEval, Test182)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 158), 97);
}

TEST(GfPolyEval, Test183)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 33), 222);
}

TEST(GfPolyEval, Test184)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 66), 189);
}

TEST(GfPolyEval, Test185)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 132), 123);
}

TEST(GfPolyEval, Test186)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 21), 234);
}

TEST(GfPolyEval, Test187)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 42), 213);
}

TEST(GfPolyEval, Test188)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 84), 171);
}

TEST(GfPolyEval, Test189)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 168), 87);
}

TEST(GfPolyEval, Test190)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 77), 178);
}

TEST(GfPolyEval, Test191)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 154), 101);
}

TEST(GfPolyEval, Test192)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 41), 214);
}

TEST(GfPolyEval, Test193)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 82), 173);
}

TEST(GfPolyEval, Test194)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 164), 91);
}

TEST(GfPolyEval, Test195)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 85), 170);
}

TEST(GfPolyEval, Test196)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 170), 85);
}

TEST(GfPolyEval, Test197)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 73), 182);
}

TEST(GfPolyEval, Test198)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 146), 109);
}

TEST(GfPolyEval, Test199)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 57), 198);
}

TEST(GfPolyEval, Test200)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 114), 141);
}

TEST(GfPolyEval, Test201)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 228), 27);
}

TEST(GfPolyEval, Test202)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 213), 42);
}

TEST(GfPolyEval, Test203)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 183), 72);
}

TEST(GfPolyEval, Test204)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 115), 140);
}

TEST(GfPolyEval, Test205)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 230), 25);
}

TEST(GfPolyEval, Test206)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 209), 46);
}

TEST(GfPolyEval, Test207)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 191), 64);
}

TEST(GfPolyEval, Test208)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 99), 156);
}

TEST(GfPolyEval, Test209)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 198), 57);
}

TEST(GfPolyEval, Test210)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 145), 110);
}

TEST(GfPolyEval, Test211)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 63), 192);
}

TEST(GfPolyEval, Test212)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 126), 129);
}

TEST(GfPolyEval, Test213)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 252), 3);
}

TEST(GfPolyEval, Test214)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 229), 26);
}

TEST(GfPolyEval, Test215)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 215), 40);
}

TEST(GfPolyEval, Test216)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 179), 76);
}

TEST(GfPolyEval, Test217)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 123), 132);
}

TEST(GfPolyEval, Test218)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 246), 9);
}

TEST(GfPolyEval, Test219)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 241), 14);
}

TEST(GfPolyEval, Test220)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 255), 0);
}

TEST(GfPolyEval, Test221)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 227), 28);
}

TEST(GfPolyEval, Test222)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 219), 36);
}

TEST(GfPolyEval, Test223)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 171), 84);
}

TEST(GfPolyEval, Test224)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 75), 180);
}

TEST(GfPolyEval, Test225)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 150), 105);
}

TEST(GfPolyEval, Test226)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 49), 206);
}

TEST(GfPolyEval, Test227)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 98), 157);
}

TEST(GfPolyEval, Test228)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 196), 59);
}

TEST(GfPolyEval, Test229)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 149), 106);
}

TEST(GfPolyEval, Test230)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 55), 200);
}

TEST(GfPolyEval, Test231)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 110), 145);
}

TEST(GfPolyEval, Test232)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 220), 35);
}

TEST(GfPolyEval, Test233)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 165), 90);
}

TEST(GfPolyEval, Test234)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 87), 168);
}

TEST(GfPolyEval, Test235)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 174), 81);
}

TEST(GfPolyEval, Test236)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 65), 190);
}

TEST(GfPolyEval, Test237)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 130), 125);
}

TEST(GfPolyEval, Test238)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 25), 230);
}

TEST(GfPolyEval, Test239)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 50), 205);
}

TEST(GfPolyEval, Test240)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 100), 155);
}

TEST(GfPolyEval, Test241)
{
    unsigned char poly[] = {1, 255};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 200), 55);
}

TEST(GfPolyEval, Test242)
{
    unsigned char poly[] = {121, 0};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 253), 74);
}

TEST(GfPolyEval, Test243)
{
    unsigned char poly[] = {249, 80, 4, 111, 235, 203, 105, 18, 177, 240, 207, 198, 227, 29, 111, 190, 1, 235, 170, 221, 165, 56, 45, 221, 185, 74, 139, 167, 106, 131, 228, 166, 121, 230, 176, 54, 38, 0, 23, 248, 121, 66, 158, 160, 247, 242, 60, 159, 1, 147, 63, 242, 49, 184, 248, 99, 146, 184, 192, 9, 30, 128, 182, 118, 26, 83, 16, 229, 247, 154, 165, 185, 193, 78, 251, 168, 204, 212, 243, 18, 162, 219, 61, 91, 149, 67, 86, 218, 172, 111, 141, 183, 18, 36, 245, 70, 244, 66, 84, 3, 110, 189, 239, 83, 201, 27, 126, 145, 208, 15, 56, 139, 94, 190, 250, 134, 250, 192, 209, 62, 61, 238, 162, 248, 217, 59, 91, 223, 59, 94, 103, 101, 214, 30, 151, 105, 84, 189, 165, 59, 252, 139, 193, 71, 34, 20, 209, 28, 80, 127, 177, 127, 30, 208, 56, 131, 47, 98, 7, 1, 126, 102, 176, 149, 199, 12, 104, 49, 47, 158, 150, 158, 35, 16, 242, 161, 63, 68, 1, 106, 1, 243, 218, 26, 134, 141, 82, 4, 186, 45, 158, 198, 243, 241, 108, 44, 161};
    const unsigned poly_sz = 197;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 1), 135);
}

TEST(GfPolyEval, Test244)
{
    unsigned char poly[] = {249, 80, 4, 111, 235, 203, 105, 18, 177, 240, 207, 198, 227, 29, 111, 190, 1, 235, 170, 221, 165, 56, 45, 221, 185, 74, 139, 167, 106, 131, 228, 166, 121, 230, 176, 54, 38, 0, 23, 248, 121, 66, 158, 160, 247, 242, 60, 159, 1, 147, 63, 242, 49, 184, 248, 99, 146, 184, 192, 9, 30, 128, 182, 118, 26, 83, 16, 229, 247, 154, 165, 185, 193, 78, 251, 168, 204, 212, 243, 18, 162, 219, 61, 91, 149, 67, 86, 218, 172, 111, 141, 183, 18, 36, 245, 70, 244, 66, 84, 3, 110, 189, 239, 83, 201, 27, 126, 145, 208, 15, 56, 139, 94, 190, 250, 134, 250, 192, 209, 62, 61, 238, 162, 248, 217, 59, 91, 223, 59, 94, 103, 101, 214, 30, 151, 105, 84, 189, 165, 59, 252, 139, 193, 71, 34, 20, 209, 28, 80, 127, 177, 127, 30, 208, 56, 131, 47, 98, 7, 1, 126, 102, 176, 149, 199, 12, 104, 49, 47, 158, 150, 158, 35, 16, 242, 161, 63, 68, 1, 106, 1, 243, 218, 26, 134, 141, 82, 4, 186, 45, 158, 198, 243, 241, 108, 44, 161};
    const unsigned poly_sz = 197;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 2), 250);
}

TEST(GfPolyEval, Test245)
{
    unsigned char poly[] = {249, 80, 4, 111, 235, 203, 105, 18, 177, 240, 207, 198, 227, 29, 111, 190, 1, 235, 170, 221, 165, 56, 45, 221, 185, 74, 139, 167, 106, 131, 228, 166, 121, 230, 176, 54, 38, 0, 23, 248, 121, 66, 158, 160, 247, 242, 60, 159, 1, 147, 63, 242, 49, 184, 248, 99, 146, 184, 192, 9, 30, 128, 182, 118, 26, 83, 16, 229, 247, 154, 165, 185, 193, 78, 251, 168, 204, 212, 243, 18, 162, 219, 61, 91, 149, 67, 86, 218, 172, 111, 141, 183, 18, 36, 245, 70, 244, 66, 84, 3, 110, 189, 239, 83, 201, 27, 126, 145, 208, 15, 56, 139, 94, 190, 250, 134, 250, 192, 209, 62, 61, 238, 162, 248, 217, 59, 91, 223, 59, 94, 103, 101, 214, 30, 151, 105, 84, 189, 165, 59, 252, 139, 193, 71, 34, 20, 209, 28, 80, 127, 177, 127, 30, 208, 56, 131, 47, 98, 7, 1, 126, 102, 176, 149, 199, 12, 104, 49, 47, 158, 150, 158, 35, 16, 242, 161, 63, 68, 1, 106, 1, 243, 218, 26, 134, 141, 82, 4, 186, 45, 158, 198, 243, 241, 108, 44, 161};
    const unsigned poly_sz = 197;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 4), 186);
}

TEST(GfPolyEval, Test246)
{
    unsigned char poly[] = {249, 80, 4, 111, 235, 203, 105, 18, 177, 240, 207, 198, 227, 29, 111, 190, 1, 235, 170, 221, 165, 56, 45, 221, 185, 74, 139, 167, 106, 131, 228, 166, 121, 230, 176, 54, 38, 0, 23, 248, 121, 66, 158, 160, 247, 242, 60, 159, 1, 147, 63, 242, 49, 184, 248, 99, 146, 184, 192, 9, 30, 128, 182, 118, 26, 83, 16, 229, 247, 154, 165, 185, 193, 78, 251, 168, 204, 212, 243, 18, 162, 219, 61, 91, 149, 67, 86, 218, 172, 111, 141, 183, 18, 36, 245, 70, 244, 66, 84, 3, 110, 189, 239, 83, 201, 27, 126, 145, 208, 15, 56, 139, 94, 190, 250, 134, 250, 192, 209, 62, 61, 238, 162, 248, 217, 59, 91, 223, 59, 94, 103, 101, 214, 30, 151, 105, 84, 189, 165, 59, 252, 139, 193, 71, 34, 20, 209, 28, 80, 127, 177, 127, 30, 208, 56, 131, 47, 98, 7, 1, 126, 102, 176, 149, 199, 12, 104, 49, 47, 158, 150, 158, 35, 16, 242, 161, 63, 68, 1, 106, 1, 243, 218, 26, 134, 141, 82, 4, 186, 45, 158, 198, 243, 241, 108, 44, 161};
    const unsigned poly_sz = 197;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 8), 200);
}

TEST(GfPolyEval, Test247)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 1), 188);
}

TEST(GfPolyEval, Test248)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 2), 187);
}

TEST(GfPolyEval, Test249)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 4), 171);
}

TEST(GfPolyEval, Test250)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 8), 243);
}

TEST(GfPolyEval, Test251)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 16), 190);
}

TEST(GfPolyEval, Test252)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 32), 247);
}

TEST(GfPolyEval, Test253)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 64), 14);
}

TEST(GfPolyEval, Test254)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 128), 80);
}

TEST(GfPolyEval, Test255)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 29), 18);
}

TEST(GfPolyEval, Test256)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 58), 73);
}

TEST(GfPolyEval, Test257)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 116), 164);
}

TEST(GfPolyEval, Test258)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 232), 18);
}

TEST(GfPolyEval, Test259)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 205), 186);
}

TEST(GfPolyEval, Test260)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 135), 180);
}

TEST(GfPolyEval, Test261)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 19), 185);
}

TEST(GfPolyEval, Test262)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 38), 231);
}

TEST(GfPolyEval, Test263)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 76), 86);
}

TEST(GfPolyEval, Test264)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 152), 29);
}

TEST(GfPolyEval, Test265)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 45), 91);
}

TEST(GfPolyEval, Test266)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 90), 176);
}

TEST(GfPolyEval, Test267)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 180), 250);
}

TEST(GfPolyEval, Test268)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 117), 80);
}

TEST(GfPolyEval, Test269)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 234), 225);
}

TEST(GfPolyEval, Test270)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 201), 89);
}

TEST(GfPolyEval, Test271)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 143), 15);
}

TEST(GfPolyEval, Test272)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 3), 79);
}

TEST(GfPolyEval, Test273)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 6), 88);
}

TEST(GfPolyEval, Test274)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 12), 16);
}

TEST(GfPolyEval, Test275)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 24), 5);
}

TEST(GfPolyEval, Test276)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 48), 1);
}

TEST(GfPolyEval, Test277)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 96), 177);
}

TEST(GfPolyEval, Test278)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 192), 22);
}

TEST(GfPolyEval, Test279)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 157), 10);
}

TEST(GfPolyEval, Test280)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 39), 19);
}

TEST(GfPolyEval, Test281)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 78), 165);
}

TEST(GfPolyEval, Test282)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 156), 254);
}

TEST(GfPolyEval, Test283)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 37), 224);
}

TEST(GfPolyEval, Test284)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 74), 70);
}

TEST(GfPolyEval, Test285)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 148), 69);
}

TEST(GfPolyEval, Test286)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 53), 22);
}

TEST(GfPolyEval, Test287)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 106), 249);
}

TEST(GfPolyEval, Test288)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 212), 3);
}

TEST(GfPolyEval, Test289)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 181), 14);
}

TEST(GfPolyEval, Test290)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 119), 163);
}

TEST(GfPolyEval, Test291)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 238), 2);
}

TEST(GfPolyEval, Test292)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 193), 226);
}

TEST(GfPolyEval, Test293)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 159), 249);
}

TEST(GfPolyEval, Test294)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 35), 240);
}

TEST(GfPolyEval, Test295)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 70), 30);
}

TEST(GfPolyEval, Test296)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 140), 8);
}

TEST(GfPolyEval, Test297)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 5), 95);
}

TEST(GfPolyEval, Test298)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 10), 0);
}

TEST(GfPolyEval, Test299)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 20), 93);
}

TEST(GfPolyEval, Test300)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 40), 76);
}

TEST(GfPolyEval, Test301)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 80), 248);
}

TEST(GfPolyEval, Test302)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 160), 239);
}

TEST(GfPolyEval, Test303)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 93), 84);
}

TEST(GfPolyEval, Test304)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 186), 81);
}

TEST(GfPolyEval, Test305)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 105), 254);
}

TEST(GfPolyEval, Test306)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 210), 19);
}

TEST(GfPolyEval, Test307)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 185), 86);
}

TEST(GfPolyEval, Test308)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 111), 238);
}

TEST(GfPolyEval, Test309)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 222), 75);
}

TEST(GfPolyEval, Test310)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 161), 27);
}

TEST(GfPolyEval, Test311)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 95), 167);
}

TEST(GfPolyEval, Test312)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 190), 178);
}

TEST(GfPolyEval, Test313)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 97), 69);
}

TEST(GfPolyEval, Test314)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 194), 229);
}

TEST(GfPolyEval, Test315)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 153), 233);
}

TEST(GfPolyEval, Test316)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 47), 168);
}

TEST(GfPolyEval, Test317)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 94), 83);
}

TEST(GfPolyEval, Test318)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 188), 65);
}

TEST(GfPolyEval, Test319)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 101), 166);
}

TEST(GfPolyEval, Test320)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 202), 94);
}

TEST(GfPolyEval, Test321)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 137), 31);
}

TEST(GfPolyEval, Test322)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 15), 23);
}

TEST(GfPolyEval, Test323)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 30), 21);
}

TEST(GfPolyEval, Test324)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 60), 89);
}

TEST(GfPolyEval, Test325)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 120), 252);
}

TEST(GfPolyEval, Test326)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 240), 95);
}

TEST(GfPolyEval, Test327)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 253), 243);
}

TEST(GfPolyEval, Test328)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 231), 77);
}

TEST(GfPolyEval, Test329)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 211), 231);
}

TEST(GfPolyEval, Test330)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 187), 165);
}

TEST(GfPolyEval, Test331)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 107), 13);
}

TEST(GfPolyEval, Test332)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 214), 240);
}

TEST(GfPolyEval, Test333)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 177), 237);
}

TEST(GfPolyEval, Test334)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 127), 24);
}

TEST(GfPolyEval, Test335)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 254), 244);
}

TEST(GfPolyEval, Test336)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 225), 93);
}

TEST(GfPolyEval, Test337)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 223), 191);
}

TEST(GfPolyEval, Test338)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 163), 232);
}

TEST(GfPolyEval, Test339)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 91), 68);
}

TEST(GfPolyEval, Test340)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 182), 9);
}

TEST(GfPolyEval, Test341)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 113), 179);
}

TEST(GfPolyEval, Test342)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 226), 90);
}

TEST(GfPolyEval, Test343)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 217), 175);
}

TEST(GfPolyEval, Test344)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 175), 176);
}

TEST(GfPolyEval, Test345)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 67), 9);
}

TEST(GfPolyEval, Test346)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 134), 64);
}

TEST(GfPolyEval, Test347)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 17), 74);
}

TEST(GfPolyEval, Test348)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 34), 4);
}

TEST(GfPolyEval, Test349)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 68), 237);
}

TEST(GfPolyEval, Test350)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 136), 235);
}

TEST(GfPolyEval, Test351)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 13), 228);
}

TEST(GfPolyEval, Test352)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 26), 246);
}

TEST(GfPolyEval, Test353)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 52), 226);
}

TEST(GfPolyEval, Test354)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 104), 10);
}

TEST(GfPolyEval, Test355)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 208), 224);
}

TEST(GfPolyEval, Test356)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 189), 181);
}

TEST(GfPolyEval, Test357)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 103), 85);
}

TEST(GfPolyEval, Test358)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 206), 189);
}

TEST(GfPolyEval, Test359)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 129), 164);
}

TEST(GfPolyEval, Test360)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 31), 225);
}

TEST(GfPolyEval, Test361)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 62), 170);
}

TEST(GfPolyEval, Test362)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 124), 31);
}

TEST(GfPolyEval, Test363)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 248), 228);
}

TEST(GfPolyEval, Test364)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 237), 5);
}

TEST(GfPolyEval, Test365)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 199), 242);
}

TEST(GfPolyEval, Test366)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 147), 161);
}

TEST(GfPolyEval, Test367)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 59), 189);
}

TEST(GfPolyEval, Test368)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 118), 87);
}

TEST(GfPolyEval, Test369)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 236), 241);
}

TEST(GfPolyEval, Test370)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 197), 1);
}

TEST(GfPolyEval, Test371)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 151), 66);
}

TEST(GfPolyEval, Test372)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 51), 6);
}

TEST(GfPolyEval, Test373)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 102), 161);
}

TEST(GfPolyEval, Test374)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 204), 78);
}

TEST(GfPolyEval, Test375)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 133), 71);
}

TEST(GfPolyEval, Test376)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 23), 90);
}

TEST(GfPolyEval, Test377)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 46), 92);
}

TEST(GfPolyEval, Test378)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 92), 160);
}

TEST(GfPolyEval, Test379)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 184), 162);
}

TEST(GfPolyEval, Test380)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 109), 29);
}

TEST(GfPolyEval, Test381)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 218), 168);
}

TEST(GfPolyEval, Test382)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 169), 160);
}

TEST(GfPolyEval, Test383)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 79), 81);
}

TEST(GfPolyEval, Test384)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 158), 13);
}

TEST(GfPolyEval, Test385)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 33), 3);
}

TEST(GfPolyEval, Test386)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 66), 253);
}

TEST(GfPolyEval, Test387)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 132), 179);
}

TEST(GfPolyEval, Test388)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 21), 169);
}

TEST(GfPolyEval, Test389)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 42), 191);
}

TEST(GfPolyEval, Test390)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 84), 27);
}

TEST(GfPolyEval, Test391)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 168), 84);
}

TEST(GfPolyEval, Test392)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 77), 162);
}

TEST(GfPolyEval, Test393)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 154), 238);
}

TEST(GfPolyEval, Test394)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 41), 184);
}

TEST(GfPolyEval, Test395)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 82), 11);
}

TEST(GfPolyEval, Test396)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 164), 12);
}

TEST(GfPolyEval, Test397)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 85), 239);
}

TEST(GfPolyEval, Test398)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 170), 167);
}

TEST(GfPolyEval, Test399)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 73), 65);
}

TEST(GfPolyEval, Test400)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 146), 85);
}

TEST(GfPolyEval, Test401)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 57), 78);
}

TEST(GfPolyEval, Test402)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 114), 180);
}

TEST(GfPolyEval, Test403)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 228), 74);
}

TEST(GfPolyEval, Test404)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 213), 247);
}

TEST(GfPolyEval, Test405)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 183), 253);
}

TEST(GfPolyEval, Test406)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 115), 64);
}

TEST(GfPolyEval, Test407)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 230), 185);
}

TEST(GfPolyEval, Test408)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 209), 20);
}

TEST(GfPolyEval, Test409)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 191), 70);
}

TEST(GfPolyEval, Test410)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 99), 182);
}

TEST(GfPolyEval, Test411)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 198), 6);
}

TEST(GfPolyEval, Test412)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 145), 82);
}

TEST(GfPolyEval, Test413)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 63), 94);
}

TEST(GfPolyEval, Test414)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 126), 236);
}

TEST(GfPolyEval, Test415)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 252), 7);
}

TEST(GfPolyEval, Test416)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 229), 190);
}

TEST(GfPolyEval, Test417)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 215), 4);
}

TEST(GfPolyEval, Test418)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 179), 30);
}

TEST(GfPolyEval, Test419)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 123), 251);
}

TEST(GfPolyEval, Test420)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 246), 79);
}

TEST(GfPolyEval, Test421)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 241), 171);
}

TEST(GfPolyEval, Test422)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 255), 0);
}

TEST(GfPolyEval, Test423)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 227), 174);
}

TEST(GfPolyEval, Test424)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 219), 92);
}

TEST(GfPolyEval, Test425)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 171), 83);
}

TEST(GfPolyEval, Test426)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 75), 178);
}

TEST(GfPolyEval, Test427)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 150), 182);
}

TEST(GfPolyEval, Test428)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 49), 245);
}

TEST(GfPolyEval, Test429)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 98), 66);
}

TEST(GfPolyEval, Test430)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 196), 245);
}

TEST(GfPolyEval, Test431)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 149), 177);
}

TEST(GfPolyEval, Test432)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 55), 229);
}

TEST(GfPolyEval, Test433)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 110), 26);
}

TEST(GfPolyEval, Test434)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 220), 184);
}

TEST(GfPolyEval, Test435)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 165), 248);
}

TEST(GfPolyEval, Test436)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 87), 28);
}

TEST(GfPolyEval, Test437)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 174), 68);
}

TEST(GfPolyEval, Test438)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 65), 250);
}

TEST(GfPolyEval, Test439)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 130), 163);
}

TEST(GfPolyEval, Test440)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 25), 241);
}

TEST(GfPolyEval, Test441)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 50), 242);
}

TEST(GfPolyEval, Test442)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 100), 82);
}

TEST(GfPolyEval, Test443)
{
    unsigned char poly[] = {1, 245, 72};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 200), 173);
}

TEST(GfPolyEval, Test444)
{
    unsigned char poly[] = {0, 135, 0};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 221), 155);
}

TEST(GfPolyEval, Test445)
{
    unsigned char poly[] = {0, 135, 0};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 253), 182);
}

TEST(GfPolyEval, Test446)
{
    unsigned char poly[] = {85, 141, 23, 248, 109, 76, 238, 92, 88, 106, 70, 49, 54, 4, 212, 255, 152, 158, 207, 123, 12, 79, 39, 73, 162, 249, 191, 184, 201, 242};
    const unsigned poly_sz = 30;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 1), 0);
}

TEST(GfPolyEval, Test447)
{
    unsigned char poly[] = {85, 141, 23, 248, 109, 76, 238, 92, 88, 106, 70, 49, 54, 4, 212, 255, 152, 158, 207, 123, 12, 79, 39, 73, 162, 249, 191, 184, 201, 242};
    const unsigned poly_sz = 30;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 2), 0);
}

TEST(GfPolyEval, Test448)
{
    unsigned char poly[] = {85, 141, 23, 248, 109, 76, 238, 92, 88, 106, 70, 49, 54, 4, 212, 255, 152, 158, 207, 123, 12, 79, 39, 73, 162, 249, 191, 184, 201, 242};
    const unsigned poly_sz = 30;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 4), 0);
}

TEST(GfPolyEval, Test449)
{
    unsigned char poly[] = {85, 141, 23, 248, 109, 76, 238, 92, 88, 106, 70, 49, 54, 4, 212, 255, 152, 158, 207, 123, 12, 79, 39, 73, 162, 249, 191, 184, 201, 242};
    const unsigned poly_sz = 30;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 8), 0);
}

TEST(GfPolyEval, Test450)
{
    unsigned char poly[] = {85, 141, 23, 248, 109, 76, 238, 92, 88, 106, 70, 49, 54, 4, 212, 255, 152, 158, 207, 123, 12, 79, 39, 73, 162, 249, 191, 184, 201, 242};
    const unsigned poly_sz = 30;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 16), 0);
}

TEST(GfPolyEval, Test451)
{
    unsigned char poly[] = {85, 141, 23, 248, 109, 76, 238, 92, 88, 106, 70, 49, 54, 4, 212, 255, 152, 158, 207, 123, 12, 79, 39, 73, 162, 249, 191, 184, 201, 242};
    const unsigned poly_sz = 30;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 32), 0);
}

TEST(GfPolyEval, Test452)
{
    unsigned char poly[] = {85, 141, 23, 248, 109, 76, 238, 92, 88, 106, 70, 49, 54, 4, 212, 255, 152, 158, 207, 123, 12, 79, 39, 73, 162, 249, 191, 184, 201, 242};
    const unsigned poly_sz = 30;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 64), 0);
}

TEST(GfPolyEval, Test453)
{
    unsigned char poly[] = {85, 141, 23, 248, 109, 76, 238, 92, 88, 106, 70, 49, 54, 4, 212, 255, 152, 158, 207, 123, 12, 79, 39, 73, 162, 249, 191, 184, 201, 242};
    const unsigned poly_sz = 30;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 128), 0);
}

TEST(GfPolyEval, Test454)
{
    unsigned char poly[] = {85, 141, 23, 248, 109, 76, 238, 114, 88, 106, 70, 49, 54, 4, 212, 255, 152, 158, 207, 123, 12, 79, 39, 73, 162, 249, 191, 184, 201, 242};
    const unsigned poly_sz = 30;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 1), 46);
}

TEST(GfPolyEval, Test455)
{
    unsigned char poly[] = {85, 141, 23, 248, 109, 76, 238, 114, 88, 106, 70, 49, 54, 4, 212, 255, 152, 158, 207, 123, 12, 79, 39, 73, 162, 249, 191, 184, 201, 242};
    const unsigned poly_sz = 30;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 2), 73);
}

TEST(GfPolyEval, Test456)
{
    unsigned char poly[] = {85, 141, 23, 248, 109, 76, 238, 114, 88, 106, 70, 49, 54, 4, 212, 255, 152, 158, 207, 123, 12, 79, 39, 73, 162, 249, 191, 184, 201, 242};
    const unsigned poly_sz = 30;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 4), 241);
}

TEST(GfPolyEval, Test457)
{
    unsigned char poly[] = {85, 141, 23, 248, 109, 76, 238, 114, 88, 106, 70, 49, 54, 4, 212, 255, 152, 158, 207, 123, 12, 79, 39, 73, 162, 249, 191, 184, 201, 242};
    const unsigned poly_sz = 30;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 8), 200);
}

TEST(GfPolyEval, Test458)
{
    unsigned char poly[] = {85, 141, 23, 248, 109, 76, 238, 114, 88, 106, 70, 49, 54, 4, 212, 255, 152, 158, 207, 123, 12, 79, 39, 73, 162, 249, 191, 184, 201, 242};
    const unsigned poly_sz = 30;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 16), 43);
}

TEST(GfPolyEval, Test459)
{
    unsigned char poly[] = {85, 141, 23, 248, 109, 76, 238, 114, 88, 106, 70, 49, 54, 4, 212, 255, 152, 158, 207, 123, 12, 79, 39, 73, 162, 249, 191, 184, 201, 242};
    const unsigned poly_sz = 30;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 32), 44);
}

TEST(GfPolyEval, Test460)
{
    unsigned char poly[] = {85, 141, 23, 248, 109, 76, 238, 114, 88, 106, 70, 49, 54, 4, 212, 255, 152, 158, 207, 123, 12, 79, 39, 73, 162, 249, 191, 184, 201, 242};
    const unsigned poly_sz = 30;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 64), 128);
}

TEST(GfPolyEval, Test461)
{
    unsigned char poly[] = {85, 141, 23, 248, 109, 76, 238, 114, 88, 106, 70, 49, 54, 4, 212, 255, 152, 158, 207, 123, 12, 79, 39, 73, 162, 249, 191, 184, 201, 242};
    const unsigned poly_sz = 30;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 128), 48);
}

TEST(GfPolyEval, Test462)
{
    unsigned char poly[] = {1, 234};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 1), 235);
}

TEST(GfPolyEval, Test463)
{
    unsigned char poly[] = {1, 234};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 2), 232);
}

TEST(GfPolyEval, Test464)
{
    unsigned char poly[] = {1, 234};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 4), 238);
}

TEST(GfPolyEval, Test465)
{
    unsigned char poly[] = {1, 234};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 8), 226);
}

TEST(GfPolyEval, Test466)
{
    unsigned char poly[] = {1, 234};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 16), 250);
}

TEST(GfPolyEval, Test467)
{
    unsigned char poly[] = {1, 234};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 32), 202);
}

TEST(GfPolyEval, Test468)
{
    unsigned char poly[] = {1, 234};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 64), 170);
}

TEST(GfPolyEval, Test469)
{
    unsigned char poly[] = {1, 234};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 128), 106);
}

TEST(GfPolyEval, Test470)
{
    unsigned char poly[] = {1, 234};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 29), 247);
}

TEST(GfPolyEval, Test471)
{
    unsigned char poly[] = {1, 234};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 58), 208);
}

TEST(GfPolyEval, Test472)
{
    unsigned char poly[] = {1, 234};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 116), 158);
}

TEST(GfPolyEval, Test473)
{
    unsigned char poly[] = {1, 234};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 232), 2);
}

TEST(GfPolyEval, Test474)
{
    unsigned char poly[] = {1, 234};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 205), 39);
}

TEST(GfPolyEval, Test475)
{
    unsigned char poly[] = {1, 234};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 135), 109);
}

TEST(GfPolyEval, Test476)
{
    unsigned char poly[] = {1, 234};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 19), 249);
}

TEST(GfPolyEval, Test477)
{
    unsigned char poly[] = {1, 234};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 38), 204);
}

TEST(GfPolyEval, Test478)
{
    unsigned char poly[] = {1, 234};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 76), 166);
}

TEST(GfPolyEval, Test479)
{
    unsigned char poly[] = {1, 234};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 152), 114);
}

TEST(GfPolyEval, Test480)
{
    unsigned char poly[] = {1, 234};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 45), 199);
}

TEST(GfPolyEval, Test481)
{
    unsigned char poly[] = {1, 234};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 90), 176);
}

TEST(GfPolyEval, Test482)
{
    unsigned char poly[] = {1, 234};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 180), 94);
}

TEST(GfPolyEval, Test483)
{
    unsigned char poly[] = {1, 234};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 117), 159);
}

TEST(GfPolyEval, Test484)
{
    unsigned char poly[] = {1, 234};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 234), 0);
}

TEST(GfPolyEval, Test485)
{
    unsigned char poly[] = {1, 234};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 201), 35);
}

TEST(GfPolyEval, Test486)
{
    unsigned char poly[] = {1, 234};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 143), 101);
}

TEST(GfPolyEval, Test487)
{
    unsigned char poly[] = {1, 234};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 3), 233);
}

TEST(GfPolyEval, Test488)
{
    unsigned char poly[] = {1, 234};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 6), 236);
}

TEST(GfPolyEval, Test489)
{
    unsigned char poly[] = {1, 234};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 12), 230);
}

TEST(GfPolyEval, Test490)
{
    unsigned char poly[] = {1, 234};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 24), 242);
}

TEST(GfPolyEval, Test491)
{
    unsigned char poly[] = {1, 234};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 48), 218);
}

TEST(GfPolyEval, Test492)
{
    unsigned char poly[] = {46, 0};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 243), 208);
}

TEST(GfPolyEval, Test493)
{
    unsigned char poly[] = {85, 141, 23, 248, 109, 21, 238, 114, 88, 106, 70, 49, 54, 4, 212, 255, 152, 158, 207, 123, 12, 79, 39, 73, 162, 249, 191, 184, 201, 242};
    const unsigned poly_sz = 30;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 1), 119);
}

TEST(GfPolyEval, Test494)
{
    unsigned char poly[] = {85, 141, 23, 248, 109, 21, 238, 114, 88, 106, 70, 49, 54, 4, 212, 255, 152, 158, 207, 123, 12, 79, 39, 73, 162, 249, 191, 184, 201, 242};
    const unsigned poly_sz = 30;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 2), 178);
}

TEST(GfPolyEval, Test495)
{
    unsigned char poly[] = {85, 141, 23, 248, 109, 21, 238, 114, 88, 106, 70, 49, 54, 4, 212, 255, 152, 158, 207, 123, 12, 79, 39, 73, 162, 249, 191, 184, 201, 242};
    const unsigned poly_sz = 30;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 4), 249);
}

TEST(GfPolyEval, Test496)
{
    unsigned char poly[] = {85, 141, 23, 248, 109, 21, 238, 114, 88, 106, 70, 49, 54, 4, 212, 255, 152, 158, 207, 123, 12, 79, 39, 73, 162, 249, 191, 184, 201, 242};
    const unsigned poly_sz = 30;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 8), 196);
}

TEST(GfPolyEval, Test497)
{
    unsigned char poly[] = {85, 141, 23, 248, 109, 21, 238, 114, 88, 106, 70, 49, 54, 4, 212, 255, 152, 158, 207, 123, 12, 79, 39, 73, 162, 249, 191, 184, 201, 242};
    const unsigned poly_sz = 30;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 16), 33);
}

TEST(GfPolyEval, Test498)
{
    unsigned char poly[] = {85, 141, 23, 248, 109, 21, 238, 114, 88, 106, 70, 49, 54, 4, 212, 255, 152, 158, 207, 123, 12, 79, 39, 73, 162, 249, 191, 184, 201, 242};
    const unsigned poly_sz = 30;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 32), 35);
}

TEST(GfPolyEval, Test499)
{
    unsigned char poly[] = {85, 141, 23, 248, 109, 21, 238, 114, 88, 106, 70, 49, 54, 4, 212, 255, 152, 158, 207, 123, 12, 79, 39, 73, 162, 249, 191, 184, 201, 242};
    const unsigned poly_sz = 30;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 64), 6);
}

TEST(GfPolyEval, Test500)
{
    unsigned char poly[] = {85, 141, 23, 248, 109, 21, 238, 114, 88, 106, 70, 49, 54, 4, 212, 255, 152, 158, 207, 123, 12, 79, 39, 73, 162, 249, 191, 184, 201, 242};
    const unsigned poly_sz = 30;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 128), 245);
}

TEST(GfPolyEval, Test501)
{
    unsigned char poly[] = {1, 101, 159};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 1), 251);
}

TEST(GfPolyEval, Test502)
{
    unsigned char poly[] = {1, 101, 159};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 2), 81);
}

TEST(GfPolyEval, Test503)
{
    unsigned char poly[] = {1, 101, 159};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 4), 6);
}

TEST(GfPolyEval, Test504)
{
    unsigned char poly[] = {1, 101, 159};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 8), 208);
}

TEST(GfPolyEval, Test505)
{
    unsigned char poly[] = {1, 101, 159};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 16), 156);
}

TEST(GfPolyEval, Test506)
{
    unsigned char poly[] = {1, 101, 159};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 32), 215);
}

TEST(GfPolyEval, Test507)
{
    unsigned char poly[] = {1, 101, 159};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 64), 42);
}

TEST(GfPolyEval, Test508)
{
    unsigned char poly[] = {1, 101, 159};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 128), 124);
}

TEST(GfPolyEval, Test509)
{
    unsigned char poly[] = {1, 101, 159};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 29), 46);
}

TEST(GfPolyEval, Test510)
{
    unsigned char poly[] = {1, 101, 159};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 58), 85);
}

TEST(GfPolyEval, Test511)
{
    unsigned char poly[] = {1, 101, 159};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 116), 248);
}

TEST(GfPolyEval, Test512)
{
    unsigned char poly[] = {1, 101, 159};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 232), 206);
}

TEST(GfPolyEval, Test513)
{
    unsigned char poly[] = {1, 101, 159};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 205), 123);
}

TEST(GfPolyEval, Test514)
{
    unsigned char poly[] = {1, 101, 159};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 135), 79);
}

TEST(GfPolyEval, Test515)
{
    unsigned char poly[] = {1, 101, 159};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 19), 54);
}

TEST(GfPolyEval, Test516)
{
    unsigned char poly[] = {1, 101, 159};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 38), 128);
}

TEST(GfPolyEval, Test517)
{
    unsigned char poly[] = {1, 101, 159};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 76), 252);
}

TEST(GfPolyEval, Test518)
{
    unsigned char poly[] = {1, 101, 159};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 152), 48);
}

TEST(GfPolyEval, Test519)
{
    unsigned char poly[] = {1, 101, 159};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 45), 101);
}

TEST(GfPolyEval, Test520)
{
    unsigned char poly[] = {1, 101, 159};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 90), 168);
}

TEST(GfPolyEval, Test521)
{
    unsigned char poly[] = {1, 101, 159};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 180), 174);
}

TEST(GfPolyEval, Test522)
{
    unsigned char poly[] = {1, 101, 159};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 117), 156);
}

TEST(GfPolyEval, Test523)
{
    unsigned char poly[] = {1, 101, 159};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 234), 0);
}

TEST(GfPolyEval, Test524)
{
    unsigned char poly[] = {1, 101, 159};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 201), 226);
}

TEST(GfPolyEval, Test525)
{
    unsigned char poly[] = {1, 101, 159};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 143), 0);
}

TEST(GfPolyEval, Test526)
{
    unsigned char poly[] = {1, 101, 159};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 3), 53);
}

TEST(GfPolyEval, Test527)
{
    unsigned char poly[] = {1, 101, 159};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 6), 200);
}

TEST(GfPolyEval, Test528)
{
    unsigned char poly[] = {1, 101, 159};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 12), 73);
}

TEST(GfPolyEval, Test529)
{
    unsigned char poly[] = {1, 101, 159};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 24), 211);
}

TEST(GfPolyEval, Test530)
{
    unsigned char poly[] = {1, 101, 159};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 48), 212);
}

TEST(GfPolyEval, Test531)
{
    unsigned char poly[] = {206, 119, 0};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 243), 183);
}

TEST(GfPolyEval, Test532)
{
    unsigned char poly[] = {206, 119, 0};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 245), 251);
}

TEST(GfPolyEval, Test533)
{
    unsigned char poly[] = {85, 141, 23, 248, 109, 21, 238, 114, 88, 132, 70, 49, 54, 4, 212, 255, 152, 158, 207, 123, 12, 79, 39, 73, 162, 249, 191, 184, 201, 242};
    const unsigned poly_sz = 30;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 1), 153);
}

TEST(GfPolyEval, Test534)
{
    unsigned char poly[] = {85, 141, 23, 248, 109, 21, 238, 114, 88, 132, 70, 49, 54, 4, 212, 255, 152, 158, 207, 123, 12, 79, 39, 73, 162, 249, 191, 184, 201, 242};
    const unsigned poly_sz = 30;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 2), 237);
}

TEST(GfPolyEval, Test535)
{
    unsigned char poly[] = {85, 141, 23, 248, 109, 21, 238, 114, 88, 132, 70, 49, 54, 4, 212, 255, 152, 158, 207, 123, 12, 79, 39, 73, 162, 249, 191, 184, 201, 242};
    const unsigned poly_sz = 30;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 4), 146);
}

TEST(GfPolyEval, Test536)
{
    unsigned char poly[] = {85, 141, 23, 248, 109, 21, 238, 114, 88, 132, 70, 49, 54, 4, 212, 255, 152, 158, 207, 123, 12, 79, 39, 73, 162, 249, 191, 184, 201, 242};
    const unsigned poly_sz = 30;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 8), 201);
}

TEST(GfPolyEval, Test537)
{
    unsigned char poly[] = {85, 141, 23, 248, 109, 21, 238, 114, 88, 132, 70, 49, 54, 4, 212, 255, 152, 158, 207, 123, 12, 79, 39, 73, 162, 249, 191, 184, 201, 242};
    const unsigned poly_sz = 30;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 16), 182);
}

TEST(GfPolyEval, Test538)
{
    unsigned char poly[] = {85, 141, 23, 248, 109, 21, 238, 114, 88, 132, 70, 49, 54, 4, 212, 255, 152, 158, 207, 123, 12, 79, 39, 73, 162, 249, 191, 184, 201, 242};
    const unsigned poly_sz = 30;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 32), 139);
}

TEST(GfPolyEval, Test539)
{
    unsigned char poly[] = {85, 141, 23, 248, 109, 21, 238, 114, 88, 132, 70, 49, 54, 4, 212, 255, 152, 158, 207, 123, 12, 79, 39, 73, 162, 249, 191, 184, 201, 242};
    const unsigned poly_sz = 30;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 64), 192);
}

TEST(GfPolyEval, Test540)
{
    unsigned char poly[] = {85, 141, 23, 248, 109, 21, 238, 114, 88, 132, 70, 49, 54, 4, 212, 255, 152, 158, 207, 123, 12, 79, 39, 73, 162, 249, 191, 184, 201, 242};
    const unsigned poly_sz = 30;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 128), 96);
}

TEST(GfPolyEval, Test541)
{
    unsigned char poly[] = {1, 209, 196, 97};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 1), 117);
}

TEST(GfPolyEval, Test542)
{
    unsigned char poly[] = {1, 209, 196, 97};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 2), 159);
}

TEST(GfPolyEval, Test543)
{
    unsigned char poly[] = {1, 209, 196, 97};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 4), 135);
}

TEST(GfPolyEval, Test544)
{
    unsigned char poly[] = {1, 209, 196, 97};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 8), 75);
}

TEST(GfPolyEval, Test545)
{
    unsigned char poly[] = {1, 209, 196, 97};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 16), 149);
}

TEST(GfPolyEval, Test546)
{
    unsigned char poly[] = {1, 209, 196, 97};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 32), 81);
}

TEST(GfPolyEval, Test547)
{
    unsigned char poly[] = {1, 209, 196, 97};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 64), 237);
}

TEST(GfPolyEval, Test548)
{
    unsigned char poly[] = {1, 209, 196, 97};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 128), 69);
}

TEST(GfPolyEval, Test549)
{
    unsigned char poly[] = {1, 209, 196, 97};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 29), 116);
}

TEST(GfPolyEval, Test550)
{
    unsigned char poly[] = {1, 209, 196, 97};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 58), 164);
}

TEST(GfPolyEval, Test551)
{
    unsigned char poly[] = {1, 209, 196, 97};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 116), 41);
}

TEST(GfPolyEval, Test552)
{
    unsigned char poly[] = {1, 209, 196, 97};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 232), 176);
}

TEST(GfPolyEval, Test553)
{
    unsigned char poly[] = {1, 209, 196, 97};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 205), 23);
}

TEST(GfPolyEval, Test554)
{
    unsigned char poly[] = {1, 209, 196, 97};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 135), 64);
}

TEST(GfPolyEval, Test555)
{
    unsigned char poly[] = {1, 209, 196, 97};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 19), 14);
}

TEST(GfPolyEval, Test556)
{
    unsigned char poly[] = {1, 209, 196, 97};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 38), 230);
}

TEST(GfPolyEval, Test557)
{
    unsigned char poly[] = {1, 209, 196, 97};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 76), 48);
}

TEST(GfPolyEval, Test558)
{
    unsigned char poly[] = {1, 209, 196, 97};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 152), 19);
}

TEST(GfPolyEval, Test559)
{
    unsigned char poly[] = {1, 209, 196, 97};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 45), 132);
}

TEST(GfPolyEval, Test560)
{
    unsigned char poly[] = {1, 209, 196, 97};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 90), 165);
}

TEST(GfPolyEval, Test561)
{
    unsigned char poly[] = {1, 209, 196, 97};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 180), 0);
}

TEST(GfPolyEval, Test562)
{
    unsigned char poly[] = {1, 209, 196, 97};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 117), 253);
}

TEST(GfPolyEval, Test563)
{
    unsigned char poly[] = {1, 209, 196, 97};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 234), 0);
}

TEST(GfPolyEval, Test564)
{
    unsigned char poly[] = {1, 209, 196, 97};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 201), 187);
}

TEST(GfPolyEval, Test565)
{
    unsigned char poly[] = {1, 209, 196, 97};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 143), 0);
}

TEST(GfPolyEval, Test566)
{
    unsigned char poly[] = {1, 209, 196, 97};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 3), 141);
}

TEST(GfPolyEval, Test567)
{
    unsigned char poly[] = {1, 209, 196, 97};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 6), 73);
}

TEST(GfPolyEval, Test568)
{
    unsigned char poly[] = {1, 209, 196, 97};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 12), 48);
}

TEST(GfPolyEval, Test569)
{
    unsigned char poly[] = {1, 209, 196, 97};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 24), 35);
}

TEST(GfPolyEval, Test570)
{
    unsigned char poly[] = {1, 209, 196, 97};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 48), 49);
}

TEST(GfPolyEval, Test571)
{
    unsigned char poly[] = {131, 151, 153, 0};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 235), 241);
}

TEST(GfPolyEval, Test572)
{
    unsigned char poly[] = {131, 151, 153, 0};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 243), 83);
}

TEST(GfPolyEval, Test573)
{
    unsigned char poly[] = {131, 151, 153, 0};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 245), 15);
}

TEST(GfPolyEval, Test574)
{
    unsigned char poly[] = {85, 141, 23, 248, 6, 21, 238, 114, 88, 132, 70, 49, 54, 4, 212, 255, 152, 158, 207, 123, 12, 79, 39, 73, 162, 249, 191, 184, 201, 242};
    const unsigned poly_sz = 30;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 1), 242);
}

TEST(GfPolyEval, Test575)
{
    unsigned char poly[] = {85, 141, 23, 248, 6, 21, 238, 114, 88, 132, 70, 49, 54, 4, 212, 255, 152, 158, 207, 123, 12, 79, 39, 73, 162, 249, 191, 184, 201, 242};
    const unsigned poly_sz = 30;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 2), 80);
}

TEST(GfPolyEval, Test576)
{
    unsigned char poly[] = {85, 141, 23, 248, 6, 21, 238, 114, 88, 132, 70, 49, 54, 4, 212, 255, 152, 158, 207, 123, 12, 79, 39, 73, 162, 249, 191, 184, 201, 242};
    const unsigned poly_sz = 30;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 4), 72);
}

TEST(GfPolyEval, Test577)
{
    unsigned char poly[] = {85, 141, 23, 248, 6, 21, 238, 114, 88, 132, 70, 49, 54, 4, 212, 255, 152, 158, 207, 123, 12, 79, 39, 73, 162, 249, 191, 184, 201, 242};
    const unsigned poly_sz = 30;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 8), 186);
}

TEST(GfPolyEval, Test578)
{
    unsigned char poly[] = {85, 141, 23, 248, 6, 21, 238, 114, 88, 132, 70, 49, 54, 4, 212, 255, 152, 158, 207, 123, 12, 79, 39, 73, 162, 249, 191, 184, 201, 242};
    const unsigned poly_sz = 30;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 16), 35);
}

TEST(GfPolyEval, Test579)
{
    unsigned char poly[] = {85, 141, 23, 248, 6, 21, 238, 114, 88, 132, 70, 49, 54, 4, 212, 255, 152, 158, 207, 123, 12, 79, 39, 73, 162, 249, 191, 184, 201, 242};
    const unsigned poly_sz = 30;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 32), 41);
}

TEST(GfPolyEval, Test580)
{
    unsigned char poly[] = {85, 141, 23, 248, 6, 21, 238, 114, 88, 132, 70, 49, 54, 4, 212, 255, 152, 158, 207, 123, 12, 79, 39, 73, 162, 249, 191, 184, 201, 242};
    const unsigned poly_sz = 30;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 64), 59);
}

TEST(GfPolyEval, Test581)
{
    unsigned char poly[] = {85, 141, 23, 248, 6, 21, 238, 114, 88, 132, 70, 49, 54, 4, 212, 255, 152, 158, 207, 123, 12, 79, 39, 73, 162, 249, 191, 184, 201, 242};
    const unsigned poly_sz = 30;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 128), 112);
}

TEST(GfPolyEval, Test582)
{
    unsigned char poly[] = {1, 210, 170, 48, 163};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 1), 234);
}

TEST(GfPolyEval, Test583)
{
    unsigned char poly[] = {1, 210, 170, 48, 163};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 2), 159);
}

TEST(GfPolyEval, Test584)
{
    unsigned char poly[] = {1, 210, 170, 48, 163};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 4), 178);
}

TEST(GfPolyEval, Test585)
{
    unsigned char poly[] = {1, 210, 170, 48, 163};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 8), 191);
}

TEST(GfPolyEval, Test586)
{
    unsigned char poly[] = {1, 210, 170, 48, 163};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 16), 7);
}

TEST(GfPolyEval, Test587)
{
    unsigned char poly[] = {1, 210, 170, 48, 163};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 32), 1);
}

TEST(GfPolyEval, Test588)
{
    unsigned char poly[] = {1, 210, 170, 48, 163};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 64), 239);
}

TEST(GfPolyEval, Test589)
{
    unsigned char poly[] = {1, 210, 170, 48, 163};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 128), 242);
}

TEST(GfPolyEval, Test590)
{
    unsigned char poly[] = {1, 210, 170, 48, 163};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 29), 177);
}

TEST(GfPolyEval, Test591)
{
    unsigned char poly[] = {1, 210, 170, 48, 163};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 58), 70);
}

TEST(GfPolyEval, Test592)
{
    unsigned char poly[] = {1, 210, 170, 48, 163};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 116), 174);
}

TEST(GfPolyEval, Test593)
{
    unsigned char poly[] = {1, 210, 170, 48, 163};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 232), 138);
}

TEST(GfPolyEval, Test594)
{
    unsigned char poly[] = {1, 210, 170, 48, 163};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 205), 44);
}

TEST(GfPolyEval, Test595)
{
    unsigned char poly[] = {1, 210, 170, 48, 163};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 135), 154);
}

TEST(GfPolyEval, Test596)
{
    unsigned char poly[] = {1, 210, 170, 48, 163};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 19), 224);
}

TEST(GfPolyEval, Test597)
{
    unsigned char poly[] = {1, 210, 170, 48, 163};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 38), 200);
}

TEST(GfPolyEval, Test598)
{
    unsigned char poly[] = {1, 210, 170, 48, 163};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 76), 145);
}

TEST(GfPolyEval, Test599)
{
    unsigned char poly[] = {1, 210, 170, 48, 163};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 152), 245);
}

TEST(GfPolyEval, Test600)
{
    unsigned char poly[] = {1, 210, 170, 48, 163};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 45), 38);
}

TEST(GfPolyEval, Test601)
{
    unsigned char poly[] = {1, 210, 170, 48, 163};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 90), 84);
}

TEST(GfPolyEval, Test602)
{
    unsigned char poly[] = {1, 210, 170, 48, 163};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 180), 0);
}

TEST(GfPolyEval, Test603)
{
    unsigned char poly[] = {1, 210, 170, 48, 163};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 117), 56);
}

TEST(GfPolyEval, Test604)
{
    unsigned char poly[] = {1, 210, 170, 48, 163};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 234), 0);
}

TEST(GfPolyEval, Test605)
{
    unsigned char poly[] = {1, 210, 170, 48, 163};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 201), 228);
}

TEST(GfPolyEval, Test606)
{
    unsigned char poly[] = {1, 210, 170, 48, 163};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 143), 0);
}

TEST(GfPolyEval, Test607)
{
    unsigned char poly[] = {1, 210, 170, 48, 163};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 3), 0);
}

TEST(GfPolyEval, Test608)
{
    unsigned char poly[] = {1, 210, 170, 48, 163};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 6), 112);
}

TEST(GfPolyEval, Test609)
{
    unsigned char poly[] = {1, 210, 170, 48, 163};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 12), 13);
}

TEST(GfPolyEval, Test610)
{
    unsigned char poly[] = {1, 210, 170, 48, 163};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 24), 106);
}

TEST(GfPolyEval, Test611)
{
    unsigned char poly[] = {1, 210, 170, 48, 163};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 48), 10);
}

TEST(GfPolyEval, Test612)
{
    unsigned char poly[] = {205, 234, 200, 242, 0};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 235), 186);
}

TEST(GfPolyEval, Test613)
{
    unsigned char poly[] = {205, 234, 200, 242, 0};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 243), 241);
}

TEST(GfPolyEval, Test614)
{
    unsigned char poly[] = {205, 234, 200, 242, 0};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 245), 17);
}

TEST(GfPolyEval, Test615)
{
    unsigned char poly[] = {205, 234, 200, 242, 0};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 244), 49);
}

TEST(GfPolyEval, Test616)
{
    unsigned char poly[] = {224, 120, 199, 136, 89, 82, 99, 132, 14, 155, 103, 22, 181, 49, 204, 209, 119, 238, 186, 72, 112, 136, 195, 243, 210, 243, 215, 157, 37, 161, 22, 165, 166, 68, 9, 49, 7, 84, 112, 129, 32, 225, 111, 204, 122, 44, 211, 154, 61, 249, 181, 102, 83, 77, 93, 191, 199, 129, 117, 250, 7, 211, 138, 239, 53, 169, 154, 138, 220, 183, 230, 51, 221, 226, 171, 200, 102, 249, 196, 147, 59, 182, 35, 118, 59, 229, 235, 79, 168, 199, 232, 158, 149, 219, 239, 32, 179};
    const unsigned poly_sz = 97;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 1), 0);
}

TEST(GfPolyEval, Test617)
{
    unsigned char poly[] = {224, 120, 199, 136, 89, 82, 99, 132, 14, 155, 103, 22, 181, 49, 204, 209, 119, 238, 186, 72, 112, 136, 195, 243, 210, 243, 215, 157, 37, 161, 22, 165, 166, 68, 9, 49, 7, 84, 112, 129, 32, 225, 111, 204, 122, 44, 211, 154, 61, 249, 181, 102, 83, 77, 93, 191, 199, 129, 117, 250, 7, 211, 138, 239, 53, 169, 154, 138, 220, 183, 230, 51, 221, 226, 171, 200, 102, 249, 196, 147, 59, 182, 35, 118, 59, 229, 235, 79, 168, 199, 232, 158, 149, 219, 239, 32, 179};
    const unsigned poly_sz = 97;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 2), 0);
}

TEST(GfPolyEval, Test618)
{
    unsigned char poly[] = {224, 120, 199, 136, 89, 82, 99, 132, 14, 155, 103, 22, 181, 49, 204, 209, 119, 238, 186, 72, 112, 136, 195, 243, 210, 243, 215, 157, 37, 161, 22, 165, 166, 68, 9, 49, 7, 84, 112, 129, 32, 225, 111, 204, 122, 44, 211, 154, 61, 249, 181, 102, 83, 77, 93, 191, 199, 129, 117, 250, 7, 211, 138, 239, 53, 169, 154, 138, 220, 183, 230, 51, 221, 226, 171, 200, 102, 249, 196, 147, 59, 182, 35, 118, 59, 229, 235, 79, 168, 199, 232, 158, 149, 219, 239, 32, 179};
    const unsigned poly_sz = 97;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 4), 0);
}

TEST(GfPolyEval, Test619)
{
    unsigned char poly[] = {224, 120, 199, 136, 89, 82, 99, 132, 14, 155, 103, 22, 181, 49, 204, 209, 119, 238, 186, 72, 112, 136, 195, 243, 210, 243, 215, 157, 37, 161, 22, 165, 166, 68, 9, 49, 7, 84, 112, 129, 32, 225, 111, 204, 122, 44, 211, 154, 61, 249, 181, 102, 83, 77, 93, 191, 199, 129, 117, 250, 7, 211, 138, 239, 53, 169, 154, 138, 220, 183, 230, 51, 221, 226, 171, 200, 102, 249, 196, 147, 59, 182, 35, 118, 59, 229, 235, 79, 168, 199, 232, 158, 149, 219, 239, 32, 179};
    const unsigned poly_sz = 97;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 8), 0);
}

TEST(GfPolyEval, Test620)
{
    unsigned char poly[] = {224, 120, 199, 136, 89, 82, 99, 132, 14, 155, 103, 22, 181, 49, 204, 209, 119, 238, 186, 72, 112, 136, 195, 243, 210, 243, 215, 157, 37, 161, 22, 165, 166, 68, 9, 49, 7, 84, 112, 129, 32, 225, 111, 204, 122, 44, 211, 154, 61, 249, 181, 102, 83, 77, 93, 191, 199, 129, 117, 250, 7, 211, 138, 239, 53, 169, 154, 138, 220, 183, 230, 51, 221, 226, 171, 200, 102, 249, 196, 147, 59, 182, 35, 118, 59, 229, 235, 79, 168, 199, 232, 158, 149, 219, 239, 32, 179};
    const unsigned poly_sz = 97;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 16), 0);
}

TEST(GfPolyEval, Test621)
{
    unsigned char poly[] = {224, 120, 199, 136, 89, 82, 99, 132, 14, 155, 103, 22, 181, 49, 204, 209, 119, 238, 186, 72, 112, 136, 195, 243, 210, 243, 215, 157, 37, 161, 22, 165, 166, 68, 9, 49, 7, 84, 112, 129, 32, 225, 111, 204, 122, 44, 211, 154, 61, 249, 181, 102, 83, 77, 93, 191, 199, 129, 117, 250, 7, 211, 138, 239, 53, 169, 154, 138, 220, 183, 230, 51, 221, 226, 171, 200, 102, 249, 196, 147, 59, 182, 35, 118, 59, 229, 235, 79, 168, 199, 232, 158, 149, 219, 239, 32, 179};
    const unsigned poly_sz = 97;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 32), 0);
}

TEST(GfPolyEval, Test622)
{
    unsigned char poly[] = {224, 120, 199, 136, 89, 82, 99, 132, 14, 155, 103, 22, 181, 49, 204, 209, 119, 238, 186, 72, 112, 136, 195, 243, 210, 243, 215, 157, 37, 161, 22, 165, 166, 68, 9, 49, 7, 84, 112, 129, 32, 225, 111, 204, 122, 44, 211, 154, 61, 249, 181, 102, 83, 77, 93, 191, 199, 129, 117, 250, 7, 211, 138, 239, 53, 169, 154, 138, 220, 183, 230, 51, 221, 226, 171, 200, 102, 249, 196, 147, 59, 182, 35, 118, 59, 229, 235, 79, 168, 199, 232, 158, 149, 219, 239, 32, 179};
    const unsigned poly_sz = 97;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 64), 0);
}

TEST(GfPolyEval, Test623)
{
    unsigned char poly[] = {224, 120, 199, 136, 89, 82, 99, 132, 14, 155, 103, 22, 181, 49, 204, 209, 119, 238, 186, 72, 112, 136, 195, 243, 210, 243, 215, 157, 37, 161, 22, 165, 166, 68, 9, 49, 7, 84, 112, 129, 32, 225, 111, 204, 122, 44, 211, 154, 61, 249, 181, 102, 83, 77, 93, 191, 199, 129, 117, 250, 7, 211, 138, 239, 53, 169, 154, 138, 220, 183, 230, 51, 221, 226, 171, 200, 102, 249, 196, 147, 59, 182, 35, 118, 59, 229, 235, 79, 168, 199, 232, 158, 149, 219, 239, 32, 179};
    const unsigned poly_sz = 97;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 128), 0);
}

TEST(GfPolyEval, Test624)
{
    unsigned char poly[] = {224, 120, 199, 136, 89, 82, 99, 132, 14, 155, 103, 22, 181, 49, 204, 209, 119, 238, 186, 72, 112, 136, 195, 243, 210, 243, 215, 157, 37, 161, 22, 165, 166, 68, 9, 49, 7, 84, 112, 129, 32, 225, 111, 204, 122, 44, 211, 154, 61, 249, 181, 102, 83, 77, 93, 191, 199, 129, 117, 250, 7, 211, 138, 239, 53, 169, 154, 138, 220, 183, 230, 51, 221, 226, 171, 200, 102, 249, 196, 147, 59, 182, 35, 118, 59, 229, 235, 19, 168, 199, 232, 158, 149, 219, 239, 32, 179};
    const unsigned poly_sz = 97;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 1), 92);
}

TEST(GfPolyEval, Test625)
{
    unsigned char poly[] = {224, 120, 199, 136, 89, 82, 99, 132, 14, 155, 103, 22, 181, 49, 204, 209, 119, 238, 186, 72, 112, 136, 195, 243, 210, 243, 215, 157, 37, 161, 22, 165, 166, 68, 9, 49, 7, 84, 112, 129, 32, 225, 111, 204, 122, 44, 211, 154, 61, 249, 181, 102, 83, 77, 93, 191, 199, 129, 117, 250, 7, 211, 138, 239, 53, 169, 154, 138, 220, 183, 230, 51, 221, 226, 171, 200, 102, 249, 196, 147, 59, 182, 35, 118, 59, 229, 235, 19, 168, 199, 232, 158, 149, 219, 239, 32, 179};
    const unsigned poly_sz = 97;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 2), 132);
}

TEST(GfPolyEval, Test626)
{
    unsigned char poly[] = {224, 120, 199, 136, 89, 82, 99, 132, 14, 155, 103, 22, 181, 49, 204, 209, 119, 238, 186, 72, 112, 136, 195, 243, 210, 243, 215, 157, 37, 161, 22, 165, 166, 68, 9, 49, 7, 84, 112, 129, 32, 225, 111, 204, 122, 44, 211, 154, 61, 249, 181, 102, 83, 77, 93, 191, 199, 129, 117, 250, 7, 211, 138, 239, 53, 169, 154, 138, 220, 183, 230, 51, 221, 226, 171, 200, 102, 249, 196, 147, 59, 182, 35, 118, 59, 229, 235, 19, 168, 199, 232, 158, 149, 219, 239, 32, 179};
    const unsigned poly_sz = 97;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 4), 164);
}

TEST(GfPolyEval, Test627)
{
    unsigned char poly[] = {224, 120, 199, 136, 89, 82, 99, 132, 14, 155, 103, 22, 181, 49, 204, 209, 119, 238, 186, 72, 112, 136, 195, 243, 210, 243, 215, 157, 37, 161, 22, 165, 166, 68, 9, 49, 7, 84, 112, 129, 32, 225, 111, 204, 122, 44, 211, 154, 61, 249, 181, 102, 83, 77, 93, 191, 199, 129, 117, 250, 7, 211, 138, 239, 53, 169, 154, 138, 220, 183, 230, 51, 221, 226, 171, 200, 102, 249, 196, 147, 59, 182, 35, 118, 59, 229, 235, 19, 168, 199, 232, 158, 149, 219, 239, 32, 179};
    const unsigned poly_sz = 97;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 8), 183);
}

TEST(GfPolyEval, Test628)
{
    unsigned char poly[] = {224, 120, 199, 136, 89, 82, 99, 132, 14, 155, 103, 22, 181, 49, 204, 209, 119, 238, 186, 72, 112, 136, 195, 243, 210, 243, 215, 157, 37, 161, 22, 165, 166, 68, 9, 49, 7, 84, 112, 129, 32, 225, 111, 204, 122, 44, 211, 154, 61, 249, 181, 102, 83, 77, 93, 191, 199, 129, 117, 250, 7, 211, 138, 239, 53, 169, 154, 138, 220, 183, 230, 51, 221, 226, 171, 200, 102, 249, 196, 147, 59, 182, 35, 118, 59, 229, 235, 19, 168, 199, 232, 158, 149, 219, 239, 32, 179};
    const unsigned poly_sz = 97;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 16), 126);
}

TEST(GfPolyEval, Test629)
{
    unsigned char poly[] = {224, 120, 199, 136, 89, 82, 99, 132, 14, 155, 103, 22, 181, 49, 204, 209, 119, 238, 186, 72, 112, 136, 195, 243, 210, 243, 215, 157, 37, 161, 22, 165, 166, 68, 9, 49, 7, 84, 112, 129, 32, 225, 111, 204, 122, 44, 211, 154, 61, 249, 181, 102, 83, 77, 93, 191, 199, 129, 117, 250, 7, 211, 138, 239, 53, 169, 154, 138, 220, 183, 230, 51, 221, 226, 171, 200, 102, 249, 196, 147, 59, 182, 35, 118, 59, 229, 235, 19, 168, 199, 232, 158, 149, 219, 239, 32, 179};
    const unsigned poly_sz = 97;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 32), 227);
}

TEST(GfPolyEval, Test630)
{
    unsigned char poly[] = {224, 120, 199, 136, 89, 82, 99, 132, 14, 155, 103, 22, 181, 49, 204, 209, 119, 238, 186, 72, 112, 136, 195, 243, 210, 243, 215, 157, 37, 161, 22, 165, 166, 68, 9, 49, 7, 84, 112, 129, 32, 225, 111, 204, 122, 44, 211, 154, 61, 249, 181, 102, 83, 77, 93, 191, 199, 129, 117, 250, 7, 211, 138, 239, 53, 169, 154, 138, 220, 183, 230, 51, 221, 226, 171, 200, 102, 249, 196, 147, 59, 182, 35, 118, 59, 229, 235, 19, 168, 199, 232, 158, 149, 219, 239, 32, 179};
    const unsigned poly_sz = 97;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 64), 55);
}

TEST(GfPolyEval, Test631)
{
    unsigned char poly[] = {224, 120, 199, 136, 89, 82, 99, 132, 14, 155, 103, 22, 181, 49, 204, 209, 119, 238, 186, 72, 112, 136, 195, 243, 210, 243, 215, 157, 37, 161, 22, 165, 166, 68, 9, 49, 7, 84, 112, 129, 32, 225, 111, 204, 122, 44, 211, 154, 61, 249, 181, 102, 83, 77, 93, 191, 199, 129, 117, 250, 7, 211, 138, 239, 53, 169, 154, 138, 220, 183, 230, 51, 221, 226, 171, 200, 102, 249, 196, 147, 59, 182, 35, 118, 59, 229, 235, 19, 168, 199, 232, 158, 149, 219, 239, 32, 179};
    const unsigned poly_sz = 97;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 128), 50);
}

TEST(GfPolyEval, Test632)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 1), 59);
}

TEST(GfPolyEval, Test633)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 2), 56);
}

TEST(GfPolyEval, Test634)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 4), 62);
}

TEST(GfPolyEval, Test635)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 8), 50);
}

TEST(GfPolyEval, Test636)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 16), 42);
}

TEST(GfPolyEval, Test637)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 32), 26);
}

TEST(GfPolyEval, Test638)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 64), 122);
}

TEST(GfPolyEval, Test639)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 128), 186);
}

TEST(GfPolyEval, Test640)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 29), 39);
}

TEST(GfPolyEval, Test641)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 58), 0);
}

TEST(GfPolyEval, Test642)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 116), 78);
}

TEST(GfPolyEval, Test643)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 232), 210);
}

TEST(GfPolyEval, Test644)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 205), 247);
}

TEST(GfPolyEval, Test645)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 135), 189);
}

TEST(GfPolyEval, Test646)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 19), 41);
}

TEST(GfPolyEval, Test647)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 38), 28);
}

TEST(GfPolyEval, Test648)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 76), 118);
}

TEST(GfPolyEval, Test649)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 152), 162);
}

TEST(GfPolyEval, Test650)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 45), 23);
}

TEST(GfPolyEval, Test651)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 90), 96);
}

TEST(GfPolyEval, Test652)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 180), 142);
}

TEST(GfPolyEval, Test653)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 117), 79);
}

TEST(GfPolyEval, Test654)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 234), 208);
}

TEST(GfPolyEval, Test655)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 201), 243);
}

TEST(GfPolyEval, Test656)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 143), 181);
}

TEST(GfPolyEval, Test657)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 3), 57);
}

TEST(GfPolyEval, Test658)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 6), 60);
}

TEST(GfPolyEval, Test659)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 12), 54);
}

TEST(GfPolyEval, Test660)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 24), 34);
}

TEST(GfPolyEval, Test661)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 48), 10);
}

TEST(GfPolyEval, Test662)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 96), 90);
}

TEST(GfPolyEval, Test663)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 192), 250);
}

TEST(GfPolyEval, Test664)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 157), 167);
}

TEST(GfPolyEval, Test665)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 39), 29);
}

TEST(GfPolyEval, Test666)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 78), 116);
}

TEST(GfPolyEval, Test667)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 156), 166);
}

TEST(GfPolyEval, Test668)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 37), 31);
}

TEST(GfPolyEval, Test669)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 74), 112);
}

TEST(GfPolyEval, Test670)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 148), 174);
}

TEST(GfPolyEval, Test671)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 53), 15);
}

TEST(GfPolyEval, Test672)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 106), 80);
}

TEST(GfPolyEval, Test673)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 212), 238);
}

TEST(GfPolyEval, Test674)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 181), 143);
}

TEST(GfPolyEval, Test675)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 119), 77);
}

TEST(GfPolyEval, Test676)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 238), 212);
}

TEST(GfPolyEval, Test677)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 193), 251);
}

TEST(GfPolyEval, Test678)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 159), 165);
}

TEST(GfPolyEval, Test679)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 35), 25);
}

TEST(GfPolyEval, Test680)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 70), 124);
}

TEST(GfPolyEval, Test681)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 140), 182);
}

TEST(GfPolyEval, Test682)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 5), 63);
}

TEST(GfPolyEval, Test683)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 10), 48);
}

TEST(GfPolyEval, Test684)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 20), 46);
}

TEST(GfPolyEval, Test685)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 40), 18);
}

TEST(GfPolyEval, Test686)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 80), 106);
}

TEST(GfPolyEval, Test687)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 160), 154);
}

TEST(GfPolyEval, Test688)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 93), 103);
}

TEST(GfPolyEval, Test689)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 186), 128);
}

TEST(GfPolyEval, Test690)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 105), 83);
}

TEST(GfPolyEval, Test691)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 210), 232);
}

TEST(GfPolyEval, Test692)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 185), 131);
}

TEST(GfPolyEval, Test693)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 111), 85);
}

TEST(GfPolyEval, Test694)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 222), 228);
}

TEST(GfPolyEval, Test695)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 161), 155);
}

TEST(GfPolyEval, Test696)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 95), 101);
}

TEST(GfPolyEval, Test697)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 190), 132);
}

TEST(GfPolyEval, Test698)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 97), 91);
}

TEST(GfPolyEval, Test699)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 194), 248);
}

TEST(GfPolyEval, Test700)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 153), 163);
}

TEST(GfPolyEval, Test701)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 47), 21);
}

TEST(GfPolyEval, Test702)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 94), 100);
}

TEST(GfPolyEval, Test703)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 188), 134);
}

TEST(GfPolyEval, Test704)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 101), 95);
}

TEST(GfPolyEval, Test705)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 202), 240);
}

TEST(GfPolyEval, Test706)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 137), 179);
}

TEST(GfPolyEval, Test707)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 15), 53);
}

TEST(GfPolyEval, Test708)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 30), 36);
}

TEST(GfPolyEval, Test709)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 60), 6);
}

TEST(GfPolyEval, Test710)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 120), 66);
}

TEST(GfPolyEval, Test711)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 240), 202);
}

TEST(GfPolyEval, Test712)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 253), 199);
}

TEST(GfPolyEval, Test713)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 231), 221);
}

TEST(GfPolyEval, Test714)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 211), 233);
}

TEST(GfPolyEval, Test715)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 187), 129);
}

TEST(GfPolyEval, Test716)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 107), 81);
}

TEST(GfPolyEval, Test717)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 214), 236);
}

TEST(GfPolyEval, Test718)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 177), 139);
}

TEST(GfPolyEval, Test719)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 127), 69);
}

TEST(GfPolyEval, Test720)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 254), 196);
}

TEST(GfPolyEval, Test721)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 225), 219);
}

TEST(GfPolyEval, Test722)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 223), 229);
}

TEST(GfPolyEval, Test723)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 163), 153);
}

TEST(GfPolyEval, Test724)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 91), 97);
}

TEST(GfPolyEval, Test725)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 182), 140);
}

TEST(GfPolyEval, Test726)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 113), 75);
}

TEST(GfPolyEval, Test727)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 226), 216);
}

TEST(GfPolyEval, Test728)
{
    unsigned char poly[] = {1, 58};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 217), 227);
}

TEST(GfPolyEval, Test729)
{
    unsigned char poly[] = {92, 0};
    const unsigned poly_sz = 2;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 207), 236);
}

TEST(GfPolyEval, Test730)
{
    unsigned char poly[] = {224, 120, 199, 136, 89, 82, 99, 132, 14, 155, 103, 22, 181, 49, 204, 209, 119, 238, 186, 72, 112, 136, 195, 243, 210, 243, 215, 157, 37, 161, 22, 165, 166, 68, 9, 49, 7, 84, 112, 129, 32, 225, 111, 204, 122, 44, 211, 154, 61, 249, 181, 102, 83, 77, 93, 191, 199, 129, 117, 250, 7, 211, 138, 5, 53, 169, 154, 138, 220, 183, 230, 51, 221, 226, 171, 200, 102, 249, 196, 147, 59, 182, 35, 118, 59, 229, 235, 19, 168, 199, 232, 158, 149, 219, 239, 32, 179};
    const unsigned poly_sz = 97;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 1), 182);
}

TEST(GfPolyEval, Test731)
{
    unsigned char poly[] = {224, 120, 199, 136, 89, 82, 99, 132, 14, 155, 103, 22, 181, 49, 204, 209, 119, 238, 186, 72, 112, 136, 195, 243, 210, 243, 215, 157, 37, 161, 22, 165, 166, 68, 9, 49, 7, 84, 112, 129, 32, 225, 111, 204, 122, 44, 211, 154, 61, 249, 181, 102, 83, 77, 93, 191, 199, 129, 117, 250, 7, 211, 138, 5, 53, 169, 154, 138, 220, 183, 230, 51, 221, 226, 171, 200, 102, 249, 196, 147, 59, 182, 35, 118, 59, 229, 235, 19, 168, 199, 232, 158, 149, 219, 239, 32, 179};
    const unsigned poly_sz = 97;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 2), 36);
}

TEST(GfPolyEval, Test732)
{
    unsigned char poly[] = {224, 120, 199, 136, 89, 82, 99, 132, 14, 155, 103, 22, 181, 49, 204, 209, 119, 238, 186, 72, 112, 136, 195, 243, 210, 243, 215, 157, 37, 161, 22, 165, 166, 68, 9, 49, 7, 84, 112, 129, 32, 225, 111, 204, 122, 44, 211, 154, 61, 249, 181, 102, 83, 77, 93, 191, 199, 129, 117, 250, 7, 211, 138, 5, 53, 169, 154, 138, 220, 183, 230, 51, 221, 226, 171, 200, 102, 249, 196, 147, 59, 182, 35, 118, 59, 229, 235, 19, 168, 199, 232, 158, 149, 219, 239, 32, 179};
    const unsigned poly_sz = 97;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 4), 90);
}

TEST(GfPolyEval, Test733)
{
    unsigned char poly[] = {224, 120, 199, 136, 89, 82, 99, 132, 14, 155, 103, 22, 181, 49, 204, 209, 119, 238, 186, 72, 112, 136, 195, 243, 210, 243, 215, 157, 37, 161, 22, 165, 166, 68, 9, 49, 7, 84, 112, 129, 32, 225, 111, 204, 122, 44, 211, 154, 61, 249, 181, 102, 83, 77, 93, 191, 199, 129, 117, 250, 7, 211, 138, 5, 53, 169, 154, 138, 220, 183, 230, 51, 221, 226, 171, 200, 102, 249, 196, 147, 59, 182, 35, 118, 59, 229, 235, 19, 168, 199, 232, 158, 149, 219, 239, 32, 179};
    const unsigned poly_sz = 97;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 8), 193);
}

TEST(GfPolyEval, Test734)
{
    unsigned char poly[] = {224, 120, 199, 136, 89, 82, 99, 132, 14, 155, 103, 22, 181, 49, 204, 209, 119, 238, 186, 72, 112, 136, 195, 243, 210, 243, 215, 157, 37, 161, 22, 165, 166, 68, 9, 49, 7, 84, 112, 129, 32, 225, 111, 204, 122, 44, 211, 154, 61, 249, 181, 102, 83, 77, 93, 191, 199, 129, 117, 250, 7, 211, 138, 5, 53, 169, 154, 138, 220, 183, 230, 51, 221, 226, 171, 200, 102, 249, 196, 147, 59, 182, 35, 118, 59, 229, 235, 19, 168, 199, 232, 158, 149, 219, 239, 32, 179};
    const unsigned poly_sz = 97;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 16), 71);
}

TEST(GfPolyEval, Test735)
{
    unsigned char poly[] = {224, 120, 199, 136, 89, 82, 99, 132, 14, 155, 103, 22, 181, 49, 204, 209, 119, 238, 186, 72, 112, 136, 195, 243, 210, 243, 215, 157, 37, 161, 22, 165, 166, 68, 9, 49, 7, 84, 112, 129, 32, 225, 111, 204, 122, 44, 211, 154, 61, 249, 181, 102, 83, 77, 93, 191, 199, 129, 117, 250, 7, 211, 138, 5, 53, 169, 154, 138, 220, 183, 230, 51, 221, 226, 171, 200, 102, 249, 196, 147, 59, 182, 35, 118, 59, 229, 235, 19, 168, 199, 232, 158, 149, 219, 239, 32, 179};
    const unsigned poly_sz = 97;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 32), 63);
}

TEST(GfPolyEval, Test736)
{
    unsigned char poly[] = {224, 120, 199, 136, 89, 82, 99, 132, 14, 155, 103, 22, 181, 49, 204, 209, 119, 238, 186, 72, 112, 136, 195, 243, 210, 243, 215, 157, 37, 161, 22, 165, 166, 68, 9, 49, 7, 84, 112, 129, 32, 225, 111, 204, 122, 44, 211, 154, 61, 249, 181, 102, 83, 77, 93, 191, 199, 129, 117, 250, 7, 211, 138, 5, 53, 169, 154, 138, 220, 183, 230, 51, 221, 226, 171, 200, 102, 249, 196, 147, 59, 182, 35, 118, 59, 229, 235, 19, 168, 199, 232, 158, 149, 219, 239, 32, 179};
    const unsigned poly_sz = 97;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 64), 155);
}

TEST(GfPolyEval, Test737)
{
    unsigned char poly[] = {224, 120, 199, 136, 89, 82, 99, 132, 14, 155, 103, 22, 181, 49, 204, 209, 119, 238, 186, 72, 112, 136, 195, 243, 210, 243, 215, 157, 37, 161, 22, 165, 166, 68, 9, 49, 7, 84, 112, 129, 32, 225, 111, 204, 122, 44, 211, 154, 61, 249, 181, 102, 83, 77, 93, 191, 199, 129, 117, 250, 7, 211, 138, 5, 53, 169, 154, 138, 220, 183, 230, 51, 221, 226, 171, 200, 102, 249, 196, 147, 59, 182, 35, 118, 59, 229, 235, 19, 168, 199, 232, 158, 149, 219, 239, 32, 179};
    const unsigned poly_sz = 97;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 128), 117);
}

TEST(GfPolyEval, Test738)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 1), 169);
}

TEST(GfPolyEval, Test739)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 2), 139);
}

TEST(GfPolyEval, Test740)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 4), 209);
}

TEST(GfPolyEval, Test741)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 8), 29);
}

TEST(GfPolyEval, Test742)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 16), 101);
}

TEST(GfPolyEval, Test743)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 32), 70);
}

TEST(GfPolyEval, Test744)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 64), 107);
}

TEST(GfPolyEval, Test745)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 128), 128);
}

TEST(GfPolyEval, Test746)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 29), 181);
}

TEST(GfPolyEval, Test747)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 58), 0);
}

TEST(GfPolyEval, Test748)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 116), 44);
}

TEST(GfPolyEval, Test749)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 232), 5);
}

TEST(GfPolyEval, Test750)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 205), 142);
}

TEST(GfPolyEval, Test751)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 135), 198);
}

TEST(GfPolyEval, Test752)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 19), 71);
}

TEST(GfPolyEval, Test753)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 38), 28);
}

TEST(GfPolyEval, Test754)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 76), 167);
}

TEST(GfPolyEval, Test755)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 152), 248);
}

TEST(GfPolyEval, Test756)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 45), 150);
}

TEST(GfPolyEval, Test757)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 90), 45);
}

TEST(GfPolyEval, Test758)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 180), 199);
}

TEST(GfPolyEval, Test759)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 117), 48);
}

TEST(GfPolyEval, Test760)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 234), 59);
}

TEST(GfPolyEval, Test761)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 201), 234);
}

TEST(GfPolyEval, Test762)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 143), 110);
}

TEST(GfPolyEval, Test763)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 3), 151);
}

TEST(GfPolyEval, Test764)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 6), 239);
}

TEST(GfPolyEval, Test765)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 12), 121);
}

TEST(GfPolyEval, Test766)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 24), 205);
}

TEST(GfPolyEval, Test767)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 48), 150);
}

TEST(GfPolyEval, Test768)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 96), 152);
}

TEST(GfPolyEval, Test769)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 192), 94);
}

TEST(GfPolyEval, Test770)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 157), 128);
}

TEST(GfPolyEval, Test771)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 39), 0);
}

TEST(GfPolyEval, Test772)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 78), 153);
}

TEST(GfPolyEval, Test773)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 156), 156);
}

TEST(GfPolyEval, Test774)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 37), 62);
}

TEST(GfPolyEval, Test775)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 74), 253);
}

TEST(GfPolyEval, Test776)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 148), 52);
}

TEST(GfPolyEval, Test777)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 53), 238);
}

TEST(GfPolyEval, Test778)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 106), 14);
}

TEST(GfPolyEval, Test779)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 212), 234);
}

TEST(GfPolyEval, Test780)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 181), 219);
}

TEST(GfPolyEval, Test781)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 119), 14);
}

TEST(GfPolyEval, Test782)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 238), 95);
}

TEST(GfPolyEval, Test783)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 193), 66);
}

TEST(GfPolyEval, Test784)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 159), 190);
}

TEST(GfPolyEval, Test785)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 35), 100);
}

TEST(GfPolyEval, Test786)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 70), 49);
}

TEST(GfPolyEval, Test787)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 140), 76);
}

TEST(GfPolyEval, Test788)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 5), 205);
}

TEST(GfPolyEval, Test789)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 10), 35);
}

TEST(GfPolyEval, Test790)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 20), 1);
}

TEST(GfPolyEval, Test791)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 40), 238);
}

TEST(GfPolyEval, Test792)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 80), 187);
}

TEST(GfPolyEval, Test793)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 160), 115);
}

TEST(GfPolyEval, Test794)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 93), 107);
}

TEST(GfPolyEval, Test795)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 186), 53);
}

TEST(GfPolyEval, Test796)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 105), 44);
}

TEST(GfPolyEval, Test797)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 210), 176);
}

TEST(GfPolyEval, Test798)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 185), 23);
}

TEST(GfPolyEval, Test799)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 111), 118);
}

TEST(GfPolyEval, Test800)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 222), 124);
}

TEST(GfPolyEval, Test801)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 161), 111);
}

TEST(GfPolyEval, Test802)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 95), 85);
}

TEST(GfPolyEval, Test803)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 190), 81);
}

TEST(GfPolyEval, Test804)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 97), 132);
}

TEST(GfPolyEval, Test805)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 194), 96);
}

TEST(GfPolyEval, Test806)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 153), 228);
}

TEST(GfPolyEval, Test807)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 47), 168);
}

TEST(GfPolyEval, Test808)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 94), 73);
}

TEST(GfPolyEval, Test809)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 188), 111);
}

TEST(GfPolyEval, Test810)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 101), 224);
}

TEST(GfPolyEval, Test811)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 202), 200);
}

TEST(GfPolyEval, Test812)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 137), 52);
}

TEST(GfPolyEval, Test813)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 15), 91);
}

TEST(GfPolyEval, Test814)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 30), 151);
}

TEST(GfPolyEval, Test815)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 60), 90);
}

TEST(GfPolyEval, Test816)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 120), 224);
}

TEST(GfPolyEval, Test817)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 240), 125);
}

TEST(GfPolyEval, Test818)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 253), 173);
}

TEST(GfPolyEval, Test819)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 231), 235);
}

TEST(GfPolyEval, Test820)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 211), 172);
}

TEST(GfPolyEval, Test821)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 187), 41);
}

TEST(GfPolyEval, Test822)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 107), 18);
}

TEST(GfPolyEval, Test823)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 214), 212);
}

TEST(GfPolyEval, Test824)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 177), 191);
}

TEST(GfPolyEval, Test825)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 127), 166);
}

TEST(GfPolyEval, Test826)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 254), 143);
}

TEST(GfPolyEval, Test827)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 225), 177);
}

TEST(GfPolyEval, Test828)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 223), 96);
}

TEST(GfPolyEval, Test829)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 163), 81);
}

TEST(GfPolyEval, Test830)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 91), 49);
}

TEST(GfPolyEval, Test831)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 182), 249);
}

TEST(GfPolyEval, Test832)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 113), 84);
}

TEST(GfPolyEval, Test833)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 226), 147);
}

TEST(GfPolyEval, Test834)
{
    unsigned char poly[] = {1, 29, 181};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 217), 58);
}

TEST(GfPolyEval, Test835)
{
    unsigned char poly[] = {6, 182, 0};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 207), 118);
}

TEST(GfPolyEval, Test836)
{
    unsigned char poly[] = {6, 182, 0};
    const unsigned poly_sz = 3;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 138), 86);
}

TEST(GfPolyEval, Test837)
{
    unsigned char poly[] = {224, 120, 199, 136, 89, 82, 99, 132, 14, 155, 103, 22, 181, 49, 204, 209, 119, 238, 186, 72, 112, 136, 195, 243, 210, 243, 215, 157, 37, 161, 22, 165, 166, 68, 9, 49, 7, 84, 112, 129, 32, 225, 111, 204, 122, 44, 211, 154, 61, 249, 181, 102, 83, 77, 93, 191, 199, 129, 117, 250, 7, 211, 138, 5, 53, 169, 154, 138, 220, 183, 230, 51, 221, 226, 171, 200, 102, 249, 196, 147, 18, 182, 35, 118, 59, 229, 235, 19, 168, 199, 232, 158, 149, 219, 239, 32, 179};
    const unsigned poly_sz = 97;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 1), 159);
}

TEST(GfPolyEval, Test838)
{
    unsigned char poly[] = {224, 120, 199, 136, 89, 82, 99, 132, 14, 155, 103, 22, 181, 49, 204, 209, 119, 238, 186, 72, 112, 136, 195, 243, 210, 243, 215, 157, 37, 161, 22, 165, 166, 68, 9, 49, 7, 84, 112, 129, 32, 225, 111, 204, 122, 44, 211, 154, 61, 249, 181, 102, 83, 77, 93, 191, 199, 129, 117, 250, 7, 211, 138, 5, 53, 169, 154, 138, 220, 183, 230, 51, 221, 226, 171, 200, 102, 249, 196, 147, 18, 182, 35, 118, 59, 229, 235, 19, 168, 199, 232, 158, 149, 219, 239, 32, 179};
    const unsigned poly_sz = 97;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 2), 71);
}

TEST(GfPolyEval, Test839)
{
    unsigned char poly[] = {224, 120, 199, 136, 89, 82, 99, 132, 14, 155, 103, 22, 181, 49, 204, 209, 119, 238, 186, 72, 112, 136, 195, 243, 210, 243, 215, 157, 37, 161, 22, 165, 166, 68, 9, 49, 7, 84, 112, 129, 32, 225, 111, 204, 122, 44, 211, 154, 61, 249, 181, 102, 83, 77, 93, 191, 199, 129, 117, 250, 7, 211, 138, 5, 53, 169, 154, 138, 220, 183, 230, 51, 221, 226, 171, 200, 102, 249, 196, 147, 18, 182, 35, 118, 59, 229, 235, 19, 168, 199, 232, 158, 149, 219, 239, 32, 179};
    const unsigned poly_sz = 97;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 4), 17);
}

TEST(GfPolyEval, Test840)
{
    unsigned char poly[] = {224, 120, 199, 136, 89, 82, 99, 132, 14, 155, 103, 22, 181, 49, 204, 209, 119, 238, 186, 72, 112, 136, 195, 243, 210, 243, 215, 157, 37, 161, 22, 165, 166, 68, 9, 49, 7, 84, 112, 129, 32, 225, 111, 204, 122, 44, 211, 154, 61, 249, 181, 102, 83, 77, 93, 191, 199, 129, 117, 250, 7, 211, 138, 5, 53, 169, 154, 138, 220, 183, 230, 51, 221, 226, 171, 200, 102, 249, 196, 147, 18, 182, 35, 118, 59, 229, 235, 19, 168, 199, 232, 158, 149, 219, 239, 32, 179};
    const unsigned poly_sz = 97;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 8), 165);
}

TEST(GfPolyEval, Test841)
{
    unsigned char poly[] = {224, 120, 199, 136, 89, 82, 99, 132, 14, 155, 103, 22, 181, 49, 204, 209, 119, 238, 186, 72, 112, 136, 195, 243, 210, 243, 215, 157, 37, 161, 22, 165, 166, 68, 9, 49, 7, 84, 112, 129, 32, 225, 111, 204, 122, 44, 211, 154, 61, 249, 181, 102, 83, 77, 93, 191, 199, 129, 117, 250, 7, 211, 138, 5, 53, 169, 154, 138, 220, 183, 230, 51, 221, 226, 171, 200, 102, 249, 196, 147, 18, 182, 35, 118, 59, 229, 235, 19, 168, 199, 232, 158, 149, 219, 239, 32, 179};
    const unsigned poly_sz = 97;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 16), 245);
}

TEST(GfPolyEval, Test842)
{
    unsigned char poly[] = {224, 120, 199, 136, 89, 82, 99, 132, 14, 155, 103, 22, 181, 49, 204, 209, 119, 238, 186, 72, 112, 136, 195, 243, 210, 243, 215, 157, 37, 161, 22, 165, 166, 68, 9, 49, 7, 84, 112, 129, 32, 225, 111, 204, 122, 44, 211, 154, 61, 249, 181, 102, 83, 77, 93, 191, 199, 129, 117, 250, 7, 211, 138, 5, 53, 169, 154, 138, 220, 183, 230, 51, 221, 226, 171, 200, 102, 249, 196, 147, 18, 182, 35, 118, 59, 229, 235, 19, 168, 199, 232, 158, 149, 219, 239, 32, 179};
    const unsigned poly_sz = 97;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 32), 175);
}

TEST(GfPolyEval, Test843)
{
    unsigned char poly[] = {224, 120, 199, 136, 89, 82, 99, 132, 14, 155, 103, 22, 181, 49, 204, 209, 119, 238, 186, 72, 112, 136, 195, 243, 210, 243, 215, 157, 37, 161, 22, 165, 166, 68, 9, 49, 7, 84, 112, 129, 32, 225, 111, 204, 122, 44, 211, 154, 61, 249, 181, 102, 83, 77, 93, 191, 199, 129, 117, 250, 7, 211, 138, 5, 53, 169, 154, 138, 220, 183, 230, 51, 221, 226, 171, 200, 102, 249, 196, 147, 18, 182, 35, 118, 59, 229, 235, 19, 168, 199, 232, 158, 149, 219, 239, 32, 179};
    const unsigned poly_sz = 97;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 64), 230);
}

TEST(GfPolyEval, Test844)
{
    unsigned char poly[] = {224, 120, 199, 136, 89, 82, 99, 132, 14, 155, 103, 22, 181, 49, 204, 209, 119, 238, 186, 72, 112, 136, 195, 243, 210, 243, 215, 157, 37, 161, 22, 165, 166, 68, 9, 49, 7, 84, 112, 129, 32, 225, 111, 204, 122, 44, 211, 154, 61, 249, 181, 102, 83, 77, 93, 191, 199, 129, 117, 250, 7, 211, 138, 5, 53, 169, 154, 138, 220, 183, 230, 51, 221, 226, 171, 200, 102, 249, 196, 147, 18, 182, 35, 118, 59, 229, 235, 19, 168, 199, 232, 158, 149, 219, 239, 32, 179};
    const unsigned poly_sz = 97;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 128), 101);
}

TEST(GfPolyEval, Test845)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 1), 3);
}

TEST(GfPolyEval, Test846)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 2), 76);
}

TEST(GfPolyEval, Test847)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 4), 184);
}

TEST(GfPolyEval, Test848)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 8), 103);
}

TEST(GfPolyEval, Test849)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 16), 224);
}

TEST(GfPolyEval, Test850)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 32), 119);
}

TEST(GfPolyEval, Test851)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 64), 206);
}

TEST(GfPolyEval, Test852)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 128), 218);
}

TEST(GfPolyEval, Test853)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 29), 108);
}

TEST(GfPolyEval, Test854)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 58), 0);
}

TEST(GfPolyEval, Test855)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 116), 110);
}

TEST(GfPolyEval, Test856)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 232), 14);
}

TEST(GfPolyEval, Test857)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 205), 206);
}

TEST(GfPolyEval, Test858)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 135), 77);
}

TEST(GfPolyEval, Test859)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 19), 222);
}

TEST(GfPolyEval, Test860)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 38), 44);
}

TEST(GfPolyEval, Test861)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 76), 0);
}

TEST(GfPolyEval, Test862)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 152), 213);
}

TEST(GfPolyEval, Test863)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 45), 207);
}

TEST(GfPolyEval, Test864)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 90), 4);
}

TEST(GfPolyEval, Test865)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 180), 251);
}

TEST(GfPolyEval, Test866)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 117), 196);
}

TEST(GfPolyEval, Test867)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 234), 101);
}

TEST(GfPolyEval, Test868)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 201), 85);
}

TEST(GfPolyEval, Test869)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 143), 41);
}

TEST(GfPolyEval, Test870)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 3), 32);
}

TEST(GfPolyEval, Test871)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 6), 173);
}

TEST(GfPolyEval, Test872)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 12), 43);
}

TEST(GfPolyEval, Test873)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 24), 114);
}

TEST(GfPolyEval, Test874)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 48), 106);
}

TEST(GfPolyEval, Test875)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 96), 4);
}

TEST(GfPolyEval, Test876)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 192), 147);
}

TEST(GfPolyEval, Test877)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 157), 252);
}

TEST(GfPolyEval, Test878)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 39), 0);
}

TEST(GfPolyEval, Test879)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 78), 47);
}

TEST(GfPolyEval, Test880)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 156), 84);
}

TEST(GfPolyEval, Test881)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 37), 123);
}

TEST(GfPolyEval, Test882)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 74), 52);
}

TEST(GfPolyEval, Test883)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 148), 68);
}

TEST(GfPolyEval, Test884)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 53), 2);
}

TEST(GfPolyEval, Test885)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 106), 249);
}

TEST(GfPolyEval, Test886)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 212), 53);
}

TEST(GfPolyEval, Test887)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 181), 79);
}

TEST(GfPolyEval, Test888)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 119), 95);
}

TEST(GfPolyEval, Test889)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 238), 45);
}

TEST(GfPolyEval, Test890)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 193), 231);
}

TEST(GfPolyEval, Test891)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 159), 41);
}

TEST(GfPolyEval, Test892)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 35), 2);
}

TEST(GfPolyEval, Test893)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 70), 247);
}

TEST(GfPolyEval, Test894)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 140), 35);
}

TEST(GfPolyEval, Test895)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 5), 198);
}

TEST(GfPolyEval, Test896)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 10), 226);
}

TEST(GfPolyEval, Test897)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 20), 88);
}

TEST(GfPolyEval, Test898)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 40), 22);
}

TEST(GfPolyEval, Test899)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 80), 24);
}

TEST(GfPolyEval, Test900)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 160), 6);
}

TEST(GfPolyEval, Test901)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 93), 149);
}

TEST(GfPolyEval, Test902)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 186), 121);
}

TEST(GfPolyEval, Test903)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 105), 117);
}

TEST(GfPolyEval, Test904)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 210), 151);
}

TEST(GfPolyEval, Test905)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 185), 26);
}

TEST(GfPolyEval, Test906)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 111), 252);
}

TEST(GfPolyEval, Test907)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 222), 135);
}

TEST(GfPolyEval, Test908)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 161), 171);
}

TEST(GfPolyEval, Test909)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 95), 198);
}

TEST(GfPolyEval, Test910)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 190), 63);
}

TEST(GfPolyEval, Test911)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 97), 183);
}

TEST(GfPolyEval, Test912)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 194), 48);
}

TEST(GfPolyEval, Test913)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 153), 105);
}

TEST(GfPolyEval, Test914)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 47), 20);
}

TEST(GfPolyEval, Test915)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 94), 118);
}

TEST(GfPolyEval, Test916)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 188), 132);
}

TEST(GfPolyEval, Test917)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 101), 226);
}

TEST(GfPolyEval, Test918)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 202), 106);
}

TEST(GfPolyEval, Test919)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 137), 122);
}

TEST(GfPolyEval, Test920)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 15), 174);
}

TEST(GfPolyEval, Test921)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 30), 152);
}

TEST(GfPolyEval, Test922)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 60), 69);
}

TEST(GfPolyEval, Test923)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 120), 80);
}

TEST(GfPolyEval, Test924)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 240), 210);
}

TEST(GfPolyEval, Test925)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 253), 187);
}

TEST(GfPolyEval, Test926)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 231), 183);
}

TEST(GfPolyEval, Test927)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 211), 232);
}

TEST(GfPolyEval, Test928)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 187), 151);
}

TEST(GfPolyEval, Test929)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 107), 4);
}

TEST(GfPolyEval, Test930)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 214), 220);
}

TEST(GfPolyEval, Test931)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 177), 176);
}

TEST(GfPolyEval, Test932)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 127), 60);
}

TEST(GfPolyEval, Test933)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 254), 235);
}

TEST(GfPolyEval, Test934)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 225), 187);
}

TEST(GfPolyEval, Test935)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 223), 164);
}

TEST(GfPolyEval, Test936)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 163), 252);
}

TEST(GfPolyEval, Test937)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 91), 160);
}

TEST(GfPolyEval, Test938)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 182), 224);
}

TEST(GfPolyEval, Test939)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 113), 248);
}

TEST(GfPolyEval, Test940)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 226), 80);
}

TEST(GfPolyEval, Test941)
{
    unsigned char poly[] = {1, 81, 58, 105};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 217), 25);
}

TEST(GfPolyEval, Test942)
{
    unsigned char poly[] = {226, 201, 159, 0};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 207), 243);
}

TEST(GfPolyEval, Test943)
{
    unsigned char poly[] = {226, 201, 159, 0};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 22), 140);
}

TEST(GfPolyEval, Test944)
{
    unsigned char poly[] = {226, 201, 159, 0};
    const unsigned poly_sz = 4;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 138), 38);
}

TEST(GfPolyEval, Test945)
{
    unsigned char poly[] = {224, 120, 199, 136, 89, 82, 99, 132, 14, 155, 103, 22, 181, 49, 204, 209, 119, 238, 186, 72, 112, 136, 195, 243, 210, 243, 215, 157, 37, 161, 22, 165, 66, 68, 9, 49, 7, 84, 112, 129, 32, 225, 111, 204, 122, 44, 211, 154, 61, 249, 181, 102, 83, 77, 93, 191, 199, 129, 117, 250, 7, 211, 138, 5, 53, 169, 154, 138, 220, 183, 230, 51, 221, 226, 171, 200, 102, 249, 196, 147, 18, 182, 35, 118, 59, 229, 235, 19, 168, 199, 232, 158, 149, 219, 239, 32, 179};
    const unsigned poly_sz = 97;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 1), 123);
}

TEST(GfPolyEval, Test946)
{
    unsigned char poly[] = {224, 120, 199, 136, 89, 82, 99, 132, 14, 155, 103, 22, 181, 49, 204, 209, 119, 238, 186, 72, 112, 136, 195, 243, 210, 243, 215, 157, 37, 161, 22, 165, 66, 68, 9, 49, 7, 84, 112, 129, 32, 225, 111, 204, 122, 44, 211, 154, 61, 249, 181, 102, 83, 77, 93, 191, 199, 129, 117, 250, 7, 211, 138, 5, 53, 169, 154, 138, 220, 183, 230, 51, 221, 226, 171, 200, 102, 249, 196, 147, 18, 182, 35, 118, 59, 229, 235, 19, 168, 199, 232, 158, 149, 219, 239, 32, 179};
    const unsigned poly_sz = 97;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 2), 235);
}

TEST(GfPolyEval, Test947)
{
    unsigned char poly[] = {224, 120, 199, 136, 89, 82, 99, 132, 14, 155, 103, 22, 181, 49, 204, 209, 119, 238, 186, 72, 112, 136, 195, 243, 210, 243, 215, 157, 37, 161, 22, 165, 66, 68, 9, 49, 7, 84, 112, 129, 32, 225, 111, 204, 122, 44, 211, 154, 61, 249, 181, 102, 83, 77, 93, 191, 199, 129, 117, 250, 7, 211, 138, 5, 53, 169, 154, 138, 220, 183, 230, 51, 221, 226, 171, 200, 102, 249, 196, 147, 18, 182, 35, 118, 59, 229, 235, 19, 168, 199, 232, 158, 149, 219, 239, 32, 179};
    const unsigned poly_sz = 97;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 4), 33);
}

TEST(GfPolyEval, Test948)
{
    unsigned char poly[] = {224, 120, 199, 136, 89, 82, 99, 132, 14, 155, 103, 22, 181, 49, 204, 209, 119, 238, 186, 72, 112, 136, 195, 243, 210, 243, 215, 157, 37, 161, 22, 165, 66, 68, 9, 49, 7, 84, 112, 129, 32, 225, 111, 204, 122, 44, 211, 154, 61, 249, 181, 102, 83, 77, 93, 191, 199, 129, 117, 250, 7, 211, 138, 5, 53, 169, 154, 138, 220, 183, 230, 51, 221, 226, 171, 200, 102, 249, 196, 147, 18, 182, 35, 118, 59, 229, 235, 19, 168, 199, 232, 158, 149, 219, 239, 32, 179};
    const unsigned poly_sz = 97;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 8), 19);
}

TEST(GfPolyEval, Test949)
{
    unsigned char poly[] = {224, 120, 199, 136, 89, 82, 99, 132, 14, 155, 103, 22, 181, 49, 204, 209, 119, 238, 186, 72, 112, 136, 195, 243, 210, 243, 215, 157, 37, 161, 22, 165, 66, 68, 9, 49, 7, 84, 112, 129, 32, 225, 111, 204, 122, 44, 211, 154, 61, 249, 181, 102, 83, 77, 93, 191, 199, 129, 117, 250, 7, 211, 138, 5, 53, 169, 154, 138, 220, 183, 230, 51, 221, 226, 171, 200, 102, 249, 196, 147, 18, 182, 35, 118, 59, 229, 235, 19, 168, 199, 232, 158, 149, 219, 239, 32, 179};
    const unsigned poly_sz = 97;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 16), 32);
}

TEST(GfPolyEval, Test950)
{
    unsigned char poly[] = {224, 120, 199, 136, 89, 82, 99, 132, 14, 155, 103, 22, 181, 49, 204, 209, 119, 238, 186, 72, 112, 136, 195, 243, 210, 243, 215, 157, 37, 161, 22, 165, 66, 68, 9, 49, 7, 84, 112, 129, 32, 225, 111, 204, 122, 44, 211, 154, 61, 249, 181, 102, 83, 77, 93, 191, 199, 129, 117, 250, 7, 211, 138, 5, 53, 169, 154, 138, 220, 183, 230, 51, 221, 226, 171, 200, 102, 249, 196, 147, 18, 182, 35, 118, 59, 229, 235, 19, 168, 199, 232, 158, 149, 219, 239, 32, 179};
    const unsigned poly_sz = 97;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 32), 234);
}

TEST(GfPolyEval, Test951)
{
    unsigned char poly[] = {224, 120, 199, 136, 89, 82, 99, 132, 14, 155, 103, 22, 181, 49, 204, 209, 119, 238, 186, 72, 112, 136, 195, 243, 210, 243, 215, 157, 37, 161, 22, 165, 66, 68, 9, 49, 7, 84, 112, 129, 32, 225, 111, 204, 122, 44, 211, 154, 61, 249, 181, 102, 83, 77, 93, 191, 199, 129, 117, 250, 7, 211, 138, 5, 53, 169, 154, 138, 220, 183, 230, 51, 221, 226, 171, 200, 102, 249, 196, 147, 18, 182, 35, 118, 59, 229, 235, 19, 168, 199, 232, 158, 149, 219, 239, 32, 179};
    const unsigned poly_sz = 97;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 64), 134);
}

TEST(GfPolyEval, Test952)
{
    unsigned char poly[] = {224, 120, 199, 136, 89, 82, 99, 132, 14, 155, 103, 22, 181, 49, 204, 209, 119, 238, 186, 72, 112, 136, 195, 243, 210, 243, 215, 157, 37, 161, 22, 165, 66, 68, 9, 49, 7, 84, 112, 129, 32, 225, 111, 204, 122, 44, 211, 154, 61, 249, 181, 102, 83, 77, 93, 191, 199, 129, 117, 250, 7, 211, 138, 5, 53, 169, 154, 138, 220, 183, 230, 51, 221, 226, 171, 200, 102, 249, 196, 147, 18, 182, 35, 118, 59, 229, 235, 19, 168, 199, 232, 158, 149, 219, 239, 32, 179};
    const unsigned poly_sz = 97;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 128), 20);
}

TEST(GfPolyEval, Test953)
{
    unsigned char poly[] = {1, 14, 162, 163, 236};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 1), 226);
}

TEST(GfPolyEval, Test954)
{
    unsigned char poly[] = {1, 14, 162, 163, 236};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 2), 101);
}

TEST(GfPolyEval, Test955)
{
    unsigned char poly[] = {1, 14, 162, 163, 236};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 4), 18);
}

TEST(GfPolyEval, Test956)
{
    unsigned char poly[] = {1, 14, 162, 163, 236};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 8), 238);
}

TEST(GfPolyEval, Test957)
{
    unsigned char poly[] = {1, 14, 162, 163, 236};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 16), 107);
}

TEST(GfPolyEval, Test958)
{
    unsigned char poly[] = {1, 14, 162, 163, 236};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 32), 46);
}

TEST(GfPolyEval, Test959)
{
    unsigned char poly[] = {1, 14, 162, 163, 236};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 64), 18);
}

TEST(GfPolyEval, Test960)
{
    unsigned char poly[] = {1, 14, 162, 163, 236};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 128), 18);
}

TEST(GfPolyEval, Test961)
{
    unsigned char poly[] = {1, 14, 162, 163, 236};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 29), 218);
}

TEST(GfPolyEval, Test962)
{
    unsigned char poly[] = {1, 14, 162, 163, 236};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 58), 0);
}

TEST(GfPolyEval, Test963)
{
    unsigned char poly[] = {1, 14, 162, 163, 236};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 116), 164);
}

TEST(GfPolyEval, Test964)
{
    unsigned char poly[] = {1, 14, 162, 163, 236};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 232), 68);
}

TEST(GfPolyEval, Test965)
{
    unsigned char poly[] = {1, 14, 162, 163, 236};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 205), 58);
}

TEST(GfPolyEval, Test966)
{
    unsigned char poly[] = {1, 14, 162, 163, 236};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 135), 21);
}

TEST(GfPolyEval, Test967)
{
    unsigned char poly[] = {1, 14, 162, 163, 236};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 19), 120);
}

TEST(GfPolyEval, Test968)
{
    unsigned char poly[] = {1, 14, 162, 163, 236};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 38), 141);
}

TEST(GfPolyEval, Test969)
{
    unsigned char poly[] = {1, 14, 162, 163, 236};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 76), 0);
}

TEST(GfPolyEval, Test970)
{
    unsigned char poly[] = {1, 14, 162, 163, 236};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 152), 180);
}

TEST(GfPolyEval, Test971)
{
    unsigned char poly[] = {1, 14, 162, 163, 236};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 45), 154);
}

TEST(GfPolyEval, Test972)
{
    unsigned char poly[] = {1, 14, 162, 163, 236};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 90), 20);
}

TEST(GfPolyEval, Test973)
{
    unsigned char poly[] = {1, 14, 162, 163, 236};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 180), 249);
}

TEST(GfPolyEval, Test974)
{
    unsigned char poly[] = {1, 14, 162, 163, 236};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 117), 94);
}

TEST(GfPolyEval, Test975)
{
    unsigned char poly[] = {1, 14, 162, 163, 236};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 234), 62);
}

TEST(GfPolyEval, Test976)
{
    unsigned char poly[] = {1, 14, 162, 163, 236};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 201), 15);
}

TEST(GfPolyEval, Test977)
{
    unsigned char poly[] = {1, 14, 162, 163, 236};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 143), 1);
}

TEST(GfPolyEval, Test978)
{
    unsigned char poly[] = {1, 14, 162, 163, 236};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 3), 79);
}

TEST(GfPolyEval, Test979)
{
    unsigned char poly[] = {1, 14, 162, 163, 236};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 6), 166);
}

TEST(GfPolyEval, Test980)
{
    unsigned char poly[] = {1, 14, 162, 163, 236};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 12), 229);
}

TEST(GfPolyEval, Test981)
{
    unsigned char poly[] = {1, 14, 162, 163, 236};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 24), 146);
}

TEST(GfPolyEval, Test982)
{
    unsigned char poly[] = {1, 14, 162, 163, 236};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 48), 34);
}

TEST(GfPolyEval, Test983)
{
    unsigned char poly[] = {1, 14, 162, 163, 236};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 96), 252);
}

TEST(GfPolyEval, Test984)
{
    unsigned char poly[] = {1, 14, 162, 163, 236};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 192), 145);
}

TEST(GfPolyEval, Test985)
{
    unsigned char poly[] = {1, 14, 162, 163, 236};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 157), 235);
}

TEST(GfPolyEval, Test986)
{
    unsigned char poly[] = {1, 14, 162, 163, 236};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 39), 0);
}

TEST(GfPolyEval, Test987)
{
    unsigned char poly[] = {1, 14, 162, 163, 236};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 78), 229);
}

TEST(GfPolyEval, Test988)
{
    unsigned char poly[] = {1, 14, 162, 163, 236};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 156), 13);
}

TEST(GfPolyEval, Test989)
{
    unsigned char poly[] = {1, 14, 162, 163, 236};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 37), 154);
}

TEST(GfPolyEval, Test990)
{
    unsigned char poly[] = {1, 14, 162, 163, 236};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 74), 131);
}

TEST(GfPolyEval, Test991)
{
    unsigned char poly[] = {1, 14, 162, 163, 236};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 148), 187);
}

TEST(GfPolyEval, Test992)
{
    unsigned char poly[] = {1, 14, 162, 163, 236};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 53), 212);
}

TEST(GfPolyEval, Test993)
{
    unsigned char poly[] = {1, 14, 162, 163, 236};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 106), 71);
}

TEST(GfPolyEval, Test994)
{
    unsigned char poly[] = {1, 14, 162, 163, 236};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 212), 117);
}

TEST(GfPolyEval, Test995)
{
    unsigned char poly[] = {1, 14, 162, 163, 236};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 181), 183);
}

TEST(GfPolyEval, Test996)
{
    unsigned char poly[] = {1, 14, 162, 163, 236};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 119), 237);
}

TEST(GfPolyEval, Test997)
{
    unsigned char poly[] = {1, 14, 162, 163, 236};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 238), 13);
}

TEST(GfPolyEval, Test998)
{
    unsigned char poly[] = {1, 14, 162, 163, 236};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 193), 43);
}

TEST(GfPolyEval, Test999)
{
    unsigned char poly[] = {1, 14, 162, 163, 236};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 159), 171);
}

TEST(GfPolyEval, Test1000)
{
    unsigned char poly[] = {1, 14, 162, 163, 236};
    const unsigned poly_sz = 5;
    ASSERT_EQ(redupe_gf_poly_eval(poly, poly_sz, 35), 248);
}
