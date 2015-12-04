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

TEST(RsCorrectErrata, Test0)
{
    unsigned char msg_in[] = {81, 40, 90, 25, 57, 196, 105, 146, 141, 95, 28, 222, 86, 241, 107, 217, 227, 138, 161, 250, 252, 120, 110, 120, 67, 127, 166, 160, 231, 84, 253, 204, 46, 209, 203, 100, 34, 103, 30, 25, 253, 98, 75, 190, 27, 77, 207, 72, 224};
    const unsigned msg_in_sz = 49;
    unsigned char synd[] = {0, 104, 184, 213, 98};
    const unsigned synd_sz = 5;
    unsigned char err_pos[] = {23};
    const unsigned err_pos_sz = 1;
    unsigned char r[] = {81, 40, 90, 25, 57, 196, 105, 146, 141, 95, 28, 222, 86, 241, 107, 217, 227, 138, 161, 250, 252, 120, 110, 16, 67, 127, 166, 160, 231, 84, 253, 204, 46, 209, 203, 100, 34, 103, 30, 25, 253, 98, 75, 190, 27, 77, 207, 72, 224};
    const unsigned r_sz = 49;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test1)
{
    unsigned char msg_in[] = {81, 40, 90, 25, 57, 196, 105, 146, 141, 95, 28, 222, 86, 241, 107, 217, 227, 138, 161, 250, 252, 120, 110, 120, 67, 127, 166, 160, 231, 84, 253, 204, 46, 209, 203, 100, 34, 103, 30, 25, 253, 98, 67, 190, 27, 77, 207, 72, 224};
    const unsigned msg_in_sz = 49;
    unsigned char synd[] = {0, 96, 130, 243, 23};
    const unsigned synd_sz = 5;
    unsigned char err_pos[] = {42, 23};
    const unsigned err_pos_sz = 2;
    unsigned char r[] = {81, 40, 90, 25, 57, 196, 105, 146, 141, 95, 28, 222, 86, 241, 107, 217, 227, 138, 161, 250, 252, 120, 110, 16, 67, 127, 166, 160, 231, 84, 253, 204, 46, 209, 203, 100, 34, 103, 30, 25, 253, 98, 75, 190, 27, 77, 207, 72, 224};
    const unsigned r_sz = 49;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test2)
{
    unsigned char msg_in[] = {169, 224, 226, 26, 100, 146, 248, 214, 145, 43, 156, 163, 182, 44, 85, 13, 114, 248, 179, 184, 171, 88, 67, 14, 14, 92, 92, 85, 129, 116, 197, 0, 152, 250, 52, 94, 121, 247, 62, 214, 94, 144, 164, 107, 138, 165, 40, 210, 2, 167, 84, 44, 232, 81, 130, 255, 155, 201, 139, 81, 140, 92, 179, 108, 168, 101, 40, 103, 44, 40, 62, 172, 142, 199, 162, 28, 96, 212, 59, 249, 161, 65, 242, 72, 167, 51, 51, 47, 209, 238, 175, 75, 132, 206, 220, 194, 174, 95, 147, 121, 164, 47, 168, 18, 150, 94, 91, 195, 9, 120, 178, 185, 223, 7, 227, 208, 236};
    const unsigned msg_in_sz = 117;
    unsigned char synd[] = {0, 145, 81, 216, 53};
    const unsigned synd_sz = 5;
    unsigned char err_pos[] = {73};
    const unsigned err_pos_sz = 1;
    unsigned char r[] = {169, 224, 226, 26, 100, 146, 248, 214, 145, 43, 156, 163, 182, 44, 85, 13, 114, 248, 179, 184, 171, 88, 67, 14, 14, 92, 92, 85, 129, 116, 197, 0, 152, 250, 52, 94, 121, 247, 62, 214, 94, 144, 164, 107, 138, 165, 40, 210, 2, 167, 84, 44, 232, 81, 130, 255, 155, 201, 139, 81, 140, 92, 179, 108, 168, 101, 40, 103, 44, 40, 62, 172, 142, 86, 162, 28, 96, 212, 59, 249, 161, 65, 242, 72, 167, 51, 51, 47, 209, 238, 175, 75, 132, 206, 220, 194, 174, 95, 147, 121, 164, 47, 168, 18, 150, 94, 91, 195, 9, 120, 178, 185, 223, 7, 227, 208, 236};
    const unsigned r_sz = 117;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test3)
{
    unsigned char msg_in[] = {169, 224, 226, 26, 100, 146, 248, 214, 145, 43, 156, 163, 182, 44, 85, 13, 114, 248, 179, 184, 171, 88, 67, 14, 14, 92, 92, 85, 129, 116, 197, 0, 152, 250, 52, 94, 121, 247, 62, 214, 94, 144, 164, 107, 138, 165, 40, 244, 2, 167, 84, 44, 232, 81, 130, 255, 155, 201, 139, 81, 140, 92, 179, 108, 168, 101, 40, 103, 44, 40, 62, 172, 142, 199, 162, 28, 96, 212, 59, 249, 161, 65, 242, 72, 167, 51, 51, 47, 209, 238, 175, 75, 132, 206, 220, 194, 174, 95, 147, 121, 164, 47, 168, 18, 150, 94, 91, 195, 9, 120, 178, 185, 223, 7, 227, 208, 236};
    const unsigned msg_in_sz = 117;
    unsigned char synd[] = {0, 183, 58, 74, 191};
    const unsigned synd_sz = 5;
    unsigned char err_pos[] = {73, 47};
    const unsigned err_pos_sz = 2;
    unsigned char r[] = {169, 224, 226, 26, 100, 146, 248, 214, 145, 43, 156, 163, 182, 44, 85, 13, 114, 248, 179, 184, 171, 88, 67, 14, 14, 92, 92, 85, 129, 116, 197, 0, 152, 250, 52, 94, 121, 247, 62, 214, 94, 144, 164, 107, 138, 165, 40, 210, 2, 167, 84, 44, 232, 81, 130, 255, 155, 201, 139, 81, 140, 92, 179, 108, 168, 101, 40, 103, 44, 40, 62, 172, 142, 86, 162, 28, 96, 212, 59, 249, 161, 65, 242, 72, 167, 51, 51, 47, 209, 238, 175, 75, 132, 206, 220, 194, 174, 95, 147, 121, 164, 47, 168, 18, 150, 94, 91, 195, 9, 120, 178, 185, 223, 7, 227, 208, 236};
    const unsigned r_sz = 117;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test4)
{
    unsigned char msg_in[] = {75, 189, 111, 182, 124, 213, 4, 188, 98, 167, 131, 86, 82, 107, 225, 177, 177, 196, 58, 102, 129, 121, 177, 222, 173, 58, 129, 1, 50, 90, 71, 5, 26, 86, 188, 131, 254, 182, 155, 26, 116, 68, 235, 194, 22, 151, 168, 228, 168, 113, 65, 181, 124, 31, 133, 2, 138, 85, 156, 182, 54, 201, 97, 128, 221, 242, 22, 74, 64, 70, 105, 221, 55, 57, 35, 238, 169, 182, 185, 195, 193, 46, 124, 70, 64, 129, 203, 61, 205, 96, 23, 122, 13, 62, 33, 103, 154, 233, 54, 195, 65, 191, 55, 38, 109, 156, 172, 9, 206, 131, 27, 209, 221, 133, 4, 93, 205, 213, 193, 36, 96, 241, 22, 166, 30, 9, 198, 148, 132, 170, 249, 235, 93, 37, 164, 202, 176, 44, 19, 128, 144, 194, 122, 220, 143, 106, 230, 69, 253, 32, 190, 149, 198, 113, 142, 8, 197, 238, 133, 170, 72, 97, 171, 165, 173, 115, 136, 86, 116, 217, 78, 227, 157, 117, 23, 154, 168, 86, 71, 79, 94, 225, 16, 53, 123, 111, 60, 38, 52, 137, 186, 182, 4, 219, 237, 94, 132, 33, 18, 8, 152, 106, 108, 19};
    const unsigned msg_in_sz = 204;
    unsigned char synd[] = {0, 1, 209, 194, 61, 218, 106, 56, 104};
    const unsigned synd_sz = 9;
    unsigned char err_pos[] = {42};
    const unsigned err_pos_sz = 1;
    unsigned char r[] = {75, 189, 111, 182, 124, 213, 4, 188, 98, 167, 131, 86, 82, 107, 225, 177, 177, 196, 58, 102, 129, 121, 177, 222, 173, 58, 129, 1, 50, 90, 71, 5, 26, 86, 188, 131, 254, 182, 155, 26, 116, 68, 234, 194, 22, 151, 168, 228, 168, 113, 65, 181, 124, 31, 133, 2, 138, 85, 156, 182, 54, 201, 97, 128, 221, 242, 22, 74, 64, 70, 105, 221, 55, 57, 35, 238, 169, 182, 185, 195, 193, 46, 124, 70, 64, 129, 203, 61, 205, 96, 23, 122, 13, 62, 33, 103, 154, 233, 54, 195, 65, 191, 55, 38, 109, 156, 172, 9, 206, 131, 27, 209, 221, 133, 4, 93, 205, 213, 193, 36, 96, 241, 22, 166, 30, 9, 198, 148, 132, 170, 249, 235, 93, 37, 164, 202, 176, 44, 19, 128, 144, 194, 122, 220, 143, 106, 230, 69, 253, 32, 190, 149, 198, 113, 142, 8, 197, 238, 133, 170, 72, 97, 171, 165, 173, 115, 136, 86, 116, 217, 78, 227, 157, 117, 23, 154, 168, 86, 71, 79, 94, 225, 16, 53, 123, 111, 60, 38, 52, 137, 186, 182, 4, 219, 237, 94, 132, 33, 18, 8, 152, 106, 108, 19};
    const unsigned r_sz = 204;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test5)
{
    unsigned char msg_in[] = {75, 189, 111, 182, 124, 213, 4, 188, 98, 167, 131, 86, 82, 107, 225, 177, 177, 196, 58, 102, 129, 121, 177, 222, 173, 58, 129, 1, 50, 90, 71, 5, 26, 86, 188, 131, 254, 182, 155, 26, 116, 68, 235, 194, 22, 151, 168, 228, 168, 113, 65, 181, 124, 31, 133, 2, 138, 85, 156, 182, 54, 201, 97, 128, 221, 242, 22, 74, 64, 70, 105, 221, 55, 57, 35, 238, 169, 182, 185, 195, 193, 46, 124, 70, 64, 129, 203, 61, 205, 96, 23, 122, 13, 189, 33, 103, 154, 233, 54, 195, 65, 191, 55, 38, 109, 156, 172, 9, 206, 131, 27, 209, 221, 133, 4, 93, 205, 213, 193, 36, 96, 241, 22, 166, 30, 9, 198, 148, 132, 170, 249, 235, 93, 37, 164, 202, 176, 44, 19, 128, 144, 194, 122, 220, 143, 106, 230, 69, 253, 32, 190, 149, 198, 113, 142, 8, 197, 238, 133, 170, 72, 97, 171, 165, 173, 115, 136, 86, 116, 217, 78, 227, 157, 117, 23, 154, 168, 86, 71, 79, 94, 225, 16, 53, 123, 111, 60, 38, 52, 137, 186, 182, 4, 219, 237, 94, 132, 33, 18, 8, 152, 106, 108, 19};
    const unsigned msg_in_sz = 204;
    unsigned char synd[] = {0, 130, 149, 187, 255, 1, 247, 18, 197};
    const unsigned synd_sz = 9;
    unsigned char err_pos[] = {93, 42};
    const unsigned err_pos_sz = 2;
    unsigned char r[] = {75, 189, 111, 182, 124, 213, 4, 188, 98, 167, 131, 86, 82, 107, 225, 177, 177, 196, 58, 102, 129, 121, 177, 222, 173, 58, 129, 1, 50, 90, 71, 5, 26, 86, 188, 131, 254, 182, 155, 26, 116, 68, 234, 194, 22, 151, 168, 228, 168, 113, 65, 181, 124, 31, 133, 2, 138, 85, 156, 182, 54, 201, 97, 128, 221, 242, 22, 74, 64, 70, 105, 221, 55, 57, 35, 238, 169, 182, 185, 195, 193, 46, 124, 70, 64, 129, 203, 61, 205, 96, 23, 122, 13, 62, 33, 103, 154, 233, 54, 195, 65, 191, 55, 38, 109, 156, 172, 9, 206, 131, 27, 209, 221, 133, 4, 93, 205, 213, 193, 36, 96, 241, 22, 166, 30, 9, 198, 148, 132, 170, 249, 235, 93, 37, 164, 202, 176, 44, 19, 128, 144, 194, 122, 220, 143, 106, 230, 69, 253, 32, 190, 149, 198, 113, 142, 8, 197, 238, 133, 170, 72, 97, 171, 165, 173, 115, 136, 86, 116, 217, 78, 227, 157, 117, 23, 154, 168, 86, 71, 79, 94, 225, 16, 53, 123, 111, 60, 38, 52, 137, 186, 182, 4, 219, 237, 94, 132, 33, 18, 8, 152, 106, 108, 19};
    const unsigned r_sz = 204;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test6)
{
    unsigned char msg_in[] = {75, 189, 111, 182, 124, 213, 4, 188, 98, 167, 131, 86, 82, 107, 225, 177, 177, 196, 58, 102, 129, 121, 177, 222, 173, 58, 129, 1, 50, 90, 71, 5, 26, 86, 188, 131, 254, 182, 155, 26, 116, 68, 235, 194, 22, 151, 168, 228, 168, 113, 65, 181, 124, 31, 133, 2, 138, 85, 156, 182, 54, 201, 97, 128, 221, 242, 22, 74, 64, 70, 105, 221, 55, 57, 35, 238, 169, 182, 185, 195, 193, 46, 124, 70, 64, 129, 203, 61, 205, 96, 23, 122, 13, 189, 33, 103, 154, 233, 54, 195, 65, 191, 55, 38, 109, 156, 172, 9, 206, 131, 27, 209, 221, 133, 4, 93, 205, 213, 169, 36, 96, 241, 22, 166, 30, 9, 198, 148, 132, 170, 249, 235, 93, 37, 164, 202, 176, 44, 19, 128, 144, 194, 122, 220, 143, 106, 230, 69, 253, 32, 190, 149, 198, 113, 142, 8, 197, 238, 133, 170, 72, 97, 171, 165, 173, 115, 136, 86, 116, 217, 78, 227, 157, 117, 23, 154, 168, 86, 71, 79, 94, 225, 16, 53, 123, 111, 60, 38, 52, 137, 186, 182, 4, 219, 237, 94, 132, 33, 18, 8, 152, 106, 108, 19};
    const unsigned msg_in_sz = 204;
    unsigned char synd[] = {0, 234, 23, 81, 151, 131, 29, 122, 71};
    const unsigned synd_sz = 9;
    unsigned char err_pos[] = {118, 93, 42};
    const unsigned err_pos_sz = 3;
    unsigned char r[] = {75, 189, 111, 182, 124, 213, 4, 188, 98, 167, 131, 86, 82, 107, 225, 177, 177, 196, 58, 102, 129, 121, 177, 222, 173, 58, 129, 1, 50, 90, 71, 5, 26, 86, 188, 131, 254, 182, 155, 26, 116, 68, 234, 194, 22, 151, 168, 228, 168, 113, 65, 181, 124, 31, 133, 2, 138, 85, 156, 182, 54, 201, 97, 128, 221, 242, 22, 74, 64, 70, 105, 221, 55, 57, 35, 238, 169, 182, 185, 195, 193, 46, 124, 70, 64, 129, 203, 61, 205, 96, 23, 122, 13, 62, 33, 103, 154, 233, 54, 195, 65, 191, 55, 38, 109, 156, 172, 9, 206, 131, 27, 209, 221, 133, 4, 93, 205, 213, 193, 36, 96, 241, 22, 166, 30, 9, 198, 148, 132, 170, 249, 235, 93, 37, 164, 202, 176, 44, 19, 128, 144, 194, 122, 220, 143, 106, 230, 69, 253, 32, 190, 149, 198, 113, 142, 8, 197, 238, 133, 170, 72, 97, 171, 165, 173, 115, 136, 86, 116, 217, 78, 227, 157, 117, 23, 154, 168, 86, 71, 79, 94, 225, 16, 53, 123, 111, 60, 38, 52, 137, 186, 182, 4, 219, 237, 94, 132, 33, 18, 8, 152, 106, 108, 19};
    const unsigned r_sz = 204;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test7)
{
    unsigned char msg_in[] = {75, 189, 111, 182, 124, 213, 4, 188, 98, 167, 131, 86, 82, 107, 225, 177, 177, 196, 58, 102, 129, 121, 177, 222, 173, 58, 129, 1, 109, 90, 71, 5, 26, 86, 188, 131, 254, 182, 155, 26, 116, 68, 235, 194, 22, 151, 168, 228, 168, 113, 65, 181, 124, 31, 133, 2, 138, 85, 156, 182, 54, 201, 97, 128, 221, 242, 22, 74, 64, 70, 105, 221, 55, 57, 35, 238, 169, 182, 185, 195, 193, 46, 124, 70, 64, 129, 203, 61, 205, 96, 23, 122, 13, 189, 33, 103, 154, 233, 54, 195, 65, 191, 55, 38, 109, 156, 172, 9, 206, 131, 27, 209, 221, 133, 4, 93, 205, 213, 169, 36, 96, 241, 22, 166, 30, 9, 198, 148, 132, 170, 249, 235, 93, 37, 164, 202, 176, 44, 19, 128, 144, 194, 122, 220, 143, 106, 230, 69, 253, 32, 190, 149, 198, 113, 142, 8, 197, 238, 133, 170, 72, 97, 171, 165, 173, 115, 136, 86, 116, 217, 78, 227, 157, 117, 23, 154, 168, 86, 71, 79, 94, 225, 16, 53, 123, 111, 60, 38, 52, 137, 186, 182, 4, 219, 237, 94, 132, 33, 18, 8, 152, 106, 108, 19};
    const unsigned msg_in_sz = 204;
    unsigned char synd[] = {0, 181, 1, 34, 103, 13, 236, 11, 84};
    const unsigned synd_sz = 9;
    unsigned char err_pos[] = {118, 93, 42, 28};
    const unsigned err_pos_sz = 4;
    unsigned char r[] = {75, 189, 111, 182, 124, 213, 4, 188, 98, 167, 131, 86, 82, 107, 225, 177, 177, 196, 58, 102, 129, 121, 177, 222, 173, 58, 129, 1, 50, 90, 71, 5, 26, 86, 188, 131, 254, 182, 155, 26, 116, 68, 234, 194, 22, 151, 168, 228, 168, 113, 65, 181, 124, 31, 133, 2, 138, 85, 156, 182, 54, 201, 97, 128, 221, 242, 22, 74, 64, 70, 105, 221, 55, 57, 35, 238, 169, 182, 185, 195, 193, 46, 124, 70, 64, 129, 203, 61, 205, 96, 23, 122, 13, 62, 33, 103, 154, 233, 54, 195, 65, 191, 55, 38, 109, 156, 172, 9, 206, 131, 27, 209, 221, 133, 4, 93, 205, 213, 193, 36, 96, 241, 22, 166, 30, 9, 198, 148, 132, 170, 249, 235, 93, 37, 164, 202, 176, 44, 19, 128, 144, 194, 122, 220, 143, 106, 230, 69, 253, 32, 190, 149, 198, 113, 142, 8, 197, 238, 133, 170, 72, 97, 171, 165, 173, 115, 136, 86, 116, 217, 78, 227, 157, 117, 23, 154, 168, 86, 71, 79, 94, 225, 16, 53, 123, 111, 60, 38, 52, 137, 186, 182, 4, 219, 237, 94, 132, 33, 18, 8, 152, 106, 108, 19};
    const unsigned r_sz = 204;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test8)
{
    unsigned char msg_in[] = {136, 104, 20, 171, 232, 38, 211, 44, 171, 115, 144, 44, 144, 52, 117, 7, 128, 38, 80, 185, 190, 138, 81, 219, 64, 207, 152, 66, 129, 106, 99, 219, 7, 252, 70, 188, 207, 93, 241, 174, 42, 85, 181, 96, 79, 135, 115, 96, 22, 55, 57, 246, 28, 143, 93, 251, 19, 123, 53, 140, 211, 226, 194, 181, 143, 176, 49, 48, 162, 115, 165, 101, 32, 232, 127, 216, 13, 134, 194};
    const unsigned msg_in_sz = 79;
    unsigned char synd[] = {0, 211, 41, 121, 234, 127, 73, 155, 12};
    const unsigned synd_sz = 9;
    unsigned char err_pos[] = {13};
    const unsigned err_pos_sz = 1;
    unsigned char r[] = {136, 104, 20, 171, 232, 38, 211, 44, 171, 115, 144, 44, 144, 231, 117, 7, 128, 38, 80, 185, 190, 138, 81, 219, 64, 207, 152, 66, 129, 106, 99, 219, 7, 252, 70, 188, 207, 93, 241, 174, 42, 85, 181, 96, 79, 135, 115, 96, 22, 55, 57, 246, 28, 143, 93, 251, 19, 123, 53, 140, 211, 226, 194, 181, 143, 176, 49, 48, 162, 115, 165, 101, 32, 232, 127, 216, 13, 134, 194};
    const unsigned r_sz = 79;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test9)
{
    unsigned char msg_in[] = {136, 104, 20, 70, 232, 38, 211, 44, 171, 115, 144, 44, 144, 52, 117, 7, 128, 38, 80, 185, 190, 138, 81, 219, 64, 207, 152, 66, 129, 106, 99, 219, 7, 252, 70, 188, 207, 93, 241, 174, 42, 85, 181, 96, 79, 135, 115, 96, 22, 55, 57, 246, 28, 143, 93, 251, 19, 123, 53, 140, 211, 226, 194, 181, 143, 176, 49, 48, 162, 115, 165, 101, 32, 232, 127, 216, 13, 134, 194};
    const unsigned msg_in_sz = 79;
    unsigned char synd[] = {0, 62, 171, 180, 149, 192, 194, 33, 180};
    const unsigned synd_sz = 9;
    unsigned char err_pos[] = {13, 3};
    const unsigned err_pos_sz = 2;
    unsigned char r[] = {136, 104, 20, 171, 232, 38, 211, 44, 171, 115, 144, 44, 144, 231, 117, 7, 128, 38, 80, 185, 190, 138, 81, 219, 64, 207, 152, 66, 129, 106, 99, 219, 7, 252, 70, 188, 207, 93, 241, 174, 42, 85, 181, 96, 79, 135, 115, 96, 22, 55, 57, 246, 28, 143, 93, 251, 19, 123, 53, 140, 211, 226, 194, 181, 143, 176, 49, 48, 162, 115, 165, 101, 32, 232, 127, 216, 13, 134, 194};
    const unsigned r_sz = 79;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test10)
{
    unsigned char msg_in[] = {136, 104, 20, 70, 232, 38, 211, 44, 171, 115, 144, 44, 144, 52, 117, 7, 128, 38, 80, 185, 190, 138, 81, 219, 64, 207, 152, 66, 129, 106, 99, 219, 7, 252, 70, 188, 207, 93, 241, 174, 42, 85, 181, 96, 79, 135, 115, 96, 22, 55, 57, 246, 28, 143, 93, 251, 19, 6, 53, 140, 211, 226, 194, 181, 143, 176, 49, 48, 162, 115, 165, 101, 32, 232, 127, 216, 13, 134, 194};
    const unsigned msg_in_sz = 79;
    unsigned char synd[] = {0, 67, 145, 212, 159, 165, 116, 31, 29};
    const unsigned synd_sz = 9;
    unsigned char err_pos[] = {57, 13, 3};
    const unsigned err_pos_sz = 3;
    unsigned char r[] = {136, 104, 20, 171, 232, 38, 211, 44, 171, 115, 144, 44, 144, 231, 117, 7, 128, 38, 80, 185, 190, 138, 81, 219, 64, 207, 152, 66, 129, 106, 99, 219, 7, 252, 70, 188, 207, 93, 241, 174, 42, 85, 181, 96, 79, 135, 115, 96, 22, 55, 57, 246, 28, 143, 93, 251, 19, 123, 53, 140, 211, 226, 194, 181, 143, 176, 49, 48, 162, 115, 165, 101, 32, 232, 127, 216, 13, 134, 194};
    const unsigned r_sz = 79;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test11)
{
    unsigned char msg_in[] = {136, 104, 20, 70, 232, 38, 211, 44, 171, 115, 144, 44, 144, 52, 117, 7, 128, 38, 80, 185, 190, 138, 81, 85, 64, 207, 152, 66, 129, 106, 99, 219, 7, 252, 70, 188, 207, 93, 241, 174, 42, 85, 181, 96, 79, 135, 115, 96, 22, 55, 57, 246, 28, 143, 93, 251, 19, 6, 53, 140, 211, 226, 194, 181, 143, 176, 49, 48, 162, 115, 165, 101, 32, 232, 127, 216, 13, 134, 194};
    const unsigned msg_in_sz = 79;
    unsigned char synd[] = {0, 205, 193, 105, 89, 243, 46, 150, 10};
    const unsigned synd_sz = 9;
    unsigned char err_pos[] = {57, 23, 13, 3};
    const unsigned err_pos_sz = 4;
    unsigned char r[] = {136, 104, 20, 171, 232, 38, 211, 44, 171, 115, 144, 44, 144, 231, 117, 7, 128, 38, 80, 185, 190, 138, 81, 219, 64, 207, 152, 66, 129, 106, 99, 219, 7, 252, 70, 188, 207, 93, 241, 174, 42, 85, 181, 96, 79, 135, 115, 96, 22, 55, 57, 246, 28, 143, 93, 251, 19, 123, 53, 140, 211, 226, 194, 181, 143, 176, 49, 48, 162, 115, 165, 101, 32, 232, 127, 216, 13, 134, 194};
    const unsigned r_sz = 79;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test12)
{
    unsigned char msg_in[] = {162, 117, 32, 51, 7, 45, 25, 225, 76, 173, 173, 139, 145, 235, 106, 132, 224, 27, 57, 50, 24, 119};
    const unsigned msg_in_sz = 22;
    unsigned char synd[] = {0, 218, 132, 154, 73, 183, 198, 215, 227, 98, 165, 50, 28, 83, 121, 43, 18};
    const unsigned synd_sz = 17;
    unsigned char err_pos[] = {15};
    const unsigned err_pos_sz = 1;
    unsigned char r[] = {162, 117, 32, 51, 7, 45, 25, 225, 76, 173, 173, 139, 145, 235, 106, 94, 224, 27, 57, 50, 24, 119};
    const unsigned r_sz = 22;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test13)
{
    unsigned char msg_in[] = {162, 117, 32, 51, 95, 45, 25, 225, 76, 173, 173, 139, 145, 235, 106, 132, 224, 27, 57, 50, 24, 119};
    const unsigned msg_in_sz = 22;
    unsigned char synd[] = {0, 130, 140, 46, 3, 231, 122, 41, 249, 142, 231, 214, 234, 253, 223, 57, 74};
    const unsigned synd_sz = 17;
    unsigned char err_pos[] = {15, 4};
    const unsigned err_pos_sz = 2;
    unsigned char r[] = {162, 117, 32, 51, 7, 45, 25, 225, 76, 173, 173, 139, 145, 235, 106, 94, 224, 27, 57, 50, 24, 119};
    const unsigned r_sz = 22;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test14)
{
    unsigned char msg_in[] = {162, 117, 32, 51, 95, 45, 25, 225, 76, 173, 173, 139, 145, 235, 162, 132, 224, 27, 57, 50, 24, 119};
    const unsigned msg_in_sz = 22;
    unsigned char synd[] = {0, 74, 108, 119, 152, 245, 143, 34, 16, 35, 247, 62, 199, 254, 66, 12, 213};
    const unsigned synd_sz = 17;
    unsigned char err_pos[] = {15, 14, 4};
    const unsigned err_pos_sz = 3;
    unsigned char r[] = {162, 117, 32, 51, 7, 45, 25, 225, 76, 173, 173, 139, 145, 235, 106, 94, 224, 27, 57, 50, 24, 119};
    const unsigned r_sz = 22;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test15)
{
    unsigned char msg_in[] = {162, 117, 32, 51, 95, 45, 25, 225, 76, 173, 173, 139, 145, 235, 162, 141, 224, 27, 57, 50, 24, 119};
    const unsigned msg_in_sz = 22;
    unsigned char synd[] = {0, 67, 22, 156, 192, 118, 200, 50, 100, 111, 29, 38, 137, 148, 221, 24, 188};
    const unsigned synd_sz = 17;
    unsigned char err_pos[] = {15, 14, 4};
    const unsigned err_pos_sz = 3;
    unsigned char r[] = {162, 117, 32, 51, 7, 45, 25, 225, 76, 173, 173, 139, 145, 235, 106, 94, 224, 27, 57, 50, 24, 119};
    const unsigned r_sz = 22;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test16)
{
    unsigned char msg_in[] = {162, 117, 32, 51, 95, 19, 25, 225, 76, 173, 173, 139, 145, 235, 162, 141, 224, 27, 57, 50, 24, 119};
    const unsigned msg_in_sz = 22;
    unsigned char synd[] = {0, 125, 56, 6, 127, 221, 250, 107, 44, 223, 21, 124, 21, 158, 31, 163, 58};
    const unsigned synd_sz = 17;
    unsigned char err_pos[] = {15, 14, 5, 4};
    const unsigned err_pos_sz = 4;
    unsigned char r[] = {162, 117, 32, 51, 7, 45, 25, 225, 76, 173, 173, 139, 145, 235, 106, 94, 224, 27, 57, 50, 24, 119};
    const unsigned r_sz = 22;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test17)
{
    unsigned char msg_in[] = {162, 117, 32, 51, 95, 19, 25, 225, 76, 173, 173, 139, 145, 235, 162, 141, 224, 27, 57, 82, 24, 119};
    const unsigned msg_in_sz = 22;
    unsigned char synd[] = {0, 29, 165, 72, 90, 73, 144, 222, 194, 64, 83, 121, 1, 206, 66, 202, 131};
    const unsigned synd_sz = 17;
    unsigned char err_pos[] = {19, 15, 14, 5, 4};
    const unsigned err_pos_sz = 5;
    unsigned char r[] = {162, 117, 32, 51, 7, 45, 25, 225, 76, 173, 173, 139, 145, 235, 106, 94, 224, 27, 57, 50, 24, 119};
    const unsigned r_sz = 22;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test18)
{
    unsigned char msg_in[] = {162, 117, 32, 51, 95, 19, 25, 225, 76, 173, 173, 139, 145, 235, 162, 141, 224, 27, 57, 82, 134, 119};
    const unsigned msg_in_sz = 22;
    unsigned char synd[] = {0, 131, 132, 10, 222, 92, 186, 138, 106, 13, 201, 80, 83, 106, 23, 96, 202};
    const unsigned synd_sz = 17;
    unsigned char err_pos[] = {20, 19, 15, 14, 5, 4};
    const unsigned err_pos_sz = 6;
    unsigned char r[] = {162, 117, 32, 51, 7, 45, 25, 225, 76, 173, 173, 139, 145, 235, 106, 94, 224, 27, 57, 50, 24, 119};
    const unsigned r_sz = 22;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test19)
{
    unsigned char msg_in[] = {162, 117, 32, 51, 95, 19, 25, 225, 76, 132, 173, 139, 145, 235, 162, 141, 224, 27, 57, 82, 134, 119};
    const unsigned msg_in_sz = 22;
    unsigned char synd[] = {0, 170, 247, 185, 26, 56, 28, 220, 159, 112, 200, 157, 220, 79, 81, 217, 175};
    const unsigned synd_sz = 17;
    unsigned char err_pos[] = {20, 19, 15, 14, 9, 5, 4};
    const unsigned err_pos_sz = 7;
    unsigned char r[] = {162, 117, 32, 51, 7, 45, 25, 225, 76, 173, 173, 139, 145, 235, 106, 94, 224, 27, 57, 50, 24, 119};
    const unsigned r_sz = 22;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test20)
{
    unsigned char msg_in[] = {41, 28, 65, 174, 166, 247, 197, 168, 115, 25, 26, 24, 185, 152, 238, 48, 30, 10, 204, 59, 215, 176, 184, 239, 104, 46, 76, 35, 37, 162, 87, 164};
    const unsigned msg_in_sz = 32;
    unsigned char synd[] = {0, 255, 200, 155, 11, 16, 3, 159, 194, 254, 189, 46, 170, 123, 25, 249, 235};
    const unsigned synd_sz = 17;
    unsigned char err_pos[] = {10};
    const unsigned err_pos_sz = 1;
    unsigned char r[] = {41, 28, 65, 174, 166, 247, 197, 168, 115, 25, 229, 24, 185, 152, 238, 48, 30, 10, 204, 59, 215, 176, 184, 239, 104, 46, 76, 35, 37, 162, 87, 164};
    const unsigned r_sz = 32;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test21)
{
    unsigned char msg_in[] = {41, 28, 65, 174, 166, 247, 197, 168, 115, 25, 26, 24, 185, 152, 238, 48, 30, 10, 204, 59, 74, 176, 184, 239, 104, 46, 76, 35, 37, 162, 87, 164};
    const unsigned msg_in_sz = 32;
    unsigned char synd[] = {0, 98, 191, 203, 181, 14, 124, 220, 127, 197, 225, 4, 56, 189, 230, 151, 102};
    const unsigned synd_sz = 17;
    unsigned char err_pos[] = {20, 10};
    const unsigned err_pos_sz = 2;
    unsigned char r[] = {41, 28, 65, 174, 166, 247, 197, 168, 115, 25, 229, 24, 185, 152, 238, 48, 30, 10, 204, 59, 215, 176, 184, 239, 104, 46, 76, 35, 37, 162, 87, 164};
    const unsigned r_sz = 32;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test22)
{
    unsigned char msg_in[] = {41, 28, 65, 174, 166, 247, 197, 168, 115, 25, 63, 24, 185, 152, 238, 48, 30, 10, 204, 59, 74, 176, 184, 239, 104, 46, 76, 35, 37, 162, 87, 164};
    const unsigned msg_in_sz = 32;
    unsigned char synd[] = {0, 71, 5, 179, 51, 53, 105, 99, 187, 24, 197, 203, 245, 154, 182, 152, 191};
    const unsigned synd_sz = 17;
    unsigned char err_pos[] = {20, 10};
    const unsigned err_pos_sz = 2;
    unsigned char r[] = {41, 28, 65, 174, 166, 247, 197, 168, 115, 25, 229, 24, 185, 152, 238, 48, 30, 10, 204, 59, 215, 176, 184, 239, 104, 46, 76, 35, 37, 162, 87, 164};
    const unsigned r_sz = 32;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test23)
{
    unsigned char msg_in[] = {41, 185, 65, 174, 166, 247, 197, 168, 115, 25, 63, 24, 185, 152, 238, 48, 30, 10, 204, 59, 74, 176, 184, 239, 104, 46, 76, 35, 37, 162, 87, 164};
    const unsigned msg_in_sz = 32;
    unsigned char synd[] = {0, 226, 46, 168, 250, 29, 210, 124, 239, 238, 37, 56, 232, 14, 47, 219, 58};
    const unsigned synd_sz = 17;
    unsigned char err_pos[] = {20, 10, 1};
    const unsigned err_pos_sz = 3;
    unsigned char r[] = {41, 28, 65, 174, 166, 247, 197, 168, 115, 25, 229, 24, 185, 152, 238, 48, 30, 10, 204, 59, 215, 176, 184, 239, 104, 46, 76, 35, 37, 162, 87, 164};
    const unsigned r_sz = 32;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test24)
{
    unsigned char msg_in[] = {41, 185, 65, 174, 166, 247, 197, 168, 115, 25, 206, 24, 185, 152, 238, 48, 30, 10, 204, 59, 74, 176, 184, 239, 104, 46, 76, 35, 37, 162, 87, 164};
    const unsigned msg_in_sz = 32;
    unsigned char synd[] = {0, 19, 74, 107, 113, 21, 93, 189, 142, 145, 245, 47, 189, 189, 173, 41, 193};
    const unsigned synd_sz = 17;
    unsigned char err_pos[] = {20, 10, 1};
    const unsigned err_pos_sz = 3;
    unsigned char r[] = {41, 28, 65, 174, 166, 247, 197, 168, 115, 25, 229, 24, 185, 152, 238, 48, 30, 10, 204, 59, 215, 176, 184, 239, 104, 46, 76, 35, 37, 162, 87, 164};
    const unsigned r_sz = 32;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test25)
{
    unsigned char msg_in[] = {41, 185, 65, 174, 166, 247, 197, 168, 115, 25, 206, 24, 28, 152, 238, 48, 30, 10, 204, 59, 74, 176, 184, 239, 104, 46, 76, 35, 37, 162, 87, 164};
    const unsigned msg_in_sz = 32;
    unsigned char synd[] = {0, 182, 236, 35, 152, 47, 69, 158, 239, 71, 248, 234, 151, 108, 59, 39, 234};
    const unsigned synd_sz = 17;
    unsigned char err_pos[] = {20, 12, 10, 1};
    const unsigned err_pos_sz = 4;
    unsigned char r[] = {41, 28, 65, 174, 166, 247, 197, 168, 115, 25, 229, 24, 185, 152, 238, 48, 30, 10, 204, 59, 215, 176, 184, 239, 104, 46, 76, 35, 37, 162, 87, 164};
    const unsigned r_sz = 32;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test26)
{
    unsigned char msg_in[] = {41, 185, 65, 174, 166, 247, 197, 168, 115, 25, 206, 24, 28, 152, 238, 48, 30, 152, 204, 59, 74, 176, 184, 239, 104, 46, 76, 35, 37, 162, 87, 164};
    const unsigned msg_in_sz = 32;
    unsigned char synd[] = {0, 36, 146, 18, 252, 141, 76, 21, 55, 51, 119, 126, 131, 13, 198, 86, 58};
    const unsigned synd_sz = 17;
    unsigned char err_pos[] = {20, 17, 12, 10, 1};
    const unsigned err_pos_sz = 5;
    unsigned char r[] = {41, 28, 65, 174, 166, 247, 197, 168, 115, 25, 229, 24, 185, 152, 238, 48, 30, 10, 204, 59, 215, 176, 184, 239, 104, 46, 76, 35, 37, 162, 87, 164};
    const unsigned r_sz = 32;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test27)
{
    unsigned char msg_in[] = {41, 185, 65, 174, 166, 247, 197, 168, 115, 25, 206, 24, 28, 152, 238, 48, 30, 152, 204, 59, 74, 176, 184, 239, 104, 46, 76, 35, 253, 162, 87, 164};
    const unsigned msg_in_sz = 32;
    unsigned char synd[] = {0, 252, 28, 22, 220, 144, 164, 6, 175, 135, 190, 120, 179, 144, 90, 194, 238};
    const unsigned synd_sz = 17;
    unsigned char err_pos[] = {28, 20, 17, 12, 10, 1};
    const unsigned err_pos_sz = 6;
    unsigned char r[] = {41, 28, 65, 174, 166, 247, 197, 168, 115, 25, 229, 24, 185, 152, 238, 48, 30, 10, 204, 59, 215, 176, 184, 239, 104, 46, 76, 35, 37, 162, 87, 164};
    const unsigned r_sz = 32;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test28)
{
    unsigned char msg_in[] = {113, 129, 67, 195, 191, 231, 68, 62, 206, 39, 216, 104, 63, 11, 33, 102, 33, 221, 169, 230, 165, 27, 24, 31, 97, 26, 37, 153, 163, 169, 205, 125, 135, 13, 110, 14, 192, 128, 167, 212, 214, 247, 229, 118, 126, 85, 90, 184, 184, 210, 190, 135, 163, 35, 162, 97, 127, 243, 209, 21, 148, 212, 183, 201, 164, 42, 130, 46, 194, 33, 107, 52, 93, 73, 87, 100, 157, 63, 212, 77, 249, 140, 11, 215, 169, 101, 181, 225, 127, 7, 248, 46, 96, 35, 157, 134, 162, 151, 37, 152, 83, 135, 229, 7, 232, 193, 215, 237, 150, 199, 23, 44, 146, 59, 168, 175, 197, 203, 101, 197, 193, 88, 213, 2, 48, 25, 207, 8, 220, 91, 16, 201, 216, 59, 9, 130, 197, 140, 128, 28, 197, 124, 68, 231, 253, 163, 15, 188, 195, 29, 102, 127, 53, 87, 174, 241, 51, 107, 165, 31, 216, 198, 151, 129, 187, 246, 79, 14, 5, 39, 14, 70, 204, 69, 68, 214, 61, 163, 245, 234, 107, 59, 254, 226, 68, 68, 206, 102, 189, 243, 168, 166, 185, 66, 36, 121, 13, 235, 87, 199, 92, 205, 203, 33, 168, 203, 103, 235, 121, 215, 93, 147, 70, 180, 181, 66, 75, 132, 163, 117, 245, 147, 37, 167, 177, 210, 147, 212, 201};
    const unsigned msg_in_sz = 229;
    unsigned char synd[] = {0, 132, 216, 104, 43, 137, 55, 212, 73, 29, 147, 244, 177, 141, 40, 198, 180, 92, 176, 67, 162, 190, 227, 157, 84, 142, 103, 69, 60, 165, 238, 114, 232};
    const unsigned synd_sz = 33;
    unsigned char err_pos[] = {117};
    const unsigned err_pos_sz = 1;
    unsigned char r[] = {113, 129, 67, 195, 191, 231, 68, 62, 206, 39, 216, 104, 63, 11, 33, 102, 33, 221, 169, 230, 165, 27, 24, 31, 97, 26, 37, 153, 163, 169, 205, 125, 135, 13, 110, 14, 192, 128, 167, 212, 214, 247, 229, 118, 126, 85, 90, 184, 184, 210, 190, 135, 163, 35, 162, 97, 127, 243, 209, 21, 148, 212, 183, 201, 164, 42, 130, 46, 194, 33, 107, 52, 93, 73, 87, 100, 157, 63, 212, 77, 249, 140, 11, 215, 169, 101, 181, 225, 127, 7, 248, 46, 96, 35, 157, 134, 162, 151, 37, 152, 83, 135, 229, 7, 232, 193, 215, 237, 150, 199, 23, 44, 146, 59, 168, 175, 197, 79, 101, 197, 193, 88, 213, 2, 48, 25, 207, 8, 220, 91, 16, 201, 216, 59, 9, 130, 197, 140, 128, 28, 197, 124, 68, 231, 253, 163, 15, 188, 195, 29, 102, 127, 53, 87, 174, 241, 51, 107, 165, 31, 216, 198, 151, 129, 187, 246, 79, 14, 5, 39, 14, 70, 204, 69, 68, 214, 61, 163, 245, 234, 107, 59, 254, 226, 68, 68, 206, 102, 189, 243, 168, 166, 185, 66, 36, 121, 13, 235, 87, 199, 92, 205, 203, 33, 168, 203, 103, 235, 121, 215, 93, 147, 70, 180, 181, 66, 75, 132, 163, 117, 245, 147, 37, 167, 177, 210, 147, 212, 201};
    const unsigned r_sz = 229;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test29)
{
    unsigned char msg_in[] = {113, 129, 67, 195, 191, 231, 68, 62, 206, 39, 216, 104, 63, 11, 33, 102, 33, 221, 169, 230, 165, 27, 24, 31, 97, 26, 37, 153, 163, 169, 205, 125, 135, 13, 110, 14, 192, 128, 167, 212, 214, 247, 229, 118, 126, 85, 90, 184, 184, 210, 190, 135, 163, 35, 162, 97, 127, 243, 209, 21, 148, 212, 183, 201, 164, 42, 130, 46, 194, 33, 107, 52, 93, 73, 87, 100, 157, 63, 212, 77, 249, 140, 11, 215, 169, 101, 181, 225, 127, 7, 248, 46, 96, 35, 157, 134, 162, 151, 37, 152, 83, 135, 229, 7, 232, 193, 215, 237, 150, 199, 23, 44, 146, 59, 168, 175, 197, 203, 238, 197, 193, 88, 213, 2, 48, 25, 207, 8, 220, 91, 16, 201, 216, 59, 9, 130, 197, 140, 128, 28, 197, 124, 68, 231, 253, 163, 15, 188, 195, 29, 102, 127, 53, 87, 174, 241, 51, 107, 165, 31, 216, 198, 151, 129, 187, 246, 79, 14, 5, 39, 14, 70, 204, 69, 68, 214, 61, 163, 245, 234, 107, 59, 254, 226, 68, 68, 206, 102, 189, 243, 168, 166, 185, 66, 36, 121, 13, 235, 87, 199, 92, 205, 203, 33, 168, 203, 103, 235, 121, 215, 93, 147, 70, 180, 181, 66, 75, 132, 163, 117, 245, 147, 37, 167, 177, 210, 147, 212, 201};
    const unsigned msg_in_sz = 229;
    unsigned char synd[] = {0, 15, 131, 24, 145, 247, 221, 108, 249, 178, 53, 42, 202, 129, 182, 69, 240, 37, 114, 152, 63, 148, 78, 245, 207, 235, 5, 15, 21, 161, 111, 248, 212};
    const unsigned synd_sz = 33;
    unsigned char err_pos[] = {118, 117};
    const unsigned err_pos_sz = 2;
    unsigned char r[] = {113, 129, 67, 195, 191, 231, 68, 62, 206, 39, 216, 104, 63, 11, 33, 102, 33, 221, 169, 230, 165, 27, 24, 31, 97, 26, 37, 153, 163, 169, 205, 125, 135, 13, 110, 14, 192, 128, 167, 212, 214, 247, 229, 118, 126, 85, 90, 184, 184, 210, 190, 135, 163, 35, 162, 97, 127, 243, 209, 21, 148, 212, 183, 201, 164, 42, 130, 46, 194, 33, 107, 52, 93, 73, 87, 100, 157, 63, 212, 77, 249, 140, 11, 215, 169, 101, 181, 225, 127, 7, 248, 46, 96, 35, 157, 134, 162, 151, 37, 152, 83, 135, 229, 7, 232, 193, 215, 237, 150, 199, 23, 44, 146, 59, 168, 175, 197, 79, 101, 197, 193, 88, 213, 2, 48, 25, 207, 8, 220, 91, 16, 201, 216, 59, 9, 130, 197, 140, 128, 28, 197, 124, 68, 231, 253, 163, 15, 188, 195, 29, 102, 127, 53, 87, 174, 241, 51, 107, 165, 31, 216, 198, 151, 129, 187, 246, 79, 14, 5, 39, 14, 70, 204, 69, 68, 214, 61, 163, 245, 234, 107, 59, 254, 226, 68, 68, 206, 102, 189, 243, 168, 166, 185, 66, 36, 121, 13, 235, 87, 199, 92, 205, 203, 33, 168, 203, 103, 235, 121, 215, 93, 147, 70, 180, 181, 66, 75, 132, 163, 117, 245, 147, 37, 167, 177, 210, 147, 212, 201};
    const unsigned r_sz = 229;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test30)
{
    unsigned char msg_in[] = {113, 129, 67, 195, 191, 231, 68, 62, 206, 39, 216, 104, 63, 11, 33, 102, 33, 221, 169, 230, 165, 27, 24, 31, 97, 26, 37, 153, 163, 169, 205, 125, 135, 13, 110, 14, 192, 128, 167, 212, 214, 247, 229, 118, 126, 85, 90, 184, 184, 210, 190, 135, 163, 35, 162, 97, 127, 243, 209, 21, 148, 212, 183, 201, 164, 42, 130, 46, 194, 33, 107, 52, 93, 73, 87, 100, 157, 63, 212, 77, 249, 140, 11, 215, 169, 101, 181, 225, 127, 7, 248, 46, 96, 35, 157, 134, 162, 151, 37, 152, 83, 135, 229, 7, 232, 193, 215, 237, 150, 199, 23, 44, 146, 59, 168, 175, 197, 203, 238, 197, 193, 88, 213, 2, 48, 25, 207, 8, 220, 91, 16, 201, 216, 59, 9, 130, 197, 140, 128, 28, 197, 124, 68, 231, 253, 163, 15, 188, 195, 29, 102, 127, 53, 87, 174, 241, 51, 217, 165, 31, 216, 198, 151, 129, 187, 246, 79, 14, 5, 39, 14, 70, 204, 69, 68, 214, 61, 163, 245, 234, 107, 59, 254, 226, 68, 68, 206, 102, 189, 243, 168, 166, 185, 66, 36, 121, 13, 235, 87, 199, 92, 205, 203, 33, 168, 203, 103, 235, 121, 215, 93, 147, 70, 180, 181, 66, 75, 132, 163, 117, 245, 147, 37, 167, 177, 210, 147, 212, 201};
    const unsigned msg_in_sz = 229;
    unsigned char synd[] = {0, 189, 143, 91, 116, 219, 128, 160, 254, 161, 227, 206, 90, 246, 136, 114, 242, 64, 38, 97, 95, 182, 53, 136, 29, 197, 61, 151, 235, 210, 155, 103, 57};
    const unsigned synd_sz = 33;
    unsigned char err_pos[] = {157, 118, 117};
    const unsigned err_pos_sz = 3;
    unsigned char r[] = {113, 129, 67, 195, 191, 231, 68, 62, 206, 39, 216, 104, 63, 11, 33, 102, 33, 221, 169, 230, 165, 27, 24, 31, 97, 26, 37, 153, 163, 169, 205, 125, 135, 13, 110, 14, 192, 128, 167, 212, 214, 247, 229, 118, 126, 85, 90, 184, 184, 210, 190, 135, 163, 35, 162, 97, 127, 243, 209, 21, 148, 212, 183, 201, 164, 42, 130, 46, 194, 33, 107, 52, 93, 73, 87, 100, 157, 63, 212, 77, 249, 140, 11, 215, 169, 101, 181, 225, 127, 7, 248, 46, 96, 35, 157, 134, 162, 151, 37, 152, 83, 135, 229, 7, 232, 193, 215, 237, 150, 199, 23, 44, 146, 59, 168, 175, 197, 79, 101, 197, 193, 88, 213, 2, 48, 25, 207, 8, 220, 91, 16, 201, 216, 59, 9, 130, 197, 140, 128, 28, 197, 124, 68, 231, 253, 163, 15, 188, 195, 29, 102, 127, 53, 87, 174, 241, 51, 107, 165, 31, 216, 198, 151, 129, 187, 246, 79, 14, 5, 39, 14, 70, 204, 69, 68, 214, 61, 163, 245, 234, 107, 59, 254, 226, 68, 68, 206, 102, 189, 243, 168, 166, 185, 66, 36, 121, 13, 235, 87, 199, 92, 205, 203, 33, 168, 203, 103, 235, 121, 215, 93, 147, 70, 180, 181, 66, 75, 132, 163, 117, 245, 147, 37, 167, 177, 210, 147, 212, 201};
    const unsigned r_sz = 229;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test31)
{
    unsigned char msg_in[] = {113, 129, 67, 195, 191, 231, 68, 62, 206, 39, 216, 104, 63, 11, 33, 102, 33, 221, 169, 230, 165, 27, 24, 31, 97, 26, 37, 153, 163, 169, 205, 125, 135, 13, 110, 14, 192, 128, 167, 212, 214, 247, 229, 118, 126, 85, 90, 184, 184, 210, 190, 135, 163, 35, 162, 97, 127, 243, 209, 21, 148, 212, 183, 201, 164, 42, 130, 46, 194, 33, 107, 52, 93, 73, 87, 100, 157, 63, 212, 77, 249, 140, 11, 215, 169, 101, 181, 225, 127, 7, 248, 46, 96, 35, 157, 134, 162, 151, 37, 152, 83, 135, 229, 7, 232, 193, 215, 237, 150, 199, 23, 44, 146, 59, 168, 175, 197, 203, 238, 197, 193, 88, 213, 2, 48, 25, 207, 8, 220, 91, 16, 201, 216, 59, 9, 130, 197, 140, 128, 28, 197, 124, 199, 231, 253, 163, 15, 188, 195, 29, 102, 127, 53, 87, 174, 241, 51, 217, 165, 31, 216, 198, 151, 129, 187, 246, 79, 14, 5, 39, 14, 70, 204, 69, 68, 214, 61, 163, 245, 234, 107, 59, 254, 226, 68, 68, 206, 102, 189, 243, 168, 166, 185, 66, 36, 121, 13, 235, 87, 199, 92, 205, 203, 33, 168, 203, 103, 235, 121, 215, 93, 147, 70, 180, 181, 66, 75, 132, 163, 117, 245, 147, 37, 167, 177, 210, 147, 212, 201};
    const unsigned msg_in_sz = 229;
    unsigned char synd[] = {0, 62, 247, 157, 24, 60, 254, 231, 149, 118, 225, 177, 172, 230, 87, 145, 114, 246, 109, 21, 134, 212, 178, 14, 42, 137, 121, 50, 177, 200, 218, 141, 233};
    const unsigned synd_sz = 33;
    unsigned char err_pos[] = {157, 142, 118, 117};
    const unsigned err_pos_sz = 4;
    unsigned char r[] = {113, 129, 67, 195, 191, 231, 68, 62, 206, 39, 216, 104, 63, 11, 33, 102, 33, 221, 169, 230, 165, 27, 24, 31, 97, 26, 37, 153, 163, 169, 205, 125, 135, 13, 110, 14, 192, 128, 167, 212, 214, 247, 229, 118, 126, 85, 90, 184, 184, 210, 190, 135, 163, 35, 162, 97, 127, 243, 209, 21, 148, 212, 183, 201, 164, 42, 130, 46, 194, 33, 107, 52, 93, 73, 87, 100, 157, 63, 212, 77, 249, 140, 11, 215, 169, 101, 181, 225, 127, 7, 248, 46, 96, 35, 157, 134, 162, 151, 37, 152, 83, 135, 229, 7, 232, 193, 215, 237, 150, 199, 23, 44, 146, 59, 168, 175, 197, 79, 101, 197, 193, 88, 213, 2, 48, 25, 207, 8, 220, 91, 16, 201, 216, 59, 9, 130, 197, 140, 128, 28, 197, 124, 68, 231, 253, 163, 15, 188, 195, 29, 102, 127, 53, 87, 174, 241, 51, 107, 165, 31, 216, 198, 151, 129, 187, 246, 79, 14, 5, 39, 14, 70, 204, 69, 68, 214, 61, 163, 245, 234, 107, 59, 254, 226, 68, 68, 206, 102, 189, 243, 168, 166, 185, 66, 36, 121, 13, 235, 87, 199, 92, 205, 203, 33, 168, 203, 103, 235, 121, 215, 93, 147, 70, 180, 181, 66, 75, 132, 163, 117, 245, 147, 37, 167, 177, 210, 147, 212, 201};
    const unsigned r_sz = 229;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test32)
{
    unsigned char msg_in[] = {113, 129, 67, 195, 191, 231, 68, 62, 206, 39, 216, 104, 63, 11, 33, 102, 33, 221, 169, 230, 165, 27, 24, 31, 97, 26, 37, 153, 163, 169, 205, 125, 135, 13, 110, 14, 192, 128, 167, 212, 214, 247, 229, 118, 126, 85, 90, 184, 184, 210, 190, 135, 163, 35, 162, 97, 127, 243, 209, 21, 148, 212, 183, 201, 164, 42, 130, 46, 194, 33, 107, 52, 93, 73, 87, 100, 157, 63, 212, 77, 249, 140, 11, 215, 169, 101, 181, 225, 127, 80, 248, 46, 96, 35, 157, 134, 162, 151, 37, 152, 83, 135, 229, 7, 232, 193, 215, 237, 150, 199, 23, 44, 146, 59, 168, 175, 197, 203, 238, 197, 193, 88, 213, 2, 48, 25, 207, 8, 220, 91, 16, 201, 216, 59, 9, 130, 197, 140, 128, 28, 197, 124, 199, 231, 253, 163, 15, 188, 195, 29, 102, 127, 53, 87, 174, 241, 51, 217, 165, 31, 216, 198, 151, 129, 187, 246, 79, 14, 5, 39, 14, 70, 204, 69, 68, 214, 61, 163, 245, 234, 107, 59, 254, 226, 68, 68, 206, 102, 189, 243, 168, 166, 185, 66, 36, 121, 13, 235, 87, 199, 92, 205, 203, 33, 168, 203, 103, 235, 121, 215, 93, 147, 70, 180, 181, 66, 75, 132, 163, 117, 245, 147, 37, 167, 177, 210, 147, 212, 201};
    const unsigned msg_in_sz = 229;
    unsigned char synd[] = {0, 105, 61, 228, 193, 215, 109, 239, 191, 112, 112, 61, 9, 131, 229, 115, 137, 49, 105, 0, 133, 18, 244, 210, 150, 208, 8, 193, 92, 202, 94, 2, 138};
    const unsigned synd_sz = 33;
    unsigned char err_pos[] = {157, 142, 118, 117, 89};
    const unsigned err_pos_sz = 5;
    unsigned char r[] = {113, 129, 67, 195, 191, 231, 68, 62, 206, 39, 216, 104, 63, 11, 33, 102, 33, 221, 169, 230, 165, 27, 24, 31, 97, 26, 37, 153, 163, 169, 205, 125, 135, 13, 110, 14, 192, 128, 167, 212, 214, 247, 229, 118, 126, 85, 90, 184, 184, 210, 190, 135, 163, 35, 162, 97, 127, 243, 209, 21, 148, 212, 183, 201, 164, 42, 130, 46, 194, 33, 107, 52, 93, 73, 87, 100, 157, 63, 212, 77, 249, 140, 11, 215, 169, 101, 181, 225, 127, 7, 248, 46, 96, 35, 157, 134, 162, 151, 37, 152, 83, 135, 229, 7, 232, 193, 215, 237, 150, 199, 23, 44, 146, 59, 168, 175, 197, 79, 101, 197, 193, 88, 213, 2, 48, 25, 207, 8, 220, 91, 16, 201, 216, 59, 9, 130, 197, 140, 128, 28, 197, 124, 68, 231, 253, 163, 15, 188, 195, 29, 102, 127, 53, 87, 174, 241, 51, 107, 165, 31, 216, 198, 151, 129, 187, 246, 79, 14, 5, 39, 14, 70, 204, 69, 68, 214, 61, 163, 245, 234, 107, 59, 254, 226, 68, 68, 206, 102, 189, 243, 168, 166, 185, 66, 36, 121, 13, 235, 87, 199, 92, 205, 203, 33, 168, 203, 103, 235, 121, 215, 93, 147, 70, 180, 181, 66, 75, 132, 163, 117, 245, 147, 37, 167, 177, 210, 147, 212, 201};
    const unsigned r_sz = 229;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test33)
{
    unsigned char msg_in[] = {113, 129, 67, 195, 191, 231, 68, 62, 206, 39, 216, 104, 63, 11, 33, 102, 33, 221, 169, 230, 165, 236, 24, 31, 97, 26, 37, 153, 163, 169, 205, 125, 135, 13, 110, 14, 192, 128, 167, 212, 214, 247, 229, 118, 126, 85, 90, 184, 184, 210, 190, 135, 163, 35, 162, 97, 127, 243, 209, 21, 148, 212, 183, 201, 164, 42, 130, 46, 194, 33, 107, 52, 93, 73, 87, 100, 157, 63, 212, 77, 249, 140, 11, 215, 169, 101, 181, 225, 127, 80, 248, 46, 96, 35, 157, 134, 162, 151, 37, 152, 83, 135, 229, 7, 232, 193, 215, 237, 150, 199, 23, 44, 146, 59, 168, 175, 197, 203, 238, 197, 193, 88, 213, 2, 48, 25, 207, 8, 220, 91, 16, 201, 216, 59, 9, 130, 197, 140, 128, 28, 197, 124, 199, 231, 253, 163, 15, 188, 195, 29, 102, 127, 53, 87, 174, 241, 51, 217, 165, 31, 216, 198, 151, 129, 187, 246, 79, 14, 5, 39, 14, 70, 204, 69, 68, 214, 61, 163, 245, 234, 107, 59, 254, 226, 68, 68, 206, 102, 189, 243, 168, 166, 185, 66, 36, 121, 13, 235, 87, 199, 92, 205, 203, 33, 168, 203, 103, 235, 121, 215, 93, 147, 70, 180, 181, 66, 75, 132, 163, 117, 245, 147, 37, 167, 177, 210, 147, 212, 201};
    const unsigned msg_in_sz = 229;
    unsigned char synd[] = {0, 158, 168, 171, 63, 189, 238, 225, 21, 248, 208, 189, 240, 188, 34, 45, 99, 75, 88, 109, 83, 88, 14, 26, 196, 193, 28, 209, 238, 169, 34, 192, 208};
    const unsigned synd_sz = 33;
    unsigned char err_pos[] = {157, 142, 118, 117, 89, 21};
    const unsigned err_pos_sz = 6;
    unsigned char r[] = {113, 129, 67, 195, 191, 231, 68, 62, 206, 39, 216, 104, 63, 11, 33, 102, 33, 221, 169, 230, 165, 27, 24, 31, 97, 26, 37, 153, 163, 169, 205, 125, 135, 13, 110, 14, 192, 128, 167, 212, 214, 247, 229, 118, 126, 85, 90, 184, 184, 210, 190, 135, 163, 35, 162, 97, 127, 243, 209, 21, 148, 212, 183, 201, 164, 42, 130, 46, 194, 33, 107, 52, 93, 73, 87, 100, 157, 63, 212, 77, 249, 140, 11, 215, 169, 101, 181, 225, 127, 7, 248, 46, 96, 35, 157, 134, 162, 151, 37, 152, 83, 135, 229, 7, 232, 193, 215, 237, 150, 199, 23, 44, 146, 59, 168, 175, 197, 79, 101, 197, 193, 88, 213, 2, 48, 25, 207, 8, 220, 91, 16, 201, 216, 59, 9, 130, 197, 140, 128, 28, 197, 124, 68, 231, 253, 163, 15, 188, 195, 29, 102, 127, 53, 87, 174, 241, 51, 107, 165, 31, 216, 198, 151, 129, 187, 246, 79, 14, 5, 39, 14, 70, 204, 69, 68, 214, 61, 163, 245, 234, 107, 59, 254, 226, 68, 68, 206, 102, 189, 243, 168, 166, 185, 66, 36, 121, 13, 235, 87, 199, 92, 205, 203, 33, 168, 203, 103, 235, 121, 215, 93, 147, 70, 180, 181, 66, 75, 132, 163, 117, 245, 147, 37, 167, 177, 210, 147, 212, 201};
    const unsigned r_sz = 229;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test34)
{
    unsigned char msg_in[] = {113, 129, 67, 195, 191, 231, 68, 62, 206, 39, 216, 104, 63, 11, 33, 102, 33, 221, 169, 230, 165, 236, 24, 31, 97, 26, 37, 153, 163, 169, 205, 125, 135, 13, 110, 14, 192, 128, 167, 212, 214, 247, 229, 118, 126, 85, 90, 184, 184, 210, 190, 135, 163, 35, 162, 97, 127, 243, 209, 21, 148, 212, 183, 201, 164, 42, 130, 46, 194, 33, 107, 52, 93, 73, 87, 100, 157, 63, 212, 77, 249, 140, 11, 215, 169, 101, 181, 225, 127, 80, 248, 46, 96, 35, 157, 134, 162, 151, 37, 152, 83, 135, 229, 7, 232, 193, 215, 237, 150, 199, 23, 44, 146, 59, 168, 175, 197, 203, 238, 197, 193, 88, 213, 2, 48, 25, 207, 8, 220, 91, 16, 201, 216, 59, 9, 130, 197, 140, 128, 28, 197, 124, 199, 231, 253, 163, 15, 188, 195, 29, 102, 127, 53, 87, 174, 241, 51, 217, 165, 31, 216, 198, 151, 129, 187, 246, 79, 14, 5, 39, 14, 70, 204, 69, 68, 214, 61, 163, 245, 234, 107, 59, 254, 226, 68, 68, 206, 102, 189, 243, 168, 166, 185, 66, 36, 121, 13, 235, 87, 199, 92, 50, 203, 33, 168, 203, 103, 235, 121, 215, 93, 147, 70, 180, 181, 66, 75, 132, 163, 117, 245, 147, 37, 167, 177, 210, 147, 212, 201};
    const unsigned msg_in_sz = 229;
    unsigned char synd[] = {0, 97, 216, 209, 61, 165, 78, 50, 168, 183, 179, 19, 107, 70, 110, 90, 61, 228, 207, 199, 248, 255, 249, 10, 4, 168, 202, 80, 172, 150, 59, 108, 83};
    const unsigned synd_sz = 33;
    unsigned char err_pos[] = {201, 157, 142, 118, 117, 89, 21};
    const unsigned err_pos_sz = 7;
    unsigned char r[] = {113, 129, 67, 195, 191, 231, 68, 62, 206, 39, 216, 104, 63, 11, 33, 102, 33, 221, 169, 230, 165, 27, 24, 31, 97, 26, 37, 153, 163, 169, 205, 125, 135, 13, 110, 14, 192, 128, 167, 212, 214, 247, 229, 118, 126, 85, 90, 184, 184, 210, 190, 135, 163, 35, 162, 97, 127, 243, 209, 21, 148, 212, 183, 201, 164, 42, 130, 46, 194, 33, 107, 52, 93, 73, 87, 100, 157, 63, 212, 77, 249, 140, 11, 215, 169, 101, 181, 225, 127, 7, 248, 46, 96, 35, 157, 134, 162, 151, 37, 152, 83, 135, 229, 7, 232, 193, 215, 237, 150, 199, 23, 44, 146, 59, 168, 175, 197, 79, 101, 197, 193, 88, 213, 2, 48, 25, 207, 8, 220, 91, 16, 201, 216, 59, 9, 130, 197, 140, 128, 28, 197, 124, 68, 231, 253, 163, 15, 188, 195, 29, 102, 127, 53, 87, 174, 241, 51, 107, 165, 31, 216, 198, 151, 129, 187, 246, 79, 14, 5, 39, 14, 70, 204, 69, 68, 214, 61, 163, 245, 234, 107, 59, 254, 226, 68, 68, 206, 102, 189, 243, 168, 166, 185, 66, 36, 121, 13, 235, 87, 199, 92, 205, 203, 33, 168, 203, 103, 235, 121, 215, 93, 147, 70, 180, 181, 66, 75, 132, 163, 117, 245, 147, 37, 167, 177, 210, 147, 212, 201};
    const unsigned r_sz = 229;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test35)
{
    unsigned char msg_in[] = {113, 129, 67, 195, 191, 231, 68, 62, 206, 39, 216, 104, 63, 11, 33, 102, 33, 221, 169, 230, 165, 236, 24, 31, 97, 26, 37, 153, 163, 169, 205, 125, 135, 13, 110, 14, 192, 128, 167, 212, 214, 247, 229, 118, 126, 85, 90, 184, 184, 210, 190, 135, 163, 35, 162, 97, 66, 243, 209, 21, 148, 212, 183, 201, 164, 42, 130, 46, 194, 33, 107, 52, 93, 73, 87, 100, 157, 63, 212, 77, 249, 140, 11, 215, 169, 101, 181, 225, 127, 80, 248, 46, 96, 35, 157, 134, 162, 151, 37, 152, 83, 135, 229, 7, 232, 193, 215, 237, 150, 199, 23, 44, 146, 59, 168, 175, 197, 203, 238, 197, 193, 88, 213, 2, 48, 25, 207, 8, 220, 91, 16, 201, 216, 59, 9, 130, 197, 140, 128, 28, 197, 124, 199, 231, 253, 163, 15, 188, 195, 29, 102, 127, 53, 87, 174, 241, 51, 217, 165, 31, 216, 198, 151, 129, 187, 246, 79, 14, 5, 39, 14, 70, 204, 69, 68, 214, 61, 163, 245, 234, 107, 59, 254, 226, 68, 68, 206, 102, 189, 243, 168, 166, 185, 66, 36, 121, 13, 235, 87, 199, 92, 50, 203, 33, 168, 203, 103, 235, 121, 215, 93, 147, 70, 180, 181, 66, 75, 132, 163, 117, 245, 147, 37, 167, 177, 210, 147, 212, 201};
    const unsigned msg_in_sz = 229;
    unsigned char synd[] = {0, 92, 149, 15, 198, 15, 215, 30, 125, 62, 124, 112, 150, 235, 139, 235, 53, 27, 148, 253, 201, 188, 223, 214, 9, 221, 211, 55, 160, 152, 195, 75, 244};
    const unsigned synd_sz = 33;
    unsigned char err_pos[] = {201, 157, 142, 118, 117, 89, 56, 21};
    const unsigned err_pos_sz = 8;
    unsigned char r[] = {113, 129, 67, 195, 191, 231, 68, 62, 206, 39, 216, 104, 63, 11, 33, 102, 33, 221, 169, 230, 165, 27, 24, 31, 97, 26, 37, 153, 163, 169, 205, 125, 135, 13, 110, 14, 192, 128, 167, 212, 214, 247, 229, 118, 126, 85, 90, 184, 184, 210, 190, 135, 163, 35, 162, 97, 127, 243, 209, 21, 148, 212, 183, 201, 164, 42, 130, 46, 194, 33, 107, 52, 93, 73, 87, 100, 157, 63, 212, 77, 249, 140, 11, 215, 169, 101, 181, 225, 127, 7, 248, 46, 96, 35, 157, 134, 162, 151, 37, 152, 83, 135, 229, 7, 232, 193, 215, 237, 150, 199, 23, 44, 146, 59, 168, 175, 197, 79, 101, 197, 193, 88, 213, 2, 48, 25, 207, 8, 220, 91, 16, 201, 216, 59, 9, 130, 197, 140, 128, 28, 197, 124, 68, 231, 253, 163, 15, 188, 195, 29, 102, 127, 53, 87, 174, 241, 51, 107, 165, 31, 216, 198, 151, 129, 187, 246, 79, 14, 5, 39, 14, 70, 204, 69, 68, 214, 61, 163, 245, 234, 107, 59, 254, 226, 68, 68, 206, 102, 189, 243, 168, 166, 185, 66, 36, 121, 13, 235, 87, 199, 92, 205, 203, 33, 168, 203, 103, 235, 121, 215, 93, 147, 70, 180, 181, 66, 75, 132, 163, 117, 245, 147, 37, 167, 177, 210, 147, 212, 201};
    const unsigned r_sz = 229;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test36)
{
    unsigned char msg_in[] = {113, 129, 67, 195, 191, 231, 68, 62, 206, 39, 216, 104, 63, 11, 33, 102, 33, 221, 169, 230, 165, 236, 24, 31, 97, 26, 37, 153, 163, 169, 205, 125, 135, 13, 110, 14, 192, 128, 167, 212, 214, 247, 229, 118, 126, 85, 90, 184, 184, 210, 190, 135, 163, 35, 162, 97, 66, 243, 209, 21, 148, 212, 183, 201, 164, 42, 130, 46, 194, 33, 107, 52, 93, 73, 87, 100, 157, 63, 212, 77, 249, 140, 11, 215, 169, 101, 181, 225, 127, 80, 248, 46, 96, 35, 147, 134, 162, 151, 37, 152, 83, 135, 229, 7, 232, 193, 215, 237, 150, 199, 23, 44, 146, 59, 168, 175, 197, 203, 238, 197, 193, 88, 213, 2, 48, 25, 207, 8, 220, 91, 16, 201, 216, 59, 9, 130, 197, 140, 128, 28, 197, 124, 199, 231, 253, 163, 15, 188, 195, 29, 102, 127, 53, 87, 174, 241, 51, 217, 165, 31, 216, 198, 151, 129, 187, 246, 79, 14, 5, 39, 14, 70, 204, 69, 68, 214, 61, 163, 245, 234, 107, 59, 254, 226, 68, 68, 206, 102, 189, 243, 168, 166, 185, 66, 36, 121, 13, 235, 87, 199, 92, 50, 203, 33, 168, 203, 103, 235, 121, 215, 93, 147, 70, 180, 181, 66, 75, 132, 163, 117, 245, 147, 37, 167, 177, 210, 147, 212, 201};
    const unsigned msg_in_sz = 229;
    unsigned char synd[] = {0, 82, 237, 118, 101, 43, 218, 21, 144, 230, 82, 74, 194, 1, 111, 119, 208, 93, 246, 146, 173, 53, 142, 169, 76, 204, 40, 40, 35, 254, 227, 9, 217};
    const unsigned synd_sz = 33;
    unsigned char err_pos[] = {201, 157, 142, 118, 117, 94, 89, 56, 21};
    const unsigned err_pos_sz = 9;
    unsigned char r[] = {113, 129, 67, 195, 191, 231, 68, 62, 206, 39, 216, 104, 63, 11, 33, 102, 33, 221, 169, 230, 165, 27, 24, 31, 97, 26, 37, 153, 163, 169, 205, 125, 135, 13, 110, 14, 192, 128, 167, 212, 214, 247, 229, 118, 126, 85, 90, 184, 184, 210, 190, 135, 163, 35, 162, 97, 127, 243, 209, 21, 148, 212, 183, 201, 164, 42, 130, 46, 194, 33, 107, 52, 93, 73, 87, 100, 157, 63, 212, 77, 249, 140, 11, 215, 169, 101, 181, 225, 127, 7, 248, 46, 96, 35, 157, 134, 162, 151, 37, 152, 83, 135, 229, 7, 232, 193, 215, 237, 150, 199, 23, 44, 146, 59, 168, 175, 197, 79, 101, 197, 193, 88, 213, 2, 48, 25, 207, 8, 220, 91, 16, 201, 216, 59, 9, 130, 197, 140, 128, 28, 197, 124, 68, 231, 253, 163, 15, 188, 195, 29, 102, 127, 53, 87, 174, 241, 51, 107, 165, 31, 216, 198, 151, 129, 187, 246, 79, 14, 5, 39, 14, 70, 204, 69, 68, 214, 61, 163, 245, 234, 107, 59, 254, 226, 68, 68, 206, 102, 189, 243, 168, 166, 185, 66, 36, 121, 13, 235, 87, 199, 92, 205, 203, 33, 168, 203, 103, 235, 121, 215, 93, 147, 70, 180, 181, 66, 75, 132, 163, 117, 245, 147, 37, 167, 177, 210, 147, 212, 201};
    const unsigned r_sz = 229;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test37)
{
    unsigned char msg_in[] = {113, 129, 67, 195, 191, 231, 68, 62, 206, 39, 216, 104, 63, 11, 33, 102, 33, 221, 169, 230, 165, 236, 24, 31, 97, 26, 37, 153, 163, 169, 205, 125, 135, 13, 110, 14, 192, 128, 167, 212, 214, 247, 229, 118, 126, 85, 90, 184, 184, 210, 190, 135, 163, 35, 162, 39, 66, 243, 209, 21, 148, 212, 183, 201, 164, 42, 130, 46, 194, 33, 107, 52, 93, 73, 87, 100, 157, 63, 212, 77, 249, 140, 11, 215, 169, 101, 181, 225, 127, 80, 248, 46, 96, 35, 147, 134, 162, 151, 37, 152, 83, 135, 229, 7, 232, 193, 215, 237, 150, 199, 23, 44, 146, 59, 168, 175, 197, 203, 238, 197, 193, 88, 213, 2, 48, 25, 207, 8, 220, 91, 16, 201, 216, 59, 9, 130, 197, 140, 128, 28, 197, 124, 199, 231, 253, 163, 15, 188, 195, 29, 102, 127, 53, 87, 174, 241, 51, 217, 165, 31, 216, 198, 151, 129, 187, 246, 79, 14, 5, 39, 14, 70, 204, 69, 68, 214, 61, 163, 245, 234, 107, 59, 254, 226, 68, 68, 206, 102, 189, 243, 168, 166, 185, 66, 36, 121, 13, 235, 87, 199, 92, 50, 203, 33, 168, 203, 103, 235, 121, 215, 93, 147, 70, 180, 181, 66, 75, 132, 163, 117, 245, 147, 37, 167, 177, 210, 147, 212, 201};
    const unsigned msg_in_sz = 229;
    unsigned char synd[] = {0, 20, 168, 52, 223, 223, 136, 116, 134, 51, 93, 81, 253, 106, 107, 136, 102, 181, 99, 214, 25, 44, 64, 153, 60, 247, 188, 154, 52, 221, 79, 40, 132};
    const unsigned synd_sz = 33;
    unsigned char err_pos[] = {201, 157, 142, 118, 117, 94, 89, 56, 55, 21};
    const unsigned err_pos_sz = 10;
    unsigned char r[] = {113, 129, 67, 195, 191, 231, 68, 62, 206, 39, 216, 104, 63, 11, 33, 102, 33, 221, 169, 230, 165, 27, 24, 31, 97, 26, 37, 153, 163, 169, 205, 125, 135, 13, 110, 14, 192, 128, 167, 212, 214, 247, 229, 118, 126, 85, 90, 184, 184, 210, 190, 135, 163, 35, 162, 97, 127, 243, 209, 21, 148, 212, 183, 201, 164, 42, 130, 46, 194, 33, 107, 52, 93, 73, 87, 100, 157, 63, 212, 77, 249, 140, 11, 215, 169, 101, 181, 225, 127, 7, 248, 46, 96, 35, 157, 134, 162, 151, 37, 152, 83, 135, 229, 7, 232, 193, 215, 237, 150, 199, 23, 44, 146, 59, 168, 175, 197, 79, 101, 197, 193, 88, 213, 2, 48, 25, 207, 8, 220, 91, 16, 201, 216, 59, 9, 130, 197, 140, 128, 28, 197, 124, 68, 231, 253, 163, 15, 188, 195, 29, 102, 127, 53, 87, 174, 241, 51, 107, 165, 31, 216, 198, 151, 129, 187, 246, 79, 14, 5, 39, 14, 70, 204, 69, 68, 214, 61, 163, 245, 234, 107, 59, 254, 226, 68, 68, 206, 102, 189, 243, 168, 166, 185, 66, 36, 121, 13, 235, 87, 199, 92, 205, 203, 33, 168, 203, 103, 235, 121, 215, 93, 147, 70, 180, 181, 66, 75, 132, 163, 117, 245, 147, 37, 167, 177, 210, 147, 212, 201};
    const unsigned r_sz = 229;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test38)
{
    unsigned char msg_in[] = {113, 129, 67, 195, 191, 231, 68, 62, 206, 39, 216, 104, 63, 11, 33, 102, 33, 221, 169, 230, 165, 236, 24, 31, 97, 26, 37, 153, 163, 169, 205, 125, 135, 5, 110, 14, 192, 128, 167, 212, 214, 247, 229, 118, 126, 85, 90, 184, 184, 210, 190, 135, 163, 35, 162, 39, 66, 243, 209, 21, 148, 212, 183, 201, 164, 42, 130, 46, 194, 33, 107, 52, 93, 73, 87, 100, 157, 63, 212, 77, 249, 140, 11, 215, 169, 101, 181, 225, 127, 80, 248, 46, 96, 35, 147, 134, 162, 151, 37, 152, 83, 135, 229, 7, 232, 193, 215, 237, 150, 199, 23, 44, 146, 59, 168, 175, 197, 203, 238, 197, 193, 88, 213, 2, 48, 25, 207, 8, 220, 91, 16, 201, 216, 59, 9, 130, 197, 140, 128, 28, 197, 124, 199, 231, 253, 163, 15, 188, 195, 29, 102, 127, 53, 87, 174, 241, 51, 217, 165, 31, 216, 198, 151, 129, 187, 246, 79, 14, 5, 39, 14, 70, 204, 69, 68, 214, 61, 163, 245, 234, 107, 59, 254, 226, 68, 68, 206, 102, 189, 243, 168, 166, 185, 66, 36, 121, 13, 235, 87, 199, 92, 50, 203, 33, 168, 203, 103, 235, 121, 215, 93, 147, 70, 180, 181, 66, 75, 132, 163, 117, 245, 147, 37, 167, 177, 210, 147, 212, 201};
    const unsigned msg_in_sz = 229;
    unsigned char synd[] = {0, 28, 175, 21, 167, 242, 122, 230, 48, 20, 96, 173, 45, 44, 22, 76, 163, 20, 107, 209, 56, 84, 109, 107, 174, 65, 155, 167, 200, 13, 9, 85, 64};
    const unsigned synd_sz = 33;
    unsigned char err_pos[] = {201, 157, 142, 118, 117, 94, 89, 56, 55, 33, 21};
    const unsigned err_pos_sz = 11;
    unsigned char r[] = {113, 129, 67, 195, 191, 231, 68, 62, 206, 39, 216, 104, 63, 11, 33, 102, 33, 221, 169, 230, 165, 27, 24, 31, 97, 26, 37, 153, 163, 169, 205, 125, 135, 13, 110, 14, 192, 128, 167, 212, 214, 247, 229, 118, 126, 85, 90, 184, 184, 210, 190, 135, 163, 35, 162, 97, 127, 243, 209, 21, 148, 212, 183, 201, 164, 42, 130, 46, 194, 33, 107, 52, 93, 73, 87, 100, 157, 63, 212, 77, 249, 140, 11, 215, 169, 101, 181, 225, 127, 7, 248, 46, 96, 35, 157, 134, 162, 151, 37, 152, 83, 135, 229, 7, 232, 193, 215, 237, 150, 199, 23, 44, 146, 59, 168, 175, 197, 79, 101, 197, 193, 88, 213, 2, 48, 25, 207, 8, 220, 91, 16, 201, 216, 59, 9, 130, 197, 140, 128, 28, 197, 124, 68, 231, 253, 163, 15, 188, 195, 29, 102, 127, 53, 87, 174, 241, 51, 107, 165, 31, 216, 198, 151, 129, 187, 246, 79, 14, 5, 39, 14, 70, 204, 69, 68, 214, 61, 163, 245, 234, 107, 59, 254, 226, 68, 68, 206, 102, 189, 243, 168, 166, 185, 66, 36, 121, 13, 235, 87, 199, 92, 205, 203, 33, 168, 203, 103, 235, 121, 215, 93, 147, 70, 180, 181, 66, 75, 132, 163, 117, 245, 147, 37, 167, 177, 210, 147, 212, 201};
    const unsigned r_sz = 229;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test39)
{
    unsigned char msg_in[] = {113, 129, 67, 195, 191, 231, 68, 62, 206, 39, 216, 104, 63, 11, 33, 102, 33, 221, 169, 230, 165, 236, 24, 31, 97, 26, 37, 153, 163, 169, 205, 125, 135, 5, 110, 14, 192, 128, 167, 212, 214, 247, 229, 118, 126, 85, 90, 184, 184, 210, 190, 135, 163, 35, 162, 39, 66, 243, 209, 21, 148, 212, 183, 201, 164, 42, 130, 46, 194, 33, 107, 52, 93, 73, 87, 100, 157, 63, 212, 77, 249, 140, 11, 215, 169, 101, 181, 225, 127, 80, 248, 46, 96, 35, 147, 134, 162, 151, 37, 152, 83, 135, 229, 7, 232, 193, 215, 237, 150, 199, 23, 44, 146, 59, 168, 175, 197, 203, 238, 197, 193, 88, 213, 2, 48, 25, 207, 8, 220, 91, 16, 201, 216, 59, 9, 130, 197, 140, 128, 28, 197, 124, 199, 231, 253, 163, 15, 188, 195, 29, 102, 127, 53, 87, 174, 241, 51, 217, 165, 31, 216, 198, 151, 129, 187, 246, 79, 14, 5, 39, 14, 70, 204, 69, 68, 214, 61, 163, 245, 234, 107, 59, 254, 226, 68, 68, 206, 102, 189, 243, 168, 166, 185, 66, 36, 121, 13, 235, 87, 199, 92, 249, 203, 33, 168, 203, 103, 235, 121, 215, 93, 147, 70, 180, 181, 66, 75, 132, 163, 117, 245, 147, 37, 167, 177, 210, 147, 212, 201};
    const unsigned msg_in_sz = 229;
    unsigned char synd[] = {0, 215, 178, 137, 121, 19, 130, 178, 231, 153, 114, 117, 228, 41, 42, 65, 255, 163, 92, 168, 46, 188, 249, 213, 245, 210, 1, 81, 212, 157, 135, 83, 104};
    const unsigned synd_sz = 33;
    unsigned char err_pos[] = {201, 157, 142, 118, 117, 94, 89, 56, 55, 33, 21};
    const unsigned err_pos_sz = 11;
    unsigned char r[] = {113, 129, 67, 195, 191, 231, 68, 62, 206, 39, 216, 104, 63, 11, 33, 102, 33, 221, 169, 230, 165, 27, 24, 31, 97, 26, 37, 153, 163, 169, 205, 125, 135, 13, 110, 14, 192, 128, 167, 212, 214, 247, 229, 118, 126, 85, 90, 184, 184, 210, 190, 135, 163, 35, 162, 97, 127, 243, 209, 21, 148, 212, 183, 201, 164, 42, 130, 46, 194, 33, 107, 52, 93, 73, 87, 100, 157, 63, 212, 77, 249, 140, 11, 215, 169, 101, 181, 225, 127, 7, 248, 46, 96, 35, 157, 134, 162, 151, 37, 152, 83, 135, 229, 7, 232, 193, 215, 237, 150, 199, 23, 44, 146, 59, 168, 175, 197, 79, 101, 197, 193, 88, 213, 2, 48, 25, 207, 8, 220, 91, 16, 201, 216, 59, 9, 130, 197, 140, 128, 28, 197, 124, 68, 231, 253, 163, 15, 188, 195, 29, 102, 127, 53, 87, 174, 241, 51, 107, 165, 31, 216, 198, 151, 129, 187, 246, 79, 14, 5, 39, 14, 70, 204, 69, 68, 214, 61, 163, 245, 234, 107, 59, 254, 226, 68, 68, 206, 102, 189, 243, 168, 166, 185, 66, 36, 121, 13, 235, 87, 199, 92, 205, 203, 33, 168, 203, 103, 235, 121, 215, 93, 147, 70, 180, 181, 66, 75, 132, 163, 117, 245, 147, 37, 167, 177, 210, 147, 212, 201};
    const unsigned r_sz = 229;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test40)
{
    unsigned char msg_in[] = {113, 129, 67, 195, 191, 231, 68, 62, 206, 39, 216, 104, 63, 11, 33, 102, 33, 221, 169, 230, 165, 236, 24, 31, 97, 26, 37, 153, 163, 169, 205, 125, 135, 5, 110, 14, 192, 128, 167, 212, 214, 247, 229, 118, 126, 85, 90, 184, 184, 210, 190, 135, 163, 35, 162, 39, 66, 243, 209, 21, 148, 212, 183, 201, 164, 42, 130, 46, 194, 33, 107, 52, 93, 73, 87, 100, 157, 63, 212, 77, 249, 140, 11, 215, 169, 101, 181, 225, 127, 80, 248, 46, 96, 35, 147, 134, 162, 151, 37, 152, 83, 135, 229, 7, 232, 193, 215, 237, 150, 199, 23, 44, 146, 59, 168, 175, 197, 203, 238, 197, 193, 88, 213, 2, 48, 25, 207, 8, 220, 91, 16, 201, 216, 59, 9, 130, 197, 140, 128, 28, 197, 124, 199, 231, 253, 163, 15, 188, 195, 29, 102, 127, 53, 87, 174, 241, 51, 217, 165, 31, 216, 198, 151, 129, 187, 246, 79, 14, 5, 39, 14, 70, 204, 69, 68, 214, 61, 163, 245, 234, 107, 59, 254, 226, 68, 68, 206, 102, 189, 243, 168, 166, 185, 66, 36, 121, 13, 235, 87, 199, 92, 249, 203, 33, 168, 203, 103, 235, 121, 215, 93, 147, 70, 180, 181, 66, 75, 189, 163, 117, 245, 147, 37, 167, 177, 210, 147, 212, 201};
    const unsigned msg_in_sz = 229;
    unsigned char synd[] = {0, 238, 35, 106, 165, 20, 32, 30, 18, 41, 53, 79, 80, 233, 159, 105, 160, 172, 237, 7, 254, 47, 215, 192, 188, 177, 240, 102, 28, 59, 172, 41, 68};
    const unsigned synd_sz = 33;
    unsigned char err_pos[] = {217, 201, 157, 142, 118, 117, 94, 89, 56, 55, 33, 21};
    const unsigned err_pos_sz = 12;
    unsigned char r[] = {113, 129, 67, 195, 191, 231, 68, 62, 206, 39, 216, 104, 63, 11, 33, 102, 33, 221, 169, 230, 165, 27, 24, 31, 97, 26, 37, 153, 163, 169, 205, 125, 135, 13, 110, 14, 192, 128, 167, 212, 214, 247, 229, 118, 126, 85, 90, 184, 184, 210, 190, 135, 163, 35, 162, 97, 127, 243, 209, 21, 148, 212, 183, 201, 164, 42, 130, 46, 194, 33, 107, 52, 93, 73, 87, 100, 157, 63, 212, 77, 249, 140, 11, 215, 169, 101, 181, 225, 127, 7, 248, 46, 96, 35, 157, 134, 162, 151, 37, 152, 83, 135, 229, 7, 232, 193, 215, 237, 150, 199, 23, 44, 146, 59, 168, 175, 197, 79, 101, 197, 193, 88, 213, 2, 48, 25, 207, 8, 220, 91, 16, 201, 216, 59, 9, 130, 197, 140, 128, 28, 197, 124, 68, 231, 253, 163, 15, 188, 195, 29, 102, 127, 53, 87, 174, 241, 51, 107, 165, 31, 216, 198, 151, 129, 187, 246, 79, 14, 5, 39, 14, 70, 204, 69, 68, 214, 61, 163, 245, 234, 107, 59, 254, 226, 68, 68, 206, 102, 189, 243, 168, 166, 185, 66, 36, 121, 13, 235, 87, 199, 92, 205, 203, 33, 168, 203, 103, 235, 121, 215, 93, 147, 70, 180, 181, 66, 75, 132, 163, 117, 245, 147, 37, 167, 177, 210, 147, 212, 201};
    const unsigned r_sz = 229;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test41)
{
    unsigned char msg_in[] = {113, 129, 67, 195, 191, 231, 68, 62, 206, 39, 216, 104, 63, 11, 33, 102, 33, 221, 169, 230, 165, 236, 24, 31, 97, 26, 37, 153, 163, 169, 205, 125, 135, 5, 110, 14, 192, 128, 167, 212, 214, 247, 229, 118, 126, 85, 90, 184, 184, 210, 190, 135, 163, 35, 162, 39, 66, 243, 209, 21, 148, 212, 183, 201, 164, 42, 130, 46, 194, 33, 107, 52, 93, 73, 87, 100, 157, 63, 212, 77, 249, 140, 11, 215, 169, 101, 181, 225, 127, 80, 248, 46, 96, 35, 147, 134, 162, 151, 37, 152, 83, 135, 229, 7, 232, 193, 215, 237, 150, 199, 23, 44, 146, 59, 168, 175, 197, 203, 238, 197, 193, 88, 213, 2, 48, 25, 207, 8, 220, 91, 16, 201, 216, 59, 9, 130, 197, 140, 128, 28, 197, 124, 199, 231, 253, 163, 15, 188, 195, 29, 102, 127, 53, 87, 174, 241, 51, 217, 165, 199, 216, 198, 151, 129, 187, 246, 79, 14, 5, 39, 14, 70, 204, 69, 68, 214, 61, 163, 245, 234, 107, 59, 254, 226, 68, 68, 206, 102, 189, 243, 168, 166, 185, 66, 36, 121, 13, 235, 87, 199, 92, 249, 203, 33, 168, 203, 103, 235, 121, 215, 93, 147, 70, 180, 181, 66, 75, 189, 163, 117, 245, 147, 37, 167, 177, 210, 147, 212, 201};
    const unsigned msg_in_sz = 229;
    unsigned char synd[] = {0, 54, 157, 176, 69, 140, 145, 108, 0, 189, 93, 172, 185, 59, 26, 228, 72, 81, 73, 44, 99, 13, 0, 214, 148, 93, 177, 70, 149, 111, 213, 47, 166};
    const unsigned synd_sz = 33;
    unsigned char err_pos[] = {217, 201, 159, 157, 142, 118, 117, 94, 89, 56, 55, 33, 21};
    const unsigned err_pos_sz = 13;
    unsigned char r[] = {113, 129, 67, 195, 191, 231, 68, 62, 206, 39, 216, 104, 63, 11, 33, 102, 33, 221, 169, 230, 165, 27, 24, 31, 97, 26, 37, 153, 163, 169, 205, 125, 135, 13, 110, 14, 192, 128, 167, 212, 214, 247, 229, 118, 126, 85, 90, 184, 184, 210, 190, 135, 163, 35, 162, 97, 127, 243, 209, 21, 148, 212, 183, 201, 164, 42, 130, 46, 194, 33, 107, 52, 93, 73, 87, 100, 157, 63, 212, 77, 249, 140, 11, 215, 169, 101, 181, 225, 127, 7, 248, 46, 96, 35, 157, 134, 162, 151, 37, 152, 83, 135, 229, 7, 232, 193, 215, 237, 150, 199, 23, 44, 146, 59, 168, 175, 197, 79, 101, 197, 193, 88, 213, 2, 48, 25, 207, 8, 220, 91, 16, 201, 216, 59, 9, 130, 197, 140, 128, 28, 197, 124, 68, 231, 253, 163, 15, 188, 195, 29, 102, 127, 53, 87, 174, 241, 51, 107, 165, 31, 216, 198, 151, 129, 187, 246, 79, 14, 5, 39, 14, 70, 204, 69, 68, 214, 61, 163, 245, 234, 107, 59, 254, 226, 68, 68, 206, 102, 189, 243, 168, 166, 185, 66, 36, 121, 13, 235, 87, 199, 92, 205, 203, 33, 168, 203, 103, 235, 121, 215, 93, 147, 70, 180, 181, 66, 75, 132, 163, 117, 245, 147, 37, 167, 177, 210, 147, 212, 201};
    const unsigned r_sz = 229;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test42)
{
    unsigned char msg_in[] = {113, 129, 67, 195, 191, 231, 68, 62, 206, 39, 216, 104, 63, 11, 33, 102, 33, 221, 169, 230, 165, 236, 24, 31, 97, 26, 37, 153, 163, 169, 205, 125, 135, 5, 110, 14, 192, 128, 167, 212, 214, 247, 229, 118, 126, 85, 90, 184, 184, 210, 190, 135, 163, 35, 162, 39, 66, 243, 209, 21, 148, 212, 183, 201, 164, 42, 130, 46, 194, 33, 107, 52, 93, 73, 87, 100, 157, 63, 212, 77, 249, 140, 11, 215, 169, 101, 181, 225, 127, 80, 248, 46, 96, 35, 147, 134, 162, 151, 37, 152, 83, 135, 229, 7, 232, 193, 215, 237, 150, 199, 23, 44, 146, 59, 168, 175, 197, 203, 238, 197, 193, 88, 213, 2, 48, 25, 207, 8, 220, 91, 16, 201, 216, 59, 9, 130, 197, 140, 128, 28, 197, 124, 199, 231, 253, 163, 15, 188, 195, 29, 102, 127, 53, 87, 174, 241, 51, 217, 165, 199, 216, 198, 151, 129, 187, 246, 79, 14, 5, 39, 14, 70, 204, 69, 68, 214, 61, 163, 245, 234, 107, 59, 254, 226, 68, 68, 206, 102, 189, 243, 168, 166, 185, 66, 36, 121, 13, 235, 87, 199, 92, 249, 203, 33, 168, 203, 103, 235, 121, 215, 93, 147, 70, 180, 181, 66, 75, 189, 163, 21, 245, 147, 37, 167, 177, 210, 147, 212, 201};
    const unsigned msg_in_sz = 229;
    unsigned char synd[] = {0, 86, 168, 246, 255, 237, 158, 7, 182, 249, 147, 151, 174, 26, 51, 0, 217, 160, 141, 174, 91, 84, 86, 235, 31, 146, 176, 124, 184, 99, 240, 238, 246};
    const unsigned synd_sz = 33;
    unsigned char err_pos[] = {219, 217, 201, 159, 157, 142, 118, 117, 94, 89, 56, 55, 33, 21};
    const unsigned err_pos_sz = 14;
    unsigned char r[] = {113, 129, 67, 195, 191, 231, 68, 62, 206, 39, 216, 104, 63, 11, 33, 102, 33, 221, 169, 230, 165, 27, 24, 31, 97, 26, 37, 153, 163, 169, 205, 125, 135, 13, 110, 14, 192, 128, 167, 212, 214, 247, 229, 118, 126, 85, 90, 184, 184, 210, 190, 135, 163, 35, 162, 97, 127, 243, 209, 21, 148, 212, 183, 201, 164, 42, 130, 46, 194, 33, 107, 52, 93, 73, 87, 100, 157, 63, 212, 77, 249, 140, 11, 215, 169, 101, 181, 225, 127, 7, 248, 46, 96, 35, 157, 134, 162, 151, 37, 152, 83, 135, 229, 7, 232, 193, 215, 237, 150, 199, 23, 44, 146, 59, 168, 175, 197, 79, 101, 197, 193, 88, 213, 2, 48, 25, 207, 8, 220, 91, 16, 201, 216, 59, 9, 130, 197, 140, 128, 28, 197, 124, 68, 231, 253, 163, 15, 188, 195, 29, 102, 127, 53, 87, 174, 241, 51, 107, 165, 31, 216, 198, 151, 129, 187, 246, 79, 14, 5, 39, 14, 70, 204, 69, 68, 214, 61, 163, 245, 234, 107, 59, 254, 226, 68, 68, 206, 102, 189, 243, 168, 166, 185, 66, 36, 121, 13, 235, 87, 199, 92, 205, 203, 33, 168, 203, 103, 235, 121, 215, 93, 147, 70, 180, 181, 66, 75, 132, 163, 117, 245, 147, 37, 167, 177, 210, 147, 212, 201};
    const unsigned r_sz = 229;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test43)
{
    unsigned char msg_in[] = {113, 129, 67, 195, 191, 231, 68, 62, 206, 39, 216, 104, 63, 11, 33, 102, 33, 221, 169, 230, 165, 236, 24, 31, 97, 26, 37, 153, 163, 169, 205, 125, 135, 5, 110, 14, 192, 128, 167, 212, 214, 247, 229, 118, 126, 85, 90, 184, 184, 210, 190, 135, 163, 35, 162, 39, 66, 243, 209, 21, 148, 212, 183, 201, 164, 42, 130, 46, 194, 33, 107, 52, 93, 73, 87, 100, 157, 63, 212, 77, 249, 140, 11, 215, 169, 101, 181, 225, 127, 80, 248, 46, 96, 35, 147, 134, 162, 151, 37, 152, 83, 135, 229, 7, 232, 193, 215, 237, 150, 199, 23, 44, 146, 59, 168, 175, 197, 203, 238, 197, 193, 88, 213, 2, 48, 25, 207, 8, 220, 91, 16, 201, 216, 59, 9, 130, 197, 140, 128, 28, 197, 124, 199, 231, 253, 163, 15, 188, 195, 29, 102, 127, 53, 87, 174, 241, 51, 217, 165, 199, 168, 198, 151, 129, 187, 246, 79, 14, 5, 39, 14, 70, 204, 69, 68, 214, 61, 163, 245, 234, 107, 59, 254, 226, 68, 68, 206, 102, 189, 243, 168, 166, 185, 66, 36, 121, 13, 235, 87, 199, 92, 249, 203, 33, 168, 203, 103, 235, 121, 215, 93, 147, 70, 180, 181, 66, 75, 189, 163, 21, 245, 147, 37, 167, 177, 210, 147, 212, 201};
    const unsigned msg_in_sz = 229;
    unsigned char synd[] = {0, 38, 142, 77, 85, 187, 3, 22, 74, 50, 31, 122, 153, 93, 82, 218, 169, 134, 54, 4, 13, 201, 71, 23, 212, 30, 93, 75, 255, 2, 42, 158, 208};
    const unsigned synd_sz = 33;
    unsigned char err_pos[] = {219, 217, 201, 160, 159, 157, 142, 118, 117, 94, 89, 56, 55, 33, 21};
    const unsigned err_pos_sz = 15;
    unsigned char r[] = {113, 129, 67, 195, 191, 231, 68, 62, 206, 39, 216, 104, 63, 11, 33, 102, 33, 221, 169, 230, 165, 27, 24, 31, 97, 26, 37, 153, 163, 169, 205, 125, 135, 13, 110, 14, 192, 128, 167, 212, 214, 247, 229, 118, 126, 85, 90, 184, 184, 210, 190, 135, 163, 35, 162, 97, 127, 243, 209, 21, 148, 212, 183, 201, 164, 42, 130, 46, 194, 33, 107, 52, 93, 73, 87, 100, 157, 63, 212, 77, 249, 140, 11, 215, 169, 101, 181, 225, 127, 7, 248, 46, 96, 35, 157, 134, 162, 151, 37, 152, 83, 135, 229, 7, 232, 193, 215, 237, 150, 199, 23, 44, 146, 59, 168, 175, 197, 79, 101, 197, 193, 88, 213, 2, 48, 25, 207, 8, 220, 91, 16, 201, 216, 59, 9, 130, 197, 140, 128, 28, 197, 124, 68, 231, 253, 163, 15, 188, 195, 29, 102, 127, 53, 87, 174, 241, 51, 107, 165, 31, 216, 198, 151, 129, 187, 246, 79, 14, 5, 39, 14, 70, 204, 69, 68, 214, 61, 163, 245, 234, 107, 59, 254, 226, 68, 68, 206, 102, 189, 243, 168, 166, 185, 66, 36, 121, 13, 235, 87, 199, 92, 205, 203, 33, 168, 203, 103, 235, 121, 215, 93, 147, 70, 180, 181, 66, 75, 132, 163, 117, 245, 147, 37, 167, 177, 210, 147, 212, 201};
    const unsigned r_sz = 229;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test44)
{
    unsigned char msg_in[] = {156, 230, 114, 189, 161, 22, 190, 237, 212, 222, 21, 212, 253, 199, 218, 54, 216, 97, 5, 69, 57, 35, 237, 84, 240, 164, 124, 76, 205, 172, 108, 46, 58, 128, 214, 184, 205, 35, 106, 130, 79, 229, 15, 201, 197, 67, 166, 187, 227, 170, 53, 23, 93, 66, 199, 99, 49, 251, 134, 182, 35, 18, 185, 117, 57, 2, 128, 242, 187, 85, 24, 203, 248, 84, 246, 179, 201, 201, 9, 239, 104, 139, 234, 214, 250, 223, 203, 90, 84, 79, 87, 210, 32, 235, 246, 175, 167, 227, 126, 10, 16, 72, 252, 179, 211, 51, 65, 243, 145, 207, 226, 41, 130, 59, 89, 89, 87, 92, 70, 130, 67, 106, 219, 138, 242, 169, 164, 112, 15, 46, 231, 172, 236, 238, 132, 116, 224, 65, 226, 61, 48, 251, 89, 130, 224, 211, 179, 217, 216, 125, 166, 56, 225, 117, 136, 1, 21, 108, 221, 201, 112, 116, 17, 220};
    const unsigned msg_in_sz = 164;
    unsigned char synd[] = {0, 243, 111, 168, 144, 160, 33, 69, 140, 184, 239, 119, 102, 162, 74, 59, 224, 192, 62, 141, 3, 208, 65, 90, 68, 55, 135, 217, 75, 128, 223, 246, 2};
    const unsigned synd_sz = 33;
    unsigned char err_pos[] = {80};
    const unsigned err_pos_sz = 1;
    unsigned char r[] = {156, 230, 114, 189, 161, 22, 190, 237, 212, 222, 21, 212, 253, 199, 218, 54, 216, 97, 5, 69, 57, 35, 237, 84, 240, 164, 124, 76, 205, 172, 108, 46, 58, 128, 214, 184, 205, 35, 106, 130, 79, 229, 15, 201, 197, 67, 166, 187, 227, 170, 53, 23, 93, 66, 199, 99, 49, 251, 134, 182, 35, 18, 185, 117, 57, 2, 128, 242, 187, 85, 24, 203, 248, 84, 246, 179, 201, 201, 9, 239, 155, 139, 234, 214, 250, 223, 203, 90, 84, 79, 87, 210, 32, 235, 246, 175, 167, 227, 126, 10, 16, 72, 252, 179, 211, 51, 65, 243, 145, 207, 226, 41, 130, 59, 89, 89, 87, 92, 70, 130, 67, 106, 219, 138, 242, 169, 164, 112, 15, 46, 231, 172, 236, 238, 132, 116, 224, 65, 226, 61, 48, 251, 89, 130, 224, 211, 179, 217, 216, 125, 166, 56, 225, 117, 136, 1, 21, 108, 221, 201, 112, 116, 17, 220};
    const unsigned r_sz = 164;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test45)
{
    unsigned char msg_in[] = {156, 230, 114, 189, 161, 22, 190, 237, 212, 222, 21, 212, 253, 199, 218, 54, 216, 114, 5, 69, 57, 35, 237, 84, 240, 164, 124, 76, 205, 172, 108, 46, 58, 128, 214, 184, 205, 35, 106, 130, 79, 229, 15, 201, 197, 67, 166, 187, 227, 170, 53, 23, 93, 66, 199, 99, 49, 251, 134, 182, 35, 18, 185, 117, 57, 2, 128, 242, 187, 85, 24, 203, 248, 84, 246, 179, 201, 201, 9, 239, 104, 139, 234, 214, 250, 223, 203, 90, 84, 79, 87, 210, 32, 235, 246, 175, 167, 227, 126, 10, 16, 72, 252, 179, 211, 51, 65, 243, 145, 207, 226, 41, 130, 59, 89, 89, 87, 92, 70, 130, 67, 106, 219, 138, 242, 169, 164, 112, 15, 46, 231, 172, 236, 238, 132, 116, 224, 65, 226, 61, 48, 251, 89, 130, 224, 211, 179, 217, 216, 125, 166, 56, 225, 117, 136, 1, 21, 108, 221, 201, 112, 116, 17, 220};
    const unsigned msg_in_sz = 164;
    unsigned char synd[] = {0, 224, 137, 162, 29, 94, 218, 118, 192, 7, 199, 121, 185, 105, 134, 22, 38, 96, 6, 214, 8, 199, 245, 101, 254, 215, 246, 245, 23, 106, 35, 36, 165};
    const unsigned synd_sz = 33;
    unsigned char err_pos[] = {80, 17};
    const unsigned err_pos_sz = 2;
    unsigned char r[] = {156, 230, 114, 189, 161, 22, 190, 237, 212, 222, 21, 212, 253, 199, 218, 54, 216, 97, 5, 69, 57, 35, 237, 84, 240, 164, 124, 76, 205, 172, 108, 46, 58, 128, 214, 184, 205, 35, 106, 130, 79, 229, 15, 201, 197, 67, 166, 187, 227, 170, 53, 23, 93, 66, 199, 99, 49, 251, 134, 182, 35, 18, 185, 117, 57, 2, 128, 242, 187, 85, 24, 203, 248, 84, 246, 179, 201, 201, 9, 239, 155, 139, 234, 214, 250, 223, 203, 90, 84, 79, 87, 210, 32, 235, 246, 175, 167, 227, 126, 10, 16, 72, 252, 179, 211, 51, 65, 243, 145, 207, 226, 41, 130, 59, 89, 89, 87, 92, 70, 130, 67, 106, 219, 138, 242, 169, 164, 112, 15, 46, 231, 172, 236, 238, 132, 116, 224, 65, 226, 61, 48, 251, 89, 130, 224, 211, 179, 217, 216, 125, 166, 56, 225, 117, 136, 1, 21, 108, 221, 201, 112, 116, 17, 220};
    const unsigned r_sz = 164;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test46)
{
    unsigned char msg_in[] = {156, 230, 114, 189, 161, 22, 190, 237, 212, 222, 21, 212, 253, 199, 218, 54, 216, 114, 5, 69, 57, 35, 237, 84, 240, 164, 124, 76, 205, 172, 108, 46, 58, 128, 214, 184, 205, 35, 106, 130, 79, 229, 15, 201, 197, 67, 166, 187, 227, 170, 53, 23, 93, 66, 199, 99, 49, 251, 134, 182, 35, 18, 185, 117, 57, 2, 128, 242, 187, 85, 24, 203, 248, 84, 246, 179, 201, 201, 9, 239, 104, 139, 234, 14, 250, 223, 203, 90, 84, 79, 87, 210, 32, 235, 246, 175, 167, 227, 126, 10, 16, 72, 252, 179, 211, 51, 65, 243, 145, 207, 226, 41, 130, 59, 89, 89, 87, 92, 70, 130, 67, 106, 219, 138, 242, 169, 164, 112, 15, 46, 231, 172, 236, 238, 132, 116, 224, 65, 226, 61, 48, 251, 89, 130, 224, 211, 179, 217, 216, 125, 166, 56, 225, 117, 136, 1, 21, 108, 221, 201, 112, 116, 17, 220};
    const unsigned msg_in_sz = 164;
    unsigned char synd[] = {0, 56, 151, 70, 214, 49, 207, 51, 95, 97, 148, 185, 119, 40, 202, 207, 197, 98, 225, 7, 80, 166, 111, 45, 244, 139, 68, 208, 239, 162, 86, 6, 148};
    const unsigned synd_sz = 33;
    unsigned char err_pos[] = {83, 80, 17};
    const unsigned err_pos_sz = 3;
    unsigned char r[] = {156, 230, 114, 189, 161, 22, 190, 237, 212, 222, 21, 212, 253, 199, 218, 54, 216, 97, 5, 69, 57, 35, 237, 84, 240, 164, 124, 76, 205, 172, 108, 46, 58, 128, 214, 184, 205, 35, 106, 130, 79, 229, 15, 201, 197, 67, 166, 187, 227, 170, 53, 23, 93, 66, 199, 99, 49, 251, 134, 182, 35, 18, 185, 117, 57, 2, 128, 242, 187, 85, 24, 203, 248, 84, 246, 179, 201, 201, 9, 239, 155, 139, 234, 214, 250, 223, 203, 90, 84, 79, 87, 210, 32, 235, 246, 175, 167, 227, 126, 10, 16, 72, 252, 179, 211, 51, 65, 243, 145, 207, 226, 41, 130, 59, 89, 89, 87, 92, 70, 130, 67, 106, 219, 138, 242, 169, 164, 112, 15, 46, 231, 172, 236, 238, 132, 116, 224, 65, 226, 61, 48, 251, 89, 130, 224, 211, 179, 217, 216, 125, 166, 56, 225, 117, 136, 1, 21, 108, 221, 201, 112, 116, 17, 220};
    const unsigned r_sz = 164;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test47)
{
    unsigned char msg_in[] = {156, 230, 114, 189, 161, 22, 190, 237, 212, 222, 21, 212, 253, 199, 218, 54, 216, 114, 5, 69, 57, 35, 237, 84, 240, 164, 124, 76, 205, 172, 108, 46, 58, 128, 214, 184, 205, 35, 106, 130, 79, 229, 15, 201, 197, 67, 166, 187, 227, 227, 53, 23, 93, 66, 199, 99, 49, 251, 134, 182, 35, 18, 185, 117, 57, 2, 128, 242, 187, 85, 24, 203, 248, 84, 246, 179, 201, 201, 9, 239, 104, 139, 234, 14, 250, 223, 203, 90, 84, 79, 87, 210, 32, 235, 246, 175, 167, 227, 126, 10, 16, 72, 252, 179, 211, 51, 65, 243, 145, 207, 226, 41, 130, 59, 89, 89, 87, 92, 70, 130, 67, 106, 219, 138, 242, 169, 164, 112, 15, 46, 231, 172, 236, 238, 132, 116, 224, 65, 226, 61, 48, 251, 89, 130, 224, 211, 179, 217, 216, 125, 166, 56, 225, 117, 136, 1, 21, 108, 221, 201, 112, 116, 17, 220};
    const unsigned msg_in_sz = 164;
    unsigned char synd[] = {0, 113, 127, 117, 192, 114, 182, 143, 104, 143, 35, 33, 43, 193, 199, 228, 249, 35, 228, 193, 153, 56, 183, 74, 230, 48, 201, 141, 56, 146, 2, 2, 108};
    const unsigned synd_sz = 33;
    unsigned char err_pos[] = {83, 80, 49, 17};
    const unsigned err_pos_sz = 4;
    unsigned char r[] = {156, 230, 114, 189, 161, 22, 190, 237, 212, 222, 21, 212, 253, 199, 218, 54, 216, 97, 5, 69, 57, 35, 237, 84, 240, 164, 124, 76, 205, 172, 108, 46, 58, 128, 214, 184, 205, 35, 106, 130, 79, 229, 15, 201, 197, 67, 166, 187, 227, 170, 53, 23, 93, 66, 199, 99, 49, 251, 134, 182, 35, 18, 185, 117, 57, 2, 128, 242, 187, 85, 24, 203, 248, 84, 246, 179, 201, 201, 9, 239, 155, 139, 234, 214, 250, 223, 203, 90, 84, 79, 87, 210, 32, 235, 246, 175, 167, 227, 126, 10, 16, 72, 252, 179, 211, 51, 65, 243, 145, 207, 226, 41, 130, 59, 89, 89, 87, 92, 70, 130, 67, 106, 219, 138, 242, 169, 164, 112, 15, 46, 231, 172, 236, 238, 132, 116, 224, 65, 226, 61, 48, 251, 89, 130, 224, 211, 179, 217, 216, 125, 166, 56, 225, 117, 136, 1, 21, 108, 221, 201, 112, 116, 17, 220};
    const unsigned r_sz = 164;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test48)
{
    unsigned char msg_in[] = {156, 230, 114, 189, 161, 22, 190, 237, 212, 222, 21, 212, 253, 199, 218, 54, 216, 114, 5, 69, 57, 35, 237, 84, 240, 164, 124, 76, 205, 172, 108, 46, 58, 128, 214, 184, 205, 35, 106, 130, 79, 229, 15, 201, 197, 67, 166, 187, 227, 227, 53, 23, 93, 66, 199, 99, 49, 251, 134, 182, 35, 18, 185, 117, 57, 2, 128, 242, 187, 85, 24, 203, 248, 84, 246, 179, 201, 201, 9, 239, 104, 139, 234, 14, 250, 223, 203, 90, 84, 79, 87, 210, 32, 235, 246, 175, 167, 227, 126, 10, 16, 72, 252, 179, 211, 51, 65, 243, 145, 207, 226, 41, 130, 59, 89, 89, 87, 92, 70, 130, 67, 106, 219, 138, 242, 169, 164, 112, 15, 46, 231, 172, 236, 238, 132, 116, 224, 65, 226, 61, 48, 251, 89, 130, 224, 211, 179, 217, 216, 125, 166, 56, 225, 117, 219, 1, 21, 108, 221, 201, 112, 116, 17, 220};
    const unsigned msg_in_sz = 164;
    unsigned char synd[] = {0, 34, 144, 103, 51, 194, 110, 175, 123, 70, 190, 245, 46, 19, 94, 216, 72, 193, 233, 222, 117, 100, 51, 238, 81, 78, 42, 186, 10, 114, 123, 71, 152};
    const unsigned synd_sz = 33;
    unsigned char err_pos[] = {154, 83, 80, 49, 17};
    const unsigned err_pos_sz = 5;
    unsigned char r[] = {156, 230, 114, 189, 161, 22, 190, 237, 212, 222, 21, 212, 253, 199, 218, 54, 216, 97, 5, 69, 57, 35, 237, 84, 240, 164, 124, 76, 205, 172, 108, 46, 58, 128, 214, 184, 205, 35, 106, 130, 79, 229, 15, 201, 197, 67, 166, 187, 227, 170, 53, 23, 93, 66, 199, 99, 49, 251, 134, 182, 35, 18, 185, 117, 57, 2, 128, 242, 187, 85, 24, 203, 248, 84, 246, 179, 201, 201, 9, 239, 155, 139, 234, 214, 250, 223, 203, 90, 84, 79, 87, 210, 32, 235, 246, 175, 167, 227, 126, 10, 16, 72, 252, 179, 211, 51, 65, 243, 145, 207, 226, 41, 130, 59, 89, 89, 87, 92, 70, 130, 67, 106, 219, 138, 242, 169, 164, 112, 15, 46, 231, 172, 236, 238, 132, 116, 224, 65, 226, 61, 48, 251, 89, 130, 224, 211, 179, 217, 216, 125, 166, 56, 225, 117, 136, 1, 21, 108, 221, 201, 112, 116, 17, 220};
    const unsigned r_sz = 164;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test49)
{
    unsigned char msg_in[] = {156, 230, 114, 189, 161, 22, 190, 237, 212, 222, 21, 212, 253, 199, 218, 54, 216, 114, 5, 69, 57, 35, 237, 84, 240, 164, 124, 76, 205, 172, 108, 46, 58, 128, 214, 184, 47, 35, 106, 130, 79, 229, 15, 201, 197, 67, 166, 187, 227, 227, 53, 23, 93, 66, 199, 99, 49, 251, 134, 182, 35, 18, 185, 117, 57, 2, 128, 242, 187, 85, 24, 203, 248, 84, 246, 179, 201, 201, 9, 239, 104, 139, 234, 14, 250, 223, 203, 90, 84, 79, 87, 210, 32, 235, 246, 175, 167, 227, 126, 10, 16, 72, 252, 179, 211, 51, 65, 243, 145, 207, 226, 41, 130, 59, 89, 89, 87, 92, 70, 130, 67, 106, 219, 138, 242, 169, 164, 112, 15, 46, 231, 172, 236, 238, 132, 116, 224, 65, 226, 61, 48, 251, 89, 130, 224, 211, 179, 217, 216, 125, 166, 56, 225, 117, 219, 1, 21, 108, 221, 201, 112, 116, 17, 220};
    const unsigned msg_in_sz = 164;
    unsigned char synd[] = {0, 192, 26, 22, 118, 116, 194, 244, 45, 229, 149, 42, 181, 242, 157, 38, 167, 190, 16, 111, 135, 178, 74, 133, 227, 245, 115, 105, 168, 149, 42, 186, 62};
    const unsigned synd_sz = 33;
    unsigned char err_pos[] = {154, 83, 80, 49, 36, 17};
    const unsigned err_pos_sz = 6;
    unsigned char r[] = {156, 230, 114, 189, 161, 22, 190, 237, 212, 222, 21, 212, 253, 199, 218, 54, 216, 97, 5, 69, 57, 35, 237, 84, 240, 164, 124, 76, 205, 172, 108, 46, 58, 128, 214, 184, 205, 35, 106, 130, 79, 229, 15, 201, 197, 67, 166, 187, 227, 170, 53, 23, 93, 66, 199, 99, 49, 251, 134, 182, 35, 18, 185, 117, 57, 2, 128, 242, 187, 85, 24, 203, 248, 84, 246, 179, 201, 201, 9, 239, 155, 139, 234, 214, 250, 223, 203, 90, 84, 79, 87, 210, 32, 235, 246, 175, 167, 227, 126, 10, 16, 72, 252, 179, 211, 51, 65, 243, 145, 207, 226, 41, 130, 59, 89, 89, 87, 92, 70, 130, 67, 106, 219, 138, 242, 169, 164, 112, 15, 46, 231, 172, 236, 238, 132, 116, 224, 65, 226, 61, 48, 251, 89, 130, 224, 211, 179, 217, 216, 125, 166, 56, 225, 117, 136, 1, 21, 108, 221, 201, 112, 116, 17, 220};
    const unsigned r_sz = 164;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test50)
{
    unsigned char msg_in[] = {156, 230, 114, 189, 161, 22, 190, 237, 212, 222, 21, 212, 253, 199, 218, 54, 216, 114, 5, 69, 57, 35, 237, 84, 240, 164, 124, 76, 205, 172, 108, 46, 58, 128, 214, 184, 47, 35, 106, 130, 79, 229, 15, 201, 197, 67, 166, 187, 227, 227, 53, 23, 93, 66, 199, 99, 49, 251, 134, 182, 35, 18, 185, 117, 57, 2, 128, 242, 187, 85, 24, 203, 248, 84, 246, 179, 201, 201, 227, 239, 104, 139, 234, 14, 250, 223, 203, 90, 84, 79, 87, 210, 32, 235, 246, 175, 167, 227, 126, 10, 16, 72, 252, 179, 211, 51, 65, 243, 145, 207, 226, 41, 130, 59, 89, 89, 87, 92, 70, 130, 67, 106, 219, 138, 242, 169, 164, 112, 15, 46, 231, 172, 236, 238, 132, 116, 224, 65, 226, 61, 48, 251, 89, 130, 224, 211, 179, 217, 216, 125, 166, 56, 225, 117, 219, 1, 21, 108, 221, 201, 112, 116, 17, 220};
    const unsigned msg_in_sz = 164;
    unsigned char synd[] = {0, 42, 114, 148, 156, 28, 64, 30, 69, 103, 127, 66, 55, 24, 245, 164, 77, 214, 146, 133, 239, 48, 160, 237, 97, 31, 27, 235, 66, 253, 168, 80, 86};
    const unsigned synd_sz = 33;
    unsigned char err_pos[] = {154, 83, 80, 78, 49, 36, 17};
    const unsigned err_pos_sz = 7;
    unsigned char r[] = {156, 230, 114, 189, 161, 22, 190, 237, 212, 222, 21, 212, 253, 199, 218, 54, 216, 97, 5, 69, 57, 35, 237, 84, 240, 164, 124, 76, 205, 172, 108, 46, 58, 128, 214, 184, 205, 35, 106, 130, 79, 229, 15, 201, 197, 67, 166, 187, 227, 170, 53, 23, 93, 66, 199, 99, 49, 251, 134, 182, 35, 18, 185, 117, 57, 2, 128, 242, 187, 85, 24, 203, 248, 84, 246, 179, 201, 201, 9, 239, 155, 139, 234, 214, 250, 223, 203, 90, 84, 79, 87, 210, 32, 235, 246, 175, 167, 227, 126, 10, 16, 72, 252, 179, 211, 51, 65, 243, 145, 207, 226, 41, 130, 59, 89, 89, 87, 92, 70, 130, 67, 106, 219, 138, 242, 169, 164, 112, 15, 46, 231, 172, 236, 238, 132, 116, 224, 65, 226, 61, 48, 251, 89, 130, 224, 211, 179, 217, 216, 125, 166, 56, 225, 117, 136, 1, 21, 108, 221, 201, 112, 116, 17, 220};
    const unsigned r_sz = 164;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test51)
{
    unsigned char msg_in[] = {156, 230, 114, 189, 161, 22, 190, 237, 212, 222, 21, 212, 253, 199, 218, 54, 216, 114, 5, 69, 57, 35, 237, 84, 240, 164, 124, 76, 205, 172, 108, 46, 58, 128, 214, 184, 47, 35, 106, 130, 79, 229, 15, 201, 197, 67, 166, 187, 227, 227, 53, 23, 93, 66, 199, 99, 49, 251, 134, 182, 35, 18, 185, 117, 57, 2, 128, 242, 187, 85, 24, 203, 248, 84, 246, 179, 201, 201, 227, 239, 104, 139, 234, 14, 250, 223, 203, 90, 84, 79, 87, 210, 32, 235, 246, 175, 167, 227, 126, 10, 16, 72, 252, 179, 211, 51, 65, 243, 145, 207, 226, 41, 130, 59, 89, 89, 87, 92, 70, 130, 67, 106, 219, 138, 3, 169, 164, 112, 15, 46, 231, 172, 236, 238, 132, 116, 224, 65, 226, 61, 48, 251, 89, 130, 224, 211, 179, 217, 216, 125, 166, 56, 225, 117, 219, 1, 21, 108, 221, 201, 112, 116, 17, 220};
    const unsigned msg_in_sz = 164;
    unsigned char synd[] = {0, 219, 128, 57, 185, 19, 126, 140, 199, 146, 89, 18, 129, 160, 70, 253, 123, 241, 247, 75, 186, 103, 157, 32, 107, 192, 12, 23, 228, 50, 200, 127, 134};
    const unsigned synd_sz = 33;
    unsigned char err_pos[] = {154, 124, 83, 80, 78, 49, 36, 17};
    const unsigned err_pos_sz = 8;
    unsigned char r[] = {156, 230, 114, 189, 161, 22, 190, 237, 212, 222, 21, 212, 253, 199, 218, 54, 216, 97, 5, 69, 57, 35, 237, 84, 240, 164, 124, 76, 205, 172, 108, 46, 58, 128, 214, 184, 205, 35, 106, 130, 79, 229, 15, 201, 197, 67, 166, 187, 227, 170, 53, 23, 93, 66, 199, 99, 49, 251, 134, 182, 35, 18, 185, 117, 57, 2, 128, 242, 187, 85, 24, 203, 248, 84, 246, 179, 201, 201, 9, 239, 155, 139, 234, 214, 250, 223, 203, 90, 84, 79, 87, 210, 32, 235, 246, 175, 167, 227, 126, 10, 16, 72, 252, 179, 211, 51, 65, 243, 145, 207, 226, 41, 130, 59, 89, 89, 87, 92, 70, 130, 67, 106, 219, 138, 242, 169, 164, 112, 15, 46, 231, 172, 236, 238, 132, 116, 224, 65, 226, 61, 48, 251, 89, 130, 224, 211, 179, 217, 216, 125, 166, 56, 225, 117, 136, 1, 21, 108, 221, 201, 112, 116, 17, 220};
    const unsigned r_sz = 164;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test52)
{
    unsigned char msg_in[] = {156, 230, 114, 189, 161, 22, 190, 237, 212, 222, 21, 212, 253, 199, 218, 54, 216, 114, 5, 69, 57, 35, 237, 84, 240, 164, 124, 76, 205, 172, 108, 46, 58, 128, 214, 184, 47, 35, 106, 130, 79, 229, 15, 201, 197, 67, 166, 187, 227, 227, 53, 23, 93, 66, 199, 99, 49, 251, 134, 182, 35, 18, 185, 117, 57, 2, 128, 242, 187, 85, 24, 203, 248, 84, 246, 179, 201, 201, 151, 239, 104, 139, 234, 14, 250, 223, 203, 90, 84, 79, 87, 210, 32, 235, 246, 175, 167, 227, 126, 10, 16, 72, 252, 179, 211, 51, 65, 243, 145, 207, 226, 41, 130, 59, 89, 89, 87, 92, 70, 130, 67, 106, 219, 138, 3, 169, 164, 112, 15, 46, 231, 172, 236, 238, 132, 116, 224, 65, 226, 61, 48, 251, 89, 130, 224, 211, 179, 217, 216, 125, 166, 56, 225, 117, 219, 1, 21, 108, 221, 201, 112, 116, 17, 220};
    const unsigned msg_in_sz = 164;
    unsigned char synd[] = {0, 175, 98, 175, 205, 241, 232, 248, 37, 4, 45, 240, 23, 212, 164, 107, 15, 19, 97, 63, 88, 241, 233, 194, 253, 180, 238, 129, 144, 208, 94, 11, 100};
    const unsigned synd_sz = 33;
    unsigned char err_pos[] = {154, 124, 83, 80, 78, 49, 36, 17};
    const unsigned err_pos_sz = 8;
    unsigned char r[] = {156, 230, 114, 189, 161, 22, 190, 237, 212, 222, 21, 212, 253, 199, 218, 54, 216, 97, 5, 69, 57, 35, 237, 84, 240, 164, 124, 76, 205, 172, 108, 46, 58, 128, 214, 184, 205, 35, 106, 130, 79, 229, 15, 201, 197, 67, 166, 187, 227, 170, 53, 23, 93, 66, 199, 99, 49, 251, 134, 182, 35, 18, 185, 117, 57, 2, 128, 242, 187, 85, 24, 203, 248, 84, 246, 179, 201, 201, 9, 239, 155, 139, 234, 214, 250, 223, 203, 90, 84, 79, 87, 210, 32, 235, 246, 175, 167, 227, 126, 10, 16, 72, 252, 179, 211, 51, 65, 243, 145, 207, 226, 41, 130, 59, 89, 89, 87, 92, 70, 130, 67, 106, 219, 138, 242, 169, 164, 112, 15, 46, 231, 172, 236, 238, 132, 116, 224, 65, 226, 61, 48, 251, 89, 130, 224, 211, 179, 217, 216, 125, 166, 56, 225, 117, 136, 1, 21, 108, 221, 201, 112, 116, 17, 220};
    const unsigned r_sz = 164;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test53)
{
    unsigned char msg_in[] = {156, 230, 114, 189, 161, 22, 190, 237, 212, 222, 21, 212, 253, 199, 218, 54, 216, 114, 5, 69, 57, 35, 237, 84, 240, 164, 124, 76, 205, 172, 108, 46, 58, 128, 214, 184, 47, 35, 106, 130, 79, 229, 15, 201, 197, 67, 166, 187, 227, 227, 53, 23, 93, 66, 199, 99, 49, 251, 134, 182, 35, 18, 185, 117, 57, 2, 128, 242, 187, 85, 24, 203, 248, 84, 246, 179, 201, 201, 151, 239, 104, 139, 234, 14, 250, 223, 203, 90, 84, 79, 87, 210, 32, 235, 246, 175, 167, 227, 126, 10, 16, 72, 252, 179, 211, 51, 65, 243, 145, 207, 226, 41, 130, 59, 89, 89, 87, 92, 70, 130, 67, 106, 219, 138, 3, 169, 164, 112, 15, 46, 231, 172, 236, 238, 132, 116, 224, 65, 226, 61, 48, 251, 89, 130, 224, 211, 179, 217, 216, 125, 166, 56, 225, 117, 219, 80, 21, 108, 221, 201, 112, 116, 17, 220};
    const unsigned msg_in_sz = 164;
    unsigned char synd[] = {0, 254, 161, 189, 58, 221, 243, 250, 31, 156, 46, 215, 195, 88, 30, 213, 197, 244, 128, 144, 66, 238, 159, 213, 99, 249, 124, 80, 117, 11, 105, 18, 92};
    const unsigned synd_sz = 33;
    unsigned char err_pos[] = {155, 154, 124, 83, 80, 78, 49, 36, 17};
    const unsigned err_pos_sz = 9;
    unsigned char r[] = {156, 230, 114, 189, 161, 22, 190, 237, 212, 222, 21, 212, 253, 199, 218, 54, 216, 97, 5, 69, 57, 35, 237, 84, 240, 164, 124, 76, 205, 172, 108, 46, 58, 128, 214, 184, 205, 35, 106, 130, 79, 229, 15, 201, 197, 67, 166, 187, 227, 170, 53, 23, 93, 66, 199, 99, 49, 251, 134, 182, 35, 18, 185, 117, 57, 2, 128, 242, 187, 85, 24, 203, 248, 84, 246, 179, 201, 201, 9, 239, 155, 139, 234, 214, 250, 223, 203, 90, 84, 79, 87, 210, 32, 235, 246, 175, 167, 227, 126, 10, 16, 72, 252, 179, 211, 51, 65, 243, 145, 207, 226, 41, 130, 59, 89, 89, 87, 92, 70, 130, 67, 106, 219, 138, 242, 169, 164, 112, 15, 46, 231, 172, 236, 238, 132, 116, 224, 65, 226, 61, 48, 251, 89, 130, 224, 211, 179, 217, 216, 125, 166, 56, 225, 117, 136, 1, 21, 108, 221, 201, 112, 116, 17, 220};
    const unsigned r_sz = 164;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test54)
{
    unsigned char msg_in[] = {156, 230, 114, 189, 161, 22, 190, 237, 212, 222, 21, 212, 253, 199, 218, 54, 216, 114, 5, 69, 57, 35, 237, 84, 240, 164, 124, 76, 205, 172, 108, 46, 58, 128, 214, 184, 47, 35, 106, 130, 79, 229, 15, 201, 197, 67, 166, 187, 227, 227, 53, 23, 93, 66, 199, 99, 49, 251, 134, 182, 35, 18, 185, 117, 57, 2, 128, 242, 187, 85, 24, 203, 248, 84, 246, 179, 201, 201, 151, 239, 104, 139, 234, 14, 250, 223, 203, 90, 84, 79, 87, 210, 32, 235, 246, 175, 167, 227, 126, 10, 16, 72, 252, 179, 211, 51, 65, 243, 145, 207, 226, 41, 130, 95, 89, 89, 87, 92, 70, 130, 67, 106, 219, 138, 3, 169, 164, 112, 15, 46, 231, 172, 236, 238, 132, 116, 224, 65, 226, 61, 48, 251, 89, 130, 224, 211, 179, 217, 216, 125, 166, 56, 225, 117, 219, 80, 21, 108, 221, 201, 112, 116, 17, 220};
    const unsigned msg_in_sz = 164;
    unsigned char synd[] = {0, 154, 72, 215, 229, 89, 93, 214, 131, 74, 135, 224, 40, 56, 227, 251, 83, 0, 131, 159, 113, 17, 187, 97, 61, 194, 171, 252, 83, 181, 21, 131, 179};
    const unsigned synd_sz = 33;
    unsigned char err_pos[] = {155, 154, 124, 113, 83, 80, 78, 49, 36, 17};
    const unsigned err_pos_sz = 10;
    unsigned char r[] = {156, 230, 114, 189, 161, 22, 190, 237, 212, 222, 21, 212, 253, 199, 218, 54, 216, 97, 5, 69, 57, 35, 237, 84, 240, 164, 124, 76, 205, 172, 108, 46, 58, 128, 214, 184, 205, 35, 106, 130, 79, 229, 15, 201, 197, 67, 166, 187, 227, 170, 53, 23, 93, 66, 199, 99, 49, 251, 134, 182, 35, 18, 185, 117, 57, 2, 128, 242, 187, 85, 24, 203, 248, 84, 246, 179, 201, 201, 9, 239, 155, 139, 234, 214, 250, 223, 203, 90, 84, 79, 87, 210, 32, 235, 246, 175, 167, 227, 126, 10, 16, 72, 252, 179, 211, 51, 65, 243, 145, 207, 226, 41, 130, 59, 89, 89, 87, 92, 70, 130, 67, 106, 219, 138, 242, 169, 164, 112, 15, 46, 231, 172, 236, 238, 132, 116, 224, 65, 226, 61, 48, 251, 89, 130, 224, 211, 179, 217, 216, 125, 166, 56, 225, 117, 136, 1, 21, 108, 221, 201, 112, 116, 17, 220};
    const unsigned r_sz = 164;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test55)
{
    unsigned char msg_in[] = {156, 230, 252, 189, 161, 22, 190, 237, 212, 222, 21, 212, 253, 199, 218, 54, 216, 114, 5, 69, 57, 35, 237, 84, 240, 164, 124, 76, 205, 172, 108, 46, 58, 128, 214, 184, 47, 35, 106, 130, 79, 229, 15, 201, 197, 67, 166, 187, 227, 227, 53, 23, 93, 66, 199, 99, 49, 251, 134, 182, 35, 18, 185, 117, 57, 2, 128, 242, 187, 85, 24, 203, 248, 84, 246, 179, 201, 201, 151, 239, 104, 139, 234, 14, 250, 223, 203, 90, 84, 79, 87, 210, 32, 235, 246, 175, 167, 227, 126, 10, 16, 72, 252, 179, 211, 51, 65, 243, 145, 207, 226, 41, 130, 95, 89, 89, 87, 92, 70, 130, 67, 106, 219, 138, 3, 169, 164, 112, 15, 46, 231, 172, 236, 238, 132, 116, 224, 65, 226, 61, 48, 251, 89, 130, 224, 211, 179, 217, 216, 125, 166, 56, 225, 117, 219, 80, 21, 108, 221, 201, 112, 116, 17, 220};
    const unsigned msg_in_sz = 164;
    unsigned char synd[] = {0, 20, 174, 182, 117, 52, 104, 202, 183, 135, 113, 16, 4, 162, 247, 9, 192, 3, 237, 196, 54, 98, 5, 41, 133, 86, 165, 230, 187, 206, 109, 149, 254};
    const unsigned synd_sz = 33;
    unsigned char err_pos[] = {155, 154, 124, 113, 83, 80, 78, 49, 36, 17, 2};
    const unsigned err_pos_sz = 11;
    unsigned char r[] = {156, 230, 114, 189, 161, 22, 190, 237, 212, 222, 21, 212, 253, 199, 218, 54, 216, 97, 5, 69, 57, 35, 237, 84, 240, 164, 124, 76, 205, 172, 108, 46, 58, 128, 214, 184, 205, 35, 106, 130, 79, 229, 15, 201, 197, 67, 166, 187, 227, 170, 53, 23, 93, 66, 199, 99, 49, 251, 134, 182, 35, 18, 185, 117, 57, 2, 128, 242, 187, 85, 24, 203, 248, 84, 246, 179, 201, 201, 9, 239, 155, 139, 234, 214, 250, 223, 203, 90, 84, 79, 87, 210, 32, 235, 246, 175, 167, 227, 126, 10, 16, 72, 252, 179, 211, 51, 65, 243, 145, 207, 226, 41, 130, 59, 89, 89, 87, 92, 70, 130, 67, 106, 219, 138, 242, 169, 164, 112, 15, 46, 231, 172, 236, 238, 132, 116, 224, 65, 226, 61, 48, 251, 89, 130, 224, 211, 179, 217, 216, 125, 166, 56, 225, 117, 136, 1, 21, 108, 221, 201, 112, 116, 17, 220};
    const unsigned r_sz = 164;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test56)
{
    unsigned char msg_in[] = {156, 230, 252, 189, 161, 22, 190, 237, 212, 222, 21, 212, 253, 199, 218, 54, 216, 114, 5, 69, 57, 35, 237, 84, 240, 164, 124, 76, 205, 172, 108, 46, 58, 128, 214, 184, 47, 35, 106, 130, 79, 229, 15, 201, 197, 67, 166, 187, 227, 227, 53, 23, 93, 66, 199, 99, 49, 251, 134, 182, 35, 18, 185, 117, 57, 2, 128, 242, 187, 85, 24, 203, 248, 84, 246, 179, 201, 201, 32, 239, 104, 139, 234, 14, 250, 223, 203, 90, 84, 79, 87, 210, 32, 235, 246, 175, 167, 227, 126, 10, 16, 72, 252, 179, 211, 51, 65, 243, 145, 207, 226, 41, 130, 95, 89, 89, 87, 92, 70, 130, 67, 106, 219, 138, 3, 169, 164, 112, 15, 46, 231, 172, 236, 238, 132, 116, 224, 65, 226, 61, 48, 251, 89, 130, 224, 211, 179, 217, 216, 125, 166, 56, 225, 117, 219, 80, 21, 108, 221, 201, 112, 116, 17, 220};
    const unsigned msg_in_sz = 164;
    unsigned char synd[] = {0, 163, 211, 124, 194, 73, 162, 125, 202, 77, 198, 109, 206, 21, 138, 195, 119, 126, 39, 115, 75, 168, 178, 84, 79, 225, 216, 44, 12, 179, 167, 34, 131};
    const unsigned synd_sz = 33;
    unsigned char err_pos[] = {155, 154, 124, 113, 83, 80, 78, 49, 36, 17, 2};
    const unsigned err_pos_sz = 11;
    unsigned char r[] = {156, 230, 114, 189, 161, 22, 190, 237, 212, 222, 21, 212, 253, 199, 218, 54, 216, 97, 5, 69, 57, 35, 237, 84, 240, 164, 124, 76, 205, 172, 108, 46, 58, 128, 214, 184, 205, 35, 106, 130, 79, 229, 15, 201, 197, 67, 166, 187, 227, 170, 53, 23, 93, 66, 199, 99, 49, 251, 134, 182, 35, 18, 185, 117, 57, 2, 128, 242, 187, 85, 24, 203, 248, 84, 246, 179, 201, 201, 9, 239, 155, 139, 234, 214, 250, 223, 203, 90, 84, 79, 87, 210, 32, 235, 246, 175, 167, 227, 126, 10, 16, 72, 252, 179, 211, 51, 65, 243, 145, 207, 226, 41, 130, 59, 89, 89, 87, 92, 70, 130, 67, 106, 219, 138, 242, 169, 164, 112, 15, 46, 231, 172, 236, 238, 132, 116, 224, 65, 226, 61, 48, 251, 89, 130, 224, 211, 179, 217, 216, 125, 166, 56, 225, 117, 136, 1, 21, 108, 221, 201, 112, 116, 17, 220};
    const unsigned r_sz = 164;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test57)
{
    unsigned char msg_in[] = {156, 230, 252, 189, 161, 22, 190, 237, 212, 222, 21, 212, 253, 199, 218, 54, 216, 114, 5, 69, 57, 35, 237, 84, 240, 164, 124, 76, 205, 172, 108, 46, 58, 128, 214, 184, 47, 35, 106, 130, 79, 229, 15, 201, 197, 67, 166, 187, 227, 227, 53, 23, 93, 66, 199, 99, 49, 251, 134, 182, 35, 18, 185, 117, 57, 2, 128, 242, 187, 85, 24, 203, 248, 84, 246, 179, 201, 201, 32, 239, 104, 139, 234, 14, 250, 223, 203, 90, 84, 79, 87, 210, 32, 235, 246, 175, 167, 227, 126, 10, 16, 72, 252, 179, 211, 51, 65, 243, 145, 207, 226, 41, 130, 95, 89, 89, 87, 92, 70, 130, 67, 106, 219, 138, 3, 169, 144, 112, 15, 46, 231, 172, 236, 238, 132, 116, 224, 65, 226, 61, 48, 251, 89, 130, 224, 211, 179, 217, 216, 125, 166, 56, 225, 117, 219, 80, 21, 108, 221, 201, 112, 116, 17, 220};
    const unsigned msg_in_sz = 164;
    unsigned char synd[] = {0, 151, 135, 234, 89, 199, 135, 183, 173, 100, 83, 40, 198, 127, 182, 253, 221, 219, 3, 243, 165, 79, 117, 38, 205, 155, 48, 106, 218, 95, 212, 234, 112};
    const unsigned synd_sz = 33;
    unsigned char err_pos[] = {155, 154, 126, 124, 113, 83, 80, 78, 49, 36, 17, 2};
    const unsigned err_pos_sz = 12;
    unsigned char r[] = {156, 230, 114, 189, 161, 22, 190, 237, 212, 222, 21, 212, 253, 199, 218, 54, 216, 97, 5, 69, 57, 35, 237, 84, 240, 164, 124, 76, 205, 172, 108, 46, 58, 128, 214, 184, 205, 35, 106, 130, 79, 229, 15, 201, 197, 67, 166, 187, 227, 170, 53, 23, 93, 66, 199, 99, 49, 251, 134, 182, 35, 18, 185, 117, 57, 2, 128, 242, 187, 85, 24, 203, 248, 84, 246, 179, 201, 201, 9, 239, 155, 139, 234, 214, 250, 223, 203, 90, 84, 79, 87, 210, 32, 235, 246, 175, 167, 227, 126, 10, 16, 72, 252, 179, 211, 51, 65, 243, 145, 207, 226, 41, 130, 59, 89, 89, 87, 92, 70, 130, 67, 106, 219, 138, 242, 169, 164, 112, 15, 46, 231, 172, 236, 238, 132, 116, 224, 65, 226, 61, 48, 251, 89, 130, 224, 211, 179, 217, 216, 125, 166, 56, 225, 117, 136, 1, 21, 108, 221, 201, 112, 116, 17, 220};
    const unsigned r_sz = 164;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test58)
{
    unsigned char msg_in[] = {156, 230, 252, 189, 161, 22, 190, 237, 212, 222, 21, 212, 253, 199, 218, 54, 216, 114, 5, 69, 57, 35, 237, 84, 240, 164, 124, 76, 205, 172, 108, 46, 58, 128, 214, 184, 47, 35, 106, 130, 79, 229, 15, 201, 197, 67, 166, 187, 227, 227, 53, 23, 93, 66, 199, 99, 49, 251, 134, 182, 35, 18, 185, 117, 57, 2, 128, 242, 187, 85, 24, 203, 248, 84, 246, 179, 201, 201, 32, 239, 104, 139, 234, 14, 250, 223, 203, 90, 84, 79, 87, 210, 32, 235, 246, 175, 167, 227, 126, 10, 16, 181, 252, 179, 211, 51, 65, 243, 145, 207, 226, 41, 130, 95, 89, 89, 87, 92, 70, 130, 67, 106, 219, 138, 3, 169, 144, 112, 15, 46, 231, 172, 236, 238, 132, 116, 224, 65, 226, 61, 48, 251, 89, 130, 224, 211, 179, 217, 216, 125, 166, 56, 225, 117, 219, 80, 21, 108, 221, 201, 112, 116, 17, 220};
    const unsigned msg_in_sz = 164;
    unsigned char synd[] = {0, 106, 173, 55, 177, 13, 46, 58, 189, 5, 214, 134, 107, 173, 192, 57, 52, 207, 61, 16, 174, 142, 29, 195, 56, 15, 33, 213, 200, 159, 98, 152, 235};
    const unsigned synd_sz = 33;
    unsigned char err_pos[] = {155, 154, 126, 124, 113, 101, 83, 80, 78, 49, 36, 17, 2};
    const unsigned err_pos_sz = 13;
    unsigned char r[] = {156, 230, 114, 189, 161, 22, 190, 237, 212, 222, 21, 212, 253, 199, 218, 54, 216, 97, 5, 69, 57, 35, 237, 84, 240, 164, 124, 76, 205, 172, 108, 46, 58, 128, 214, 184, 205, 35, 106, 130, 79, 229, 15, 201, 197, 67, 166, 187, 227, 170, 53, 23, 93, 66, 199, 99, 49, 251, 134, 182, 35, 18, 185, 117, 57, 2, 128, 242, 187, 85, 24, 203, 248, 84, 246, 179, 201, 201, 9, 239, 155, 139, 234, 214, 250, 223, 203, 90, 84, 79, 87, 210, 32, 235, 246, 175, 167, 227, 126, 10, 16, 72, 252, 179, 211, 51, 65, 243, 145, 207, 226, 41, 130, 59, 89, 89, 87, 92, 70, 130, 67, 106, 219, 138, 242, 169, 164, 112, 15, 46, 231, 172, 236, 238, 132, 116, 224, 65, 226, 61, 48, 251, 89, 130, 224, 211, 179, 217, 216, 125, 166, 56, 225, 117, 136, 1, 21, 108, 221, 201, 112, 116, 17, 220};
    const unsigned r_sz = 164;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test59)
{
    unsigned char msg_in[] = {156, 230, 252, 189, 161, 22, 190, 237, 212, 222, 21, 212, 253, 199, 218, 54, 216, 114, 5, 69, 57, 62, 237, 84, 240, 164, 124, 76, 205, 172, 108, 46, 58, 128, 214, 184, 47, 35, 106, 130, 79, 229, 15, 201, 197, 67, 166, 187, 227, 227, 53, 23, 93, 66, 199, 99, 49, 251, 134, 182, 35, 18, 185, 117, 57, 2, 128, 242, 187, 85, 24, 203, 248, 84, 246, 179, 201, 201, 32, 239, 104, 139, 234, 14, 250, 223, 203, 90, 84, 79, 87, 210, 32, 235, 246, 175, 167, 227, 126, 10, 16, 181, 252, 179, 211, 51, 65, 243, 145, 207, 226, 41, 130, 95, 89, 89, 87, 92, 70, 130, 67, 106, 219, 138, 3, 169, 144, 112, 15, 46, 231, 172, 236, 238, 132, 116, 224, 65, 226, 61, 48, 251, 89, 130, 224, 211, 179, 217, 216, 125, 166, 56, 225, 117, 219, 80, 21, 108, 221, 201, 112, 116, 17, 220};
    const unsigned msg_in_sz = 164;
    unsigned char synd[] = {0, 119, 248, 125, 250, 108, 127, 216, 54, 146, 62, 20, 1, 207, 239, 139, 119, 227, 241, 3, 74, 249, 42, 166, 193, 45, 92, 251, 80, 236, 253, 61, 228};
    const unsigned synd_sz = 33;
    unsigned char err_pos[] = {155, 154, 126, 124, 113, 101, 83, 80, 78, 49, 36, 21, 17, 2};
    const unsigned err_pos_sz = 14;
    unsigned char r[] = {156, 230, 114, 189, 161, 22, 190, 237, 212, 222, 21, 212, 253, 199, 218, 54, 216, 97, 5, 69, 57, 35, 237, 84, 240, 164, 124, 76, 205, 172, 108, 46, 58, 128, 214, 184, 205, 35, 106, 130, 79, 229, 15, 201, 197, 67, 166, 187, 227, 170, 53, 23, 93, 66, 199, 99, 49, 251, 134, 182, 35, 18, 185, 117, 57, 2, 128, 242, 187, 85, 24, 203, 248, 84, 246, 179, 201, 201, 9, 239, 155, 139, 234, 214, 250, 223, 203, 90, 84, 79, 87, 210, 32, 235, 246, 175, 167, 227, 126, 10, 16, 72, 252, 179, 211, 51, 65, 243, 145, 207, 226, 41, 130, 59, 89, 89, 87, 92, 70, 130, 67, 106, 219, 138, 242, 169, 164, 112, 15, 46, 231, 172, 236, 238, 132, 116, 224, 65, 226, 61, 48, 251, 89, 130, 224, 211, 179, 217, 216, 125, 166, 56, 225, 117, 136, 1, 21, 108, 221, 201, 112, 116, 17, 220};
    const unsigned r_sz = 164;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test60)
{
    unsigned char msg_in[] = {169, 150, 89, 45, 169, 228, 95, 24, 221, 210, 69, 101, 63, 212, 69, 46, 68, 183, 170, 220, 122, 100, 43, 101, 1, 174, 161, 32, 56, 60, 175, 159, 68, 164, 126, 74, 0, 92, 240, 148, 163, 2, 192, 104, 55, 89, 222, 235, 198, 166, 41, 47, 126, 3, 248, 214, 21, 179, 139, 52, 34, 23, 180, 172, 114, 147, 201, 211, 96, 117, 66, 105, 85, 12, 204, 31, 26, 164, 114, 19, 212, 223, 13, 62, 103, 146, 90, 150, 1, 108, 179, 205, 181, 185, 23, 31, 197, 72, 42, 61, 114, 31, 9, 21, 108, 184, 148, 218, 139, 90, 73, 28, 108, 219, 164, 27, 77, 178, 22, 59, 223, 46, 104, 11, 164, 103, 103, 231, 14, 145, 196, 176, 24, 77, 160, 99, 134, 188, 60, 69, 26, 77, 211, 194, 66, 206, 87, 4, 229, 240, 11, 194, 208, 159, 114, 118, 190, 170, 148, 136, 20, 220, 31, 249, 162, 222, 53, 70};
    const unsigned msg_in_sz = 168;
    unsigned char synd[] = {0, 255, 75, 196};
    const unsigned synd_sz = 4;
    unsigned char err_pos[] = {163};
    const unsigned err_pos_sz = 1;
    unsigned char r[] = {169, 150, 89, 45, 169, 228, 95, 24, 221, 210, 69, 101, 63, 212, 69, 46, 68, 183, 170, 220, 122, 100, 43, 101, 1, 174, 161, 32, 56, 60, 175, 159, 68, 164, 126, 74, 0, 92, 240, 148, 163, 2, 192, 104, 55, 89, 222, 235, 198, 166, 41, 47, 126, 3, 248, 214, 21, 179, 139, 52, 34, 23, 180, 172, 114, 147, 201, 211, 96, 117, 66, 105, 85, 12, 204, 31, 26, 164, 114, 19, 212, 223, 13, 62, 103, 146, 90, 150, 1, 108, 179, 205, 181, 185, 23, 31, 197, 72, 42, 61, 114, 31, 9, 21, 108, 184, 148, 218, 139, 90, 73, 28, 108, 219, 164, 27, 77, 178, 22, 59, 223, 46, 104, 11, 164, 103, 103, 231, 14, 145, 196, 176, 24, 77, 160, 99, 134, 188, 60, 69, 26, 77, 211, 194, 66, 206, 87, 4, 229, 240, 11, 194, 208, 159, 114, 118, 190, 170, 148, 136, 20, 220, 31, 6, 162, 222, 53, 70};
    const unsigned r_sz = 168;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test61)
{
    unsigned char msg_in[] = {82, 195, 234, 89, 216, 2, 107, 133, 159, 66, 17, 111, 80, 116, 105, 20, 98, 175, 117, 247, 120, 138, 53, 191, 85, 6, 42, 203, 240, 247, 163, 150, 19, 176, 158, 58, 124, 130, 21, 21, 206, 123, 68, 46, 133, 92, 110, 223, 0, 53, 173, 54, 70, 99, 56, 24, 163, 24, 220, 142, 218, 104, 76, 208, 223, 81, 232, 28, 203, 190, 171, 210, 216, 155, 21, 91, 15, 88, 144, 51, 112, 132, 82, 171, 172, 232, 3, 109, 99, 238, 184, 201, 128, 239, 135, 28, 35, 88, 155, 254, 237, 240, 49, 119, 129, 56, 199, 252, 79, 12, 12, 127, 27, 60, 31, 45, 189, 224, 188, 220, 253, 226, 106, 81, 71, 157, 15, 224, 23, 53, 141, 4, 64, 209, 75};
    const unsigned msg_in_sz = 135;
    unsigned char synd[] = {0, 102, 191, 7};
    const unsigned synd_sz = 4;
    unsigned char err_pos[] = {98};
    const unsigned err_pos_sz = 1;
    unsigned char r[] = {82, 195, 234, 89, 216, 2, 107, 133, 159, 66, 17, 111, 80, 116, 105, 20, 98, 175, 117, 247, 120, 138, 53, 191, 85, 6, 42, 203, 240, 247, 163, 150, 19, 176, 158, 58, 124, 130, 21, 21, 206, 123, 68, 46, 133, 92, 110, 223, 0, 53, 173, 54, 70, 99, 56, 24, 163, 24, 220, 142, 218, 104, 76, 208, 223, 81, 232, 28, 203, 190, 171, 210, 216, 155, 21, 91, 15, 88, 144, 51, 112, 132, 82, 171, 172, 232, 3, 109, 99, 238, 184, 201, 128, 239, 135, 28, 35, 88, 253, 254, 237, 240, 49, 119, 129, 56, 199, 252, 79, 12, 12, 127, 27, 60, 31, 45, 189, 224, 188, 220, 253, 226, 106, 81, 71, 157, 15, 224, 23, 53, 141, 4, 64, 209, 75};
    const unsigned r_sz = 135;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test62)
{
    unsigned char msg_in[] = {135, 17, 45, 189, 59, 129, 60, 69, 77, 36, 69, 236, 196, 185, 13, 236, 152, 240, 209, 99, 213, 118, 139, 86, 206, 234, 218, 209, 146, 198, 40, 214, 73, 90, 152, 101, 5, 218, 187, 227, 85, 188, 57, 132, 68, 62, 164, 37, 114, 132, 227, 239, 229, 139, 150, 68, 46, 244, 87, 40, 210, 186, 81, 210, 126};
    const unsigned msg_in_sz = 65;
    unsigned char synd[] = {0, 8, 40, 136, 146, 224};
    const unsigned synd_sz = 6;
    unsigned char err_pos[] = {14};
    const unsigned err_pos_sz = 1;
    unsigned char r[] = {135, 17, 45, 189, 59, 129, 60, 69, 77, 36, 69, 236, 196, 185, 5, 236, 152, 240, 209, 99, 213, 118, 139, 86, 206, 234, 218, 209, 146, 198, 40, 214, 73, 90, 152, 101, 5, 218, 187, 227, 85, 188, 57, 132, 68, 62, 164, 37, 114, 132, 227, 239, 229, 139, 150, 68, 46, 244, 87, 40, 210, 186, 81, 210, 126};
    const unsigned r_sz = 65;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test63)
{
    unsigned char msg_in[] = {135, 17, 45, 189, 59, 129, 60, 69, 77, 36, 69, 236, 196, 185, 13, 236, 152, 240, 209, 99, 213, 118, 139, 86, 206, 234, 218, 209, 146, 198, 40, 214, 73, 251, 152, 101, 5, 218, 187, 227, 85, 188, 57, 132, 68, 62, 164, 37, 114, 132, 227, 239, 229, 139, 150, 68, 46, 244, 87, 40, 210, 186, 81, 210, 126};
    const unsigned msg_in_sz = 65;
    unsigned char synd[] = {0, 169, 89, 187, 118, 60};
    const unsigned synd_sz = 6;
    unsigned char err_pos[] = {33, 14};
    const unsigned err_pos_sz = 2;
    unsigned char r[] = {135, 17, 45, 189, 59, 129, 60, 69, 77, 36, 69, 236, 196, 185, 5, 236, 152, 240, 209, 99, 213, 118, 139, 86, 206, 234, 218, 209, 146, 198, 40, 214, 73, 90, 152, 101, 5, 218, 187, 227, 85, 188, 57, 132, 68, 62, 164, 37, 114, 132, 227, 239, 229, 139, 150, 68, 46, 244, 87, 40, 210, 186, 81, 210, 126};
    const unsigned r_sz = 65;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test64)
{
    unsigned char msg_in[] = {140, 154, 57, 166, 161, 159, 17, 82, 15, 80, 144, 46, 16, 243, 239, 154, 135, 43, 248, 249, 86, 114, 51, 132, 18, 145, 104, 159, 123, 169, 124, 39, 26, 97, 6, 92, 82, 110, 94, 64, 18, 163, 247, 59, 114, 78, 19, 143, 203, 174, 170, 255, 248, 230, 190, 224, 153, 54, 224, 89, 171, 1, 101, 90, 100, 13, 107, 239, 134, 72, 155, 43, 103, 1, 22, 241, 59, 243, 8, 26, 204, 253, 239, 100, 34, 103, 203, 131, 149, 132, 131, 18, 37, 47, 139, 70, 13, 59, 102, 108, 198, 135, 133, 67, 88, 57, 165, 64, 138, 48, 81, 201, 15, 40, 99, 60, 16, 8, 242, 230, 183, 21, 212, 190, 6, 231, 95, 141, 7, 179, 212, 48, 211, 104, 13, 117, 188, 108, 245, 47, 251, 27, 31, 14, 175, 226, 101, 119, 188, 149, 236};
    const unsigned msg_in_sz = 151;
    unsigned char synd[] = {0, 53, 188, 136, 169, 126};
    const unsigned synd_sz = 6;
    unsigned char err_pos[] = {118};
    const unsigned err_pos_sz = 1;
    unsigned char r[] = {140, 154, 57, 166, 161, 159, 17, 82, 15, 80, 144, 46, 16, 243, 239, 154, 135, 43, 248, 249, 86, 114, 51, 132, 18, 145, 104, 159, 123, 169, 124, 39, 26, 97, 6, 92, 82, 110, 94, 64, 18, 163, 247, 59, 114, 78, 19, 143, 203, 174, 170, 255, 248, 230, 190, 224, 153, 54, 224, 89, 171, 1, 101, 90, 100, 13, 107, 239, 134, 72, 155, 43, 103, 1, 22, 241, 59, 243, 8, 26, 204, 253, 239, 100, 34, 103, 203, 131, 149, 132, 131, 18, 37, 47, 139, 70, 13, 59, 102, 108, 198, 135, 133, 67, 88, 57, 165, 64, 138, 48, 81, 201, 15, 40, 99, 60, 16, 8, 199, 230, 183, 21, 212, 190, 6, 231, 95, 141, 7, 179, 212, 48, 211, 104, 13, 117, 188, 108, 245, 47, 251, 27, 31, 14, 175, 226, 101, 119, 188, 149, 236};
    const unsigned r_sz = 151;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test65)
{
    unsigned char msg_in[] = {140, 154, 57, 166, 161, 159, 17, 82, 15, 80, 144, 46, 16, 243, 239, 154, 135, 43, 248, 249, 86, 114, 51, 132, 18, 145, 104, 159, 123, 169, 124, 39, 26, 97, 6, 92, 82, 110, 94, 64, 18, 163, 247, 59, 114, 78, 19, 143, 203, 174, 170, 255, 248, 230, 190, 224, 153, 54, 224, 89, 171, 1, 101, 90, 100, 13, 107, 239, 134, 72, 155, 43, 103, 1, 22, 241, 59, 243, 8, 26, 204, 253, 239, 100, 34, 103, 203, 131, 149, 132, 131, 18, 37, 47, 139, 70, 13, 39, 102, 108, 198, 135, 133, 67, 88, 57, 165, 64, 138, 48, 81, 201, 15, 40, 99, 60, 16, 8, 242, 230, 183, 21, 212, 190, 6, 231, 95, 141, 7, 179, 212, 48, 211, 104, 13, 117, 188, 108, 245, 47, 251, 27, 31, 14, 175, 226, 101, 119, 188, 149, 236};
    const unsigned msg_in_sz = 151;
    unsigned char synd[] = {0, 41, 251, 130, 164, 171};
    const unsigned synd_sz = 6;
    unsigned char err_pos[] = {118, 97};
    const unsigned err_pos_sz = 2;
    unsigned char r[] = {140, 154, 57, 166, 161, 159, 17, 82, 15, 80, 144, 46, 16, 243, 239, 154, 135, 43, 248, 249, 86, 114, 51, 132, 18, 145, 104, 159, 123, 169, 124, 39, 26, 97, 6, 92, 82, 110, 94, 64, 18, 163, 247, 59, 114, 78, 19, 143, 203, 174, 170, 255, 248, 230, 190, 224, 153, 54, 224, 89, 171, 1, 101, 90, 100, 13, 107, 239, 134, 72, 155, 43, 103, 1, 22, 241, 59, 243, 8, 26, 204, 253, 239, 100, 34, 103, 203, 131, 149, 132, 131, 18, 37, 47, 139, 70, 13, 59, 102, 108, 198, 135, 133, 67, 88, 57, 165, 64, 138, 48, 81, 201, 15, 40, 99, 60, 16, 8, 199, 230, 183, 21, 212, 190, 6, 231, 95, 141, 7, 179, 212, 48, 211, 104, 13, 117, 188, 108, 245, 47, 251, 27, 31, 14, 175, 226, 101, 119, 188, 149, 236};
    const unsigned r_sz = 151;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test66)
{
    unsigned char msg_in[] = {110, 154, 245, 43, 34, 190, 60, 223, 93, 204, 48, 127, 151, 212, 230, 157, 141, 222, 179, 197, 12, 41, 142, 114, 103, 61, 37, 178, 164, 103, 179, 152, 197, 42, 76, 21, 2, 211, 98, 77, 114, 32, 26, 117, 192, 58, 230, 186, 6, 197, 120, 104, 98, 74, 216, 235, 76, 160, 33, 28, 141, 203, 18, 250, 246, 215, 70, 63, 209, 40, 84, 108, 230, 25, 163, 20, 251, 152, 71, 135, 209, 42, 208, 51, 92, 155, 113, 223, 133, 25, 155, 184, 68, 211, 104, 26, 143, 184, 145, 3, 163, 106, 11, 124, 5, 167, 147, 221, 92, 161, 72, 130, 228, 53, 49, 34, 240, 229, 101, 248, 185, 4, 1, 186, 245, 109, 201, 24, 144, 245, 20, 150, 82, 171, 61, 53, 223, 1, 11, 193, 44, 48, 194, 162, 234, 105, 117, 6, 2, 22, 190, 111};
    const unsigned msg_in_sz = 152;
    unsigned char synd[] = {0, 217, 25, 156, 184, 122, 188, 252};
    const unsigned synd_sz = 8;
    unsigned char err_pos[] = {54};
    const unsigned err_pos_sz = 1;
    unsigned char r[] = {110, 154, 245, 43, 34, 190, 60, 223, 93, 204, 48, 127, 151, 212, 230, 157, 141, 222, 179, 197, 12, 41, 142, 114, 103, 61, 37, 178, 164, 103, 179, 152, 197, 42, 76, 21, 2, 211, 98, 77, 114, 32, 26, 117, 192, 58, 230, 186, 6, 197, 120, 104, 98, 74, 1, 235, 76, 160, 33, 28, 141, 203, 18, 250, 246, 215, 70, 63, 209, 40, 84, 108, 230, 25, 163, 20, 251, 152, 71, 135, 209, 42, 208, 51, 92, 155, 113, 223, 133, 25, 155, 184, 68, 211, 104, 26, 143, 184, 145, 3, 163, 106, 11, 124, 5, 167, 147, 221, 92, 161, 72, 130, 228, 53, 49, 34, 240, 229, 101, 248, 185, 4, 1, 186, 245, 109, 201, 24, 144, 245, 20, 150, 82, 171, 61, 53, 223, 1, 11, 193, 44, 48, 194, 162, 234, 105, 117, 6, 2, 22, 190, 111};
    const unsigned r_sz = 152;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test67)
{
    unsigned char msg_in[] = {110, 154, 245, 43, 34, 190, 60, 223, 93, 204, 48, 127, 151, 212, 230, 157, 141, 222, 179, 197, 12, 41, 142, 114, 103, 61, 37, 178, 164, 103, 179, 152, 197, 42, 76, 21, 2, 211, 98, 77, 114, 32, 26, 117, 192, 58, 230, 186, 6, 197, 120, 104, 98, 74, 216, 235, 76, 160, 33, 28, 141, 203, 18, 250, 246, 215, 70, 63, 209, 40, 84, 108, 230, 25, 163, 20, 251, 152, 71, 135, 209, 42, 208, 51, 92, 155, 113, 223, 133, 25, 202, 184, 68, 211, 104, 26, 143, 184, 145, 3, 163, 106, 11, 124, 5, 167, 147, 221, 92, 161, 72, 130, 228, 53, 49, 34, 240, 229, 101, 248, 185, 4, 1, 186, 245, 109, 201, 24, 144, 245, 20, 150, 82, 171, 61, 53, 223, 1, 11, 193, 44, 48, 194, 162, 234, 105, 117, 6, 2, 22, 190, 111};
    const unsigned msg_in_sz = 152;
    unsigned char synd[] = {0, 136, 10, 147, 247, 247, 180, 163};
    const unsigned synd_sz = 8;
    unsigned char err_pos[] = {90, 54};
    const unsigned err_pos_sz = 2;
    unsigned char r[] = {110, 154, 245, 43, 34, 190, 60, 223, 93, 204, 48, 127, 151, 212, 230, 157, 141, 222, 179, 197, 12, 41, 142, 114, 103, 61, 37, 178, 164, 103, 179, 152, 197, 42, 76, 21, 2, 211, 98, 77, 114, 32, 26, 117, 192, 58, 230, 186, 6, 197, 120, 104, 98, 74, 1, 235, 76, 160, 33, 28, 141, 203, 18, 250, 246, 215, 70, 63, 209, 40, 84, 108, 230, 25, 163, 20, 251, 152, 71, 135, 209, 42, 208, 51, 92, 155, 113, 223, 133, 25, 155, 184, 68, 211, 104, 26, 143, 184, 145, 3, 163, 106, 11, 124, 5, 167, 147, 221, 92, 161, 72, 130, 228, 53, 49, 34, 240, 229, 101, 248, 185, 4, 1, 186, 245, 109, 201, 24, 144, 245, 20, 150, 82, 171, 61, 53, 223, 1, 11, 193, 44, 48, 194, 162, 234, 105, 117, 6, 2, 22, 190, 111};
    const unsigned r_sz = 152;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test68)
{
    unsigned char msg_in[] = {110, 154, 245, 43, 34, 190, 60, 223, 93, 204, 48, 127, 151, 212, 230, 157, 141, 222, 179, 197, 12, 41, 142, 114, 103, 61, 37, 178, 164, 103, 179, 152, 197, 42, 76, 21, 2, 211, 98, 77, 114, 32, 26, 117, 192, 58, 230, 186, 6, 197, 120, 104, 98, 74, 216, 235, 76, 160, 33, 28, 141, 203, 18, 250, 246, 215, 70, 63, 209, 40, 84, 108, 230, 25, 163, 20, 251, 152, 71, 135, 209, 42, 208, 51, 92, 155, 113, 223, 133, 25, 202, 184, 68, 211, 104, 26, 143, 184, 145, 3, 163, 106, 11, 124, 5, 167, 147, 221, 92, 161, 72, 130, 228, 53, 49, 34, 240, 229, 101, 248, 185, 4, 1, 186, 245, 109, 201, 24, 141, 245, 20, 150, 82, 171, 61, 53, 223, 1, 11, 193, 44, 48, 194, 162, 234, 105, 117, 6, 2, 22, 190, 111};
    const unsigned msg_in_sz = 152;
    unsigned char synd[] = {0, 149, 202, 195, 203, 230, 113, 57};
    const unsigned synd_sz = 8;
    unsigned char err_pos[] = {128, 90, 54};
    const unsigned err_pos_sz = 3;
    unsigned char r[] = {110, 154, 245, 43, 34, 190, 60, 223, 93, 204, 48, 127, 151, 212, 230, 157, 141, 222, 179, 197, 12, 41, 142, 114, 103, 61, 37, 178, 164, 103, 179, 152, 197, 42, 76, 21, 2, 211, 98, 77, 114, 32, 26, 117, 192, 58, 230, 186, 6, 197, 120, 104, 98, 74, 1, 235, 76, 160, 33, 28, 141, 203, 18, 250, 246, 215, 70, 63, 209, 40, 84, 108, 230, 25, 163, 20, 251, 152, 71, 135, 209, 42, 208, 51, 92, 155, 113, 223, 133, 25, 155, 184, 68, 211, 104, 26, 143, 184, 145, 3, 163, 106, 11, 124, 5, 167, 147, 221, 92, 161, 72, 130, 228, 53, 49, 34, 240, 229, 101, 248, 185, 4, 1, 186, 245, 109, 201, 24, 144, 245, 20, 150, 82, 171, 61, 53, 223, 1, 11, 193, 44, 48, 194, 162, 234, 105, 117, 6, 2, 22, 190, 111};
    const unsigned r_sz = 152;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test69)
{
    unsigned char msg_in[] = {144, 170, 180, 142, 20, 214, 96, 255, 73, 219, 253, 249, 241};
    const unsigned msg_in_sz = 13;
    unsigned char synd[] = {0, 58, 58, 58, 58, 58, 58, 58};
    const unsigned synd_sz = 8;
    unsigned char err_pos[] = {12};
    const unsigned err_pos_sz = 1;
    unsigned char r[] = {144, 170, 180, 142, 20, 214, 96, 255, 73, 219, 253, 249, 203};
    const unsigned r_sz = 13;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test70)
{
    unsigned char msg_in[] = {144, 170, 180, 142, 20, 214, 96, 255, 73, 219, 253, 143, 241};
    const unsigned msg_in_sz = 13;
    unsigned char synd[] = {0, 76, 214, 255, 173, 9, 92, 246};
    const unsigned synd_sz = 8;
    unsigned char err_pos[] = {12, 11};
    const unsigned err_pos_sz = 2;
    unsigned char r[] = {144, 170, 180, 142, 20, 214, 96, 255, 73, 219, 253, 249, 203};
    const unsigned r_sz = 13;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test71)
{
    unsigned char msg_in[] = {144, 170, 180, 142, 20, 44, 96, 255, 73, 219, 253, 143, 241};
    const unsigned msg_in_sz = 13;
    unsigned char synd[] = {0, 182, 14, 247, 217, 145, 211, 54};
    const unsigned synd_sz = 8;
    unsigned char err_pos[] = {12, 11, 5};
    const unsigned err_pos_sz = 3;
    unsigned char r[] = {144, 170, 180, 142, 20, 214, 96, 255, 73, 219, 253, 249, 203};
    const unsigned r_sz = 13;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test72)
{
    unsigned char msg_in[] = {13, 205, 50, 26, 234, 107, 195, 119, 128, 8, 218, 156, 178, 159, 251, 227, 244, 137, 79, 42, 228, 230, 90, 91, 169, 175, 1, 233, 152, 171, 239, 183, 56, 200, 38, 177, 162, 53, 32, 125, 202, 11, 27, 144, 220, 127, 63, 23, 217, 31, 128, 89, 252, 225, 146, 110, 247, 154, 235, 82, 144, 52, 200, 125, 158, 145, 44, 6, 171, 182, 90, 192, 101, 118, 22, 99, 141, 53, 132, 248, 106, 148, 108, 156, 181, 208, 86, 116, 216, 34, 40, 180, 170, 217, 212, 214, 206, 194, 6, 33, 252, 61, 149, 235, 70, 126, 242, 141, 121, 12, 253, 25, 107, 27, 126, 10, 190, 196, 153, 23, 33, 154, 192, 105, 185, 241, 164, 22, 124, 66, 10, 7, 246, 18, 89, 60, 75, 76, 64, 216, 19, 101, 155, 126, 116, 170, 42, 203, 44, 188, 60, 103, 78, 139, 149, 233, 184, 191, 157, 27, 82, 123, 77, 81, 74, 123, 151, 144, 210, 195, 72, 155, 62, 37, 213, 147, 155, 175, 51, 131, 200, 166, 203, 176, 145, 225, 85, 138, 175, 112, 102, 222, 83, 247, 7, 153, 63, 117, 77, 254, 65, 225, 160, 111, 147, 234, 252, 84, 174, 107, 78, 72, 129, 2, 71, 62, 107, 172, 229, 196, 111, 168};
    const unsigned msg_in_sz = 222;
    unsigned char synd[] = {0, 57, 112, 108, 119, 163, 66, 220, 235, 24, 30, 151};
    const unsigned synd_sz = 12;
    unsigned char err_pos[] = {173};
    const unsigned err_pos_sz = 1;
    unsigned char r[] = {13, 205, 50, 26, 234, 107, 195, 119, 128, 8, 218, 156, 178, 159, 251, 227, 244, 137, 79, 42, 228, 230, 90, 91, 169, 175, 1, 233, 152, 171, 239, 183, 56, 200, 38, 177, 162, 53, 32, 125, 202, 11, 27, 144, 220, 127, 63, 23, 217, 31, 128, 89, 252, 225, 146, 110, 247, 154, 235, 82, 144, 52, 200, 125, 158, 145, 44, 6, 171, 182, 90, 192, 101, 118, 22, 99, 141, 53, 132, 248, 106, 148, 108, 156, 181, 208, 86, 116, 216, 34, 40, 180, 170, 217, 212, 214, 206, 194, 6, 33, 252, 61, 149, 235, 70, 126, 242, 141, 121, 12, 253, 25, 107, 27, 126, 10, 190, 196, 153, 23, 33, 154, 192, 105, 185, 241, 164, 22, 124, 66, 10, 7, 246, 18, 89, 60, 75, 76, 64, 216, 19, 101, 155, 126, 116, 170, 42, 203, 44, 188, 60, 103, 78, 139, 149, 233, 184, 191, 157, 27, 82, 123, 77, 81, 74, 123, 151, 144, 210, 195, 72, 155, 62, 28, 213, 147, 155, 175, 51, 131, 200, 166, 203, 176, 145, 225, 85, 138, 175, 112, 102, 222, 83, 247, 7, 153, 63, 117, 77, 254, 65, 225, 160, 111, 147, 234, 252, 84, 174, 107, 78, 72, 129, 2, 71, 62, 107, 172, 229, 196, 111, 168};
    const unsigned r_sz = 222;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test73)
{
    unsigned char msg_in[] = {13, 205, 50, 26, 234, 107, 195, 119, 128, 8, 218, 156, 178, 159, 251, 227, 244, 137, 79, 42, 228, 230, 90, 91, 169, 175, 1, 233, 152, 171, 239, 183, 56, 200, 38, 177, 162, 53, 32, 125, 202, 11, 27, 144, 220, 127, 63, 23, 217, 31, 128, 89, 252, 225, 146, 110, 247, 154, 235, 82, 144, 52, 200, 125, 158, 145, 44, 6, 171, 182, 90, 192, 101, 118, 22, 99, 141, 53, 132, 248, 106, 148, 108, 156, 181, 208, 86, 103, 216, 34, 40, 180, 170, 217, 212, 214, 206, 194, 6, 33, 252, 61, 149, 235, 70, 126, 242, 141, 121, 12, 253, 25, 107, 27, 126, 10, 190, 196, 153, 23, 33, 154, 192, 105, 185, 241, 164, 22, 124, 66, 10, 7, 246, 18, 89, 60, 75, 76, 64, 216, 19, 101, 155, 126, 116, 170, 42, 203, 44, 188, 60, 103, 78, 139, 149, 233, 184, 191, 157, 27, 82, 123, 77, 81, 74, 123, 151, 144, 210, 195, 72, 155, 62, 37, 213, 147, 155, 175, 51, 131, 200, 166, 203, 176, 145, 225, 85, 138, 175, 112, 102, 222, 83, 247, 7, 153, 63, 117, 77, 254, 65, 225, 160, 111, 147, 234, 252, 84, 174, 107, 78, 72, 129, 2, 71, 62, 107, 172, 229, 196, 111, 168};
    const unsigned msg_in_sz = 222;
    unsigned char synd[] = {0, 42, 34, 96, 166, 201, 179, 244, 55, 121, 2, 103};
    const unsigned synd_sz = 12;
    unsigned char err_pos[] = {173, 87};
    const unsigned err_pos_sz = 2;
    unsigned char r[] = {13, 205, 50, 26, 234, 107, 195, 119, 128, 8, 218, 156, 178, 159, 251, 227, 244, 137, 79, 42, 228, 230, 90, 91, 169, 175, 1, 233, 152, 171, 239, 183, 56, 200, 38, 177, 162, 53, 32, 125, 202, 11, 27, 144, 220, 127, 63, 23, 217, 31, 128, 89, 252, 225, 146, 110, 247, 154, 235, 82, 144, 52, 200, 125, 158, 145, 44, 6, 171, 182, 90, 192, 101, 118, 22, 99, 141, 53, 132, 248, 106, 148, 108, 156, 181, 208, 86, 116, 216, 34, 40, 180, 170, 217, 212, 214, 206, 194, 6, 33, 252, 61, 149, 235, 70, 126, 242, 141, 121, 12, 253, 25, 107, 27, 126, 10, 190, 196, 153, 23, 33, 154, 192, 105, 185, 241, 164, 22, 124, 66, 10, 7, 246, 18, 89, 60, 75, 76, 64, 216, 19, 101, 155, 126, 116, 170, 42, 203, 44, 188, 60, 103, 78, 139, 149, 233, 184, 191, 157, 27, 82, 123, 77, 81, 74, 123, 151, 144, 210, 195, 72, 155, 62, 28, 213, 147, 155, 175, 51, 131, 200, 166, 203, 176, 145, 225, 85, 138, 175, 112, 102, 222, 83, 247, 7, 153, 63, 117, 77, 254, 65, 225, 160, 111, 147, 234, 252, 84, 174, 107, 78, 72, 129, 2, 71, 62, 107, 172, 229, 196, 111, 168};
    const unsigned r_sz = 222;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test74)
{
    unsigned char msg_in[] = {13, 205, 50, 26, 234, 107, 195, 119, 128, 8, 218, 156, 178, 159, 251, 227, 244, 137, 79, 42, 228, 230, 90, 91, 169, 175, 1, 233, 152, 171, 239, 183, 56, 200, 38, 177, 162, 53, 32, 125, 202, 11, 27, 144, 220, 127, 63, 23, 217, 31, 128, 89, 252, 225, 146, 110, 247, 154, 235, 82, 144, 52, 200, 125, 158, 145, 44, 6, 171, 182, 90, 192, 101, 118, 22, 99, 141, 53, 132, 248, 106, 148, 108, 156, 181, 208, 86, 103, 216, 34, 40, 180, 170, 217, 212, 214, 206, 194, 6, 33, 252, 61, 149, 235, 70, 126, 242, 141, 121, 12, 253, 25, 107, 27, 126, 10, 190, 196, 153, 23, 33, 154, 192, 105, 185, 241, 164, 22, 124, 66, 10, 7, 246, 18, 89, 60, 95, 76, 64, 216, 19, 101, 155, 126, 116, 170, 42, 203, 44, 188, 60, 103, 78, 139, 149, 233, 184, 191, 157, 27, 82, 123, 77, 81, 74, 123, 151, 144, 210, 195, 72, 155, 62, 37, 213, 147, 155, 175, 51, 131, 200, 166, 203, 176, 145, 225, 85, 138, 175, 112, 102, 222, 83, 247, 7, 153, 63, 117, 77, 254, 65, 225, 160, 111, 147, 234, 252, 84, 174, 107, 78, 72, 129, 2, 71, 62, 107, 172, 229, 196, 111, 168};
    const unsigned msg_in_sz = 222;
    unsigned char synd[] = {0, 62, 188, 234, 178, 87, 57, 224, 169, 243, 22, 249};
    const unsigned synd_sz = 12;
    unsigned char err_pos[] = {173, 136, 87};
    const unsigned err_pos_sz = 3;
    unsigned char r[] = {13, 205, 50, 26, 234, 107, 195, 119, 128, 8, 218, 156, 178, 159, 251, 227, 244, 137, 79, 42, 228, 230, 90, 91, 169, 175, 1, 233, 152, 171, 239, 183, 56, 200, 38, 177, 162, 53, 32, 125, 202, 11, 27, 144, 220, 127, 63, 23, 217, 31, 128, 89, 252, 225, 146, 110, 247, 154, 235, 82, 144, 52, 200, 125, 158, 145, 44, 6, 171, 182, 90, 192, 101, 118, 22, 99, 141, 53, 132, 248, 106, 148, 108, 156, 181, 208, 86, 116, 216, 34, 40, 180, 170, 217, 212, 214, 206, 194, 6, 33, 252, 61, 149, 235, 70, 126, 242, 141, 121, 12, 253, 25, 107, 27, 126, 10, 190, 196, 153, 23, 33, 154, 192, 105, 185, 241, 164, 22, 124, 66, 10, 7, 246, 18, 89, 60, 75, 76, 64, 216, 19, 101, 155, 126, 116, 170, 42, 203, 44, 188, 60, 103, 78, 139, 149, 233, 184, 191, 157, 27, 82, 123, 77, 81, 74, 123, 151, 144, 210, 195, 72, 155, 62, 28, 213, 147, 155, 175, 51, 131, 200, 166, 203, 176, 145, 225, 85, 138, 175, 112, 102, 222, 83, 247, 7, 153, 63, 117, 77, 254, 65, 225, 160, 111, 147, 234, 252, 84, 174, 107, 78, 72, 129, 2, 71, 62, 107, 172, 229, 196, 111, 168};
    const unsigned r_sz = 222;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test75)
{
    unsigned char msg_in[] = {13, 205, 50, 26, 234, 107, 195, 119, 128, 8, 218, 156, 178, 159, 251, 227, 9, 137, 79, 42, 228, 230, 90, 91, 169, 175, 1, 233, 152, 171, 239, 183, 56, 200, 38, 177, 162, 53, 32, 125, 202, 11, 27, 144, 220, 127, 63, 23, 217, 31, 128, 89, 252, 225, 146, 110, 247, 154, 235, 82, 144, 52, 200, 125, 158, 145, 44, 6, 171, 182, 90, 192, 101, 118, 22, 99, 141, 53, 132, 248, 106, 148, 108, 156, 181, 208, 86, 103, 216, 34, 40, 180, 170, 217, 212, 214, 206, 194, 6, 33, 252, 61, 149, 235, 70, 126, 242, 141, 121, 12, 253, 25, 107, 27, 126, 10, 190, 196, 153, 23, 33, 154, 192, 105, 185, 241, 164, 22, 124, 66, 10, 7, 246, 18, 89, 60, 95, 76, 64, 216, 19, 101, 155, 126, 116, 170, 42, 203, 44, 188, 60, 103, 78, 139, 149, 233, 184, 191, 157, 27, 82, 123, 77, 81, 74, 123, 151, 144, 210, 195, 72, 155, 62, 37, 213, 147, 155, 175, 51, 131, 200, 166, 203, 176, 145, 225, 85, 138, 175, 112, 102, 222, 83, 247, 7, 153, 63, 117, 77, 254, 65, 225, 160, 111, 147, 234, 252, 84, 174, 107, 78, 72, 129, 2, 71, 62, 107, 172, 229, 196, 111, 168};
    const unsigned msg_in_sz = 222;
    unsigned char synd[] = {0, 195, 220, 1, 133, 254, 239, 124, 133, 93, 146, 38};
    const unsigned synd_sz = 12;
    unsigned char err_pos[] = {173, 136, 87, 16};
    const unsigned err_pos_sz = 4;
    unsigned char r[] = {13, 205, 50, 26, 234, 107, 195, 119, 128, 8, 218, 156, 178, 159, 251, 227, 244, 137, 79, 42, 228, 230, 90, 91, 169, 175, 1, 233, 152, 171, 239, 183, 56, 200, 38, 177, 162, 53, 32, 125, 202, 11, 27, 144, 220, 127, 63, 23, 217, 31, 128, 89, 252, 225, 146, 110, 247, 154, 235, 82, 144, 52, 200, 125, 158, 145, 44, 6, 171, 182, 90, 192, 101, 118, 22, 99, 141, 53, 132, 248, 106, 148, 108, 156, 181, 208, 86, 116, 216, 34, 40, 180, 170, 217, 212, 214, 206, 194, 6, 33, 252, 61, 149, 235, 70, 126, 242, 141, 121, 12, 253, 25, 107, 27, 126, 10, 190, 196, 153, 23, 33, 154, 192, 105, 185, 241, 164, 22, 124, 66, 10, 7, 246, 18, 89, 60, 75, 76, 64, 216, 19, 101, 155, 126, 116, 170, 42, 203, 44, 188, 60, 103, 78, 139, 149, 233, 184, 191, 157, 27, 82, 123, 77, 81, 74, 123, 151, 144, 210, 195, 72, 155, 62, 28, 213, 147, 155, 175, 51, 131, 200, 166, 203, 176, 145, 225, 85, 138, 175, 112, 102, 222, 83, 247, 7, 153, 63, 117, 77, 254, 65, 225, 160, 111, 147, 234, 252, 84, 174, 107, 78, 72, 129, 2, 71, 62, 107, 172, 229, 196, 111, 168};
    const unsigned r_sz = 222;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test76)
{
    unsigned char msg_in[] = {13, 205, 50, 26, 234, 107, 195, 119, 128, 8, 218, 156, 178, 159, 251, 227, 9, 137, 79, 42, 228, 230, 90, 91, 169, 175, 1, 233, 152, 171, 239, 183, 56, 200, 38, 177, 162, 53, 32, 125, 202, 11, 27, 144, 220, 127, 63, 23, 217, 157, 128, 89, 252, 225, 146, 110, 247, 154, 235, 82, 144, 52, 200, 125, 158, 145, 44, 6, 171, 182, 90, 192, 101, 118, 22, 99, 141, 53, 132, 248, 106, 148, 108, 156, 181, 208, 86, 103, 216, 34, 40, 180, 170, 217, 212, 214, 206, 194, 6, 33, 252, 61, 149, 235, 70, 126, 242, 141, 121, 12, 253, 25, 107, 27, 126, 10, 190, 196, 153, 23, 33, 154, 192, 105, 185, 241, 164, 22, 124, 66, 10, 7, 246, 18, 89, 60, 95, 76, 64, 216, 19, 101, 155, 126, 116, 170, 42, 203, 44, 188, 60, 103, 78, 139, 149, 233, 184, 191, 157, 27, 82, 123, 77, 81, 74, 123, 151, 144, 210, 195, 72, 155, 62, 37, 213, 147, 155, 175, 51, 131, 200, 166, 203, 176, 145, 225, 85, 138, 175, 112, 102, 222, 83, 247, 7, 153, 63, 117, 77, 254, 65, 225, 160, 111, 147, 234, 252, 84, 174, 107, 78, 72, 129, 2, 71, 62, 107, 172, 229, 196, 111, 168};
    const unsigned msg_in_sz = 222;
    unsigned char synd[] = {0, 65, 97, 7, 130, 130, 114, 161, 243, 201, 203, 234};
    const unsigned synd_sz = 12;
    unsigned char err_pos[] = {173, 136, 87, 49, 16};
    const unsigned err_pos_sz = 5;
    unsigned char r[] = {13, 205, 50, 26, 234, 107, 195, 119, 128, 8, 218, 156, 178, 159, 251, 227, 244, 137, 79, 42, 228, 230, 90, 91, 169, 175, 1, 233, 152, 171, 239, 183, 56, 200, 38, 177, 162, 53, 32, 125, 202, 11, 27, 144, 220, 127, 63, 23, 217, 31, 128, 89, 252, 225, 146, 110, 247, 154, 235, 82, 144, 52, 200, 125, 158, 145, 44, 6, 171, 182, 90, 192, 101, 118, 22, 99, 141, 53, 132, 248, 106, 148, 108, 156, 181, 208, 86, 116, 216, 34, 40, 180, 170, 217, 212, 214, 206, 194, 6, 33, 252, 61, 149, 235, 70, 126, 242, 141, 121, 12, 253, 25, 107, 27, 126, 10, 190, 196, 153, 23, 33, 154, 192, 105, 185, 241, 164, 22, 124, 66, 10, 7, 246, 18, 89, 60, 75, 76, 64, 216, 19, 101, 155, 126, 116, 170, 42, 203, 44, 188, 60, 103, 78, 139, 149, 233, 184, 191, 157, 27, 82, 123, 77, 81, 74, 123, 151, 144, 210, 195, 72, 155, 62, 28, 213, 147, 155, 175, 51, 131, 200, 166, 203, 176, 145, 225, 85, 138, 175, 112, 102, 222, 83, 247, 7, 153, 63, 117, 77, 254, 65, 225, 160, 111, 147, 234, 252, 84, 174, 107, 78, 72, 129, 2, 71, 62, 107, 172, 229, 196, 111, 168};
    const unsigned r_sz = 222;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test77)
{
    unsigned char msg_in[] = {143, 199, 167, 217, 135, 176, 185, 7, 182, 68, 160, 129, 0, 176, 107, 74, 74, 7, 216, 61, 170, 150, 216, 149, 235, 50, 147, 150, 43, 132, 123, 240, 44, 67, 42, 37, 95, 180, 160, 112, 172, 44, 212, 220, 133, 17, 222, 74, 81, 63, 36, 25, 155, 171, 123, 114, 90, 107, 232, 135, 146, 66, 233, 69, 215, 244, 87, 55, 155, 147, 173, 82, 134, 208, 165, 31, 60, 92, 156, 185, 123, 44, 41, 104, 133, 239, 30, 98, 250, 6, 110, 57, 220, 109, 142, 159, 156, 23, 121, 117, 7, 46, 251, 51, 132, 10, 131, 243, 81, 51, 126, 15, 225, 90, 242, 67, 205, 57, 169, 158, 101, 9, 44, 138, 140, 58, 227, 78, 228, 210, 116, 202, 25, 98, 6, 26, 234, 243, 17, 145, 41, 155, 229, 236, 246, 127, 186, 128, 106, 107, 124, 24, 161, 107, 102, 146, 228, 95, 82, 232, 60, 216, 87, 114, 23, 24, 113, 65, 202, 17, 64, 6, 215, 156, 67, 92, 65, 19, 154, 160, 128, 181, 111, 183, 106, 189, 248, 213, 4, 116, 166, 5, 136, 189, 148, 158, 117};
    const unsigned msg_in_sz = 197;
    unsigned char synd[] = {0, 55, 244, 180, 190, 103, 114, 28, 233, 156, 253, 51};
    const unsigned synd_sz = 12;
    unsigned char err_pos[] = {151};
    const unsigned err_pos_sz = 1;
    unsigned char r[] = {143, 199, 167, 217, 135, 176, 185, 7, 182, 68, 160, 129, 0, 176, 107, 74, 74, 7, 216, 61, 170, 150, 216, 149, 235, 50, 147, 150, 43, 132, 123, 240, 44, 67, 42, 37, 95, 180, 160, 112, 172, 44, 212, 220, 133, 17, 222, 74, 81, 63, 36, 25, 155, 171, 123, 114, 90, 107, 232, 135, 146, 66, 233, 69, 215, 244, 87, 55, 155, 147, 173, 82, 134, 208, 165, 31, 60, 92, 156, 185, 123, 44, 41, 104, 133, 239, 30, 98, 250, 6, 110, 57, 220, 109, 142, 159, 156, 23, 121, 117, 7, 46, 251, 51, 132, 10, 131, 243, 81, 51, 126, 15, 225, 90, 242, 67, 205, 57, 169, 158, 101, 9, 44, 138, 140, 58, 227, 78, 228, 210, 116, 202, 25, 98, 6, 26, 234, 243, 17, 145, 41, 155, 229, 236, 246, 127, 186, 128, 106, 107, 124, 47, 161, 107, 102, 146, 228, 95, 82, 232, 60, 216, 87, 114, 23, 24, 113, 65, 202, 17, 64, 6, 215, 156, 67, 92, 65, 19, 154, 160, 128, 181, 111, 183, 106, 189, 248, 213, 4, 116, 166, 5, 136, 189, 148, 158, 117};
    const unsigned r_sz = 197;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test78)
{
    unsigned char msg_in[] = {143, 199, 167, 217, 135, 176, 185, 7, 182, 68, 160, 129, 0, 176, 107, 74, 74, 7, 216, 61, 170, 150, 216, 149, 235, 50, 147, 150, 43, 132, 123, 240, 44, 67, 42, 37, 95, 180, 160, 112, 172, 44, 212, 220, 133, 17, 222, 74, 81, 63, 36, 25, 155, 171, 123, 114, 90, 107, 232, 135, 146, 66, 233, 69, 215, 244, 87, 55, 155, 147, 173, 82, 134, 208, 165, 31, 60, 92, 156, 185, 123, 44, 41, 104, 133, 239, 30, 98, 250, 6, 110, 57, 220, 109, 142, 159, 156, 23, 121, 117, 7, 46, 251, 51, 132, 10, 131, 243, 81, 51, 126, 15, 225, 90, 242, 67, 205, 57, 169, 158, 101, 9, 44, 138, 140, 58, 227, 78, 228, 210, 116, 202, 25, 98, 6, 26, 234, 243, 17, 145, 41, 155, 229, 236, 246, 127, 31, 128, 106, 107, 124, 24, 161, 107, 102, 146, 228, 95, 82, 232, 60, 216, 87, 114, 23, 24, 113, 65, 202, 17, 64, 6, 215, 156, 67, 92, 65, 19, 154, 160, 128, 181, 111, 183, 106, 189, 248, 213, 4, 116, 166, 5, 136, 189, 148, 158, 117};
    const unsigned msg_in_sz = 197;
    unsigned char synd[] = {0, 146, 255, 147, 5, 10, 182, 239, 241, 228, 120, 152};
    const unsigned synd_sz = 12;
    unsigned char err_pos[] = {151, 146};
    const unsigned err_pos_sz = 2;
    unsigned char r[] = {143, 199, 167, 217, 135, 176, 185, 7, 182, 68, 160, 129, 0, 176, 107, 74, 74, 7, 216, 61, 170, 150, 216, 149, 235, 50, 147, 150, 43, 132, 123, 240, 44, 67, 42, 37, 95, 180, 160, 112, 172, 44, 212, 220, 133, 17, 222, 74, 81, 63, 36, 25, 155, 171, 123, 114, 90, 107, 232, 135, 146, 66, 233, 69, 215, 244, 87, 55, 155, 147, 173, 82, 134, 208, 165, 31, 60, 92, 156, 185, 123, 44, 41, 104, 133, 239, 30, 98, 250, 6, 110, 57, 220, 109, 142, 159, 156, 23, 121, 117, 7, 46, 251, 51, 132, 10, 131, 243, 81, 51, 126, 15, 225, 90, 242, 67, 205, 57, 169, 158, 101, 9, 44, 138, 140, 58, 227, 78, 228, 210, 116, 202, 25, 98, 6, 26, 234, 243, 17, 145, 41, 155, 229, 236, 246, 127, 186, 128, 106, 107, 124, 47, 161, 107, 102, 146, 228, 95, 82, 232, 60, 216, 87, 114, 23, 24, 113, 65, 202, 17, 64, 6, 215, 156, 67, 92, 65, 19, 154, 160, 128, 181, 111, 183, 106, 189, 248, 213, 4, 116, 166, 5, 136, 189, 148, 158, 117};
    const unsigned r_sz = 197;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test79)
{
    unsigned char msg_in[] = {143, 199, 167, 217, 135, 176, 185, 7, 182, 68, 160, 129, 0, 176, 107, 74, 74, 7, 216, 61, 170, 150, 216, 149, 235, 50, 147, 150, 43, 132, 123, 240, 44, 67, 42, 37, 95, 180, 160, 112, 172, 44, 212, 220, 133, 17, 222, 74, 81, 63, 36, 25, 155, 171, 123, 114, 90, 107, 232, 135, 146, 66, 233, 69, 215, 244, 87, 55, 155, 147, 173, 82, 134, 208, 165, 31, 60, 92, 156, 185, 123, 44, 41, 104, 133, 239, 30, 98, 250, 6, 110, 57, 220, 109, 142, 159, 156, 23, 121, 117, 7, 212, 251, 51, 132, 10, 131, 243, 81, 51, 126, 15, 225, 90, 242, 67, 205, 57, 169, 158, 101, 9, 44, 138, 140, 58, 227, 78, 228, 210, 116, 202, 25, 98, 6, 26, 234, 243, 17, 145, 41, 155, 229, 236, 246, 127, 31, 128, 106, 107, 124, 24, 161, 107, 102, 146, 228, 95, 82, 232, 60, 216, 87, 114, 23, 24, 113, 65, 202, 17, 64, 6, 215, 156, 67, 92, 65, 19, 154, 160, 128, 181, 111, 183, 106, 189, 248, 213, 4, 116, 166, 5, 136, 189, 148, 158, 117};
    const unsigned msg_in_sz = 197;
    unsigned char synd[] = {0, 104, 148, 216, 95, 52, 20, 99, 89, 242, 136, 105};
    const unsigned synd_sz = 12;
    unsigned char err_pos[] = {151, 146, 101};
    const unsigned err_pos_sz = 3;
    unsigned char r[] = {143, 199, 167, 217, 135, 176, 185, 7, 182, 68, 160, 129, 0, 176, 107, 74, 74, 7, 216, 61, 170, 150, 216, 149, 235, 50, 147, 150, 43, 132, 123, 240, 44, 67, 42, 37, 95, 180, 160, 112, 172, 44, 212, 220, 133, 17, 222, 74, 81, 63, 36, 25, 155, 171, 123, 114, 90, 107, 232, 135, 146, 66, 233, 69, 215, 244, 87, 55, 155, 147, 173, 82, 134, 208, 165, 31, 60, 92, 156, 185, 123, 44, 41, 104, 133, 239, 30, 98, 250, 6, 110, 57, 220, 109, 142, 159, 156, 23, 121, 117, 7, 46, 251, 51, 132, 10, 131, 243, 81, 51, 126, 15, 225, 90, 242, 67, 205, 57, 169, 158, 101, 9, 44, 138, 140, 58, 227, 78, 228, 210, 116, 202, 25, 98, 6, 26, 234, 243, 17, 145, 41, 155, 229, 236, 246, 127, 186, 128, 106, 107, 124, 47, 161, 107, 102, 146, 228, 95, 82, 232, 60, 216, 87, 114, 23, 24, 113, 65, 202, 17, 64, 6, 215, 156, 67, 92, 65, 19, 154, 160, 128, 181, 111, 183, 106, 189, 248, 213, 4, 116, 166, 5, 136, 189, 148, 158, 117};
    const unsigned r_sz = 197;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test80)
{
    unsigned char msg_in[] = {143, 199, 167, 217, 135, 176, 185, 7, 182, 68, 160, 129, 0, 176, 107, 74, 74, 7, 216, 61, 170, 150, 216, 149, 235, 50, 147, 150, 43, 132, 123, 240, 44, 67, 42, 37, 95, 180, 160, 112, 172, 44, 212, 220, 133, 17, 222, 74, 81, 63, 36, 25, 155, 171, 123, 114, 90, 107, 232, 135, 146, 66, 233, 69, 215, 244, 87, 55, 155, 147, 173, 82, 134, 208, 165, 31, 60, 92, 156, 185, 123, 44, 41, 104, 133, 239, 12, 98, 250, 6, 110, 57, 220, 109, 142, 159, 156, 23, 121, 117, 7, 212, 251, 51, 132, 10, 131, 243, 81, 51, 126, 15, 225, 90, 242, 67, 205, 57, 169, 158, 101, 9, 44, 138, 140, 58, 227, 78, 228, 210, 116, 202, 25, 98, 6, 26, 234, 243, 17, 145, 41, 155, 229, 236, 246, 127, 31, 128, 106, 107, 124, 24, 161, 107, 102, 146, 228, 95, 82, 232, 60, 216, 87, 114, 23, 24, 113, 65, 202, 17, 64, 6, 215, 156, 67, 92, 65, 19, 154, 160, 128, 181, 111, 183, 106, 189, 248, 213, 4, 116, 166, 5, 136, 189, 148, 158, 117};
    const unsigned msg_in_sz = 197;
    unsigned char synd[] = {0, 122, 100, 143, 177, 13, 46, 240, 35, 153, 186, 229};
    const unsigned synd_sz = 12;
    unsigned char err_pos[] = {151, 146, 101, 86};
    const unsigned err_pos_sz = 4;
    unsigned char r[] = {143, 199, 167, 217, 135, 176, 185, 7, 182, 68, 160, 129, 0, 176, 107, 74, 74, 7, 216, 61, 170, 150, 216, 149, 235, 50, 147, 150, 43, 132, 123, 240, 44, 67, 42, 37, 95, 180, 160, 112, 172, 44, 212, 220, 133, 17, 222, 74, 81, 63, 36, 25, 155, 171, 123, 114, 90, 107, 232, 135, 146, 66, 233, 69, 215, 244, 87, 55, 155, 147, 173, 82, 134, 208, 165, 31, 60, 92, 156, 185, 123, 44, 41, 104, 133, 239, 30, 98, 250, 6, 110, 57, 220, 109, 142, 159, 156, 23, 121, 117, 7, 46, 251, 51, 132, 10, 131, 243, 81, 51, 126, 15, 225, 90, 242, 67, 205, 57, 169, 158, 101, 9, 44, 138, 140, 58, 227, 78, 228, 210, 116, 202, 25, 98, 6, 26, 234, 243, 17, 145, 41, 155, 229, 236, 246, 127, 186, 128, 106, 107, 124, 47, 161, 107, 102, 146, 228, 95, 82, 232, 60, 216, 87, 114, 23, 24, 113, 65, 202, 17, 64, 6, 215, 156, 67, 92, 65, 19, 154, 160, 128, 181, 111, 183, 106, 189, 248, 213, 4, 116, 166, 5, 136, 189, 148, 158, 117};
    const unsigned r_sz = 197;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test81)
{
    unsigned char msg_in[] = {143, 199, 167, 217, 135, 176, 185, 7, 182, 68, 160, 129, 0, 176, 107, 74, 74, 7, 216, 61, 170, 150, 216, 149, 235, 50, 147, 150, 43, 132, 123, 240, 44, 67, 42, 37, 95, 180, 160, 112, 172, 44, 212, 220, 133, 17, 222, 74, 81, 63, 36, 25, 155, 171, 123, 114, 90, 107, 232, 135, 146, 66, 233, 69, 215, 244, 87, 55, 155, 147, 173, 82, 134, 208, 165, 31, 60, 92, 156, 185, 123, 44, 41, 104, 133, 239, 12, 98, 250, 6, 110, 57, 220, 109, 142, 159, 156, 23, 121, 117, 7, 212, 251, 51, 132, 10, 131, 243, 81, 51, 126, 15, 225, 90, 242, 67, 205, 57, 169, 158, 101, 9, 44, 138, 140, 58, 227, 78, 228, 210, 116, 202, 25, 98, 6, 26, 234, 243, 17, 145, 41, 155, 229, 236, 246, 127, 102, 128, 106, 107, 124, 24, 161, 107, 102, 146, 228, 95, 82, 232, 60, 216, 87, 114, 23, 24, 113, 65, 202, 17, 64, 6, 215, 156, 67, 92, 65, 19, 154, 160, 128, 181, 111, 183, 106, 189, 248, 213, 4, 116, 166, 5, 136, 189, 148, 158, 117};
    const unsigned msg_in_sz = 197;
    unsigned char synd[] = {0, 3, 228, 53, 217, 216, 136, 244, 55, 221, 243, 149};
    const unsigned synd_sz = 12;
    unsigned char err_pos[] = {151, 146, 101, 86};
    const unsigned err_pos_sz = 4;
    unsigned char r[] = {143, 199, 167, 217, 135, 176, 185, 7, 182, 68, 160, 129, 0, 176, 107, 74, 74, 7, 216, 61, 170, 150, 216, 149, 235, 50, 147, 150, 43, 132, 123, 240, 44, 67, 42, 37, 95, 180, 160, 112, 172, 44, 212, 220, 133, 17, 222, 74, 81, 63, 36, 25, 155, 171, 123, 114, 90, 107, 232, 135, 146, 66, 233, 69, 215, 244, 87, 55, 155, 147, 173, 82, 134, 208, 165, 31, 60, 92, 156, 185, 123, 44, 41, 104, 133, 239, 30, 98, 250, 6, 110, 57, 220, 109, 142, 159, 156, 23, 121, 117, 7, 46, 251, 51, 132, 10, 131, 243, 81, 51, 126, 15, 225, 90, 242, 67, 205, 57, 169, 158, 101, 9, 44, 138, 140, 58, 227, 78, 228, 210, 116, 202, 25, 98, 6, 26, 234, 243, 17, 145, 41, 155, 229, 236, 246, 127, 186, 128, 106, 107, 124, 47, 161, 107, 102, 146, 228, 95, 82, 232, 60, 216, 87, 114, 23, 24, 113, 65, 202, 17, 64, 6, 215, 156, 67, 92, 65, 19, 154, 160, 128, 181, 111, 183, 106, 189, 248, 213, 4, 116, 166, 5, 136, 189, 148, 158, 117};
    const unsigned r_sz = 197;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test82)
{
    unsigned char msg_in[] = {72, 206, 18, 111, 245, 206, 253, 15, 194, 12, 239, 65, 230, 85, 132, 38, 11, 194, 177, 217, 249, 191, 151, 125, 245, 10, 222, 34, 69, 203, 30, 26, 137, 196, 74, 105, 235, 0, 134, 86, 99, 112, 60, 206, 42, 38, 160, 234, 85, 10, 157, 11, 109, 117, 214, 23, 188, 147, 173, 235, 100, 79, 129, 140, 146, 94, 252, 52, 71, 247, 113, 46, 73, 193, 19, 31, 139, 193, 22, 140, 19, 93, 119, 177, 199, 183, 41, 226, 109, 207, 234, 82, 238, 71, 181, 68, 112, 127};
    const unsigned msg_in_sz = 98;
    unsigned char synd[] = {0, 171, 54, 190, 79, 166, 201, 113, 145, 203, 20, 197, 50, 116};
    const unsigned synd_sz = 14;
    unsigned char err_pos[] = {26};
    const unsigned err_pos_sz = 1;
    unsigned char r[] = {72, 206, 18, 111, 245, 206, 253, 15, 194, 12, 239, 65, 230, 85, 132, 38, 11, 194, 177, 217, 249, 191, 151, 125, 245, 10, 117, 34, 69, 203, 30, 26, 137, 196, 74, 105, 235, 0, 134, 86, 99, 112, 60, 206, 42, 38, 160, 234, 85, 10, 157, 11, 109, 117, 214, 23, 188, 147, 173, 235, 100, 79, 129, 140, 146, 94, 252, 52, 71, 247, 113, 46, 73, 193, 19, 31, 139, 193, 22, 140, 19, 93, 119, 177, 199, 183, 41, 226, 109, 207, 234, 82, 238, 71, 181, 68, 112, 127};
    const unsigned r_sz = 98;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test83)
{
    unsigned char msg_in[] = {72, 206, 18, 111, 245, 206, 253, 15, 194, 12, 239, 65, 230, 85, 132, 38, 11, 194, 177, 217, 249, 191, 151, 125, 245, 10, 222, 34, 69, 203, 30, 26, 137, 196, 74, 105, 235, 0, 134, 86, 99, 112, 60, 206, 42, 38, 160, 234, 85, 10, 157, 11, 109, 117, 214, 23, 188, 147, 173, 235, 100, 79, 129, 140, 146, 94, 252, 52, 71, 247, 113, 46, 73, 193, 19, 31, 139, 193, 22, 140, 19, 93, 119, 44, 199, 183, 41, 226, 109, 207, 234, 82, 238, 71, 181, 68, 112, 127};
    const unsigned msg_in_sz = 98;
    unsigned char synd[] = {0, 54, 169, 7, 198, 88, 141, 137, 191, 99, 163, 190, 92, 104};
    const unsigned synd_sz = 14;
    unsigned char err_pos[] = {83, 26};
    const unsigned err_pos_sz = 2;
    unsigned char r[] = {72, 206, 18, 111, 245, 206, 253, 15, 194, 12, 239, 65, 230, 85, 132, 38, 11, 194, 177, 217, 249, 191, 151, 125, 245, 10, 117, 34, 69, 203, 30, 26, 137, 196, 74, 105, 235, 0, 134, 86, 99, 112, 60, 206, 42, 38, 160, 234, 85, 10, 157, 11, 109, 117, 214, 23, 188, 147, 173, 235, 100, 79, 129, 140, 146, 94, 252, 52, 71, 247, 113, 46, 73, 193, 19, 31, 139, 193, 22, 140, 19, 93, 119, 177, 199, 183, 41, 226, 109, 207, 234, 82, 238, 71, 181, 68, 112, 127};
    const unsigned r_sz = 98;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test84)
{
    unsigned char msg_in[] = {72, 206, 18, 111, 245, 206, 253, 15, 194, 12, 239, 65, 230, 85, 132, 38, 11, 194, 177, 217, 249, 191, 151, 125, 245, 10, 222, 34, 69, 203, 30, 26, 137, 196, 74, 105, 235, 0, 134, 86, 99, 112, 60, 206, 42, 38, 160, 234, 85, 10, 157, 11, 109, 117, 214, 23, 188, 147, 173, 235, 100, 250, 129, 140, 146, 94, 252, 52, 71, 247, 113, 46, 73, 193, 19, 31, 139, 193, 22, 140, 19, 93, 119, 44, 199, 183, 41, 226, 109, 207, 234, 82, 238, 71, 181, 68, 112, 127};
    const unsigned msg_in_sz = 98;
    unsigned char synd[] = {0, 131, 209, 57, 147, 54, 7, 129, 138, 108, 109, 151, 152, 62};
    const unsigned synd_sz = 14;
    unsigned char err_pos[] = {83, 61, 26};
    const unsigned err_pos_sz = 3;
    unsigned char r[] = {72, 206, 18, 111, 245, 206, 253, 15, 194, 12, 239, 65, 230, 85, 132, 38, 11, 194, 177, 217, 249, 191, 151, 125, 245, 10, 117, 34, 69, 203, 30, 26, 137, 196, 74, 105, 235, 0, 134, 86, 99, 112, 60, 206, 42, 38, 160, 234, 85, 10, 157, 11, 109, 117, 214, 23, 188, 147, 173, 235, 100, 79, 129, 140, 146, 94, 252, 52, 71, 247, 113, 46, 73, 193, 19, 31, 139, 193, 22, 140, 19, 93, 119, 177, 199, 183, 41, 226, 109, 207, 234, 82, 238, 71, 181, 68, 112, 127};
    const unsigned r_sz = 98;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test85)
{
    unsigned char msg_in[] = {72, 206, 18, 111, 245, 206, 253, 15, 194, 12, 239, 65, 230, 85, 132, 38, 11, 194, 177, 217, 249, 191, 151, 125, 245, 10, 222, 34, 69, 203, 30, 26, 137, 196, 74, 105, 235, 0, 134, 86, 99, 112, 60, 206, 42, 38, 160, 234, 85, 10, 157, 184, 109, 117, 214, 23, 188, 147, 173, 235, 100, 250, 129, 140, 146, 94, 252, 52, 71, 247, 113, 46, 73, 193, 19, 31, 139, 193, 22, 140, 19, 93, 119, 44, 199, 183, 41, 226, 109, 207, 234, 82, 238, 71, 181, 68, 112, 127};
    const unsigned msg_in_sz = 98;
    unsigned char synd[] = {0, 48, 74, 36, 195, 39, 157, 3, 129, 92, 98, 225, 230, 204};
    const unsigned synd_sz = 14;
    unsigned char err_pos[] = {83, 61, 51, 26};
    const unsigned err_pos_sz = 4;
    unsigned char r[] = {72, 206, 18, 111, 245, 206, 253, 15, 194, 12, 239, 65, 230, 85, 132, 38, 11, 194, 177, 217, 249, 191, 151, 125, 245, 10, 117, 34, 69, 203, 30, 26, 137, 196, 74, 105, 235, 0, 134, 86, 99, 112, 60, 206, 42, 38, 160, 234, 85, 10, 157, 11, 109, 117, 214, 23, 188, 147, 173, 235, 100, 79, 129, 140, 146, 94, 252, 52, 71, 247, 113, 46, 73, 193, 19, 31, 139, 193, 22, 140, 19, 93, 119, 177, 199, 183, 41, 226, 109, 207, 234, 82, 238, 71, 181, 68, 112, 127};
    const unsigned r_sz = 98;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test86)
{
    unsigned char msg_in[] = {72, 206, 18, 111, 245, 206, 253, 15, 194, 12, 239, 65, 230, 85, 132, 38, 11, 194, 177, 217, 249, 191, 151, 125, 245, 10, 222, 34, 69, 203, 30, 26, 137, 196, 74, 105, 235, 0, 134, 86, 99, 112, 60, 206, 42, 38, 160, 234, 85, 10, 157, 184, 109, 117, 214, 23, 188, 147, 173, 175, 100, 250, 129, 140, 146, 94, 252, 52, 71, 247, 113, 46, 73, 193, 19, 31, 139, 193, 22, 140, 19, 93, 119, 44, 199, 183, 41, 226, 109, 207, 234, 82, 238, 71, 181, 68, 112, 127};
    const unsigned msg_in_sz = 98;
    unsigned char synd[] = {0, 116, 206, 143, 0, 169, 215, 12, 158, 246, 53, 113, 146, 138};
    const unsigned synd_sz = 14;
    unsigned char err_pos[] = {83, 61, 59, 51, 26};
    const unsigned err_pos_sz = 5;
    unsigned char r[] = {72, 206, 18, 111, 245, 206, 253, 15, 194, 12, 239, 65, 230, 85, 132, 38, 11, 194, 177, 217, 249, 191, 151, 125, 245, 10, 117, 34, 69, 203, 30, 26, 137, 196, 74, 105, 235, 0, 134, 86, 99, 112, 60, 206, 42, 38, 160, 234, 85, 10, 157, 11, 109, 117, 214, 23, 188, 147, 173, 235, 100, 79, 129, 140, 146, 94, 252, 52, 71, 247, 113, 46, 73, 193, 19, 31, 139, 193, 22, 140, 19, 93, 119, 177, 199, 183, 41, 226, 109, 207, 234, 82, 238, 71, 181, 68, 112, 127};
    const unsigned r_sz = 98;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test87)
{
    unsigned char msg_in[] = {72, 206, 18, 111, 245, 206, 253, 15, 194, 12, 239, 65, 230, 85, 132, 38, 11, 194, 177, 217, 249, 191, 151, 125, 245, 96, 222, 34, 69, 203, 30, 26, 137, 196, 74, 105, 235, 0, 134, 86, 99, 112, 60, 206, 42, 38, 160, 234, 85, 10, 157, 184, 109, 117, 214, 23, 188, 147, 173, 175, 100, 250, 129, 140, 146, 94, 252, 52, 71, 247, 113, 46, 73, 193, 19, 31, 139, 193, 22, 140, 19, 93, 119, 44, 199, 183, 41, 226, 109, 207, 234, 82, 238, 71, 181, 68, 112, 127};
    const unsigned msg_in_sz = 98;
    unsigned char synd[] = {0, 30, 79, 26, 2, 99, 154, 151, 208, 194, 158, 29, 80, 200};
    const unsigned synd_sz = 14;
    unsigned char err_pos[] = {83, 61, 59, 51, 26, 25};
    const unsigned err_pos_sz = 6;
    unsigned char r[] = {72, 206, 18, 111, 245, 206, 253, 15, 194, 12, 239, 65, 230, 85, 132, 38, 11, 194, 177, 217, 249, 191, 151, 125, 245, 10, 117, 34, 69, 203, 30, 26, 137, 196, 74, 105, 235, 0, 134, 86, 99, 112, 60, 206, 42, 38, 160, 234, 85, 10, 157, 11, 109, 117, 214, 23, 188, 147, 173, 235, 100, 79, 129, 140, 146, 94, 252, 52, 71, 247, 113, 46, 73, 193, 19, 31, 139, 193, 22, 140, 19, 93, 119, 177, 199, 183, 41, 226, 109, 207, 234, 82, 238, 71, 181, 68, 112, 127};
    const unsigned r_sz = 98;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test88)
{
    unsigned char msg_in[] = {161, 27, 34, 100, 13, 157, 250, 157, 64, 38, 168, 114, 179, 140, 91, 19, 255, 66, 212, 31, 136, 125, 62, 213, 223, 142, 104, 255, 88, 31, 221, 159, 241, 216, 115, 145, 233, 87, 175, 59, 101, 229, 36, 22, 91, 96, 220, 159, 40, 144, 233, 116, 155, 155, 190, 110, 152, 76, 31, 20, 56, 17, 97, 121, 159, 60, 67, 170, 15, 73, 190, 118, 104, 220, 203, 66, 111, 10, 91, 238, 123, 151, 130, 246, 79, 120, 69, 150, 136, 3, 90, 42, 186, 35, 48, 233, 209, 189, 186, 207, 144, 79, 219, 220, 45, 80, 189, 29, 102, 180, 253, 74, 40, 243, 46, 76, 160, 135, 106, 20, 15, 103, 72, 68, 121, 240, 238, 233, 84, 21, 250, 62, 215, 155, 60, 241, 188, 20, 26, 124, 131, 52, 241, 214, 178, 13, 202, 75, 132, 91, 230, 172, 98, 171, 245, 219, 143, 79, 212, 229, 188, 204, 98, 137, 44, 135, 72, 61, 45, 63, 28, 144, 167, 98, 49, 85, 155, 69, 150, 7, 183, 182, 19, 29, 169, 247, 238, 190, 132, 75, 232, 35, 204, 145, 39, 56, 208, 217, 1, 253, 43, 65, 255, 156, 206, 199, 123, 211, 80, 11, 139, 139, 208, 152, 92, 9, 219, 4, 237, 99, 182, 87, 222, 4, 173, 249, 80, 4, 78, 102, 207, 198, 241, 247, 43, 33, 31, 212, 190, 182, 97, 76, 131, 95, 172};
    const unsigned msg_in_sz = 245;
    unsigned char synd[] = {0, 145, 108, 253, 145, 108, 253, 145, 108, 253, 145, 108, 253, 145};
    const unsigned synd_sz = 14;
    unsigned char err_pos[] = {159};
    const unsigned err_pos_sz = 1;
    unsigned char r[] = {161, 27, 34, 100, 13, 157, 250, 157, 64, 38, 168, 114, 179, 140, 91, 19, 255, 66, 212, 31, 136, 125, 62, 213, 223, 142, 104, 255, 88, 31, 221, 159, 241, 216, 115, 145, 233, 87, 175, 59, 101, 229, 36, 22, 91, 96, 220, 159, 40, 144, 233, 116, 155, 155, 190, 110, 152, 76, 31, 20, 56, 17, 97, 121, 159, 60, 67, 170, 15, 73, 190, 118, 104, 220, 203, 66, 111, 10, 91, 238, 123, 151, 130, 246, 79, 120, 69, 150, 136, 3, 90, 42, 186, 35, 48, 233, 209, 189, 186, 207, 144, 79, 219, 220, 45, 80, 189, 29, 102, 180, 253, 74, 40, 243, 46, 76, 160, 135, 106, 20, 15, 103, 72, 68, 121, 240, 238, 233, 84, 21, 250, 62, 215, 155, 60, 241, 188, 20, 26, 124, 131, 52, 241, 214, 178, 13, 202, 75, 132, 91, 230, 172, 98, 171, 245, 219, 143, 79, 212, 116, 188, 204, 98, 137, 44, 135, 72, 61, 45, 63, 28, 144, 167, 98, 49, 85, 155, 69, 150, 7, 183, 182, 19, 29, 169, 247, 238, 190, 132, 75, 232, 35, 204, 145, 39, 56, 208, 217, 1, 253, 43, 65, 255, 156, 206, 199, 123, 211, 80, 11, 139, 139, 208, 152, 92, 9, 219, 4, 237, 99, 182, 87, 222, 4, 173, 249, 80, 4, 78, 102, 207, 198, 241, 247, 43, 33, 31, 212, 190, 182, 97, 76, 131, 95, 172};
    const unsigned r_sz = 245;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test89)
{
    unsigned char msg_in[] = {161, 27, 34, 100, 13, 157, 250, 157, 64, 38, 168, 114, 179, 140, 91, 19, 255, 66, 212, 31, 136, 125, 62, 213, 223, 142, 104, 255, 88, 31, 221, 159, 241, 216, 115, 145, 233, 87, 175, 59, 101, 229, 36, 22, 91, 96, 220, 159, 40, 144, 233, 116, 155, 155, 190, 110, 152, 76, 31, 20, 56, 17, 97, 121, 159, 60, 67, 170, 15, 73, 190, 118, 104, 220, 203, 66, 111, 10, 91, 238, 123, 151, 130, 246, 79, 120, 69, 150, 136, 3, 90, 42, 186, 35, 48, 233, 209, 189, 186, 207, 144, 79, 219, 220, 45, 80, 189, 29, 102, 180, 253, 212, 40, 243, 46, 76, 160, 135, 106, 20, 15, 103, 72, 68, 121, 240, 238, 233, 84, 21, 250, 62, 215, 155, 60, 241, 188, 20, 26, 124, 131, 52, 241, 214, 178, 13, 202, 75, 132, 91, 230, 172, 98, 171, 245, 219, 143, 79, 212, 229, 188, 204, 98, 137, 44, 135, 72, 61, 45, 63, 28, 144, 167, 98, 49, 85, 155, 69, 150, 7, 183, 182, 19, 29, 169, 247, 238, 190, 132, 75, 232, 35, 204, 145, 39, 56, 208, 217, 1, 253, 43, 65, 255, 156, 206, 199, 123, 211, 80, 11, 139, 139, 208, 152, 92, 9, 219, 4, 237, 99, 182, 87, 222, 4, 173, 249, 80, 4, 78, 102, 207, 198, 241, 247, 43, 33, 31, 212, 190, 182, 97, 76, 131, 95, 172};
    const unsigned msg_in_sz = 245;
    unsigned char synd[] = {0, 15, 74, 175, 151, 31, 183, 70, 42, 204, 67, 238, 163, 113};
    const unsigned synd_sz = 14;
    unsigned char err_pos[] = {159, 111};
    const unsigned err_pos_sz = 2;
    unsigned char r[] = {161, 27, 34, 100, 13, 157, 250, 157, 64, 38, 168, 114, 179, 140, 91, 19, 255, 66, 212, 31, 136, 125, 62, 213, 223, 142, 104, 255, 88, 31, 221, 159, 241, 216, 115, 145, 233, 87, 175, 59, 101, 229, 36, 22, 91, 96, 220, 159, 40, 144, 233, 116, 155, 155, 190, 110, 152, 76, 31, 20, 56, 17, 97, 121, 159, 60, 67, 170, 15, 73, 190, 118, 104, 220, 203, 66, 111, 10, 91, 238, 123, 151, 130, 246, 79, 120, 69, 150, 136, 3, 90, 42, 186, 35, 48, 233, 209, 189, 186, 207, 144, 79, 219, 220, 45, 80, 189, 29, 102, 180, 253, 74, 40, 243, 46, 76, 160, 135, 106, 20, 15, 103, 72, 68, 121, 240, 238, 233, 84, 21, 250, 62, 215, 155, 60, 241, 188, 20, 26, 124, 131, 52, 241, 214, 178, 13, 202, 75, 132, 91, 230, 172, 98, 171, 245, 219, 143, 79, 212, 116, 188, 204, 98, 137, 44, 135, 72, 61, 45, 63, 28, 144, 167, 98, 49, 85, 155, 69, 150, 7, 183, 182, 19, 29, 169, 247, 238, 190, 132, 75, 232, 35, 204, 145, 39, 56, 208, 217, 1, 253, 43, 65, 255, 156, 206, 199, 123, 211, 80, 11, 139, 139, 208, 152, 92, 9, 219, 4, 237, 99, 182, 87, 222, 4, 173, 249, 80, 4, 78, 102, 207, 198, 241, 247, 43, 33, 31, 212, 190, 182, 97, 76, 131, 95, 172};
    const unsigned r_sz = 245;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test90)
{
    unsigned char msg_in[] = {161, 27, 34, 100, 13, 157, 250, 157, 64, 38, 168, 114, 179, 140, 91, 19, 255, 66, 212, 31, 136, 125, 62, 213, 223, 142, 104, 255, 88, 31, 221, 159, 241, 216, 115, 145, 233, 87, 175, 59, 101, 229, 36, 22, 91, 96, 220, 159, 40, 144, 233, 116, 155, 155, 190, 110, 152, 76, 31, 20, 56, 17, 97, 121, 159, 60, 67, 170, 15, 73, 190, 118, 104, 220, 203, 66, 111, 10, 91, 238, 123, 151, 130, 246, 79, 120, 69, 150, 136, 3, 90, 42, 186, 35, 48, 233, 209, 189, 186, 207, 144, 79, 219, 220, 45, 80, 189, 29, 102, 180, 253, 212, 40, 243, 46, 76, 160, 135, 106, 20, 15, 103, 72, 68, 121, 240, 238, 233, 84, 21, 250, 62, 215, 155, 60, 241, 188, 20, 26, 124, 131, 52, 241, 214, 178, 13, 202, 75, 132, 91, 230, 172, 98, 171, 245, 219, 143, 79, 212, 229, 188, 204, 98, 137, 44, 25, 72, 61, 45, 63, 28, 144, 167, 98, 49, 85, 155, 69, 150, 7, 183, 182, 19, 29, 169, 247, 238, 190, 132, 75, 232, 35, 204, 145, 39, 56, 208, 217, 1, 253, 43, 65, 255, 156, 206, 199, 123, 211, 80, 11, 139, 139, 208, 152, 92, 9, 219, 4, 237, 99, 182, 87, 222, 4, 173, 249, 80, 4, 78, 102, 207, 198, 241, 247, 43, 33, 31, 212, 190, 182, 97, 76, 131, 95, 172};
    const unsigned msg_in_sz = 245;
    unsigned char synd[] = {0, 145, 137, 197, 4, 24, 93, 100, 188, 220, 248, 81, 251, 207};
    const unsigned synd_sz = 14;
    unsigned char err_pos[] = {165, 159, 111};
    const unsigned err_pos_sz = 3;
    unsigned char r[] = {161, 27, 34, 100, 13, 157, 250, 157, 64, 38, 168, 114, 179, 140, 91, 19, 255, 66, 212, 31, 136, 125, 62, 213, 223, 142, 104, 255, 88, 31, 221, 159, 241, 216, 115, 145, 233, 87, 175, 59, 101, 229, 36, 22, 91, 96, 220, 159, 40, 144, 233, 116, 155, 155, 190, 110, 152, 76, 31, 20, 56, 17, 97, 121, 159, 60, 67, 170, 15, 73, 190, 118, 104, 220, 203, 66, 111, 10, 91, 238, 123, 151, 130, 246, 79, 120, 69, 150, 136, 3, 90, 42, 186, 35, 48, 233, 209, 189, 186, 207, 144, 79, 219, 220, 45, 80, 189, 29, 102, 180, 253, 74, 40, 243, 46, 76, 160, 135, 106, 20, 15, 103, 72, 68, 121, 240, 238, 233, 84, 21, 250, 62, 215, 155, 60, 241, 188, 20, 26, 124, 131, 52, 241, 214, 178, 13, 202, 75, 132, 91, 230, 172, 98, 171, 245, 219, 143, 79, 212, 116, 188, 204, 98, 137, 44, 135, 72, 61, 45, 63, 28, 144, 167, 98, 49, 85, 155, 69, 150, 7, 183, 182, 19, 29, 169, 247, 238, 190, 132, 75, 232, 35, 204, 145, 39, 56, 208, 217, 1, 253, 43, 65, 255, 156, 206, 199, 123, 211, 80, 11, 139, 139, 208, 152, 92, 9, 219, 4, 237, 99, 182, 87, 222, 4, 173, 249, 80, 4, 78, 102, 207, 198, 241, 247, 43, 33, 31, 212, 190, 182, 97, 76, 131, 95, 172};
    const unsigned r_sz = 245;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test91)
{
    unsigned char msg_in[] = {161, 27, 34, 100, 13, 157, 250, 157, 64, 38, 168, 114, 179, 140, 91, 19, 255, 66, 212, 31, 136, 125, 62, 213, 223, 142, 104, 255, 88, 31, 221, 159, 241, 216, 115, 145, 233, 87, 175, 59, 101, 229, 36, 22, 91, 96, 220, 159, 40, 144, 233, 116, 155, 155, 190, 110, 152, 76, 31, 20, 56, 17, 97, 121, 159, 60, 67, 170, 15, 73, 190, 118, 104, 220, 203, 66, 111, 10, 91, 238, 123, 151, 130, 246, 79, 120, 69, 150, 136, 3, 90, 42, 186, 35, 48, 233, 209, 189, 186, 207, 144, 79, 219, 220, 45, 80, 189, 29, 102, 180, 253, 212, 40, 243, 46, 76, 160, 135, 106, 20, 15, 103, 72, 68, 121, 240, 238, 233, 84, 21, 250, 62, 215, 155, 60, 241, 188, 20, 26, 124, 131, 52, 241, 214, 178, 13, 202, 75, 132, 91, 230, 172, 98, 171, 245, 219, 143, 79, 212, 229, 188, 204, 98, 137, 44, 25, 72, 61, 45, 63, 28, 144, 167, 98, 49, 85, 217, 69, 150, 7, 183, 182, 19, 29, 169, 247, 238, 190, 132, 75, 232, 35, 204, 145, 39, 56, 208, 217, 1, 253, 43, 65, 255, 156, 206, 199, 123, 211, 80, 11, 139, 139, 208, 152, 92, 9, 219, 4, 237, 99, 182, 87, 222, 4, 173, 249, 80, 4, 78, 102, 207, 198, 241, 247, 43, 33, 31, 212, 190, 182, 97, 76, 131, 95, 172};
    const unsigned msg_in_sz = 245;
    unsigned char synd[] = {0, 211, 47, 113, 250, 252, 79, 46, 166, 42, 160, 1, 23, 97};
    const unsigned synd_sz = 14;
    unsigned char err_pos[] = {176, 165, 159, 111};
    const unsigned err_pos_sz = 4;
    unsigned char r[] = {161, 27, 34, 100, 13, 157, 250, 157, 64, 38, 168, 114, 179, 140, 91, 19, 255, 66, 212, 31, 136, 125, 62, 213, 223, 142, 104, 255, 88, 31, 221, 159, 241, 216, 115, 145, 233, 87, 175, 59, 101, 229, 36, 22, 91, 96, 220, 159, 40, 144, 233, 116, 155, 155, 190, 110, 152, 76, 31, 20, 56, 17, 97, 121, 159, 60, 67, 170, 15, 73, 190, 118, 104, 220, 203, 66, 111, 10, 91, 238, 123, 151, 130, 246, 79, 120, 69, 150, 136, 3, 90, 42, 186, 35, 48, 233, 209, 189, 186, 207, 144, 79, 219, 220, 45, 80, 189, 29, 102, 180, 253, 74, 40, 243, 46, 76, 160, 135, 106, 20, 15, 103, 72, 68, 121, 240, 238, 233, 84, 21, 250, 62, 215, 155, 60, 241, 188, 20, 26, 124, 131, 52, 241, 214, 178, 13, 202, 75, 132, 91, 230, 172, 98, 171, 245, 219, 143, 79, 212, 116, 188, 204, 98, 137, 44, 135, 72, 61, 45, 63, 28, 144, 167, 98, 49, 85, 155, 69, 150, 7, 183, 182, 19, 29, 169, 247, 238, 190, 132, 75, 232, 35, 204, 145, 39, 56, 208, 217, 1, 253, 43, 65, 255, 156, 206, 199, 123, 211, 80, 11, 139, 139, 208, 152, 92, 9, 219, 4, 237, 99, 182, 87, 222, 4, 173, 249, 80, 4, 78, 102, 207, 198, 241, 247, 43, 33, 31, 212, 190, 182, 97, 76, 131, 95, 172};
    const unsigned r_sz = 245;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test92)
{
    unsigned char msg_in[] = {161, 27, 34, 100, 13, 157, 250, 157, 64, 38, 168, 114, 179, 140, 91, 19, 255, 66, 212, 31, 136, 125, 62, 213, 223, 142, 104, 255, 88, 31, 221, 159, 241, 216, 115, 145, 233, 87, 175, 59, 101, 229, 36, 22, 91, 96, 220, 159, 40, 144, 233, 116, 155, 155, 190, 110, 152, 76, 31, 20, 56, 17, 97, 121, 159, 60, 67, 170, 15, 73, 190, 118, 104, 220, 203, 66, 111, 10, 91, 238, 123, 151, 130, 246, 79, 120, 69, 150, 136, 3, 90, 42, 186, 35, 48, 233, 209, 189, 186, 207, 144, 79, 219, 220, 45, 80, 189, 29, 102, 180, 253, 212, 40, 243, 46, 76, 160, 135, 106, 20, 15, 103, 72, 68, 121, 240, 238, 233, 84, 21, 250, 62, 215, 155, 60, 241, 188, 20, 26, 124, 131, 52, 241, 214, 178, 13, 202, 75, 132, 91, 230, 172, 98, 171, 245, 219, 143, 79, 212, 229, 188, 204, 98, 137, 44, 25, 72, 61, 45, 63, 28, 144, 167, 98, 49, 85, 217, 69, 150, 7, 183, 182, 19, 29, 169, 247, 238, 190, 132, 75, 232, 35, 204, 145, 39, 56, 208, 217, 1, 253, 43, 65, 255, 156, 206, 199, 123, 211, 80, 11, 139, 139, 171, 152, 92, 9, 219, 4, 237, 99, 182, 87, 222, 4, 173, 249, 80, 4, 78, 102, 207, 198, 241, 247, 43, 33, 31, 212, 190, 182, 97, 76, 131, 95, 172};
    const unsigned msg_in_sz = 245;
    unsigned char synd[] = {0, 168, 242, 186, 125, 61, 115, 147, 179, 220, 7, 138, 4, 254};
    const unsigned synd_sz = 14;
    unsigned char err_pos[] = {212, 176, 165, 159, 111};
    const unsigned err_pos_sz = 5;
    unsigned char r[] = {161, 27, 34, 100, 13, 157, 250, 157, 64, 38, 168, 114, 179, 140, 91, 19, 255, 66, 212, 31, 136, 125, 62, 213, 223, 142, 104, 255, 88, 31, 221, 159, 241, 216, 115, 145, 233, 87, 175, 59, 101, 229, 36, 22, 91, 96, 220, 159, 40, 144, 233, 116, 155, 155, 190, 110, 152, 76, 31, 20, 56, 17, 97, 121, 159, 60, 67, 170, 15, 73, 190, 118, 104, 220, 203, 66, 111, 10, 91, 238, 123, 151, 130, 246, 79, 120, 69, 150, 136, 3, 90, 42, 186, 35, 48, 233, 209, 189, 186, 207, 144, 79, 219, 220, 45, 80, 189, 29, 102, 180, 253, 74, 40, 243, 46, 76, 160, 135, 106, 20, 15, 103, 72, 68, 121, 240, 238, 233, 84, 21, 250, 62, 215, 155, 60, 241, 188, 20, 26, 124, 131, 52, 241, 214, 178, 13, 202, 75, 132, 91, 230, 172, 98, 171, 245, 219, 143, 79, 212, 116, 188, 204, 98, 137, 44, 135, 72, 61, 45, 63, 28, 144, 167, 98, 49, 85, 155, 69, 150, 7, 183, 182, 19, 29, 169, 247, 238, 190, 132, 75, 232, 35, 204, 145, 39, 56, 208, 217, 1, 253, 43, 65, 255, 156, 206, 199, 123, 211, 80, 11, 139, 139, 208, 152, 92, 9, 219, 4, 237, 99, 182, 87, 222, 4, 173, 249, 80, 4, 78, 102, 207, 198, 241, 247, 43, 33, 31, 212, 190, 182, 97, 76, 131, 95, 172};
    const unsigned r_sz = 245;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}

TEST(RsCorrectErrata, Test93)
{
    unsigned char msg_in[] = {161, 27, 34, 100, 13, 157, 250, 157, 64, 38, 168, 114, 179, 140, 91, 19, 255, 66, 212, 31, 136, 125, 62, 213, 223, 142, 104, 255, 88, 31, 221, 159, 241, 216, 115, 145, 233, 87, 175, 59, 101, 229, 36, 22, 91, 96, 220, 159, 40, 144, 233, 116, 155, 155, 190, 110, 152, 76, 31, 20, 56, 17, 97, 121, 159, 60, 67, 170, 15, 73, 190, 118, 104, 220, 203, 66, 111, 10, 91, 238, 123, 151, 130, 246, 79, 120, 69, 150, 136, 3, 90, 42, 186, 35, 48, 233, 209, 189, 186, 207, 144, 79, 219, 220, 45, 80, 189, 29, 102, 180, 253, 212, 40, 243, 46, 76, 160, 135, 106, 20, 15, 103, 72, 68, 215, 240, 238, 233, 84, 21, 250, 62, 215, 155, 60, 241, 188, 20, 26, 124, 131, 52, 241, 214, 178, 13, 202, 75, 132, 91, 230, 172, 98, 171, 245, 219, 143, 79, 212, 229, 188, 204, 98, 137, 44, 25, 72, 61, 45, 63, 28, 144, 167, 98, 49, 85, 217, 69, 150, 7, 183, 182, 19, 29, 169, 247, 238, 190, 132, 75, 232, 35, 204, 145, 39, 56, 208, 217, 1, 253, 43, 65, 255, 156, 206, 199, 123, 211, 80, 11, 139, 139, 171, 152, 92, 9, 219, 4, 237, 99, 182, 87, 222, 4, 173, 249, 80, 4, 78, 102, 207, 198, 241, 247, 43, 33, 31, 212, 190, 182, 97, 76, 131, 95, 172};
    const unsigned msg_in_sz = 245;
    unsigned char synd[] = {0, 6, 82, 69, 23, 219, 112, 222, 199, 242, 107, 246, 239, 239};
    const unsigned synd_sz = 14;
    unsigned char err_pos[] = {212, 176, 165, 159, 124, 111};
    const unsigned err_pos_sz = 6;
    unsigned char r[] = {161, 27, 34, 100, 13, 157, 250, 157, 64, 38, 168, 114, 179, 140, 91, 19, 255, 66, 212, 31, 136, 125, 62, 213, 223, 142, 104, 255, 88, 31, 221, 159, 241, 216, 115, 145, 233, 87, 175, 59, 101, 229, 36, 22, 91, 96, 220, 159, 40, 144, 233, 116, 155, 155, 190, 110, 152, 76, 31, 20, 56, 17, 97, 121, 159, 60, 67, 170, 15, 73, 190, 118, 104, 220, 203, 66, 111, 10, 91, 238, 123, 151, 130, 246, 79, 120, 69, 150, 136, 3, 90, 42, 186, 35, 48, 233, 209, 189, 186, 207, 144, 79, 219, 220, 45, 80, 189, 29, 102, 180, 253, 74, 40, 243, 46, 76, 160, 135, 106, 20, 15, 103, 72, 68, 121, 240, 238, 233, 84, 21, 250, 62, 215, 155, 60, 241, 188, 20, 26, 124, 131, 52, 241, 214, 178, 13, 202, 75, 132, 91, 230, 172, 98, 171, 245, 219, 143, 79, 212, 116, 188, 204, 98, 137, 44, 135, 72, 61, 45, 63, 28, 144, 167, 98, 49, 85, 155, 69, 150, 7, 183, 182, 19, 29, 169, 247, 238, 190, 132, 75, 232, 35, 204, 145, 39, 56, 208, 217, 1, 253, 43, 65, 255, 156, 206, 199, 123, 211, 80, 11, 139, 139, 208, 152, 92, 9, 219, 4, 237, 99, 182, 87, 222, 4, 173, 249, 80, 4, 78, 102, 207, 198, 241, 247, 43, 33, 31, 212, 190, 182, 97, 76, 131, 95, 172};
    const unsigned r_sz = 245;
    unsigned char buf[256];
    unsigned buf_sz = msg_in_sz;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_errata(buf, buf_sz, synd, synd_sz, err_pos, err_pos_sz);
    ASSERT_EQ(buf_sz, r_sz);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
}
