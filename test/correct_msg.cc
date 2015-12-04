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

TEST(RsCorrectMsg, Test0)
{
    unsigned char msg_in[] = {135, 223, 246, 96, 119, 7, 129, 100, 82, 41, 23, 16, 216, 65, 121, 66, 222, 223, 238, 229, 213, 11, 241, 155, 216, 192, 173, 248, 102, 216, 194, 223, 74, 81, 139, 137, 172, 251, 204, 80, 169, 41, 26, 17, 159, 238, 67, 45, 195, 241, 99, 129, 153, 15, 138, 105, 225, 79, 190, 79, 65, 72, 133, 177, 249, 253, 37, 133, 202, 170, 140, 225, 149, 220, 254, 103, 60, 248, 151, 173, 228, 121, 212, 62, 168, 38, 249, 147, 248, 4, 110, 224, 26, 222, 73, 75, 9, 86, 151, 197, 109, 86, 9, 210, 100, 107, 237, 37, 38, 177, 189, 199, 18, 200, 216, 27, 13, 75, 3, 118, 30, 171, 58, 224, 180, 204, 31, 102, 208, 48, 73, 252, 140, 145, 83, 167, 0, 96, 51, 150, 95, 255, 39, 42, 97, 166, 158, 239, 70, 145, 77, 85, 195, 63, 5, 30, 170, 240, 235, 227, 160, 242, 203, 110, 198, 145, 161, 110};
    const unsigned msg_in_sz = 168;
    unsigned char r[] = {135, 223, 246, 96, 119, 7, 129, 100, 82, 41, 23, 16, 216, 65, 121, 66, 222, 223, 238, 229, 213, 11, 241, 155, 216, 192, 173, 248, 102, 216, 194, 223, 74, 81, 139, 137, 172, 251, 204, 80, 169, 41, 26, 17, 159, 238, 67, 45, 195, 241, 99, 129, 153, 15, 138, 105, 225, 79, 190, 79, 65, 72, 133, 177, 249, 253, 37, 133, 202, 170, 140, 225, 149, 220, 254, 103, 60, 248, 151, 173, 228, 121, 212, 62, 168, 38, 249, 147, 248, 4, 110, 224, 26, 222, 73, 75, 9, 86, 151, 197, 109, 86, 9, 210, 100, 107, 237, 37, 38, 177, 189, 199, 18, 200, 216, 27, 13, 75, 3, 118, 30, 171, 58, 224, 180, 204, 31, 102, 208, 48, 73, 252, 140, 145, 83, 167, 0, 96, 51, 150, 95, 255, 39, 42, 97, 166, 158, 239, 70, 145, 77, 85, 195, 63, 5, 30, 170, 240, 235, 227, 160, 242, 203, 110};
    const unsigned r_sz = 164;
    unsigned char c[] = {198, 145, 161, 110};
    const unsigned c_sz = 4;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 4;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test1)
{
    unsigned char msg_in[] = {135, 223, 246, 96, 119, 7, 129, 100, 82, 41, 23, 16, 216, 65, 121, 66, 222, 223, 238, 229, 213, 11, 241, 155, 216, 192, 173, 248, 102, 216, 194, 223, 74, 81, 139, 137, 172, 251, 204, 80, 169, 41, 26, 17, 159, 238, 67, 45, 195, 241, 99, 129, 153, 15, 138, 105, 225, 79, 190, 79, 65, 72, 133, 177, 249, 253, 37, 133, 202, 170, 140, 225, 149, 220, 254, 103, 60, 248, 151, 173, 228, 121, 212, 62, 168, 38, 249, 147, 248, 4, 110, 224, 26, 222, 73, 75, 9, 86, 151, 197, 109, 86, 9, 210, 100, 107, 237, 37, 38, 177, 189, 199, 18, 200, 216, 84, 13, 75, 3, 118, 30, 171, 58, 224, 180, 204, 31, 102, 208, 48, 73, 252, 140, 145, 83, 167, 0, 96, 51, 150, 95, 255, 39, 42, 97, 166, 158, 239, 70, 145, 77, 85, 195, 63, 5, 30, 170, 240, 235, 227, 160, 242, 203, 110, 198, 145, 161, 110};
    const unsigned msg_in_sz = 168;
    unsigned char r[] = {135, 223, 246, 96, 119, 7, 129, 100, 82, 41, 23, 16, 216, 65, 121, 66, 222, 223, 238, 229, 213, 11, 241, 155, 216, 192, 173, 248, 102, 216, 194, 223, 74, 81, 139, 137, 172, 251, 204, 80, 169, 41, 26, 17, 159, 238, 67, 45, 195, 241, 99, 129, 153, 15, 138, 105, 225, 79, 190, 79, 65, 72, 133, 177, 249, 253, 37, 133, 202, 170, 140, 225, 149, 220, 254, 103, 60, 248, 151, 173, 228, 121, 212, 62, 168, 38, 249, 147, 248, 4, 110, 224, 26, 222, 73, 75, 9, 86, 151, 197, 109, 86, 9, 210, 100, 107, 237, 37, 38, 177, 189, 199, 18, 200, 216, 27, 13, 75, 3, 118, 30, 171, 58, 224, 180, 204, 31, 102, 208, 48, 73, 252, 140, 145, 83, 167, 0, 96, 51, 150, 95, 255, 39, 42, 97, 166, 158, 239, 70, 145, 77, 85, 195, 63, 5, 30, 170, 240, 235, 227, 160, 242, 203, 110};
    const unsigned r_sz = 164;
    unsigned char c[] = {198, 145, 161, 110};
    const unsigned c_sz = 4;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 4;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test2)
{
    unsigned char msg_in[] = {135, 223, 246, 96, 119, 7, 129, 100, 82, 41, 23, 16, 216, 65, 121, 66, 222, 223, 238, 229, 213, 11, 241, 155, 216, 192, 173, 248, 102, 216, 194, 223, 74, 81, 139, 137, 172, 251, 204, 80, 169, 41, 26, 17, 159, 238, 67, 45, 195, 241, 99, 129, 153, 15, 138, 105, 225, 79, 190, 79, 65, 72, 133, 177, 249, 253, 37, 133, 202, 170, 140, 225, 149, 220, 254, 103, 60, 248, 151, 173, 228, 121, 212, 62, 168, 38, 249, 147, 248, 4, 110, 224, 26, 222, 73, 75, 9, 86, 148, 197, 109, 86, 9, 210, 100, 107, 237, 37, 38, 177, 189, 199, 18, 200, 216, 84, 13, 75, 3, 118, 30, 171, 58, 224, 180, 204, 31, 102, 208, 48, 73, 252, 140, 145, 83, 167, 0, 96, 51, 150, 95, 255, 39, 42, 97, 166, 158, 239, 70, 145, 77, 85, 195, 63, 5, 30, 170, 240, 235, 227, 160, 242, 203, 110, 198, 145, 161, 110};
    const unsigned msg_in_sz = 168;
    unsigned char r[] = {135, 223, 246, 96, 119, 7, 129, 100, 82, 41, 23, 16, 216, 65, 121, 66, 222, 223, 238, 229, 213, 11, 241, 155, 216, 192, 173, 248, 102, 216, 194, 223, 74, 81, 139, 137, 172, 251, 204, 80, 169, 41, 26, 17, 159, 238, 67, 45, 195, 241, 99, 129, 153, 15, 138, 105, 225, 79, 190, 79, 65, 72, 133, 177, 249, 253, 37, 133, 202, 170, 140, 225, 149, 220, 254, 103, 60, 248, 151, 173, 228, 121, 212, 62, 168, 38, 249, 147, 248, 4, 110, 224, 26, 222, 73, 75, 9, 86, 151, 197, 109, 86, 9, 210, 100, 107, 237, 37, 38, 177, 189, 199, 18, 200, 216, 27, 13, 75, 3, 118, 30, 171, 58, 224, 180, 204, 31, 102, 208, 48, 73, 252, 140, 145, 83, 167, 0, 96, 51, 150, 95, 255, 39, 42, 97, 166, 158, 239, 70, 145, 77, 85, 195, 63, 5, 30, 170, 240, 235, 227, 160, 242, 203, 110};
    const unsigned r_sz = 164;
    unsigned char c[] = {198, 145, 161, 110};
    const unsigned c_sz = 4;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 4;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test3)
{
    unsigned char msg_in[] = {86, 15, 106, 95, 179, 239, 3, 120, 80, 35, 232, 92, 103, 202, 4, 168, 11, 91, 211, 95, 251, 153, 42, 24, 26, 142, 175, 208, 116, 213, 202, 174, 209, 76, 175, 17, 80, 242, 62, 133, 201, 209, 137, 135, 14, 73, 97, 112, 53, 30, 25, 222, 119, 110, 105, 57, 38, 64, 147, 213, 114, 111, 252, 124, 147, 147, 37, 216, 234, 23, 158, 175, 98, 223, 177, 14, 242, 160, 233, 28, 99, 188, 193, 23, 45, 73, 122, 18, 105, 4, 148, 13, 71, 125, 166, 109, 32, 92, 237, 162, 163, 162, 168, 224, 0, 35, 47, 22, 90, 87, 233, 114, 15, 87, 226, 211, 50, 38, 142, 207, 132, 68, 225, 184, 112, 53, 213, 152, 176, 66, 142, 157, 127, 136, 99, 173, 208, 13, 79, 182, 14, 35, 244, 135, 207, 187, 0, 175, 149, 55, 182, 46, 64, 35, 233, 216, 189, 226, 149, 230, 113, 81, 42, 91, 154, 173, 106, 68, 1, 113, 136, 21, 102, 86, 131, 169};
    const unsigned msg_in_sz = 176;
    unsigned char r[] = {86, 15, 106, 95, 179, 239, 3, 120, 80, 35, 232, 92, 103, 202, 4, 168, 11, 91, 211, 95, 251, 153, 42, 24, 26, 142, 175, 208, 116, 213, 202, 174, 209, 76, 175, 17, 80, 242, 62, 133, 201, 209, 137, 135, 14, 73, 97, 112, 53, 30, 25, 222, 119, 110, 105, 57, 38, 64, 147, 213, 114, 111, 252, 124, 147, 147, 37, 216, 234, 23, 158, 175, 98, 223, 177, 14, 242, 160, 233, 28, 99, 188, 193, 23, 45, 73, 122, 18, 105, 4, 148, 13, 71, 125, 166, 109, 32, 92, 237, 162, 163, 162, 168, 224, 0, 35, 47, 22, 90, 87, 233, 114, 15, 87, 226, 211, 50, 38, 142, 207, 132, 68, 225, 184, 112, 53, 213, 152, 176, 66, 142, 157, 127, 136, 99, 173, 208, 13, 79, 182, 14, 35, 244, 135, 207, 187, 0, 175, 149, 55, 182, 46, 64, 35, 233, 216, 189, 226, 149, 230, 113, 81, 42, 91, 154, 173, 106, 68, 1, 113, 136, 21};
    const unsigned r_sz = 172;
    unsigned char c[] = {102, 86, 131, 169};
    const unsigned c_sz = 4;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 4;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test4)
{
    unsigned char msg_in[] = {86, 15, 106, 95, 179, 239, 3, 120, 80, 35, 232, 92, 103, 202, 4, 168, 11, 91, 211, 95, 251, 153, 42, 24, 42, 142, 175, 208, 116, 213, 202, 174, 209, 76, 175, 17, 80, 242, 62, 133, 201, 209, 137, 135, 14, 73, 97, 112, 53, 30, 25, 222, 119, 110, 105, 57, 38, 64, 147, 213, 114, 111, 252, 124, 147, 147, 37, 216, 234, 23, 158, 175, 98, 223, 177, 14, 242, 160, 233, 28, 99, 188, 193, 23, 45, 73, 122, 18, 105, 4, 148, 13, 71, 125, 166, 109, 32, 92, 237, 162, 163, 162, 168, 224, 0, 35, 47, 22, 90, 87, 233, 114, 15, 87, 226, 211, 50, 38, 142, 207, 132, 68, 225, 184, 112, 53, 213, 152, 176, 66, 142, 157, 127, 136, 99, 173, 208, 13, 79, 182, 14, 35, 244, 135, 207, 187, 0, 175, 149, 55, 182, 46, 64, 35, 233, 216, 189, 226, 149, 230, 113, 81, 42, 91, 154, 173, 106, 68, 1, 113, 136, 21, 102, 86, 131, 169};
    const unsigned msg_in_sz = 176;
    unsigned char r[] = {86, 15, 106, 95, 179, 239, 3, 120, 80, 35, 232, 92, 103, 202, 4, 168, 11, 91, 211, 95, 251, 153, 42, 24, 26, 142, 175, 208, 116, 213, 202, 174, 209, 76, 175, 17, 80, 242, 62, 133, 201, 209, 137, 135, 14, 73, 97, 112, 53, 30, 25, 222, 119, 110, 105, 57, 38, 64, 147, 213, 114, 111, 252, 124, 147, 147, 37, 216, 234, 23, 158, 175, 98, 223, 177, 14, 242, 160, 233, 28, 99, 188, 193, 23, 45, 73, 122, 18, 105, 4, 148, 13, 71, 125, 166, 109, 32, 92, 237, 162, 163, 162, 168, 224, 0, 35, 47, 22, 90, 87, 233, 114, 15, 87, 226, 211, 50, 38, 142, 207, 132, 68, 225, 184, 112, 53, 213, 152, 176, 66, 142, 157, 127, 136, 99, 173, 208, 13, 79, 182, 14, 35, 244, 135, 207, 187, 0, 175, 149, 55, 182, 46, 64, 35, 233, 216, 189, 226, 149, 230, 113, 81, 42, 91, 154, 173, 106, 68, 1, 113, 136, 21};
    const unsigned r_sz = 172;
    unsigned char c[] = {102, 86, 131, 169};
    const unsigned c_sz = 4;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 4;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test5)
{
    unsigned char msg_in[] = {86, 15, 106, 95, 179, 239, 3, 120, 80, 35, 232, 218, 103, 202, 4, 168, 11, 91, 211, 95, 251, 153, 42, 24, 42, 142, 175, 208, 116, 213, 202, 174, 209, 76, 175, 17, 80, 242, 62, 133, 201, 209, 137, 135, 14, 73, 97, 112, 53, 30, 25, 222, 119, 110, 105, 57, 38, 64, 147, 213, 114, 111, 252, 124, 147, 147, 37, 216, 234, 23, 158, 175, 98, 223, 177, 14, 242, 160, 233, 28, 99, 188, 193, 23, 45, 73, 122, 18, 105, 4, 148, 13, 71, 125, 166, 109, 32, 92, 237, 162, 163, 162, 168, 224, 0, 35, 47, 22, 90, 87, 233, 114, 15, 87, 226, 211, 50, 38, 142, 207, 132, 68, 225, 184, 112, 53, 213, 152, 176, 66, 142, 157, 127, 136, 99, 173, 208, 13, 79, 182, 14, 35, 244, 135, 207, 187, 0, 175, 149, 55, 182, 46, 64, 35, 233, 216, 189, 226, 149, 230, 113, 81, 42, 91, 154, 173, 106, 68, 1, 113, 136, 21, 102, 86, 131, 169};
    const unsigned msg_in_sz = 176;
    unsigned char r[] = {86, 15, 106, 95, 179, 239, 3, 120, 80, 35, 232, 92, 103, 202, 4, 168, 11, 91, 211, 95, 251, 153, 42, 24, 26, 142, 175, 208, 116, 213, 202, 174, 209, 76, 175, 17, 80, 242, 62, 133, 201, 209, 137, 135, 14, 73, 97, 112, 53, 30, 25, 222, 119, 110, 105, 57, 38, 64, 147, 213, 114, 111, 252, 124, 147, 147, 37, 216, 234, 23, 158, 175, 98, 223, 177, 14, 242, 160, 233, 28, 99, 188, 193, 23, 45, 73, 122, 18, 105, 4, 148, 13, 71, 125, 166, 109, 32, 92, 237, 162, 163, 162, 168, 224, 0, 35, 47, 22, 90, 87, 233, 114, 15, 87, 226, 211, 50, 38, 142, 207, 132, 68, 225, 184, 112, 53, 213, 152, 176, 66, 142, 157, 127, 136, 99, 173, 208, 13, 79, 182, 14, 35, 244, 135, 207, 187, 0, 175, 149, 55, 182, 46, 64, 35, 233, 216, 189, 226, 149, 230, 113, 81, 42, 91, 154, 173, 106, 68, 1, 113, 136, 21};
    const unsigned r_sz = 172;
    unsigned char c[] = {102, 86, 131, 169};
    const unsigned c_sz = 4;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 4;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test6)
{
    unsigned char msg_in[] = {2, 97, 245, 92, 227, 213, 166, 74, 249, 197, 171, 115, 51, 197, 165, 110, 88, 113, 222, 131, 232, 134, 144, 13, 145, 0, 140, 241, 98, 11, 109, 204, 203, 110, 228, 245, 137, 235, 222, 205, 8, 159, 214, 140, 59, 29, 118, 27, 5, 234, 50, 81, 160, 149, 36, 133, 105, 161, 93, 214, 17, 232, 226, 229, 96, 22, 106, 77, 131, 16, 94, 74, 34, 79, 223, 204, 135, 135, 28, 172, 173, 131, 51, 132, 143, 13, 186, 147, 139, 115, 233, 253, 31, 152, 20, 10, 96, 198, 129, 113, 142, 215, 131, 218, 62, 21, 197, 69, 62, 255, 21, 190, 139, 149, 73, 40, 26, 28, 226, 193, 68, 213, 248, 42, 233, 123, 192, 196, 226, 128, 79, 164, 8, 230, 242, 85, 98, 42, 251, 194, 2, 195, 140, 8, 207, 53, 8, 96, 24, 213, 154, 61, 92, 220, 181, 39, 116, 37, 115, 68, 73, 41, 218, 0, 59, 254, 65, 112, 178, 203, 140, 75, 193, 27, 137, 101, 217, 112, 35, 199, 41, 215, 96, 56, 145, 172, 223, 14, 39, 175, 221, 78, 123, 113, 165, 136, 232, 88, 6, 53, 184, 224, 3, 150};
    const unsigned msg_in_sz = 204;
    unsigned char r[] = {2, 97, 245, 92, 227, 213, 166, 74, 249, 197, 171, 115, 51, 197, 165, 110, 88, 113, 222, 131, 232, 134, 144, 13, 145, 0, 140, 241, 98, 11, 109, 204, 203, 110, 228, 245, 137, 235, 222, 205, 8, 159, 214, 140, 59, 29, 118, 27, 5, 234, 50, 81, 160, 149, 36, 133, 105, 161, 93, 214, 17, 232, 226, 229, 96, 22, 106, 77, 131, 16, 94, 74, 34, 79, 223, 204, 135, 135, 28, 172, 173, 131, 51, 132, 143, 13, 186, 147, 139, 115, 233, 253, 31, 152, 20, 10, 96, 198, 129, 113, 142, 215, 131, 218, 62, 21, 197, 69, 62, 255, 21, 190, 139, 149, 73, 40, 26, 28, 226, 193, 68, 213, 248, 42, 233, 123, 192, 196, 226, 128, 79, 164, 8, 230, 242, 85, 98, 42, 251, 194, 2, 195, 140, 8, 207, 53, 8, 96, 24, 213, 154, 61, 92, 220, 181, 39, 116, 37, 115, 68, 73, 41, 218, 0, 59, 254, 65, 112, 178, 203, 140, 75, 193, 27, 137, 101, 217, 112, 35, 199, 41, 215, 96, 56, 145, 172, 223, 14, 39, 175, 221, 78, 123, 113, 165, 136};
    const unsigned r_sz = 196;
    unsigned char c[] = {232, 88, 6, 53, 184, 224, 3, 150};
    const unsigned c_sz = 8;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 8;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test7)
{
    unsigned char msg_in[] = {2, 97, 245, 92, 227, 213, 166, 74, 249, 197, 171, 115, 51, 197, 165, 110, 88, 113, 222, 131, 232, 134, 144, 13, 145, 0, 140, 241, 98, 11, 109, 204, 203, 110, 228, 245, 137, 235, 222, 205, 8, 159, 214, 140, 59, 29, 118, 27, 5, 234, 50, 81, 160, 149, 36, 133, 105, 161, 93, 214, 17, 232, 226, 229, 96, 22, 106, 77, 131, 16, 94, 74, 34, 79, 223, 204, 135, 135, 28, 172, 173, 131, 51, 132, 143, 13, 186, 147, 139, 115, 233, 253, 31, 152, 20, 10, 96, 198, 129, 113, 142, 215, 131, 218, 62, 21, 197, 69, 62, 255, 21, 190, 139, 149, 73, 40, 26, 28, 226, 193, 68, 213, 248, 198, 233, 123, 192, 196, 226, 128, 79, 164, 8, 230, 242, 85, 98, 42, 251, 194, 2, 195, 140, 8, 207, 53, 8, 96, 24, 213, 154, 61, 92, 220, 181, 39, 116, 37, 115, 68, 73, 41, 218, 0, 59, 254, 65, 112, 178, 203, 140, 75, 193, 27, 137, 101, 217, 112, 35, 199, 41, 215, 96, 56, 145, 172, 223, 14, 39, 175, 221, 78, 123, 113, 165, 136, 232, 88, 6, 53, 184, 224, 3, 150};
    const unsigned msg_in_sz = 204;
    unsigned char r[] = {2, 97, 245, 92, 227, 213, 166, 74, 249, 197, 171, 115, 51, 197, 165, 110, 88, 113, 222, 131, 232, 134, 144, 13, 145, 0, 140, 241, 98, 11, 109, 204, 203, 110, 228, 245, 137, 235, 222, 205, 8, 159, 214, 140, 59, 29, 118, 27, 5, 234, 50, 81, 160, 149, 36, 133, 105, 161, 93, 214, 17, 232, 226, 229, 96, 22, 106, 77, 131, 16, 94, 74, 34, 79, 223, 204, 135, 135, 28, 172, 173, 131, 51, 132, 143, 13, 186, 147, 139, 115, 233, 253, 31, 152, 20, 10, 96, 198, 129, 113, 142, 215, 131, 218, 62, 21, 197, 69, 62, 255, 21, 190, 139, 149, 73, 40, 26, 28, 226, 193, 68, 213, 248, 42, 233, 123, 192, 196, 226, 128, 79, 164, 8, 230, 242, 85, 98, 42, 251, 194, 2, 195, 140, 8, 207, 53, 8, 96, 24, 213, 154, 61, 92, 220, 181, 39, 116, 37, 115, 68, 73, 41, 218, 0, 59, 254, 65, 112, 178, 203, 140, 75, 193, 27, 137, 101, 217, 112, 35, 199, 41, 215, 96, 56, 145, 172, 223, 14, 39, 175, 221, 78, 123, 113, 165, 136};
    const unsigned r_sz = 196;
    unsigned char c[] = {232, 88, 6, 53, 184, 224, 3, 150};
    const unsigned c_sz = 8;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 8;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test8)
{
    unsigned char msg_in[] = {2, 97, 245, 92, 227, 213, 166, 74, 249, 197, 171, 115, 51, 197, 165, 110, 88, 113, 222, 131, 232, 134, 144, 13, 145, 0, 140, 241, 98, 11, 109, 204, 203, 110, 228, 245, 137, 235, 222, 205, 8, 159, 214, 140, 59, 29, 118, 27, 5, 234, 50, 81, 160, 149, 36, 133, 105, 161, 93, 214, 17, 232, 226, 229, 96, 22, 106, 77, 131, 16, 94, 74, 34, 79, 223, 204, 135, 135, 28, 172, 173, 131, 51, 132, 143, 13, 186, 147, 139, 112, 233, 253, 31, 152, 20, 10, 96, 198, 129, 113, 142, 215, 131, 218, 62, 21, 197, 69, 62, 255, 21, 190, 139, 149, 73, 40, 26, 28, 226, 193, 68, 213, 248, 198, 233, 123, 192, 196, 226, 128, 79, 164, 8, 230, 242, 85, 98, 42, 251, 194, 2, 195, 140, 8, 207, 53, 8, 96, 24, 213, 154, 61, 92, 220, 181, 39, 116, 37, 115, 68, 73, 41, 218, 0, 59, 254, 65, 112, 178, 203, 140, 75, 193, 27, 137, 101, 217, 112, 35, 199, 41, 215, 96, 56, 145, 172, 223, 14, 39, 175, 221, 78, 123, 113, 165, 136, 232, 88, 6, 53, 184, 224, 3, 150};
    const unsigned msg_in_sz = 204;
    unsigned char r[] = {2, 97, 245, 92, 227, 213, 166, 74, 249, 197, 171, 115, 51, 197, 165, 110, 88, 113, 222, 131, 232, 134, 144, 13, 145, 0, 140, 241, 98, 11, 109, 204, 203, 110, 228, 245, 137, 235, 222, 205, 8, 159, 214, 140, 59, 29, 118, 27, 5, 234, 50, 81, 160, 149, 36, 133, 105, 161, 93, 214, 17, 232, 226, 229, 96, 22, 106, 77, 131, 16, 94, 74, 34, 79, 223, 204, 135, 135, 28, 172, 173, 131, 51, 132, 143, 13, 186, 147, 139, 115, 233, 253, 31, 152, 20, 10, 96, 198, 129, 113, 142, 215, 131, 218, 62, 21, 197, 69, 62, 255, 21, 190, 139, 149, 73, 40, 26, 28, 226, 193, 68, 213, 248, 42, 233, 123, 192, 196, 226, 128, 79, 164, 8, 230, 242, 85, 98, 42, 251, 194, 2, 195, 140, 8, 207, 53, 8, 96, 24, 213, 154, 61, 92, 220, 181, 39, 116, 37, 115, 68, 73, 41, 218, 0, 59, 254, 65, 112, 178, 203, 140, 75, 193, 27, 137, 101, 217, 112, 35, 199, 41, 215, 96, 56, 145, 172, 223, 14, 39, 175, 221, 78, 123, 113, 165, 136};
    const unsigned r_sz = 196;
    unsigned char c[] = {232, 88, 6, 53, 184, 224, 3, 150};
    const unsigned c_sz = 8;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 8;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test9)
{
    unsigned char msg_in[] = {2, 97, 245, 92, 227, 213, 166, 74, 249, 197, 171, 115, 51, 197, 165, 110, 88, 113, 222, 131, 232, 134, 144, 13, 145, 0, 140, 241, 98, 11, 109, 204, 203, 110, 228, 245, 137, 235, 222, 205, 8, 159, 214, 140, 59, 29, 118, 27, 5, 234, 50, 81, 160, 149, 36, 133, 105, 161, 93, 214, 17, 232, 226, 229, 96, 22, 106, 77, 131, 16, 94, 74, 232, 79, 223, 204, 135, 135, 28, 172, 173, 131, 51, 132, 143, 13, 186, 147, 139, 112, 233, 253, 31, 152, 20, 10, 96, 198, 129, 113, 142, 215, 131, 218, 62, 21, 197, 69, 62, 255, 21, 190, 139, 149, 73, 40, 26, 28, 226, 193, 68, 213, 248, 198, 233, 123, 192, 196, 226, 128, 79, 164, 8, 230, 242, 85, 98, 42, 251, 194, 2, 195, 140, 8, 207, 53, 8, 96, 24, 213, 154, 61, 92, 220, 181, 39, 116, 37, 115, 68, 73, 41, 218, 0, 59, 254, 65, 112, 178, 203, 140, 75, 193, 27, 137, 101, 217, 112, 35, 199, 41, 215, 96, 56, 145, 172, 223, 14, 39, 175, 221, 78, 123, 113, 165, 136, 232, 88, 6, 53, 184, 224, 3, 150};
    const unsigned msg_in_sz = 204;
    unsigned char r[] = {2, 97, 245, 92, 227, 213, 166, 74, 249, 197, 171, 115, 51, 197, 165, 110, 88, 113, 222, 131, 232, 134, 144, 13, 145, 0, 140, 241, 98, 11, 109, 204, 203, 110, 228, 245, 137, 235, 222, 205, 8, 159, 214, 140, 59, 29, 118, 27, 5, 234, 50, 81, 160, 149, 36, 133, 105, 161, 93, 214, 17, 232, 226, 229, 96, 22, 106, 77, 131, 16, 94, 74, 34, 79, 223, 204, 135, 135, 28, 172, 173, 131, 51, 132, 143, 13, 186, 147, 139, 115, 233, 253, 31, 152, 20, 10, 96, 198, 129, 113, 142, 215, 131, 218, 62, 21, 197, 69, 62, 255, 21, 190, 139, 149, 73, 40, 26, 28, 226, 193, 68, 213, 248, 42, 233, 123, 192, 196, 226, 128, 79, 164, 8, 230, 242, 85, 98, 42, 251, 194, 2, 195, 140, 8, 207, 53, 8, 96, 24, 213, 154, 61, 92, 220, 181, 39, 116, 37, 115, 68, 73, 41, 218, 0, 59, 254, 65, 112, 178, 203, 140, 75, 193, 27, 137, 101, 217, 112, 35, 199, 41, 215, 96, 56, 145, 172, 223, 14, 39, 175, 221, 78, 123, 113, 165, 136};
    const unsigned r_sz = 196;
    unsigned char c[] = {232, 88, 6, 53, 184, 224, 3, 150};
    const unsigned c_sz = 8;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 8;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test10)
{
    unsigned char msg_in[] = {2, 97, 255, 92, 227, 213, 166, 74, 249, 197, 171, 115, 51, 197, 165, 110, 88, 113, 222, 131, 232, 134, 144, 13, 145, 0, 140, 241, 98, 11, 109, 204, 203, 110, 228, 245, 137, 235, 222, 205, 8, 159, 214, 140, 59, 29, 118, 27, 5, 234, 50, 81, 160, 149, 36, 133, 105, 161, 93, 214, 17, 232, 226, 229, 96, 22, 106, 77, 131, 16, 94, 74, 232, 79, 223, 204, 135, 135, 28, 172, 173, 131, 51, 132, 143, 13, 186, 147, 139, 112, 233, 253, 31, 152, 20, 10, 96, 198, 129, 113, 142, 215, 131, 218, 62, 21, 197, 69, 62, 255, 21, 190, 139, 149, 73, 40, 26, 28, 226, 193, 68, 213, 248, 198, 233, 123, 192, 196, 226, 128, 79, 164, 8, 230, 242, 85, 98, 42, 251, 194, 2, 195, 140, 8, 207, 53, 8, 96, 24, 213, 154, 61, 92, 220, 181, 39, 116, 37, 115, 68, 73, 41, 218, 0, 59, 254, 65, 112, 178, 203, 140, 75, 193, 27, 137, 101, 217, 112, 35, 199, 41, 215, 96, 56, 145, 172, 223, 14, 39, 175, 221, 78, 123, 113, 165, 136, 232, 88, 6, 53, 184, 224, 3, 150};
    const unsigned msg_in_sz = 204;
    unsigned char r[] = {2, 97, 245, 92, 227, 213, 166, 74, 249, 197, 171, 115, 51, 197, 165, 110, 88, 113, 222, 131, 232, 134, 144, 13, 145, 0, 140, 241, 98, 11, 109, 204, 203, 110, 228, 245, 137, 235, 222, 205, 8, 159, 214, 140, 59, 29, 118, 27, 5, 234, 50, 81, 160, 149, 36, 133, 105, 161, 93, 214, 17, 232, 226, 229, 96, 22, 106, 77, 131, 16, 94, 74, 34, 79, 223, 204, 135, 135, 28, 172, 173, 131, 51, 132, 143, 13, 186, 147, 139, 115, 233, 253, 31, 152, 20, 10, 96, 198, 129, 113, 142, 215, 131, 218, 62, 21, 197, 69, 62, 255, 21, 190, 139, 149, 73, 40, 26, 28, 226, 193, 68, 213, 248, 42, 233, 123, 192, 196, 226, 128, 79, 164, 8, 230, 242, 85, 98, 42, 251, 194, 2, 195, 140, 8, 207, 53, 8, 96, 24, 213, 154, 61, 92, 220, 181, 39, 116, 37, 115, 68, 73, 41, 218, 0, 59, 254, 65, 112, 178, 203, 140, 75, 193, 27, 137, 101, 217, 112, 35, 199, 41, 215, 96, 56, 145, 172, 223, 14, 39, 175, 221, 78, 123, 113, 165, 136};
    const unsigned r_sz = 196;
    unsigned char c[] = {232, 88, 6, 53, 184, 224, 3, 150};
    const unsigned c_sz = 8;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 8;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test11)
{
    unsigned char msg_in[] = {205, 251, 62, 121, 126, 101, 209, 70, 212, 35, 76, 95, 47, 195, 250, 88, 229, 176, 99, 241, 160, 163, 176, 159, 101, 78, 186, 76, 228, 40, 175, 230, 67, 141, 104, 18, 123, 123, 80};
    const unsigned msg_in_sz = 39;
    unsigned char r[] = {205, 251, 62, 121, 126, 101, 209, 70, 212, 35, 76, 95, 47, 195, 250, 88, 229, 176, 99, 241, 160, 163, 176, 159, 101, 78, 186, 76, 228, 40, 175};
    const unsigned r_sz = 31;
    unsigned char c[] = {230, 67, 141, 104, 18, 123, 123, 80};
    const unsigned c_sz = 8;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 8;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test12)
{
    unsigned char msg_in[] = {205, 251, 62, 121, 126, 101, 209, 70, 212, 35, 76, 95, 47, 195, 250, 88, 229, 176, 99, 241, 160, 163, 176, 159, 101, 78, 186, 76, 228, 40, 175, 230, 67, 141, 104, 5, 123, 123, 80};
    const unsigned msg_in_sz = 39;
    unsigned char r[] = {205, 251, 62, 121, 126, 101, 209, 70, 212, 35, 76, 95, 47, 195, 250, 88, 229, 176, 99, 241, 160, 163, 176, 159, 101, 78, 186, 76, 228, 40, 175};
    const unsigned r_sz = 31;
    unsigned char c[] = {230, 67, 141, 104, 18, 123, 123, 80};
    const unsigned c_sz = 8;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 8;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test13)
{
    unsigned char msg_in[] = {205, 251, 62, 121, 126, 101, 209, 70, 212, 35, 76, 88, 47, 195, 250, 88, 229, 176, 99, 241, 160, 163, 176, 159, 101, 78, 186, 76, 228, 40, 175, 230, 67, 141, 104, 5, 123, 123, 80};
    const unsigned msg_in_sz = 39;
    unsigned char r[] = {205, 251, 62, 121, 126, 101, 209, 70, 212, 35, 76, 95, 47, 195, 250, 88, 229, 176, 99, 241, 160, 163, 176, 159, 101, 78, 186, 76, 228, 40, 175};
    const unsigned r_sz = 31;
    unsigned char c[] = {230, 67, 141, 104, 18, 123, 123, 80};
    const unsigned c_sz = 8;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 8;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test14)
{
    unsigned char msg_in[] = {205, 251, 62, 121, 126, 101, 141, 70, 212, 35, 76, 88, 47, 195, 250, 88, 229, 176, 99, 241, 160, 163, 176, 159, 101, 78, 186, 76, 228, 40, 175, 230, 67, 141, 104, 5, 123, 123, 80};
    const unsigned msg_in_sz = 39;
    unsigned char r[] = {205, 251, 62, 121, 126, 101, 209, 70, 212, 35, 76, 95, 47, 195, 250, 88, 229, 176, 99, 241, 160, 163, 176, 159, 101, 78, 186, 76, 228, 40, 175};
    const unsigned r_sz = 31;
    unsigned char c[] = {230, 67, 141, 104, 18, 123, 123, 80};
    const unsigned c_sz = 8;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 8;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test15)
{
    unsigned char msg_in[] = {205, 251, 62, 121, 126, 101, 141, 70, 212, 35, 76, 164, 47, 195, 250, 88, 229, 176, 99, 241, 160, 163, 176, 159, 101, 78, 186, 76, 228, 40, 175, 230, 67, 141, 104, 5, 123, 123, 80};
    const unsigned msg_in_sz = 39;
    unsigned char r[] = {205, 251, 62, 121, 126, 101, 209, 70, 212, 35, 76, 95, 47, 195, 250, 88, 229, 176, 99, 241, 160, 163, 176, 159, 101, 78, 186, 76, 228, 40, 175};
    const unsigned r_sz = 31;
    unsigned char c[] = {230, 67, 141, 104, 18, 123, 123, 80};
    const unsigned c_sz = 8;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 8;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test16)
{
    unsigned char msg_in[] = {200, 134, 207, 202, 224, 211, 0, 101, 194, 137, 37, 41, 172, 243, 187, 246, 223, 221, 245, 82, 212, 72, 199, 70, 61, 145, 40, 252, 64, 223, 24, 90, 222, 139};
    const unsigned msg_in_sz = 34;
    unsigned char r[] = {200, 134, 207, 202, 224, 211, 0, 101, 194, 137, 37, 41, 172, 243, 187, 246, 223, 221};
    const unsigned r_sz = 18;
    unsigned char c[] = {245, 82, 212, 72, 199, 70, 61, 145, 40, 252, 64, 223, 24, 90, 222, 139};
    const unsigned c_sz = 16;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 16;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test17)
{
    unsigned char msg_in[] = {200, 134, 207, 202, 224, 214, 0, 101, 194, 137, 37, 41, 172, 243, 187, 246, 223, 221, 245, 82, 212, 72, 199, 70, 61, 145, 40, 252, 64, 223, 24, 90, 222, 139};
    const unsigned msg_in_sz = 34;
    unsigned char r[] = {200, 134, 207, 202, 224, 211, 0, 101, 194, 137, 37, 41, 172, 243, 187, 246, 223, 221};
    const unsigned r_sz = 18;
    unsigned char c[] = {245, 82, 212, 72, 199, 70, 61, 145, 40, 252, 64, 223, 24, 90, 222, 139};
    const unsigned c_sz = 16;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 16;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test18)
{
    unsigned char msg_in[] = {200, 134, 207, 202, 224, 214, 0, 101, 194, 137, 37, 41, 172, 243, 187, 246, 223, 221, 245, 82, 212, 72, 199, 70, 61, 145, 40, 243, 64, 223, 24, 90, 222, 139};
    const unsigned msg_in_sz = 34;
    unsigned char r[] = {200, 134, 207, 202, 224, 211, 0, 101, 194, 137, 37, 41, 172, 243, 187, 246, 223, 221};
    const unsigned r_sz = 18;
    unsigned char c[] = {245, 82, 212, 72, 199, 70, 61, 145, 40, 252, 64, 223, 24, 90, 222, 139};
    const unsigned c_sz = 16;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 16;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test19)
{
    unsigned char msg_in[] = {200, 134, 207, 202, 224, 214, 0, 101, 194, 137, 37, 41, 172, 243, 187, 152, 223, 221, 245, 82, 212, 72, 199, 70, 61, 145, 40, 243, 64, 223, 24, 90, 222, 139};
    const unsigned msg_in_sz = 34;
    unsigned char r[] = {200, 134, 207, 202, 224, 211, 0, 101, 194, 137, 37, 41, 172, 243, 187, 246, 223, 221};
    const unsigned r_sz = 18;
    unsigned char c[] = {245, 82, 212, 72, 199, 70, 61, 145, 40, 252, 64, 223, 24, 90, 222, 139};
    const unsigned c_sz = 16;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 16;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test20)
{
    unsigned char msg_in[] = {200, 134, 207, 202, 224, 214, 0, 101, 194, 137, 37, 41, 172, 243, 187, 152, 223, 221, 245, 82, 212, 72, 199, 70, 61, 145, 40, 243, 64, 223, 24, 90, 226, 139};
    const unsigned msg_in_sz = 34;
    unsigned char r[] = {200, 134, 207, 202, 224, 211, 0, 101, 194, 137, 37, 41, 172, 243, 187, 246, 223, 221};
    const unsigned r_sz = 18;
    unsigned char c[] = {245, 82, 212, 72, 199, 70, 61, 145, 40, 252, 64, 223, 24, 90, 222, 139};
    const unsigned c_sz = 16;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 16;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test21)
{
    unsigned char msg_in[] = {200, 134, 207, 202, 224, 214, 0, 101, 194, 137, 37, 41, 172, 243, 187, 152, 223, 146, 245, 82, 212, 72, 199, 70, 61, 145, 40, 243, 64, 223, 24, 90, 226, 139};
    const unsigned msg_in_sz = 34;
    unsigned char r[] = {200, 134, 207, 202, 224, 211, 0, 101, 194, 137, 37, 41, 172, 243, 187, 246, 223, 221};
    const unsigned r_sz = 18;
    unsigned char c[] = {245, 82, 212, 72, 199, 70, 61, 145, 40, 252, 64, 223, 24, 90, 222, 139};
    const unsigned c_sz = 16;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 16;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test22)
{
    unsigned char msg_in[] = {200, 134, 207, 202, 224, 214, 0, 101, 194, 137, 37, 41, 172, 243, 70, 152, 223, 146, 245, 82, 212, 72, 199, 70, 61, 145, 40, 243, 64, 223, 24, 90, 226, 139};
    const unsigned msg_in_sz = 34;
    unsigned char r[] = {200, 134, 207, 202, 224, 211, 0, 101, 194, 137, 37, 41, 172, 243, 187, 246, 223, 221};
    const unsigned r_sz = 18;
    unsigned char c[] = {245, 82, 212, 72, 199, 70, 61, 145, 40, 252, 64, 223, 24, 90, 222, 139};
    const unsigned c_sz = 16;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 16;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test23)
{
    unsigned char msg_in[] = {200, 134, 207, 202, 224, 214, 0, 101, 194, 137, 37, 41, 172, 243, 70, 152, 223, 146, 245, 82, 212, 72, 199, 70, 61, 145, 40, 243, 64, 223, 24, 90, 226, 115};
    const unsigned msg_in_sz = 34;
    unsigned char r[] = {200, 134, 207, 202, 224, 211, 0, 101, 194, 137, 37, 41, 172, 243, 187, 246, 223, 221};
    const unsigned r_sz = 18;
    unsigned char c[] = {245, 82, 212, 72, 199, 70, 61, 145, 40, 252, 64, 223, 24, 90, 222, 139};
    const unsigned c_sz = 16;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 16;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test24)
{
    unsigned char msg_in[] = {200, 134, 207, 202, 224, 214, 0, 101, 194, 137, 37, 41, 172, 243, 70, 152, 223, 146, 245, 82, 212, 15, 199, 70, 61, 145, 40, 243, 64, 223, 24, 90, 226, 115};
    const unsigned msg_in_sz = 34;
    unsigned char r[] = {200, 134, 207, 202, 224, 211, 0, 101, 194, 137, 37, 41, 172, 243, 187, 246, 223, 221};
    const unsigned r_sz = 18;
    unsigned char c[] = {245, 82, 212, 72, 199, 70, 61, 145, 40, 252, 64, 223, 24, 90, 222, 139};
    const unsigned c_sz = 16;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 16;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test25)
{
    unsigned char msg_in[] = {76, 255, 200, 174, 126, 4, 100, 243, 66, 80, 65, 100, 88, 158, 102, 23, 136, 138, 247, 5, 108, 23, 11, 178, 126, 153, 3, 90, 237, 105, 213, 159, 153, 25, 34, 223, 240, 252, 80, 95, 255, 2, 130, 123, 85, 202, 216, 226, 153, 53, 206, 168, 66, 184, 208, 49, 198, 137, 239, 159, 202, 209, 79, 115, 35, 114, 70, 61, 32, 117, 129, 69, 130, 200, 122, 254, 232, 123, 223, 36, 21, 246, 214, 172, 5, 176, 55, 83, 134, 82, 170, 71, 185, 81, 23, 189, 23, 0, 174, 216, 249, 11, 78, 190, 76, 228, 51, 92, 109, 232, 168, 50, 209, 135, 188, 236, 91, 61, 186, 134, 107, 49, 253, 102, 132, 251, 141, 172, 154, 111, 150, 35, 96, 157, 7};
    const unsigned msg_in_sz = 135;
    unsigned char r[] = {76, 255, 200, 174, 126, 4, 100, 243, 66, 80, 65, 100, 88, 158, 102, 23, 136, 138, 247, 5, 108, 23, 11, 178, 126, 153, 3, 90, 237, 105, 213, 159, 153, 25, 34, 223, 240, 252, 80, 95, 255, 2, 130, 123, 85, 202, 216, 226, 153, 53, 206, 168, 66, 184, 208, 49, 198, 137, 239, 159, 202, 209, 79, 115, 35, 114, 70, 61, 32, 117, 129, 69, 130, 200, 122, 254, 232, 123, 223, 36, 21, 246, 214, 172, 5, 176, 55, 83, 134, 82, 170, 71, 185, 81, 23, 189, 23, 0, 174, 216, 249, 11, 78, 190, 76, 228, 51, 92, 109, 232, 168, 50, 209, 135, 188, 236, 91, 61, 186};
    const unsigned r_sz = 119;
    unsigned char c[] = {134, 107, 49, 253, 102, 132, 251, 141, 172, 154, 111, 150, 35, 96, 157, 7};
    const unsigned c_sz = 16;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 16;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test26)
{
    unsigned char msg_in[] = {76, 255, 200, 174, 126, 4, 100, 243, 66, 80, 65, 100, 88, 158, 102, 23, 136, 138, 247, 5, 108, 23, 11, 178, 126, 153, 3, 90, 237, 105, 213, 159, 153, 25, 34, 223, 240, 252, 80, 95, 255, 2, 130, 123, 85, 202, 216, 226, 153, 53, 206, 168, 66, 184, 208, 49, 198, 137, 239, 159, 202, 209, 79, 115, 35, 114, 70, 61, 32, 117, 129, 69, 32, 200, 122, 254, 232, 123, 223, 36, 21, 246, 214, 172, 5, 176, 55, 83, 134, 82, 170, 71, 185, 81, 23, 189, 23, 0, 174, 216, 249, 11, 78, 190, 76, 228, 51, 92, 109, 232, 168, 50, 209, 135, 188, 236, 91, 61, 186, 134, 107, 49, 253, 102, 132, 251, 141, 172, 154, 111, 150, 35, 96, 157, 7};
    const unsigned msg_in_sz = 135;
    unsigned char r[] = {76, 255, 200, 174, 126, 4, 100, 243, 66, 80, 65, 100, 88, 158, 102, 23, 136, 138, 247, 5, 108, 23, 11, 178, 126, 153, 3, 90, 237, 105, 213, 159, 153, 25, 34, 223, 240, 252, 80, 95, 255, 2, 130, 123, 85, 202, 216, 226, 153, 53, 206, 168, 66, 184, 208, 49, 198, 137, 239, 159, 202, 209, 79, 115, 35, 114, 70, 61, 32, 117, 129, 69, 130, 200, 122, 254, 232, 123, 223, 36, 21, 246, 214, 172, 5, 176, 55, 83, 134, 82, 170, 71, 185, 81, 23, 189, 23, 0, 174, 216, 249, 11, 78, 190, 76, 228, 51, 92, 109, 232, 168, 50, 209, 135, 188, 236, 91, 61, 186};
    const unsigned r_sz = 119;
    unsigned char c[] = {134, 107, 49, 253, 102, 132, 251, 141, 172, 154, 111, 150, 35, 96, 157, 7};
    const unsigned c_sz = 16;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 16;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test27)
{
    unsigned char msg_in[] = {76, 255, 200, 174, 126, 4, 100, 243, 66, 80, 65, 100, 88, 158, 102, 23, 136, 138, 247, 5, 108, 23, 11, 178, 126, 153, 3, 90, 237, 105, 213, 159, 153, 25, 34, 223, 240, 252, 80, 95, 255, 2, 130, 123, 85, 202, 216, 226, 153, 53, 206, 168, 66, 184, 208, 49, 198, 137, 239, 159, 202, 209, 79, 115, 35, 114, 70, 61, 32, 117, 129, 69, 32, 200, 122, 254, 232, 123, 223, 36, 21, 246, 214, 172, 5, 176, 55, 83, 134, 82, 170, 71, 185, 81, 23, 189, 23, 0, 174, 216, 249, 11, 78, 190, 251, 228, 51, 92, 109, 232, 168, 50, 209, 135, 188, 236, 91, 61, 186, 134, 107, 49, 253, 102, 132, 251, 141, 172, 154, 111, 150, 35, 96, 157, 7};
    const unsigned msg_in_sz = 135;
    unsigned char r[] = {76, 255, 200, 174, 126, 4, 100, 243, 66, 80, 65, 100, 88, 158, 102, 23, 136, 138, 247, 5, 108, 23, 11, 178, 126, 153, 3, 90, 237, 105, 213, 159, 153, 25, 34, 223, 240, 252, 80, 95, 255, 2, 130, 123, 85, 202, 216, 226, 153, 53, 206, 168, 66, 184, 208, 49, 198, 137, 239, 159, 202, 209, 79, 115, 35, 114, 70, 61, 32, 117, 129, 69, 130, 200, 122, 254, 232, 123, 223, 36, 21, 246, 214, 172, 5, 176, 55, 83, 134, 82, 170, 71, 185, 81, 23, 189, 23, 0, 174, 216, 249, 11, 78, 190, 76, 228, 51, 92, 109, 232, 168, 50, 209, 135, 188, 236, 91, 61, 186};
    const unsigned r_sz = 119;
    unsigned char c[] = {134, 107, 49, 253, 102, 132, 251, 141, 172, 154, 111, 150, 35, 96, 157, 7};
    const unsigned c_sz = 16;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 16;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test28)
{
    unsigned char msg_in[] = {76, 255, 200, 174, 126, 4, 100, 243, 66, 80, 65, 100, 88, 158, 102, 23, 136, 138, 247, 5, 11, 23, 11, 178, 126, 153, 3, 90, 237, 105, 213, 159, 153, 25, 34, 223, 240, 252, 80, 95, 255, 2, 130, 123, 85, 202, 216, 226, 153, 53, 206, 168, 66, 184, 208, 49, 198, 137, 239, 159, 202, 209, 79, 115, 35, 114, 70, 61, 32, 117, 129, 69, 32, 200, 122, 254, 232, 123, 223, 36, 21, 246, 214, 172, 5, 176, 55, 83, 134, 82, 170, 71, 185, 81, 23, 189, 23, 0, 174, 216, 249, 11, 78, 190, 251, 228, 51, 92, 109, 232, 168, 50, 209, 135, 188, 236, 91, 61, 186, 134, 107, 49, 253, 102, 132, 251, 141, 172, 154, 111, 150, 35, 96, 157, 7};
    const unsigned msg_in_sz = 135;
    unsigned char r[] = {76, 255, 200, 174, 126, 4, 100, 243, 66, 80, 65, 100, 88, 158, 102, 23, 136, 138, 247, 5, 108, 23, 11, 178, 126, 153, 3, 90, 237, 105, 213, 159, 153, 25, 34, 223, 240, 252, 80, 95, 255, 2, 130, 123, 85, 202, 216, 226, 153, 53, 206, 168, 66, 184, 208, 49, 198, 137, 239, 159, 202, 209, 79, 115, 35, 114, 70, 61, 32, 117, 129, 69, 130, 200, 122, 254, 232, 123, 223, 36, 21, 246, 214, 172, 5, 176, 55, 83, 134, 82, 170, 71, 185, 81, 23, 189, 23, 0, 174, 216, 249, 11, 78, 190, 76, 228, 51, 92, 109, 232, 168, 50, 209, 135, 188, 236, 91, 61, 186};
    const unsigned r_sz = 119;
    unsigned char c[] = {134, 107, 49, 253, 102, 132, 251, 141, 172, 154, 111, 150, 35, 96, 157, 7};
    const unsigned c_sz = 16;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 16;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test29)
{
    unsigned char msg_in[] = {76, 255, 200, 174, 126, 4, 100, 243, 66, 80, 65, 100, 88, 158, 102, 23, 136, 138, 247, 5, 11, 23, 11, 178, 126, 153, 3, 90, 237, 105, 213, 159, 153, 25, 34, 223, 240, 252, 80, 95, 255, 2, 130, 123, 85, 202, 216, 226, 153, 53, 206, 168, 66, 184, 208, 49, 198, 137, 239, 159, 202, 209, 79, 115, 35, 114, 70, 61, 32, 117, 129, 69, 32, 200, 122, 254, 232, 123, 104, 36, 21, 246, 214, 172, 5, 176, 55, 83, 134, 82, 170, 71, 185, 81, 23, 189, 23, 0, 174, 216, 249, 11, 78, 190, 251, 228, 51, 92, 109, 232, 168, 50, 209, 135, 188, 236, 91, 61, 186, 134, 107, 49, 253, 102, 132, 251, 141, 172, 154, 111, 150, 35, 96, 157, 7};
    const unsigned msg_in_sz = 135;
    unsigned char r[] = {76, 255, 200, 174, 126, 4, 100, 243, 66, 80, 65, 100, 88, 158, 102, 23, 136, 138, 247, 5, 108, 23, 11, 178, 126, 153, 3, 90, 237, 105, 213, 159, 153, 25, 34, 223, 240, 252, 80, 95, 255, 2, 130, 123, 85, 202, 216, 226, 153, 53, 206, 168, 66, 184, 208, 49, 198, 137, 239, 159, 202, 209, 79, 115, 35, 114, 70, 61, 32, 117, 129, 69, 130, 200, 122, 254, 232, 123, 223, 36, 21, 246, 214, 172, 5, 176, 55, 83, 134, 82, 170, 71, 185, 81, 23, 189, 23, 0, 174, 216, 249, 11, 78, 190, 76, 228, 51, 92, 109, 232, 168, 50, 209, 135, 188, 236, 91, 61, 186};
    const unsigned r_sz = 119;
    unsigned char c[] = {134, 107, 49, 253, 102, 132, 251, 141, 172, 154, 111, 150, 35, 96, 157, 7};
    const unsigned c_sz = 16;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 16;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test30)
{
    unsigned char msg_in[] = {76, 255, 200, 174, 126, 4, 100, 243, 66, 80, 65, 100, 88, 158, 102, 23, 136, 138, 247, 5, 11, 23, 11, 178, 126, 153, 3, 90, 237, 105, 213, 159, 153, 25, 34, 223, 240, 252, 80, 95, 255, 2, 130, 123, 85, 202, 216, 226, 153, 53, 206, 168, 66, 184, 208, 49, 198, 137, 239, 159, 202, 209, 79, 115, 35, 114, 70, 61, 32, 117, 129, 69, 32, 200, 122, 254, 232, 104, 104, 36, 21, 246, 214, 172, 5, 176, 55, 83, 134, 82, 170, 71, 185, 81, 23, 189, 23, 0, 174, 216, 249, 11, 78, 190, 251, 228, 51, 92, 109, 232, 168, 50, 209, 135, 188, 236, 91, 61, 186, 134, 107, 49, 253, 102, 132, 251, 141, 172, 154, 111, 150, 35, 96, 157, 7};
    const unsigned msg_in_sz = 135;
    unsigned char r[] = {76, 255, 200, 174, 126, 4, 100, 243, 66, 80, 65, 100, 88, 158, 102, 23, 136, 138, 247, 5, 108, 23, 11, 178, 126, 153, 3, 90, 237, 105, 213, 159, 153, 25, 34, 223, 240, 252, 80, 95, 255, 2, 130, 123, 85, 202, 216, 226, 153, 53, 206, 168, 66, 184, 208, 49, 198, 137, 239, 159, 202, 209, 79, 115, 35, 114, 70, 61, 32, 117, 129, 69, 130, 200, 122, 254, 232, 123, 223, 36, 21, 246, 214, 172, 5, 176, 55, 83, 134, 82, 170, 71, 185, 81, 23, 189, 23, 0, 174, 216, 249, 11, 78, 190, 76, 228, 51, 92, 109, 232, 168, 50, 209, 135, 188, 236, 91, 61, 186};
    const unsigned r_sz = 119;
    unsigned char c[] = {134, 107, 49, 253, 102, 132, 251, 141, 172, 154, 111, 150, 35, 96, 157, 7};
    const unsigned c_sz = 16;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 16;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test31)
{
    unsigned char msg_in[] = {76, 255, 200, 174, 126, 4, 100, 243, 66, 80, 65, 100, 88, 158, 102, 23, 136, 138, 247, 5, 11, 23, 11, 178, 126, 153, 3, 90, 237, 105, 213, 159, 153, 25, 34, 223, 240, 252, 80, 95, 255, 2, 130, 123, 85, 202, 216, 226, 153, 53, 206, 168, 66, 184, 208, 49, 198, 137, 239, 159, 202, 209, 79, 115, 35, 114, 70, 61, 32, 117, 129, 69, 32, 200, 122, 254, 232, 104, 104, 36, 21, 246, 214, 172, 5, 176, 55, 83, 134, 82, 170, 71, 185, 81, 23, 189, 23, 0, 174, 216, 249, 11, 78, 190, 251, 228, 51, 92, 109, 232, 168, 50, 209, 135, 188, 236, 91, 61, 186, 134, 107, 49, 253, 102, 132, 251, 141, 172, 154, 111, 150, 246, 96, 157, 7};
    const unsigned msg_in_sz = 135;
    unsigned char r[] = {76, 255, 200, 174, 126, 4, 100, 243, 66, 80, 65, 100, 88, 158, 102, 23, 136, 138, 247, 5, 108, 23, 11, 178, 126, 153, 3, 90, 237, 105, 213, 159, 153, 25, 34, 223, 240, 252, 80, 95, 255, 2, 130, 123, 85, 202, 216, 226, 153, 53, 206, 168, 66, 184, 208, 49, 198, 137, 239, 159, 202, 209, 79, 115, 35, 114, 70, 61, 32, 117, 129, 69, 130, 200, 122, 254, 232, 123, 223, 36, 21, 246, 214, 172, 5, 176, 55, 83, 134, 82, 170, 71, 185, 81, 23, 189, 23, 0, 174, 216, 249, 11, 78, 190, 76, 228, 51, 92, 109, 232, 168, 50, 209, 135, 188, 236, 91, 61, 186};
    const unsigned r_sz = 119;
    unsigned char c[] = {134, 107, 49, 253, 102, 132, 251, 141, 172, 154, 111, 150, 35, 96, 157, 7};
    const unsigned c_sz = 16;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 16;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test32)
{
    unsigned char msg_in[] = {76, 255, 200, 174, 126, 4, 100, 243, 66, 80, 65, 100, 88, 158, 102, 23, 136, 138, 247, 5, 11, 23, 11, 178, 126, 153, 3, 90, 237, 105, 213, 159, 153, 25, 34, 223, 240, 252, 80, 95, 255, 2, 130, 123, 85, 202, 216, 226, 153, 53, 206, 168, 66, 184, 208, 49, 198, 137, 239, 159, 202, 209, 79, 115, 35, 114, 70, 61, 32, 117, 129, 69, 32, 200, 122, 254, 232, 104, 104, 36, 21, 246, 214, 172, 5, 176, 55, 83, 134, 82, 170, 71, 185, 81, 23, 189, 23, 0, 174, 216, 249, 11, 78, 190, 251, 228, 51, 92, 109, 232, 168, 50, 209, 135, 188, 236, 91, 61, 186, 134, 107, 23, 253, 102, 132, 251, 141, 172, 154, 111, 150, 246, 96, 157, 7};
    const unsigned msg_in_sz = 135;
    unsigned char r[] = {76, 255, 200, 174, 126, 4, 100, 243, 66, 80, 65, 100, 88, 158, 102, 23, 136, 138, 247, 5, 108, 23, 11, 178, 126, 153, 3, 90, 237, 105, 213, 159, 153, 25, 34, 223, 240, 252, 80, 95, 255, 2, 130, 123, 85, 202, 216, 226, 153, 53, 206, 168, 66, 184, 208, 49, 198, 137, 239, 159, 202, 209, 79, 115, 35, 114, 70, 61, 32, 117, 129, 69, 130, 200, 122, 254, 232, 123, 223, 36, 21, 246, 214, 172, 5, 176, 55, 83, 134, 82, 170, 71, 185, 81, 23, 189, 23, 0, 174, 216, 249, 11, 78, 190, 76, 228, 51, 92, 109, 232, 168, 50, 209, 135, 188, 236, 91, 61, 186};
    const unsigned r_sz = 119;
    unsigned char c[] = {134, 107, 49, 253, 102, 132, 251, 141, 172, 154, 111, 150, 35, 96, 157, 7};
    const unsigned c_sz = 16;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 16;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test33)
{
    unsigned char msg_in[] = {76, 255, 200, 174, 126, 4, 100, 243, 66, 80, 65, 100, 88, 158, 102, 23, 136, 138, 247, 5, 11, 23, 11, 178, 126, 153, 3, 90, 237, 105, 213, 159, 153, 25, 34, 223, 240, 252, 80, 95, 255, 2, 130, 123, 85, 202, 216, 226, 153, 53, 206, 168, 66, 184, 208, 49, 198, 137, 239, 159, 202, 209, 79, 115, 35, 114, 70, 61, 32, 117, 129, 69, 32, 200, 122, 254, 232, 104, 104, 36, 21, 246, 214, 172, 5, 176, 55, 83, 134, 82, 170, 71, 185, 81, 23, 189, 23, 0, 174, 216, 249, 11, 78, 190, 251, 228, 51, 92, 109, 232, 168, 50, 209, 135, 188, 236, 91, 61, 186, 134, 107, 23, 253, 102, 132, 251, 141, 172, 154, 111, 150, 246, 90, 157, 7};
    const unsigned msg_in_sz = 135;
    unsigned char r[] = {76, 255, 200, 174, 126, 4, 100, 243, 66, 80, 65, 100, 88, 158, 102, 23, 136, 138, 247, 5, 108, 23, 11, 178, 126, 153, 3, 90, 237, 105, 213, 159, 153, 25, 34, 223, 240, 252, 80, 95, 255, 2, 130, 123, 85, 202, 216, 226, 153, 53, 206, 168, 66, 184, 208, 49, 198, 137, 239, 159, 202, 209, 79, 115, 35, 114, 70, 61, 32, 117, 129, 69, 130, 200, 122, 254, 232, 123, 223, 36, 21, 246, 214, 172, 5, 176, 55, 83, 134, 82, 170, 71, 185, 81, 23, 189, 23, 0, 174, 216, 249, 11, 78, 190, 76, 228, 51, 92, 109, 232, 168, 50, 209, 135, 188, 236, 91, 61, 186};
    const unsigned r_sz = 119;
    unsigned char c[] = {134, 107, 49, 253, 102, 132, 251, 141, 172, 154, 111, 150, 35, 96, 157, 7};
    const unsigned c_sz = 16;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 16;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test34)
{
    unsigned char msg_in[] = {78, 244, 224, 56, 76, 88, 137, 152, 214, 7, 211, 50, 152, 229, 227, 253, 211, 87, 9, 192, 84, 92, 220, 21, 180, 119, 181, 81, 168, 129, 19, 190, 36, 166, 21, 1, 190, 148, 16, 211, 7, 121, 226, 90, 164, 208, 208, 20, 86, 37, 135, 121, 186, 202, 230, 157, 75, 27, 8, 81, 144, 108, 111, 95, 192, 114, 10, 41, 228, 229, 77, 93, 59, 210, 22, 213, 237, 22};
    const unsigned msg_in_sz = 78;
    unsigned char r[] = {78, 244, 224, 56, 76, 88, 137, 152, 214, 7, 211, 50, 152, 229, 227, 253, 211, 87, 9, 192, 84, 92, 220, 21, 180, 119, 181, 81, 168, 129, 19, 190, 36, 166, 21, 1, 190, 148, 16, 211, 7, 121, 226, 90, 164, 208};
    const unsigned r_sz = 46;
    unsigned char c[] = {208, 20, 86, 37, 135, 121, 186, 202, 230, 157, 75, 27, 8, 81, 144, 108, 111, 95, 192, 114, 10, 41, 228, 229, 77, 93, 59, 210, 22, 213, 237, 22};
    const unsigned c_sz = 32;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 32;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test35)
{
    unsigned char msg_in[] = {78, 244, 224, 56, 76, 88, 137, 152, 214, 7, 211, 50, 152, 229, 227, 253, 211, 87, 9, 192, 84, 92, 220, 21, 180, 119, 181, 81, 168, 129, 122, 190, 36, 166, 21, 1, 190, 148, 16, 211, 7, 121, 226, 90, 164, 208, 208, 20, 86, 37, 135, 121, 186, 202, 230, 157, 75, 27, 8, 81, 144, 108, 111, 95, 192, 114, 10, 41, 228, 229, 77, 93, 59, 210, 22, 213, 237, 22};
    const unsigned msg_in_sz = 78;
    unsigned char r[] = {78, 244, 224, 56, 76, 88, 137, 152, 214, 7, 211, 50, 152, 229, 227, 253, 211, 87, 9, 192, 84, 92, 220, 21, 180, 119, 181, 81, 168, 129, 19, 190, 36, 166, 21, 1, 190, 148, 16, 211, 7, 121, 226, 90, 164, 208};
    const unsigned r_sz = 46;
    unsigned char c[] = {208, 20, 86, 37, 135, 121, 186, 202, 230, 157, 75, 27, 8, 81, 144, 108, 111, 95, 192, 114, 10, 41, 228, 229, 77, 93, 59, 210, 22, 213, 237, 22};
    const unsigned c_sz = 32;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 32;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test36)
{
    unsigned char msg_in[] = {78, 244, 224, 56, 76, 88, 137, 152, 214, 7, 211, 50, 152, 229, 227, 253, 211, 87, 9, 192, 84, 225, 220, 21, 180, 119, 181, 81, 168, 129, 122, 190, 36, 166, 21, 1, 190, 148, 16, 211, 7, 121, 226, 90, 164, 208, 208, 20, 86, 37, 135, 121, 186, 202, 230, 157, 75, 27, 8, 81, 144, 108, 111, 95, 192, 114, 10, 41, 228, 229, 77, 93, 59, 210, 22, 213, 237, 22};
    const unsigned msg_in_sz = 78;
    unsigned char r[] = {78, 244, 224, 56, 76, 88, 137, 152, 214, 7, 211, 50, 152, 229, 227, 253, 211, 87, 9, 192, 84, 92, 220, 21, 180, 119, 181, 81, 168, 129, 19, 190, 36, 166, 21, 1, 190, 148, 16, 211, 7, 121, 226, 90, 164, 208};
    const unsigned r_sz = 46;
    unsigned char c[] = {208, 20, 86, 37, 135, 121, 186, 202, 230, 157, 75, 27, 8, 81, 144, 108, 111, 95, 192, 114, 10, 41, 228, 229, 77, 93, 59, 210, 22, 213, 237, 22};
    const unsigned c_sz = 32;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 32;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test37)
{
    unsigned char msg_in[] = {78, 244, 224, 56, 76, 88, 42, 152, 214, 7, 211, 50, 152, 229, 227, 253, 211, 87, 9, 192, 84, 225, 220, 21, 180, 119, 181, 81, 168, 129, 122, 190, 36, 166, 21, 1, 190, 148, 16, 211, 7, 121, 226, 90, 164, 208, 208, 20, 86, 37, 135, 121, 186, 202, 230, 157, 75, 27, 8, 81, 144, 108, 111, 95, 192, 114, 10, 41, 228, 229, 77, 93, 59, 210, 22, 213, 237, 22};
    const unsigned msg_in_sz = 78;
    unsigned char r[] = {78, 244, 224, 56, 76, 88, 137, 152, 214, 7, 211, 50, 152, 229, 227, 253, 211, 87, 9, 192, 84, 92, 220, 21, 180, 119, 181, 81, 168, 129, 19, 190, 36, 166, 21, 1, 190, 148, 16, 211, 7, 121, 226, 90, 164, 208};
    const unsigned r_sz = 46;
    unsigned char c[] = {208, 20, 86, 37, 135, 121, 186, 202, 230, 157, 75, 27, 8, 81, 144, 108, 111, 95, 192, 114, 10, 41, 228, 229, 77, 93, 59, 210, 22, 213, 237, 22};
    const unsigned c_sz = 32;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 32;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test38)
{
    unsigned char msg_in[] = {78, 244, 224, 56, 141, 88, 42, 152, 214, 7, 211, 50, 152, 229, 227, 253, 211, 87, 9, 192, 84, 225, 220, 21, 180, 119, 181, 81, 168, 129, 122, 190, 36, 166, 21, 1, 190, 148, 16, 211, 7, 121, 226, 90, 164, 208, 208, 20, 86, 37, 135, 121, 186, 202, 230, 157, 75, 27, 8, 81, 144, 108, 111, 95, 192, 114, 10, 41, 228, 229, 77, 93, 59, 210, 22, 213, 237, 22};
    const unsigned msg_in_sz = 78;
    unsigned char r[] = {78, 244, 224, 56, 76, 88, 137, 152, 214, 7, 211, 50, 152, 229, 227, 253, 211, 87, 9, 192, 84, 92, 220, 21, 180, 119, 181, 81, 168, 129, 19, 190, 36, 166, 21, 1, 190, 148, 16, 211, 7, 121, 226, 90, 164, 208};
    const unsigned r_sz = 46;
    unsigned char c[] = {208, 20, 86, 37, 135, 121, 186, 202, 230, 157, 75, 27, 8, 81, 144, 108, 111, 95, 192, 114, 10, 41, 228, 229, 77, 93, 59, 210, 22, 213, 237, 22};
    const unsigned c_sz = 32;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 32;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test39)
{
    unsigned char msg_in[] = {78, 244, 224, 56, 141, 88, 42, 152, 214, 7, 211, 50, 152, 229, 227, 253, 211, 87, 9, 192, 84, 225, 220, 21, 180, 119, 181, 81, 168, 129, 122, 190, 36, 166, 21, 1, 190, 148, 16, 211, 7, 121, 226, 90, 164, 208, 208, 20, 86, 37, 135, 121, 186, 202, 101, 157, 75, 27, 8, 81, 144, 108, 111, 95, 192, 114, 10, 41, 228, 229, 77, 93, 59, 210, 22, 213, 237, 22};
    const unsigned msg_in_sz = 78;
    unsigned char r[] = {78, 244, 224, 56, 76, 88, 137, 152, 214, 7, 211, 50, 152, 229, 227, 253, 211, 87, 9, 192, 84, 92, 220, 21, 180, 119, 181, 81, 168, 129, 19, 190, 36, 166, 21, 1, 190, 148, 16, 211, 7, 121, 226, 90, 164, 208};
    const unsigned r_sz = 46;
    unsigned char c[] = {208, 20, 86, 37, 135, 121, 186, 202, 230, 157, 75, 27, 8, 81, 144, 108, 111, 95, 192, 114, 10, 41, 228, 229, 77, 93, 59, 210, 22, 213, 237, 22};
    const unsigned c_sz = 32;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 32;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test40)
{
    unsigned char msg_in[] = {78, 244, 224, 56, 141, 88, 42, 152, 214, 7, 211, 50, 152, 229, 227, 74, 211, 87, 9, 192, 84, 225, 220, 21, 180, 119, 181, 81, 168, 129, 122, 190, 36, 166, 21, 1, 190, 148, 16, 211, 7, 121, 226, 90, 164, 208, 208, 20, 86, 37, 135, 121, 186, 202, 101, 157, 75, 27, 8, 81, 144, 108, 111, 95, 192, 114, 10, 41, 228, 229, 77, 93, 59, 210, 22, 213, 237, 22};
    const unsigned msg_in_sz = 78;
    unsigned char r[] = {78, 244, 224, 56, 76, 88, 137, 152, 214, 7, 211, 50, 152, 229, 227, 253, 211, 87, 9, 192, 84, 92, 220, 21, 180, 119, 181, 81, 168, 129, 19, 190, 36, 166, 21, 1, 190, 148, 16, 211, 7, 121, 226, 90, 164, 208};
    const unsigned r_sz = 46;
    unsigned char c[] = {208, 20, 86, 37, 135, 121, 186, 202, 230, 157, 75, 27, 8, 81, 144, 108, 111, 95, 192, 114, 10, 41, 228, 229, 77, 93, 59, 210, 22, 213, 237, 22};
    const unsigned c_sz = 32;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 32;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test41)
{
    unsigned char msg_in[] = {78, 244, 224, 56, 141, 88, 42, 152, 214, 7, 211, 50, 152, 229, 227, 74, 211, 87, 9, 192, 241, 225, 220, 21, 180, 119, 181, 81, 168, 129, 122, 190, 36, 166, 21, 1, 190, 148, 16, 211, 7, 121, 226, 90, 164, 208, 208, 20, 86, 37, 135, 121, 186, 202, 101, 157, 75, 27, 8, 81, 144, 108, 111, 95, 192, 114, 10, 41, 228, 229, 77, 93, 59, 210, 22, 213, 237, 22};
    const unsigned msg_in_sz = 78;
    unsigned char r[] = {78, 244, 224, 56, 76, 88, 137, 152, 214, 7, 211, 50, 152, 229, 227, 253, 211, 87, 9, 192, 84, 92, 220, 21, 180, 119, 181, 81, 168, 129, 19, 190, 36, 166, 21, 1, 190, 148, 16, 211, 7, 121, 226, 90, 164, 208};
    const unsigned r_sz = 46;
    unsigned char c[] = {208, 20, 86, 37, 135, 121, 186, 202, 230, 157, 75, 27, 8, 81, 144, 108, 111, 95, 192, 114, 10, 41, 228, 229, 77, 93, 59, 210, 22, 213, 237, 22};
    const unsigned c_sz = 32;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 32;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test42)
{
    unsigned char msg_in[] = {78, 244, 224, 56, 141, 88, 42, 152, 214, 7, 211, 50, 152, 229, 227, 74, 211, 87, 9, 192, 241, 225, 220, 21, 180, 119, 181, 81, 168, 129, 122, 190, 36, 166, 21, 1, 190, 148, 16, 211, 7, 121, 226, 217, 164, 208, 208, 20, 86, 37, 135, 121, 186, 202, 101, 157, 75, 27, 8, 81, 144, 108, 111, 95, 192, 114, 10, 41, 228, 229, 77, 93, 59, 210, 22, 213, 237, 22};
    const unsigned msg_in_sz = 78;
    unsigned char r[] = {78, 244, 224, 56, 76, 88, 137, 152, 214, 7, 211, 50, 152, 229, 227, 253, 211, 87, 9, 192, 84, 92, 220, 21, 180, 119, 181, 81, 168, 129, 19, 190, 36, 166, 21, 1, 190, 148, 16, 211, 7, 121, 226, 90, 164, 208};
    const unsigned r_sz = 46;
    unsigned char c[] = {208, 20, 86, 37, 135, 121, 186, 202, 230, 157, 75, 27, 8, 81, 144, 108, 111, 95, 192, 114, 10, 41, 228, 229, 77, 93, 59, 210, 22, 213, 237, 22};
    const unsigned c_sz = 32;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 32;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test43)
{
    unsigned char msg_in[] = {78, 244, 224, 56, 141, 88, 42, 152, 214, 7, 211, 50, 152, 229, 227, 74, 211, 87, 9, 192, 241, 225, 220, 21, 180, 119, 181, 81, 168, 129, 122, 190, 36, 166, 21, 1, 190, 148, 16, 211, 7, 121, 226, 217, 164, 208, 208, 20, 86, 37, 135, 121, 186, 202, 101, 157, 75, 27, 8, 81, 144, 155, 111, 95, 192, 114, 10, 41, 228, 229, 77, 93, 59, 210, 22, 213, 237, 22};
    const unsigned msg_in_sz = 78;
    unsigned char r[] = {78, 244, 224, 56, 76, 88, 137, 152, 214, 7, 211, 50, 152, 229, 227, 253, 211, 87, 9, 192, 84, 92, 220, 21, 180, 119, 181, 81, 168, 129, 19, 190, 36, 166, 21, 1, 190, 148, 16, 211, 7, 121, 226, 90, 164, 208};
    const unsigned r_sz = 46;
    unsigned char c[] = {208, 20, 86, 37, 135, 121, 186, 202, 230, 157, 75, 27, 8, 81, 144, 108, 111, 95, 192, 114, 10, 41, 228, 229, 77, 93, 59, 210, 22, 213, 237, 22};
    const unsigned c_sz = 32;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 32;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test44)
{
    unsigned char msg_in[] = {78, 244, 224, 56, 141, 88, 42, 152, 214, 7, 211, 50, 152, 229, 227, 74, 211, 87, 9, 192, 241, 225, 220, 21, 180, 119, 181, 81, 168, 129, 122, 190, 36, 166, 21, 1, 190, 148, 16, 211, 7, 121, 134, 217, 164, 208, 208, 20, 86, 37, 135, 121, 186, 202, 101, 157, 75, 27, 8, 81, 144, 155, 111, 95, 192, 114, 10, 41, 228, 229, 77, 93, 59, 210, 22, 213, 237, 22};
    const unsigned msg_in_sz = 78;
    unsigned char r[] = {78, 244, 224, 56, 76, 88, 137, 152, 214, 7, 211, 50, 152, 229, 227, 253, 211, 87, 9, 192, 84, 92, 220, 21, 180, 119, 181, 81, 168, 129, 19, 190, 36, 166, 21, 1, 190, 148, 16, 211, 7, 121, 226, 90, 164, 208};
    const unsigned r_sz = 46;
    unsigned char c[] = {208, 20, 86, 37, 135, 121, 186, 202, 230, 157, 75, 27, 8, 81, 144, 108, 111, 95, 192, 114, 10, 41, 228, 229, 77, 93, 59, 210, 22, 213, 237, 22};
    const unsigned c_sz = 32;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 32;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test45)
{
    unsigned char msg_in[] = {78, 244, 224, 56, 141, 88, 42, 152, 48, 7, 211, 50, 152, 229, 227, 74, 211, 87, 9, 192, 241, 225, 220, 21, 180, 119, 181, 81, 168, 129, 122, 190, 36, 166, 21, 1, 190, 148, 16, 211, 7, 121, 134, 217, 164, 208, 208, 20, 86, 37, 135, 121, 186, 202, 101, 157, 75, 27, 8, 81, 144, 155, 111, 95, 192, 114, 10, 41, 228, 229, 77, 93, 59, 210, 22, 213, 237, 22};
    const unsigned msg_in_sz = 78;
    unsigned char r[] = {78, 244, 224, 56, 76, 88, 137, 152, 214, 7, 211, 50, 152, 229, 227, 253, 211, 87, 9, 192, 84, 92, 220, 21, 180, 119, 181, 81, 168, 129, 19, 190, 36, 166, 21, 1, 190, 148, 16, 211, 7, 121, 226, 90, 164, 208};
    const unsigned r_sz = 46;
    unsigned char c[] = {208, 20, 86, 37, 135, 121, 186, 202, 230, 157, 75, 27, 8, 81, 144, 108, 111, 95, 192, 114, 10, 41, 228, 229, 77, 93, 59, 210, 22, 213, 237, 22};
    const unsigned c_sz = 32;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 32;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test46)
{
    unsigned char msg_in[] = {78, 244, 224, 56, 141, 88, 42, 152, 48, 7, 211, 50, 152, 229, 227, 74, 211, 87, 9, 192, 241, 225, 220, 21, 180, 119, 181, 81, 168, 129, 122, 190, 36, 166, 21, 1, 190, 79, 16, 211, 7, 121, 134, 217, 164, 208, 208, 20, 86, 37, 135, 121, 186, 202, 101, 157, 75, 27, 8, 81, 144, 155, 111, 95, 192, 114, 10, 41, 228, 229, 77, 93, 59, 210, 22, 213, 237, 22};
    const unsigned msg_in_sz = 78;
    unsigned char r[] = {78, 244, 224, 56, 76, 88, 137, 152, 214, 7, 211, 50, 152, 229, 227, 253, 211, 87, 9, 192, 84, 92, 220, 21, 180, 119, 181, 81, 168, 129, 19, 190, 36, 166, 21, 1, 190, 148, 16, 211, 7, 121, 226, 90, 164, 208};
    const unsigned r_sz = 46;
    unsigned char c[] = {208, 20, 86, 37, 135, 121, 186, 202, 230, 157, 75, 27, 8, 81, 144, 108, 111, 95, 192, 114, 10, 41, 228, 229, 77, 93, 59, 210, 22, 213, 237, 22};
    const unsigned c_sz = 32;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 32;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test47)
{
    unsigned char msg_in[] = {78, 244, 224, 56, 141, 88, 42, 152, 48, 7, 211, 50, 152, 229, 227, 74, 211, 87, 9, 192, 241, 225, 220, 21, 180, 119, 181, 81, 168, 129, 122, 190, 36, 166, 21, 1, 190, 79, 16, 211, 7, 121, 134, 217, 164, 208, 208, 20, 86, 37, 135, 121, 186, 202, 101, 157, 75, 27, 8, 81, 144, 155, 111, 95, 192, 114, 10, 41, 228, 229, 77, 93, 59, 210, 22, 152, 237, 22};
    const unsigned msg_in_sz = 78;
    unsigned char r[] = {78, 244, 224, 56, 76, 88, 137, 152, 214, 7, 211, 50, 152, 229, 227, 253, 211, 87, 9, 192, 84, 92, 220, 21, 180, 119, 181, 81, 168, 129, 19, 190, 36, 166, 21, 1, 190, 148, 16, 211, 7, 121, 226, 90, 164, 208};
    const unsigned r_sz = 46;
    unsigned char c[] = {208, 20, 86, 37, 135, 121, 186, 202, 230, 157, 75, 27, 8, 81, 144, 108, 111, 95, 192, 114, 10, 41, 228, 229, 77, 93, 59, 210, 22, 213, 237, 22};
    const unsigned c_sz = 32;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 32;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test48)
{
    unsigned char msg_in[] = {78, 244, 225, 56, 141, 88, 42, 152, 48, 7, 211, 50, 152, 229, 227, 74, 211, 87, 9, 192, 241, 225, 220, 21, 180, 119, 181, 81, 168, 129, 122, 190, 36, 166, 21, 1, 190, 79, 16, 211, 7, 121, 134, 217, 164, 208, 208, 20, 86, 37, 135, 121, 186, 202, 101, 157, 75, 27, 8, 81, 144, 155, 111, 95, 192, 114, 10, 41, 228, 229, 77, 93, 59, 210, 22, 152, 237, 22};
    const unsigned msg_in_sz = 78;
    unsigned char r[] = {78, 244, 224, 56, 76, 88, 137, 152, 214, 7, 211, 50, 152, 229, 227, 253, 211, 87, 9, 192, 84, 92, 220, 21, 180, 119, 181, 81, 168, 129, 19, 190, 36, 166, 21, 1, 190, 148, 16, 211, 7, 121, 226, 90, 164, 208};
    const unsigned r_sz = 46;
    unsigned char c[] = {208, 20, 86, 37, 135, 121, 186, 202, 230, 157, 75, 27, 8, 81, 144, 108, 111, 95, 192, 114, 10, 41, 228, 229, 77, 93, 59, 210, 22, 213, 237, 22};
    const unsigned c_sz = 32;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 32;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test49)
{
    unsigned char msg_in[] = {78, 244, 225, 56, 141, 88, 42, 152, 48, 7, 211, 96, 152, 229, 227, 74, 211, 87, 9, 192, 241, 225, 220, 21, 180, 119, 181, 81, 168, 129, 122, 190, 36, 166, 21, 1, 190, 79, 16, 211, 7, 121, 134, 217, 164, 208, 208, 20, 86, 37, 135, 121, 186, 202, 101, 157, 75, 27, 8, 81, 144, 155, 111, 95, 192, 114, 10, 41, 228, 229, 77, 93, 59, 210, 22, 152, 237, 22};
    const unsigned msg_in_sz = 78;
    unsigned char r[] = {78, 244, 224, 56, 76, 88, 137, 152, 214, 7, 211, 50, 152, 229, 227, 253, 211, 87, 9, 192, 84, 92, 220, 21, 180, 119, 181, 81, 168, 129, 19, 190, 36, 166, 21, 1, 190, 148, 16, 211, 7, 121, 226, 90, 164, 208};
    const unsigned r_sz = 46;
    unsigned char c[] = {208, 20, 86, 37, 135, 121, 186, 202, 230, 157, 75, 27, 8, 81, 144, 108, 111, 95, 192, 114, 10, 41, 228, 229, 77, 93, 59, 210, 22, 213, 237, 22};
    const unsigned c_sz = 32;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 32;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test50)
{
    unsigned char msg_in[] = {78, 244, 225, 56, 141, 88, 42, 152, 48, 7, 211, 96, 152, 229, 199, 74, 211, 87, 9, 192, 241, 225, 220, 21, 180, 119, 181, 81, 168, 129, 122, 190, 36, 166, 21, 1, 190, 79, 16, 211, 7, 121, 134, 217, 164, 208, 208, 20, 86, 37, 135, 121, 186, 202, 101, 157, 75, 27, 8, 81, 144, 155, 111, 95, 192, 114, 10, 41, 228, 229, 77, 93, 59, 210, 22, 152, 237, 22};
    const unsigned msg_in_sz = 78;
    unsigned char r[] = {78, 244, 224, 56, 76, 88, 137, 152, 214, 7, 211, 50, 152, 229, 227, 253, 211, 87, 9, 192, 84, 92, 220, 21, 180, 119, 181, 81, 168, 129, 19, 190, 36, 166, 21, 1, 190, 148, 16, 211, 7, 121, 226, 90, 164, 208};
    const unsigned r_sz = 46;
    unsigned char c[] = {208, 20, 86, 37, 135, 121, 186, 202, 230, 157, 75, 27, 8, 81, 144, 108, 111, 95, 192, 114, 10, 41, 228, 229, 77, 93, 59, 210, 22, 213, 237, 22};
    const unsigned c_sz = 32;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 32;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test51)
{
    unsigned char msg_in[] = {128, 91, 71, 130, 136, 190, 226, 69, 125, 10, 124, 248, 14, 172, 238, 227, 144, 70, 39, 133, 176, 114, 84, 175, 160, 39, 12, 211, 132, 162, 178, 233, 239, 235, 100, 2, 220, 184, 204, 7, 2, 207, 219, 192, 238, 18, 186, 80, 13, 0, 121, 69, 79, 12, 252, 23, 22, 155, 77, 74, 31, 206, 164, 7, 54, 40, 118, 116, 157, 5, 42, 242, 21, 248, 151, 185, 110, 42, 184, 160, 235, 184, 41, 161, 209, 137, 124, 196, 172, 107, 130, 97, 109, 210, 62, 7, 219, 253, 132, 234, 228, 34, 100, 248, 188, 178, 172, 83, 233, 223, 160, 218, 184, 35, 178, 213, 125, 245, 71, 101, 124, 151, 45, 201, 169, 244, 27, 198, 115, 183, 202, 6, 32, 7, 150, 64, 132, 65, 230, 255, 211, 198, 35, 24, 28, 192, 133, 228, 131, 217, 186, 35, 213, 151, 122, 182};
    const unsigned msg_in_sz = 156;
    unsigned char r[] = {128, 91, 71, 130, 136, 190, 226, 69, 125, 10, 124, 248, 14, 172, 238, 227, 144, 70, 39, 133, 176, 114, 84, 175, 160, 39, 12, 211, 132, 162, 178, 233, 239, 235, 100, 2, 220, 184, 204, 7, 2, 207, 219, 192, 238, 18, 186, 80, 13, 0, 121, 69, 79, 12, 252, 23, 22, 155, 77, 74, 31, 206, 164, 7, 54, 40, 118, 116, 157, 5, 42, 242, 21, 248, 151, 185, 110, 42, 184, 160, 235, 184, 41, 161, 209, 137, 124, 196, 172, 107, 130, 97, 109, 210, 62, 7, 219, 253, 132, 234, 228, 34, 100, 248, 188, 178, 172, 83, 233, 223, 160, 218, 184, 35, 178, 213, 125, 245, 71, 101, 124, 151, 45, 201};
    const unsigned r_sz = 124;
    unsigned char c[] = {169, 244, 27, 198, 115, 183, 202, 6, 32, 7, 150, 64, 132, 65, 230, 255, 211, 198, 35, 24, 28, 192, 133, 228, 131, 217, 186, 35, 213, 151, 122, 182};
    const unsigned c_sz = 32;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 32;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test52)
{
    unsigned char msg_in[] = {128, 91, 71, 130, 136, 190, 226, 69, 125, 10, 124, 248, 14, 172, 238, 227, 144, 70, 39, 133, 176, 102, 84, 175, 160, 39, 12, 211, 132, 162, 178, 233, 239, 235, 100, 2, 220, 184, 204, 7, 2, 207, 219, 192, 238, 18, 186, 80, 13, 0, 121, 69, 79, 12, 252, 23, 22, 155, 77, 74, 31, 206, 164, 7, 54, 40, 118, 116, 157, 5, 42, 242, 21, 248, 151, 185, 110, 42, 184, 160, 235, 184, 41, 161, 209, 137, 124, 196, 172, 107, 130, 97, 109, 210, 62, 7, 219, 253, 132, 234, 228, 34, 100, 248, 188, 178, 172, 83, 233, 223, 160, 218, 184, 35, 178, 213, 125, 245, 71, 101, 124, 151, 45, 201, 169, 244, 27, 198, 115, 183, 202, 6, 32, 7, 150, 64, 132, 65, 230, 255, 211, 198, 35, 24, 28, 192, 133, 228, 131, 217, 186, 35, 213, 151, 122, 182};
    const unsigned msg_in_sz = 156;
    unsigned char r[] = {128, 91, 71, 130, 136, 190, 226, 69, 125, 10, 124, 248, 14, 172, 238, 227, 144, 70, 39, 133, 176, 114, 84, 175, 160, 39, 12, 211, 132, 162, 178, 233, 239, 235, 100, 2, 220, 184, 204, 7, 2, 207, 219, 192, 238, 18, 186, 80, 13, 0, 121, 69, 79, 12, 252, 23, 22, 155, 77, 74, 31, 206, 164, 7, 54, 40, 118, 116, 157, 5, 42, 242, 21, 248, 151, 185, 110, 42, 184, 160, 235, 184, 41, 161, 209, 137, 124, 196, 172, 107, 130, 97, 109, 210, 62, 7, 219, 253, 132, 234, 228, 34, 100, 248, 188, 178, 172, 83, 233, 223, 160, 218, 184, 35, 178, 213, 125, 245, 71, 101, 124, 151, 45, 201};
    const unsigned r_sz = 124;
    unsigned char c[] = {169, 244, 27, 198, 115, 183, 202, 6, 32, 7, 150, 64, 132, 65, 230, 255, 211, 198, 35, 24, 28, 192, 133, 228, 131, 217, 186, 35, 213, 151, 122, 182};
    const unsigned c_sz = 32;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 32;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test53)
{
    unsigned char msg_in[] = {128, 91, 71, 130, 136, 190, 226, 69, 125, 10, 124, 248, 14, 172, 238, 227, 144, 70, 39, 133, 176, 102, 84, 175, 160, 39, 12, 211, 132, 162, 178, 233, 239, 235, 100, 2, 220, 184, 204, 7, 2, 207, 219, 192, 238, 18, 186, 80, 13, 0, 121, 69, 79, 12, 252, 23, 22, 155, 77, 74, 31, 206, 164, 7, 54, 40, 118, 116, 157, 5, 42, 242, 21, 248, 151, 185, 110, 42, 184, 160, 235, 184, 41, 161, 209, 137, 124, 196, 172, 107, 130, 97, 109, 210, 62, 7, 219, 253, 132, 234, 228, 34, 100, 248, 188, 178, 172, 83, 233, 223, 160, 218, 184, 35, 178, 213, 125, 245, 71, 101, 124, 151, 45, 201, 169, 244, 27, 198, 115, 183, 202, 6, 32, 7, 150, 64, 132, 65, 230, 255, 211, 198, 35, 24, 28, 192, 133, 228, 131, 217, 133, 35, 213, 151, 122, 182};
    const unsigned msg_in_sz = 156;
    unsigned char r[] = {128, 91, 71, 130, 136, 190, 226, 69, 125, 10, 124, 248, 14, 172, 238, 227, 144, 70, 39, 133, 176, 114, 84, 175, 160, 39, 12, 211, 132, 162, 178, 233, 239, 235, 100, 2, 220, 184, 204, 7, 2, 207, 219, 192, 238, 18, 186, 80, 13, 0, 121, 69, 79, 12, 252, 23, 22, 155, 77, 74, 31, 206, 164, 7, 54, 40, 118, 116, 157, 5, 42, 242, 21, 248, 151, 185, 110, 42, 184, 160, 235, 184, 41, 161, 209, 137, 124, 196, 172, 107, 130, 97, 109, 210, 62, 7, 219, 253, 132, 234, 228, 34, 100, 248, 188, 178, 172, 83, 233, 223, 160, 218, 184, 35, 178, 213, 125, 245, 71, 101, 124, 151, 45, 201};
    const unsigned r_sz = 124;
    unsigned char c[] = {169, 244, 27, 198, 115, 183, 202, 6, 32, 7, 150, 64, 132, 65, 230, 255, 211, 198, 35, 24, 28, 192, 133, 228, 131, 217, 186, 35, 213, 151, 122, 182};
    const unsigned c_sz = 32;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 32;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test54)
{
    unsigned char msg_in[] = {128, 91, 71, 130, 136, 190, 226, 69, 125, 10, 124, 248, 14, 172, 238, 227, 144, 70, 39, 133, 176, 102, 84, 175, 160, 39, 12, 211, 132, 162, 178, 233, 239, 235, 100, 2, 220, 184, 204, 7, 2, 207, 219, 192, 238, 18, 186, 80, 13, 0, 121, 69, 79, 12, 252, 23, 22, 155, 77, 74, 31, 206, 164, 7, 54, 40, 118, 116, 157, 5, 42, 242, 21, 248, 151, 185, 110, 42, 184, 160, 235, 184, 41, 161, 15, 137, 124, 196, 172, 107, 130, 97, 109, 210, 62, 7, 219, 253, 132, 234, 228, 34, 100, 248, 188, 178, 172, 83, 233, 223, 160, 218, 184, 35, 178, 213, 125, 245, 71, 101, 124, 151, 45, 201, 169, 244, 27, 198, 115, 183, 202, 6, 32, 7, 150, 64, 132, 65, 230, 255, 211, 198, 35, 24, 28, 192, 133, 228, 131, 217, 133, 35, 213, 151, 122, 182};
    const unsigned msg_in_sz = 156;
    unsigned char r[] = {128, 91, 71, 130, 136, 190, 226, 69, 125, 10, 124, 248, 14, 172, 238, 227, 144, 70, 39, 133, 176, 114, 84, 175, 160, 39, 12, 211, 132, 162, 178, 233, 239, 235, 100, 2, 220, 184, 204, 7, 2, 207, 219, 192, 238, 18, 186, 80, 13, 0, 121, 69, 79, 12, 252, 23, 22, 155, 77, 74, 31, 206, 164, 7, 54, 40, 118, 116, 157, 5, 42, 242, 21, 248, 151, 185, 110, 42, 184, 160, 235, 184, 41, 161, 209, 137, 124, 196, 172, 107, 130, 97, 109, 210, 62, 7, 219, 253, 132, 234, 228, 34, 100, 248, 188, 178, 172, 83, 233, 223, 160, 218, 184, 35, 178, 213, 125, 245, 71, 101, 124, 151, 45, 201};
    const unsigned r_sz = 124;
    unsigned char c[] = {169, 244, 27, 198, 115, 183, 202, 6, 32, 7, 150, 64, 132, 65, 230, 255, 211, 198, 35, 24, 28, 192, 133, 228, 131, 217, 186, 35, 213, 151, 122, 182};
    const unsigned c_sz = 32;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 32;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test55)
{
    unsigned char msg_in[] = {128, 91, 71, 130, 136, 190, 226, 69, 125, 10, 124, 248, 14, 172, 238, 227, 144, 70, 39, 133, 176, 102, 84, 175, 160, 39, 12, 211, 132, 162, 178, 233, 239, 235, 100, 2, 220, 184, 204, 7, 2, 207, 219, 192, 238, 18, 186, 80, 13, 0, 121, 69, 79, 12, 252, 23, 22, 155, 77, 74, 31, 206, 164, 7, 54, 40, 118, 116, 157, 5, 42, 242, 21, 248, 151, 185, 110, 42, 184, 57, 235, 184, 41, 161, 15, 137, 124, 196, 172, 107, 130, 97, 109, 210, 62, 7, 219, 253, 132, 234, 228, 34, 100, 248, 188, 178, 172, 83, 233, 223, 160, 218, 184, 35, 178, 213, 125, 245, 71, 101, 124, 151, 45, 201, 169, 244, 27, 198, 115, 183, 202, 6, 32, 7, 150, 64, 132, 65, 230, 255, 211, 198, 35, 24, 28, 192, 133, 228, 131, 217, 133, 35, 213, 151, 122, 182};
    const unsigned msg_in_sz = 156;
    unsigned char r[] = {128, 91, 71, 130, 136, 190, 226, 69, 125, 10, 124, 248, 14, 172, 238, 227, 144, 70, 39, 133, 176, 114, 84, 175, 160, 39, 12, 211, 132, 162, 178, 233, 239, 235, 100, 2, 220, 184, 204, 7, 2, 207, 219, 192, 238, 18, 186, 80, 13, 0, 121, 69, 79, 12, 252, 23, 22, 155, 77, 74, 31, 206, 164, 7, 54, 40, 118, 116, 157, 5, 42, 242, 21, 248, 151, 185, 110, 42, 184, 160, 235, 184, 41, 161, 209, 137, 124, 196, 172, 107, 130, 97, 109, 210, 62, 7, 219, 253, 132, 234, 228, 34, 100, 248, 188, 178, 172, 83, 233, 223, 160, 218, 184, 35, 178, 213, 125, 245, 71, 101, 124, 151, 45, 201};
    const unsigned r_sz = 124;
    unsigned char c[] = {169, 244, 27, 198, 115, 183, 202, 6, 32, 7, 150, 64, 132, 65, 230, 255, 211, 198, 35, 24, 28, 192, 133, 228, 131, 217, 186, 35, 213, 151, 122, 182};
    const unsigned c_sz = 32;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 32;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test56)
{
    unsigned char msg_in[] = {128, 91, 71, 130, 136, 190, 226, 69, 125, 10, 124, 248, 14, 172, 238, 227, 144, 70, 39, 133, 176, 102, 84, 175, 160, 39, 12, 211, 132, 162, 178, 233, 239, 235, 100, 2, 220, 184, 204, 7, 2, 207, 219, 192, 238, 18, 186, 80, 13, 0, 121, 69, 79, 12, 252, 23, 22, 155, 77, 74, 31, 206, 164, 7, 54, 40, 118, 116, 157, 5, 42, 242, 21, 248, 151, 185, 110, 42, 184, 57, 235, 184, 41, 161, 15, 137, 124, 196, 172, 107, 130, 97, 109, 210, 62, 7, 219, 253, 132, 234, 228, 34, 100, 248, 188, 178, 172, 83, 233, 223, 160, 218, 184, 35, 178, 213, 125, 245, 71, 101, 124, 151, 45, 201, 169, 244, 27, 198, 115, 183, 202, 6, 32, 177, 150, 64, 132, 65, 230, 255, 211, 198, 35, 24, 28, 192, 133, 228, 131, 217, 133, 35, 213, 151, 122, 182};
    const unsigned msg_in_sz = 156;
    unsigned char r[] = {128, 91, 71, 130, 136, 190, 226, 69, 125, 10, 124, 248, 14, 172, 238, 227, 144, 70, 39, 133, 176, 114, 84, 175, 160, 39, 12, 211, 132, 162, 178, 233, 239, 235, 100, 2, 220, 184, 204, 7, 2, 207, 219, 192, 238, 18, 186, 80, 13, 0, 121, 69, 79, 12, 252, 23, 22, 155, 77, 74, 31, 206, 164, 7, 54, 40, 118, 116, 157, 5, 42, 242, 21, 248, 151, 185, 110, 42, 184, 160, 235, 184, 41, 161, 209, 137, 124, 196, 172, 107, 130, 97, 109, 210, 62, 7, 219, 253, 132, 234, 228, 34, 100, 248, 188, 178, 172, 83, 233, 223, 160, 218, 184, 35, 178, 213, 125, 245, 71, 101, 124, 151, 45, 201};
    const unsigned r_sz = 124;
    unsigned char c[] = {169, 244, 27, 198, 115, 183, 202, 6, 32, 7, 150, 64, 132, 65, 230, 255, 211, 198, 35, 24, 28, 192, 133, 228, 131, 217, 186, 35, 213, 151, 122, 182};
    const unsigned c_sz = 32;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 32;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test57)
{
    unsigned char msg_in[] = {128, 91, 71, 130, 136, 190, 226, 69, 125, 10, 124, 248, 14, 172, 238, 227, 144, 70, 39, 133, 176, 102, 84, 175, 160, 39, 12, 211, 132, 162, 178, 233, 239, 235, 100, 2, 220, 184, 204, 7, 2, 207, 219, 218, 238, 18, 186, 80, 13, 0, 121, 69, 79, 12, 252, 23, 22, 155, 77, 74, 31, 206, 164, 7, 54, 40, 118, 116, 157, 5, 42, 242, 21, 248, 151, 185, 110, 42, 184, 57, 235, 184, 41, 161, 15, 137, 124, 196, 172, 107, 130, 97, 109, 210, 62, 7, 219, 253, 132, 234, 228, 34, 100, 248, 188, 178, 172, 83, 233, 223, 160, 218, 184, 35, 178, 213, 125, 245, 71, 101, 124, 151, 45, 201, 169, 244, 27, 198, 115, 183, 202, 6, 32, 177, 150, 64, 132, 65, 230, 255, 211, 198, 35, 24, 28, 192, 133, 228, 131, 217, 133, 35, 213, 151, 122, 182};
    const unsigned msg_in_sz = 156;
    unsigned char r[] = {128, 91, 71, 130, 136, 190, 226, 69, 125, 10, 124, 248, 14, 172, 238, 227, 144, 70, 39, 133, 176, 114, 84, 175, 160, 39, 12, 211, 132, 162, 178, 233, 239, 235, 100, 2, 220, 184, 204, 7, 2, 207, 219, 192, 238, 18, 186, 80, 13, 0, 121, 69, 79, 12, 252, 23, 22, 155, 77, 74, 31, 206, 164, 7, 54, 40, 118, 116, 157, 5, 42, 242, 21, 248, 151, 185, 110, 42, 184, 160, 235, 184, 41, 161, 209, 137, 124, 196, 172, 107, 130, 97, 109, 210, 62, 7, 219, 253, 132, 234, 228, 34, 100, 248, 188, 178, 172, 83, 233, 223, 160, 218, 184, 35, 178, 213, 125, 245, 71, 101, 124, 151, 45, 201};
    const unsigned r_sz = 124;
    unsigned char c[] = {169, 244, 27, 198, 115, 183, 202, 6, 32, 7, 150, 64, 132, 65, 230, 255, 211, 198, 35, 24, 28, 192, 133, 228, 131, 217, 186, 35, 213, 151, 122, 182};
    const unsigned c_sz = 32;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 32;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test58)
{
    unsigned char msg_in[] = {128, 91, 71, 130, 136, 190, 226, 69, 125, 10, 124, 248, 14, 172, 238, 227, 144, 70, 39, 133, 176, 102, 84, 175, 160, 39, 12, 211, 132, 162, 178, 233, 239, 235, 100, 2, 220, 184, 204, 7, 2, 207, 219, 218, 238, 18, 186, 80, 13, 0, 121, 69, 79, 12, 252, 23, 22, 155, 77, 74, 31, 206, 164, 7, 54, 40, 118, 116, 157, 5, 42, 242, 21, 248, 151, 185, 110, 42, 184, 57, 235, 136, 41, 161, 15, 137, 124, 196, 172, 107, 130, 97, 109, 210, 62, 7, 219, 253, 132, 234, 228, 34, 100, 248, 188, 178, 172, 83, 233, 223, 160, 218, 184, 35, 178, 213, 125, 245, 71, 101, 124, 151, 45, 201, 169, 244, 27, 198, 115, 183, 202, 6, 32, 177, 150, 64, 132, 65, 230, 255, 211, 198, 35, 24, 28, 192, 133, 228, 131, 217, 133, 35, 213, 151, 122, 182};
    const unsigned msg_in_sz = 156;
    unsigned char r[] = {128, 91, 71, 130, 136, 190, 226, 69, 125, 10, 124, 248, 14, 172, 238, 227, 144, 70, 39, 133, 176, 114, 84, 175, 160, 39, 12, 211, 132, 162, 178, 233, 239, 235, 100, 2, 220, 184, 204, 7, 2, 207, 219, 192, 238, 18, 186, 80, 13, 0, 121, 69, 79, 12, 252, 23, 22, 155, 77, 74, 31, 206, 164, 7, 54, 40, 118, 116, 157, 5, 42, 242, 21, 248, 151, 185, 110, 42, 184, 160, 235, 184, 41, 161, 209, 137, 124, 196, 172, 107, 130, 97, 109, 210, 62, 7, 219, 253, 132, 234, 228, 34, 100, 248, 188, 178, 172, 83, 233, 223, 160, 218, 184, 35, 178, 213, 125, 245, 71, 101, 124, 151, 45, 201};
    const unsigned r_sz = 124;
    unsigned char c[] = {169, 244, 27, 198, 115, 183, 202, 6, 32, 7, 150, 64, 132, 65, 230, 255, 211, 198, 35, 24, 28, 192, 133, 228, 131, 217, 186, 35, 213, 151, 122, 182};
    const unsigned c_sz = 32;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 32;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test59)
{
    unsigned char msg_in[] = {128, 91, 71, 130, 136, 190, 226, 69, 125, 10, 124, 248, 14, 172, 238, 227, 144, 70, 39, 133, 176, 102, 84, 175, 160, 39, 12, 211, 132, 162, 178, 233, 121, 235, 100, 2, 220, 184, 204, 7, 2, 207, 219, 218, 238, 18, 186, 80, 13, 0, 121, 69, 79, 12, 252, 23, 22, 155, 77, 74, 31, 206, 164, 7, 54, 40, 118, 116, 157, 5, 42, 242, 21, 248, 151, 185, 110, 42, 184, 57, 235, 136, 41, 161, 15, 137, 124, 196, 172, 107, 130, 97, 109, 210, 62, 7, 219, 253, 132, 234, 228, 34, 100, 248, 188, 178, 172, 83, 233, 223, 160, 218, 184, 35, 178, 213, 125, 245, 71, 101, 124, 151, 45, 201, 169, 244, 27, 198, 115, 183, 202, 6, 32, 177, 150, 64, 132, 65, 230, 255, 211, 198, 35, 24, 28, 192, 133, 228, 131, 217, 133, 35, 213, 151, 122, 182};
    const unsigned msg_in_sz = 156;
    unsigned char r[] = {128, 91, 71, 130, 136, 190, 226, 69, 125, 10, 124, 248, 14, 172, 238, 227, 144, 70, 39, 133, 176, 114, 84, 175, 160, 39, 12, 211, 132, 162, 178, 233, 239, 235, 100, 2, 220, 184, 204, 7, 2, 207, 219, 192, 238, 18, 186, 80, 13, 0, 121, 69, 79, 12, 252, 23, 22, 155, 77, 74, 31, 206, 164, 7, 54, 40, 118, 116, 157, 5, 42, 242, 21, 248, 151, 185, 110, 42, 184, 160, 235, 184, 41, 161, 209, 137, 124, 196, 172, 107, 130, 97, 109, 210, 62, 7, 219, 253, 132, 234, 228, 34, 100, 248, 188, 178, 172, 83, 233, 223, 160, 218, 184, 35, 178, 213, 125, 245, 71, 101, 124, 151, 45, 201};
    const unsigned r_sz = 124;
    unsigned char c[] = {169, 244, 27, 198, 115, 183, 202, 6, 32, 7, 150, 64, 132, 65, 230, 255, 211, 198, 35, 24, 28, 192, 133, 228, 131, 217, 186, 35, 213, 151, 122, 182};
    const unsigned c_sz = 32;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 32;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test60)
{
    unsigned char msg_in[] = {128, 91, 71, 130, 136, 190, 226, 69, 125, 10, 124, 248, 14, 172, 238, 227, 144, 70, 39, 133, 176, 102, 84, 175, 160, 39, 12, 211, 132, 162, 178, 233, 121, 240, 100, 2, 220, 184, 204, 7, 2, 207, 219, 218, 238, 18, 186, 80, 13, 0, 121, 69, 79, 12, 252, 23, 22, 155, 77, 74, 31, 206, 164, 7, 54, 40, 118, 116, 157, 5, 42, 242, 21, 248, 151, 185, 110, 42, 184, 57, 235, 136, 41, 161, 15, 137, 124, 196, 172, 107, 130, 97, 109, 210, 62, 7, 219, 253, 132, 234, 228, 34, 100, 248, 188, 178, 172, 83, 233, 223, 160, 218, 184, 35, 178, 213, 125, 245, 71, 101, 124, 151, 45, 201, 169, 244, 27, 198, 115, 183, 202, 6, 32, 177, 150, 64, 132, 65, 230, 255, 211, 198, 35, 24, 28, 192, 133, 228, 131, 217, 133, 35, 213, 151, 122, 182};
    const unsigned msg_in_sz = 156;
    unsigned char r[] = {128, 91, 71, 130, 136, 190, 226, 69, 125, 10, 124, 248, 14, 172, 238, 227, 144, 70, 39, 133, 176, 114, 84, 175, 160, 39, 12, 211, 132, 162, 178, 233, 239, 235, 100, 2, 220, 184, 204, 7, 2, 207, 219, 192, 238, 18, 186, 80, 13, 0, 121, 69, 79, 12, 252, 23, 22, 155, 77, 74, 31, 206, 164, 7, 54, 40, 118, 116, 157, 5, 42, 242, 21, 248, 151, 185, 110, 42, 184, 160, 235, 184, 41, 161, 209, 137, 124, 196, 172, 107, 130, 97, 109, 210, 62, 7, 219, 253, 132, 234, 228, 34, 100, 248, 188, 178, 172, 83, 233, 223, 160, 218, 184, 35, 178, 213, 125, 245, 71, 101, 124, 151, 45, 201};
    const unsigned r_sz = 124;
    unsigned char c[] = {169, 244, 27, 198, 115, 183, 202, 6, 32, 7, 150, 64, 132, 65, 230, 255, 211, 198, 35, 24, 28, 192, 133, 228, 131, 217, 186, 35, 213, 151, 122, 182};
    const unsigned c_sz = 32;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 32;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test61)
{
    unsigned char msg_in[] = {128, 91, 71, 130, 136, 190, 226, 69, 125, 10, 124, 248, 14, 172, 238, 227, 144, 70, 39, 133, 176, 102, 84, 175, 160, 39, 12, 211, 132, 162, 178, 233, 121, 240, 100, 2, 220, 184, 204, 7, 124, 207, 219, 218, 238, 18, 186, 80, 13, 0, 121, 69, 79, 12, 252, 23, 22, 155, 77, 74, 31, 206, 164, 7, 54, 40, 118, 116, 157, 5, 42, 242, 21, 248, 151, 185, 110, 42, 184, 57, 235, 136, 41, 161, 15, 137, 124, 196, 172, 107, 130, 97, 109, 210, 62, 7, 219, 253, 132, 234, 228, 34, 100, 248, 188, 178, 172, 83, 233, 223, 160, 218, 184, 35, 178, 213, 125, 245, 71, 101, 124, 151, 45, 201, 169, 244, 27, 198, 115, 183, 202, 6, 32, 177, 150, 64, 132, 65, 230, 255, 211, 198, 35, 24, 28, 192, 133, 228, 131, 217, 133, 35, 213, 151, 122, 182};
    const unsigned msg_in_sz = 156;
    unsigned char r[] = {128, 91, 71, 130, 136, 190, 226, 69, 125, 10, 124, 248, 14, 172, 238, 227, 144, 70, 39, 133, 176, 114, 84, 175, 160, 39, 12, 211, 132, 162, 178, 233, 239, 235, 100, 2, 220, 184, 204, 7, 2, 207, 219, 192, 238, 18, 186, 80, 13, 0, 121, 69, 79, 12, 252, 23, 22, 155, 77, 74, 31, 206, 164, 7, 54, 40, 118, 116, 157, 5, 42, 242, 21, 248, 151, 185, 110, 42, 184, 160, 235, 184, 41, 161, 209, 137, 124, 196, 172, 107, 130, 97, 109, 210, 62, 7, 219, 253, 132, 234, 228, 34, 100, 248, 188, 178, 172, 83, 233, 223, 160, 218, 184, 35, 178, 213, 125, 245, 71, 101, 124, 151, 45, 201};
    const unsigned r_sz = 124;
    unsigned char c[] = {169, 244, 27, 198, 115, 183, 202, 6, 32, 7, 150, 64, 132, 65, 230, 255, 211, 198, 35, 24, 28, 192, 133, 228, 131, 217, 186, 35, 213, 151, 122, 182};
    const unsigned c_sz = 32;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 32;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test62)
{
    unsigned char msg_in[] = {128, 91, 71, 130, 136, 190, 226, 69, 125, 10, 124, 248, 14, 172, 238, 227, 144, 70, 39, 133, 176, 102, 84, 175, 160, 39, 12, 211, 132, 162, 178, 233, 121, 240, 100, 2, 220, 184, 204, 7, 124, 207, 219, 218, 238, 18, 186, 80, 13, 0, 121, 69, 79, 12, 252, 23, 22, 155, 77, 74, 31, 206, 164, 7, 54, 40, 118, 116, 157, 5, 42, 242, 21, 248, 151, 185, 110, 42, 184, 57, 235, 136, 41, 161, 15, 137, 124, 196, 172, 107, 130, 97, 109, 210, 62, 7, 219, 253, 132, 234, 228, 34, 100, 248, 188, 178, 172, 83, 233, 223, 160, 218, 184, 35, 178, 213, 125, 245, 71, 101, 124, 151, 45, 201, 169, 244, 27, 198, 115, 183, 202, 6, 32, 177, 150, 64, 132, 65, 116, 255, 211, 198, 35, 24, 28, 192, 133, 228, 131, 217, 133, 35, 213, 151, 122, 182};
    const unsigned msg_in_sz = 156;
    unsigned char r[] = {128, 91, 71, 130, 136, 190, 226, 69, 125, 10, 124, 248, 14, 172, 238, 227, 144, 70, 39, 133, 176, 114, 84, 175, 160, 39, 12, 211, 132, 162, 178, 233, 239, 235, 100, 2, 220, 184, 204, 7, 2, 207, 219, 192, 238, 18, 186, 80, 13, 0, 121, 69, 79, 12, 252, 23, 22, 155, 77, 74, 31, 206, 164, 7, 54, 40, 118, 116, 157, 5, 42, 242, 21, 248, 151, 185, 110, 42, 184, 160, 235, 184, 41, 161, 209, 137, 124, 196, 172, 107, 130, 97, 109, 210, 62, 7, 219, 253, 132, 234, 228, 34, 100, 248, 188, 178, 172, 83, 233, 223, 160, 218, 184, 35, 178, 213, 125, 245, 71, 101, 124, 151, 45, 201};
    const unsigned r_sz = 124;
    unsigned char c[] = {169, 244, 27, 198, 115, 183, 202, 6, 32, 7, 150, 64, 132, 65, 230, 255, 211, 198, 35, 24, 28, 192, 133, 228, 131, 217, 186, 35, 213, 151, 122, 182};
    const unsigned c_sz = 32;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 32;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test63)
{
    unsigned char msg_in[] = {128, 91, 71, 130, 136, 190, 226, 69, 125, 10, 124, 248, 14, 172, 238, 227, 144, 70, 39, 133, 176, 102, 84, 175, 160, 39, 12, 211, 132, 162, 178, 233, 121, 240, 100, 2, 220, 184, 204, 7, 124, 207, 219, 218, 238, 18, 186, 80, 13, 0, 121, 69, 79, 12, 252, 23, 22, 155, 77, 18, 31, 206, 164, 7, 54, 40, 118, 116, 157, 5, 42, 242, 21, 248, 151, 185, 110, 42, 184, 57, 235, 136, 41, 161, 15, 137, 124, 196, 172, 107, 130, 97, 109, 210, 62, 7, 219, 253, 132, 234, 228, 34, 100, 248, 188, 178, 172, 83, 233, 223, 160, 218, 184, 35, 178, 213, 125, 245, 71, 101, 124, 151, 45, 201, 169, 244, 27, 198, 115, 183, 202, 6, 32, 177, 150, 64, 132, 65, 116, 255, 211, 198, 35, 24, 28, 192, 133, 228, 131, 217, 133, 35, 213, 151, 122, 182};
    const unsigned msg_in_sz = 156;
    unsigned char r[] = {128, 91, 71, 130, 136, 190, 226, 69, 125, 10, 124, 248, 14, 172, 238, 227, 144, 70, 39, 133, 176, 114, 84, 175, 160, 39, 12, 211, 132, 162, 178, 233, 239, 235, 100, 2, 220, 184, 204, 7, 2, 207, 219, 192, 238, 18, 186, 80, 13, 0, 121, 69, 79, 12, 252, 23, 22, 155, 77, 74, 31, 206, 164, 7, 54, 40, 118, 116, 157, 5, 42, 242, 21, 248, 151, 185, 110, 42, 184, 160, 235, 184, 41, 161, 209, 137, 124, 196, 172, 107, 130, 97, 109, 210, 62, 7, 219, 253, 132, 234, 228, 34, 100, 248, 188, 178, 172, 83, 233, 223, 160, 218, 184, 35, 178, 213, 125, 245, 71, 101, 124, 151, 45, 201};
    const unsigned r_sz = 124;
    unsigned char c[] = {169, 244, 27, 198, 115, 183, 202, 6, 32, 7, 150, 64, 132, 65, 230, 255, 211, 198, 35, 24, 28, 192, 133, 228, 131, 217, 186, 35, 213, 151, 122, 182};
    const unsigned c_sz = 32;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 32;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test64)
{
    unsigned char msg_in[] = {128, 91, 71, 130, 136, 190, 226, 69, 125, 10, 124, 248, 14, 172, 238, 227, 144, 70, 39, 133, 176, 102, 84, 175, 160, 39, 12, 211, 132, 162, 178, 233, 121, 240, 100, 2, 220, 184, 204, 7, 124, 207, 219, 218, 238, 18, 186, 80, 13, 0, 121, 69, 79, 12, 252, 23, 22, 155, 77, 18, 31, 206, 107, 7, 54, 40, 118, 116, 157, 5, 42, 242, 21, 248, 151, 185, 110, 42, 184, 57, 235, 136, 41, 161, 15, 137, 124, 196, 172, 107, 130, 97, 109, 210, 62, 7, 219, 253, 132, 234, 228, 34, 100, 248, 188, 178, 172, 83, 233, 223, 160, 218, 184, 35, 178, 213, 125, 245, 71, 101, 124, 151, 45, 201, 169, 244, 27, 198, 115, 183, 202, 6, 32, 177, 150, 64, 132, 65, 116, 255, 211, 198, 35, 24, 28, 192, 133, 228, 131, 217, 133, 35, 213, 151, 122, 182};
    const unsigned msg_in_sz = 156;
    unsigned char r[] = {128, 91, 71, 130, 136, 190, 226, 69, 125, 10, 124, 248, 14, 172, 238, 227, 144, 70, 39, 133, 176, 114, 84, 175, 160, 39, 12, 211, 132, 162, 178, 233, 239, 235, 100, 2, 220, 184, 204, 7, 2, 207, 219, 192, 238, 18, 186, 80, 13, 0, 121, 69, 79, 12, 252, 23, 22, 155, 77, 74, 31, 206, 164, 7, 54, 40, 118, 116, 157, 5, 42, 242, 21, 248, 151, 185, 110, 42, 184, 160, 235, 184, 41, 161, 209, 137, 124, 196, 172, 107, 130, 97, 109, 210, 62, 7, 219, 253, 132, 234, 228, 34, 100, 248, 188, 178, 172, 83, 233, 223, 160, 218, 184, 35, 178, 213, 125, 245, 71, 101, 124, 151, 45, 201};
    const unsigned r_sz = 124;
    unsigned char c[] = {169, 244, 27, 198, 115, 183, 202, 6, 32, 7, 150, 64, 132, 65, 230, 255, 211, 198, 35, 24, 28, 192, 133, 228, 131, 217, 186, 35, 213, 151, 122, 182};
    const unsigned c_sz = 32;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 32;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test65)
{
    unsigned char msg_in[] = {128, 91, 71, 130, 136, 190, 226, 69, 125, 10, 124, 248, 14, 172, 238, 227, 144, 70, 39, 133, 176, 102, 84, 175, 160, 39, 12, 211, 132, 162, 178, 233, 121, 240, 100, 2, 220, 184, 204, 7, 124, 207, 219, 218, 238, 18, 186, 80, 13, 0, 121, 69, 79, 12, 252, 23, 22, 155, 77, 18, 31, 206, 107, 7, 54, 40, 118, 116, 157, 5, 42, 242, 21, 248, 151, 185, 110, 42, 184, 57, 235, 136, 41, 161, 15, 137, 124, 196, 172, 107, 130, 97, 109, 210, 62, 7, 219, 253, 220, 234, 228, 34, 100, 248, 188, 178, 172, 83, 233, 223, 160, 218, 184, 35, 178, 213, 125, 245, 71, 101, 124, 151, 45, 201, 169, 244, 27, 198, 115, 183, 202, 6, 32, 177, 150, 64, 132, 65, 116, 255, 211, 198, 35, 24, 28, 192, 133, 228, 131, 217, 133, 35, 213, 151, 122, 182};
    const unsigned msg_in_sz = 156;
    unsigned char r[] = {128, 91, 71, 130, 136, 190, 226, 69, 125, 10, 124, 248, 14, 172, 238, 227, 144, 70, 39, 133, 176, 114, 84, 175, 160, 39, 12, 211, 132, 162, 178, 233, 239, 235, 100, 2, 220, 184, 204, 7, 2, 207, 219, 192, 238, 18, 186, 80, 13, 0, 121, 69, 79, 12, 252, 23, 22, 155, 77, 74, 31, 206, 164, 7, 54, 40, 118, 116, 157, 5, 42, 242, 21, 248, 151, 185, 110, 42, 184, 160, 235, 184, 41, 161, 209, 137, 124, 196, 172, 107, 130, 97, 109, 210, 62, 7, 219, 253, 132, 234, 228, 34, 100, 248, 188, 178, 172, 83, 233, 223, 160, 218, 184, 35, 178, 213, 125, 245, 71, 101, 124, 151, 45, 201};
    const unsigned r_sz = 124;
    unsigned char c[] = {169, 244, 27, 198, 115, 183, 202, 6, 32, 7, 150, 64, 132, 65, 230, 255, 211, 198, 35, 24, 28, 192, 133, 228, 131, 217, 186, 35, 213, 151, 122, 182};
    const unsigned c_sz = 32;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 32;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test66)
{
    unsigned char msg_in[] = {128, 91, 71, 130, 145, 190, 226, 69, 125, 10, 124, 248, 14, 172, 238, 227, 144, 70, 39, 133, 176, 102, 84, 175, 160, 39, 12, 211, 132, 162, 178, 233, 121, 240, 100, 2, 220, 184, 204, 7, 124, 207, 219, 218, 238, 18, 186, 80, 13, 0, 121, 69, 79, 12, 252, 23, 22, 155, 77, 18, 31, 206, 107, 7, 54, 40, 118, 116, 157, 5, 42, 242, 21, 248, 151, 185, 110, 42, 184, 57, 235, 136, 41, 161, 15, 137, 124, 196, 172, 107, 130, 97, 109, 210, 62, 7, 219, 253, 220, 234, 228, 34, 100, 248, 188, 178, 172, 83, 233, 223, 160, 218, 184, 35, 178, 213, 125, 245, 71, 101, 124, 151, 45, 201, 169, 244, 27, 198, 115, 183, 202, 6, 32, 177, 150, 64, 132, 65, 116, 255, 211, 198, 35, 24, 28, 192, 133, 228, 131, 217, 133, 35, 213, 151, 122, 182};
    const unsigned msg_in_sz = 156;
    unsigned char r[] = {128, 91, 71, 130, 136, 190, 226, 69, 125, 10, 124, 248, 14, 172, 238, 227, 144, 70, 39, 133, 176, 114, 84, 175, 160, 39, 12, 211, 132, 162, 178, 233, 239, 235, 100, 2, 220, 184, 204, 7, 2, 207, 219, 192, 238, 18, 186, 80, 13, 0, 121, 69, 79, 12, 252, 23, 22, 155, 77, 74, 31, 206, 164, 7, 54, 40, 118, 116, 157, 5, 42, 242, 21, 248, 151, 185, 110, 42, 184, 160, 235, 184, 41, 161, 209, 137, 124, 196, 172, 107, 130, 97, 109, 210, 62, 7, 219, 253, 132, 234, 228, 34, 100, 248, 188, 178, 172, 83, 233, 223, 160, 218, 184, 35, 178, 213, 125, 245, 71, 101, 124, 151, 45, 201};
    const unsigned r_sz = 124;
    unsigned char c[] = {169, 244, 27, 198, 115, 183, 202, 6, 32, 7, 150, 64, 132, 65, 230, 255, 211, 198, 35, 24, 28, 192, 133, 228, 131, 217, 186, 35, 213, 151, 122, 182};
    const unsigned c_sz = 32;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 32;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test67)
{
    unsigned char msg_in[] = {128, 91, 71, 130, 145, 190, 226, 69, 125, 10, 124, 248, 14, 172, 238, 227, 144, 70, 39, 133, 176, 102, 84, 175, 160, 39, 12, 211, 132, 162, 178, 233, 121, 240, 100, 2, 220, 184, 204, 7, 124, 207, 219, 218, 238, 18, 186, 80, 13, 0, 121, 69, 79, 12, 252, 23, 22, 155, 77, 18, 31, 206, 107, 7, 54, 40, 118, 116, 157, 5, 42, 242, 120, 248, 151, 185, 110, 42, 184, 57, 235, 136, 41, 161, 15, 137, 124, 196, 172, 107, 130, 97, 109, 210, 62, 7, 219, 253, 220, 234, 228, 34, 100, 248, 188, 178, 172, 83, 233, 223, 160, 218, 184, 35, 178, 213, 125, 245, 71, 101, 124, 151, 45, 201, 169, 244, 27, 198, 115, 183, 202, 6, 32, 177, 150, 64, 132, 65, 116, 255, 211, 198, 35, 24, 28, 192, 133, 228, 131, 217, 133, 35, 213, 151, 122, 182};
    const unsigned msg_in_sz = 156;
    unsigned char r[] = {128, 91, 71, 130, 136, 190, 226, 69, 125, 10, 124, 248, 14, 172, 238, 227, 144, 70, 39, 133, 176, 114, 84, 175, 160, 39, 12, 211, 132, 162, 178, 233, 239, 235, 100, 2, 220, 184, 204, 7, 2, 207, 219, 192, 238, 18, 186, 80, 13, 0, 121, 69, 79, 12, 252, 23, 22, 155, 77, 74, 31, 206, 164, 7, 54, 40, 118, 116, 157, 5, 42, 242, 21, 248, 151, 185, 110, 42, 184, 160, 235, 184, 41, 161, 209, 137, 124, 196, 172, 107, 130, 97, 109, 210, 62, 7, 219, 253, 132, 234, 228, 34, 100, 248, 188, 178, 172, 83, 233, 223, 160, 218, 184, 35, 178, 213, 125, 245, 71, 101, 124, 151, 45, 201};
    const unsigned r_sz = 124;
    unsigned char c[] = {169, 244, 27, 198, 115, 183, 202, 6, 32, 7, 150, 64, 132, 65, 230, 255, 211, 198, 35, 24, 28, 192, 133, 228, 131, 217, 186, 35, 213, 151, 122, 182};
    const unsigned c_sz = 32;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 32;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test68)
{
    unsigned char msg_in[] = {255, 210, 243, 76, 101, 69, 202, 78, 57, 188, 174, 242, 114, 52, 78, 187, 205, 206, 104, 209, 205, 239, 20, 176, 133, 147, 143, 161, 239, 59, 98, 25, 174, 158, 122, 172, 5, 120, 179, 244, 228, 154, 171, 82, 221, 145, 156, 128, 167, 38, 53, 200, 61, 167, 3, 225, 144, 17, 140, 102, 174, 7, 188, 122, 129, 38, 57, 246, 195, 160, 131, 16, 16, 1, 36, 110, 42, 235, 26, 94, 21, 176, 70, 27, 135, 94, 4, 44, 164, 114, 208, 156, 134, 156, 108, 116, 151, 200, 56, 117, 3, 65, 185, 171, 175, 139, 172, 63, 229, 218, 119, 33, 197, 26, 227, 72, 1, 222, 247, 110, 245, 232, 4, 153, 149, 110, 131, 46, 190, 181, 160, 105, 225, 36, 17, 175, 41, 39, 169, 150, 132, 154, 245, 252, 33, 196, 0, 243, 243, 15, 68, 252, 77, 17, 142, 21, 19, 37, 4, 88, 100, 136, 213, 19, 89, 168, 91, 88, 102, 192, 229, 121, 232, 223, 244, 0, 93, 24, 76, 106, 194, 85, 109, 198, 72, 29, 232, 216, 255, 106, 24, 253, 19, 224, 97, 213, 197, 142, 53, 30, 142, 248, 226, 64, 53, 10, 101, 111, 12, 167, 191, 136, 2};
    const unsigned msg_in_sz = 213;
    unsigned char r[] = {255, 210, 243, 76, 101, 69, 202, 78, 57, 188, 174, 242, 114, 52, 78, 187, 205, 206, 104, 209, 205, 239, 20, 176, 133, 147, 143, 161, 239, 59, 98, 25, 174, 158, 122, 172, 5, 120, 179, 244, 228, 154, 171, 82, 221, 145, 156, 128, 167, 38, 53, 200, 61, 167, 3, 225, 144, 17, 140, 102, 174, 7, 188, 122, 129, 38, 57, 246, 195, 160, 131, 16, 16, 1, 36, 110, 42, 235, 26, 94, 21, 176, 70, 27, 135, 94, 4, 44, 164, 114, 208, 156, 134, 156, 108, 116, 151, 200, 56, 117, 3, 65, 185, 171, 175, 139, 172, 63, 229, 218, 119, 33, 197, 26, 227, 72, 1, 222, 247, 110, 245, 232, 4, 153, 149, 110, 131, 46, 190, 181, 160, 105, 225, 36, 17, 175, 41, 39, 169, 150, 132, 154, 245, 252, 33, 196, 0, 243, 243, 15, 68, 252, 77, 17, 142, 21, 19, 37, 4, 88, 100, 136, 213, 19, 89, 168, 91, 88, 102, 192, 229, 121, 232, 223, 244, 0, 93, 24, 76, 106, 194, 85, 109, 198, 72, 29, 232, 216, 255, 106, 24, 253, 19, 224, 97, 213, 197, 142, 53, 30, 142, 248, 226, 64, 53, 10, 101, 111, 12, 167, 191, 136};
    const unsigned r_sz = 212;
    unsigned char c[] = {2};
    const unsigned c_sz = 1;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 1;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test69)
{
    unsigned char msg_in[] = {216, 7, 25, 91, 115, 235, 29, 156, 41, 135, 123, 31, 4, 132, 16, 18, 169, 206, 45, 74, 81, 89, 212, 2, 110, 214, 226, 168, 124, 58, 140, 237, 36, 34, 39, 10, 130, 22, 23, 0, 190, 117, 14, 23, 6, 99, 67, 245, 117, 199, 89, 102, 191, 202, 35, 78, 94, 226, 63, 186, 241, 75, 120, 243, 248, 33, 137, 72, 59, 201, 193, 221, 237, 233, 204, 6, 23, 218, 240, 236, 45, 168, 212, 99, 224, 40, 48, 42, 235, 115, 142, 57, 92, 95, 221, 127, 254, 223, 187, 232, 219, 157, 154, 9, 250, 180, 120, 219, 82, 67, 161, 109, 254, 203, 208, 96, 60, 216, 38, 141, 219, 172, 17, 72, 43, 213, 233, 154, 22, 48, 195, 229, 68, 176, 151, 108, 200, 102, 95, 83, 229, 95, 64, 197, 55, 1, 61, 106, 66, 44, 131, 234, 142, 196, 69, 112, 5, 196, 98, 146, 109, 69, 215, 94, 49, 219, 195, 211, 227, 161, 55, 234, 93, 76, 34, 187, 152, 235, 16, 67, 222, 112, 49, 132, 133, 221, 26, 235, 94, 164, 24, 98, 245, 29, 61, 36, 225, 179, 31, 139, 47, 187, 146, 100, 78, 65, 58, 185, 77, 200, 164, 143, 212, 43, 30, 44, 1, 158, 142, 40, 97, 57, 62, 11, 223, 59, 100};
    const unsigned msg_in_sz = 227;
    unsigned char r[] = {216, 7, 25, 91, 115, 235, 29, 156, 41, 135, 123, 31, 4, 132, 16, 18, 169, 206, 45, 74, 81, 89, 212, 2, 110, 214, 226, 168, 124, 58, 140, 237, 36, 34, 39, 10, 130, 22, 23, 0, 190, 117, 14, 23, 6, 99, 67, 245, 117, 199, 89, 102, 191, 202, 35, 78, 94, 226, 63, 186, 241, 75, 120, 243, 248, 33, 137, 72, 59, 201, 193, 221, 237, 233, 204, 6, 23, 218, 240, 236, 45, 168, 212, 99, 224, 40, 48, 42, 235, 115, 142, 57, 92, 95, 221, 127, 254, 223, 187, 232, 219, 157, 154, 9, 250, 180, 120, 219, 82, 67, 161, 109, 254, 203, 208, 96, 60, 216, 38, 141, 219, 172, 17, 72, 43, 213, 233, 154, 22, 48, 195, 229, 68, 176, 151, 108, 200, 102, 95, 83, 229, 95, 64, 197, 55, 1, 61, 106, 66, 44, 131, 234, 142, 196, 69, 112, 5, 196, 98, 146, 109, 69, 215, 94, 49, 219, 195, 211, 227, 161, 55, 234, 93, 76, 34, 187, 152, 235, 16, 67, 222, 112, 49, 132, 133, 221, 26, 235, 94, 164, 24, 98, 245, 29, 61, 36, 225, 179, 31, 139, 47, 187, 146, 100, 78, 65, 58, 185, 77, 200, 164, 143, 212, 43, 30, 44, 1, 158, 142, 40, 97, 57, 62, 11, 223, 59};
    const unsigned r_sz = 226;
    unsigned char c[] = {100};
    const unsigned c_sz = 1;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 1;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test70)
{
    unsigned char msg_in[] = {104, 23, 94, 153, 93, 231, 44, 235, 127, 48, 246, 15, 208, 18, 77, 199, 74, 198, 93, 212, 222, 145, 231, 91, 228, 129, 31, 219, 68, 89, 5, 60, 82, 59, 39, 247, 8, 184, 77, 36, 88, 228, 8, 151, 43, 199, 57, 203, 148, 31, 217, 91, 61, 70, 37, 33, 97, 92, 135, 179, 83, 57};
    const unsigned msg_in_sz = 62;
    unsigned char r[] = {104, 23, 94, 153, 93, 231, 44, 235, 127, 48, 246, 15, 208, 18, 77, 199, 74, 198, 93, 212, 222, 145, 231, 91, 228, 129, 31, 219, 68, 89, 5, 60, 82, 59, 39, 247, 8, 184, 77, 36, 88, 228, 8, 151, 43, 199, 57, 203, 148, 31, 217, 91, 61, 70, 37, 33, 97, 92, 135};
    const unsigned r_sz = 59;
    unsigned char c[] = {179, 83, 57};
    const unsigned c_sz = 3;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 3;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test71)
{
    unsigned char msg_in[] = {104, 23, 94, 153, 93, 231, 44, 84, 127, 48, 246, 15, 208, 18, 77, 199, 74, 198, 93, 212, 222, 145, 231, 91, 228, 129, 31, 219, 68, 89, 5, 60, 82, 59, 39, 247, 8, 184, 77, 36, 88, 228, 8, 151, 43, 199, 57, 203, 148, 31, 217, 91, 61, 70, 37, 33, 97, 92, 135, 179, 83, 57};
    const unsigned msg_in_sz = 62;
    unsigned char r[] = {104, 23, 94, 153, 93, 231, 44, 235, 127, 48, 246, 15, 208, 18, 77, 199, 74, 198, 93, 212, 222, 145, 231, 91, 228, 129, 31, 219, 68, 89, 5, 60, 82, 59, 39, 247, 8, 184, 77, 36, 88, 228, 8, 151, 43, 199, 57, 203, 148, 31, 217, 91, 61, 70, 37, 33, 97, 92, 135};
    const unsigned r_sz = 59;
    unsigned char c[] = {179, 83, 57};
    const unsigned c_sz = 3;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 3;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test72)
{
    unsigned char msg_in[] = {55, 223, 205, 236, 132, 230, 13, 233, 223, 99, 115, 213, 49, 197, 163, 125, 143, 233, 247, 91, 49, 250, 214, 131, 113, 196, 21, 51, 160, 66, 3, 81, 210, 42, 234, 10, 241, 139, 118, 23, 253, 24, 146, 150, 182, 225, 121, 212, 132, 186, 26, 207, 104, 181, 129, 77, 37, 3, 159, 72, 115, 17, 68, 144, 160, 72, 62, 105, 44, 78, 64, 33, 17, 154, 61, 40, 191, 12, 172, 38, 250, 193, 214, 128, 25, 117, 76, 177, 60, 138, 223, 82, 7, 117, 208, 206, 226, 17, 165, 16, 14, 73, 101, 179, 59, 52, 163, 81, 44, 62, 159, 40, 165, 121, 207, 28, 42, 14, 48, 178, 101, 190, 10, 188, 123, 24, 64, 167, 86, 115, 35, 4, 211, 234, 227, 160, 151, 44, 180, 244, 126, 37, 108, 161, 138, 231, 2, 222, 192, 45, 129, 130, 115, 172, 4, 91, 239, 120, 143};
    const unsigned msg_in_sz = 159;
    unsigned char r[] = {55, 223, 205, 236, 132, 230, 13, 233, 223, 99, 115, 213, 49, 197, 163, 125, 143, 233, 247, 91, 49, 250, 214, 131, 113, 196, 21, 51, 160, 66, 3, 81, 210, 42, 234, 10, 241, 139, 118, 23, 253, 24, 146, 150, 182, 225, 121, 212, 132, 186, 26, 207, 104, 181, 129, 77, 37, 3, 159, 72, 115, 17, 68, 144, 160, 72, 62, 105, 44, 78, 64, 33, 17, 154, 61, 40, 191, 12, 172, 38, 250, 193, 214, 128, 25, 117, 76, 177, 60, 138, 223, 82, 7, 117, 208, 206, 226, 17, 165, 16, 14, 73, 101, 179, 59, 52, 163, 81, 44, 62, 159, 40, 165, 121, 207, 28, 42, 14, 48, 178, 101, 190, 10, 188, 123, 24, 64, 167, 86, 115, 35, 4, 211, 234, 227, 160, 151, 44, 180, 244, 126, 37, 108, 161, 138, 231, 2, 222, 192, 45, 129, 130, 115, 172, 4, 91};
    const unsigned r_sz = 156;
    unsigned char c[] = {239, 120, 143};
    const unsigned c_sz = 3;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 3;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test73)
{
    unsigned char msg_in[] = {55, 223, 205, 236, 132, 230, 13, 233, 223, 99, 115, 213, 49, 197, 163, 125, 143, 233, 247, 91, 49, 250, 214, 131, 113, 196, 21, 51, 160, 66, 3, 81, 210, 42, 234, 10, 241, 139, 118, 231, 253, 24, 146, 150, 182, 225, 121, 212, 132, 186, 26, 207, 104, 181, 129, 77, 37, 3, 159, 72, 115, 17, 68, 144, 160, 72, 62, 105, 44, 78, 64, 33, 17, 154, 61, 40, 191, 12, 172, 38, 250, 193, 214, 128, 25, 117, 76, 177, 60, 138, 223, 82, 7, 117, 208, 206, 226, 17, 165, 16, 14, 73, 101, 179, 59, 52, 163, 81, 44, 62, 159, 40, 165, 121, 207, 28, 42, 14, 48, 178, 101, 190, 10, 188, 123, 24, 64, 167, 86, 115, 35, 4, 211, 234, 227, 160, 151, 44, 180, 244, 126, 37, 108, 161, 138, 231, 2, 222, 192, 45, 129, 130, 115, 172, 4, 91, 239, 120, 143};
    const unsigned msg_in_sz = 159;
    unsigned char r[] = {55, 223, 205, 236, 132, 230, 13, 233, 223, 99, 115, 213, 49, 197, 163, 125, 143, 233, 247, 91, 49, 250, 214, 131, 113, 196, 21, 51, 160, 66, 3, 81, 210, 42, 234, 10, 241, 139, 118, 23, 253, 24, 146, 150, 182, 225, 121, 212, 132, 186, 26, 207, 104, 181, 129, 77, 37, 3, 159, 72, 115, 17, 68, 144, 160, 72, 62, 105, 44, 78, 64, 33, 17, 154, 61, 40, 191, 12, 172, 38, 250, 193, 214, 128, 25, 117, 76, 177, 60, 138, 223, 82, 7, 117, 208, 206, 226, 17, 165, 16, 14, 73, 101, 179, 59, 52, 163, 81, 44, 62, 159, 40, 165, 121, 207, 28, 42, 14, 48, 178, 101, 190, 10, 188, 123, 24, 64, 167, 86, 115, 35, 4, 211, 234, 227, 160, 151, 44, 180, 244, 126, 37, 108, 161, 138, 231, 2, 222, 192, 45, 129, 130, 115, 172, 4, 91};
    const unsigned r_sz = 156;
    unsigned char c[] = {239, 120, 143};
    const unsigned c_sz = 3;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 3;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test74)
{
    unsigned char msg_in[] = {128, 210, 231, 250, 223, 150, 98, 141, 205, 162, 95, 241, 217, 37, 50, 196, 149, 172, 110, 74, 140, 131, 95, 193, 219, 106, 217, 148, 106, 88, 151, 197, 202, 185, 187, 6, 77, 156, 10, 47, 237, 51, 130, 192, 1, 142, 194, 42, 114, 131, 0, 163, 240, 189, 234, 35, 229, 98, 22, 159, 135, 218, 132, 233, 30, 196, 3, 251, 186, 223, 125, 195, 207, 94, 233, 185, 105, 162, 46, 60, 98, 95, 23, 206, 232, 119, 250, 126, 162, 130, 206, 85, 100, 30, 48, 131, 60, 15, 163, 6, 123, 207, 243, 95, 58, 232, 4, 43, 25, 177, 239, 186, 218, 196, 145, 197, 94, 1, 53, 2, 48, 201, 120, 126, 166, 57, 229, 0, 96, 201, 138, 210, 234, 173, 15, 107, 239, 74, 60, 25, 107, 120, 30, 189, 117, 201};
    const unsigned msg_in_sz = 146;
    unsigned char r[] = {128, 210, 231, 250, 223, 150, 98, 141, 205, 162, 95, 241, 217, 37, 50, 196, 149, 172, 110, 74, 140, 131, 95, 193, 219, 106, 217, 148, 106, 88, 151, 197, 202, 185, 187, 6, 77, 156, 10, 47, 237, 51, 130, 192, 1, 142, 194, 42, 114, 131, 0, 163, 240, 189, 234, 35, 229, 98, 22, 159, 135, 218, 132, 233, 30, 196, 3, 251, 186, 223, 125, 195, 207, 94, 233, 185, 105, 162, 46, 60, 98, 95, 23, 206, 232, 119, 250, 126, 162, 130, 206, 85, 100, 30, 48, 131, 60, 15, 163, 6, 123, 207, 243, 95, 58, 232, 4, 43, 25, 177, 239, 186, 218, 196, 145, 197, 94, 1, 53, 2, 48, 201, 120, 126, 166, 57, 229, 0, 96, 201, 138, 210, 234, 173, 15, 107, 239, 74, 60, 25, 107};
    const unsigned r_sz = 141;
    unsigned char c[] = {120, 30, 189, 117, 201};
    const unsigned c_sz = 5;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 5;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test75)
{
    unsigned char msg_in[] = {128, 210, 231, 250, 223, 150, 98, 141, 205, 162, 95, 241, 217, 37, 50, 196, 149, 172, 110, 74, 140, 131, 95, 193, 219, 106, 217, 148, 106, 88, 151, 197, 202, 185, 187, 6, 77, 156, 10, 47, 237, 51, 130, 192, 1, 142, 194, 42, 114, 131, 0, 163, 240, 189, 234, 35, 229, 98, 22, 159, 135, 218, 132, 233, 30, 196, 3, 251, 186, 223, 125, 195, 207, 94, 233, 185, 105, 162, 46, 60, 98, 95, 23, 206, 232, 119, 250, 126, 162, 130, 206, 85, 100, 30, 48, 131, 60, 15, 163, 6, 123, 207, 243, 95, 58, 232, 4, 43, 25, 177, 239, 186, 218, 196, 145, 197, 94, 1, 53, 2, 48, 220, 120, 126, 166, 57, 229, 0, 96, 201, 138, 210, 234, 173, 15, 107, 239, 74, 60, 25, 107, 120, 30, 189, 117, 201};
    const unsigned msg_in_sz = 146;
    unsigned char r[] = {128, 210, 231, 250, 223, 150, 98, 141, 205, 162, 95, 241, 217, 37, 50, 196, 149, 172, 110, 74, 140, 131, 95, 193, 219, 106, 217, 148, 106, 88, 151, 197, 202, 185, 187, 6, 77, 156, 10, 47, 237, 51, 130, 192, 1, 142, 194, 42, 114, 131, 0, 163, 240, 189, 234, 35, 229, 98, 22, 159, 135, 218, 132, 233, 30, 196, 3, 251, 186, 223, 125, 195, 207, 94, 233, 185, 105, 162, 46, 60, 98, 95, 23, 206, 232, 119, 250, 126, 162, 130, 206, 85, 100, 30, 48, 131, 60, 15, 163, 6, 123, 207, 243, 95, 58, 232, 4, 43, 25, 177, 239, 186, 218, 196, 145, 197, 94, 1, 53, 2, 48, 201, 120, 126, 166, 57, 229, 0, 96, 201, 138, 210, 234, 173, 15, 107, 239, 74, 60, 25, 107};
    const unsigned r_sz = 141;
    unsigned char c[] = {120, 30, 189, 117, 201};
    const unsigned c_sz = 5;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 5;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test76)
{
    unsigned char msg_in[] = {128, 210, 231, 250, 223, 150, 98, 141, 205, 162, 95, 241, 217, 37, 50, 196, 149, 172, 110, 74, 140, 131, 95, 193, 219, 106, 217, 148, 106, 88, 151, 197, 202, 185, 187, 6, 77, 156, 10, 47, 237, 51, 130, 192, 1, 142, 194, 42, 114, 131, 0, 163, 240, 189, 234, 35, 229, 98, 22, 159, 135, 218, 132, 233, 30, 196, 3, 251, 186, 223, 125, 195, 207, 94, 233, 185, 105, 162, 46, 60, 98, 95, 23, 206, 232, 119, 250, 126, 162, 130, 206, 85, 100, 30, 48, 131, 60, 15, 163, 6, 123, 207, 243, 95, 58, 232, 4, 43, 25, 177, 239, 186, 218, 196, 145, 197, 94, 1, 53, 197, 48, 220, 120, 126, 166, 57, 229, 0, 96, 201, 138, 210, 234, 173, 15, 107, 239, 74, 60, 25, 107, 120, 30, 189, 117, 201};
    const unsigned msg_in_sz = 146;
    unsigned char r[] = {128, 210, 231, 250, 223, 150, 98, 141, 205, 162, 95, 241, 217, 37, 50, 196, 149, 172, 110, 74, 140, 131, 95, 193, 219, 106, 217, 148, 106, 88, 151, 197, 202, 185, 187, 6, 77, 156, 10, 47, 237, 51, 130, 192, 1, 142, 194, 42, 114, 131, 0, 163, 240, 189, 234, 35, 229, 98, 22, 159, 135, 218, 132, 233, 30, 196, 3, 251, 186, 223, 125, 195, 207, 94, 233, 185, 105, 162, 46, 60, 98, 95, 23, 206, 232, 119, 250, 126, 162, 130, 206, 85, 100, 30, 48, 131, 60, 15, 163, 6, 123, 207, 243, 95, 58, 232, 4, 43, 25, 177, 239, 186, 218, 196, 145, 197, 94, 1, 53, 2, 48, 201, 120, 126, 166, 57, 229, 0, 96, 201, 138, 210, 234, 173, 15, 107, 239, 74, 60, 25, 107};
    const unsigned r_sz = 141;
    unsigned char c[] = {120, 30, 189, 117, 201};
    const unsigned c_sz = 5;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 5;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test77)
{
    unsigned char msg_in[] = {245, 63, 158, 133, 25, 69, 168, 131, 22, 161, 254, 22, 69, 170, 115, 134, 207, 232, 111, 51, 15, 122, 236, 225, 78, 93, 29, 197, 196, 135, 184, 44, 11, 43, 19, 205, 250, 243, 235, 222, 84, 21, 253, 111, 128, 8, 211, 15, 130, 69, 250, 177, 46, 218, 246, 0, 120, 80, 41, 136, 196, 215, 64, 102, 189, 48, 173, 227, 143, 251, 199, 252, 25, 213, 40, 138, 190, 185, 240, 66, 218, 36, 208, 175, 42, 4, 239, 9, 154, 189, 64, 13, 144, 53, 219, 230, 126, 97, 109, 168, 52, 81, 94, 183, 147, 87, 125, 128, 75, 41, 60, 61, 194, 251, 168, 223, 86, 39, 95, 180, 172, 9, 20, 168, 108, 242, 128, 168, 50, 44, 14};
    const unsigned msg_in_sz = 131;
    unsigned char r[] = {245, 63, 158, 133, 25, 69, 168, 131, 22, 161, 254, 22, 69, 170, 115, 134, 207, 232, 111, 51, 15, 122, 236, 225, 78, 93, 29, 197, 196, 135, 184, 44, 11, 43, 19, 205, 250, 243, 235, 222, 84, 21, 253, 111, 128, 8, 211, 15, 130, 69, 250, 177, 46, 218, 246, 0, 120, 80, 41, 136, 196, 215, 64, 102, 189, 48, 173, 227, 143, 251, 199, 252, 25, 213, 40, 138, 190, 185, 240, 66, 218, 36, 208, 175, 42, 4, 239, 9, 154, 189, 64, 13, 144, 53, 219, 230, 126, 97, 109, 168, 52, 81, 94, 183, 147, 87, 125, 128, 75, 41, 60, 61, 194, 251, 168, 223, 86, 39, 95, 180, 172, 9, 20, 168, 108, 242};
    const unsigned r_sz = 126;
    unsigned char c[] = {128, 168, 50, 44, 14};
    const unsigned c_sz = 5;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 5;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test78)
{
    unsigned char msg_in[] = {245, 63, 158, 133, 25, 69, 168, 131, 22, 161, 254, 22, 69, 170, 115, 134, 207, 232, 111, 51, 15, 122, 236, 225, 78, 93, 29, 197, 196, 135, 184, 44, 11, 43, 19, 205, 250, 243, 235, 222, 84, 21, 253, 111, 128, 8, 211, 15, 130, 69, 250, 177, 46, 218, 246, 0, 120, 80, 41, 136, 196, 215, 64, 102, 189, 48, 173, 227, 143, 251, 199, 252, 25, 213, 40, 138, 190, 185, 240, 66, 218, 36, 208, 175, 42, 4, 239, 9, 154, 189, 64, 13, 144, 53, 219, 230, 126, 97, 109, 168, 52, 81, 94, 183, 147, 87, 125, 128, 75, 41, 60, 61, 220, 251, 168, 223, 86, 39, 95, 180, 172, 9, 20, 168, 108, 242, 128, 168, 50, 44, 14};
    const unsigned msg_in_sz = 131;
    unsigned char r[] = {245, 63, 158, 133, 25, 69, 168, 131, 22, 161, 254, 22, 69, 170, 115, 134, 207, 232, 111, 51, 15, 122, 236, 225, 78, 93, 29, 197, 196, 135, 184, 44, 11, 43, 19, 205, 250, 243, 235, 222, 84, 21, 253, 111, 128, 8, 211, 15, 130, 69, 250, 177, 46, 218, 246, 0, 120, 80, 41, 136, 196, 215, 64, 102, 189, 48, 173, 227, 143, 251, 199, 252, 25, 213, 40, 138, 190, 185, 240, 66, 218, 36, 208, 175, 42, 4, 239, 9, 154, 189, 64, 13, 144, 53, 219, 230, 126, 97, 109, 168, 52, 81, 94, 183, 147, 87, 125, 128, 75, 41, 60, 61, 194, 251, 168, 223, 86, 39, 95, 180, 172, 9, 20, 168, 108, 242};
    const unsigned r_sz = 126;
    unsigned char c[] = {128, 168, 50, 44, 14};
    const unsigned c_sz = 5;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 5;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test79)
{
    unsigned char msg_in[] = {245, 63, 158, 133, 25, 69, 168, 131, 22, 161, 254, 22, 161, 170, 115, 134, 207, 232, 111, 51, 15, 122, 236, 225, 78, 93, 29, 197, 196, 135, 184, 44, 11, 43, 19, 205, 250, 243, 235, 222, 84, 21, 253, 111, 128, 8, 211, 15, 130, 69, 250, 177, 46, 218, 246, 0, 120, 80, 41, 136, 196, 215, 64, 102, 189, 48, 173, 227, 143, 251, 199, 252, 25, 213, 40, 138, 190, 185, 240, 66, 218, 36, 208, 175, 42, 4, 239, 9, 154, 189, 64, 13, 144, 53, 219, 230, 126, 97, 109, 168, 52, 81, 94, 183, 147, 87, 125, 128, 75, 41, 60, 61, 220, 251, 168, 223, 86, 39, 95, 180, 172, 9, 20, 168, 108, 242, 128, 168, 50, 44, 14};
    const unsigned msg_in_sz = 131;
    unsigned char r[] = {245, 63, 158, 133, 25, 69, 168, 131, 22, 161, 254, 22, 69, 170, 115, 134, 207, 232, 111, 51, 15, 122, 236, 225, 78, 93, 29, 197, 196, 135, 184, 44, 11, 43, 19, 205, 250, 243, 235, 222, 84, 21, 253, 111, 128, 8, 211, 15, 130, 69, 250, 177, 46, 218, 246, 0, 120, 80, 41, 136, 196, 215, 64, 102, 189, 48, 173, 227, 143, 251, 199, 252, 25, 213, 40, 138, 190, 185, 240, 66, 218, 36, 208, 175, 42, 4, 239, 9, 154, 189, 64, 13, 144, 53, 219, 230, 126, 97, 109, 168, 52, 81, 94, 183, 147, 87, 125, 128, 75, 41, 60, 61, 194, 251, 168, 223, 86, 39, 95, 180, 172, 9, 20, 168, 108, 242};
    const unsigned r_sz = 126;
    unsigned char c[] = {128, 168, 50, 44, 14};
    const unsigned c_sz = 5;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 5;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test80)
{
    unsigned char msg_in[] = {171, 95, 164, 116, 129, 253, 149, 116, 237, 88, 249, 187, 215, 111, 6, 28, 203, 75, 11, 135, 146, 28, 103, 16, 192, 0, 118, 58, 130, 144, 10, 118, 254, 15, 138, 15, 252, 166, 134, 243, 246, 94, 19, 14, 56, 61, 153, 196, 206, 57, 245, 239, 225, 95, 116, 214, 52, 90, 255, 45};
    const unsigned msg_in_sz = 60;
    unsigned char r[] = {171, 95, 164, 116, 129, 253, 149, 116, 237, 88, 249, 187, 215, 111, 6, 28, 203, 75, 11, 135, 146, 28, 103, 16, 192, 0, 118, 58, 130, 144, 10, 118, 254, 15, 138, 15, 252, 166, 134, 243, 246, 94, 19, 14, 56, 61, 153, 196, 206, 57, 245, 239, 225};
    const unsigned r_sz = 53;
    unsigned char c[] = {95, 116, 214, 52, 90, 255, 45};
    const unsigned c_sz = 7;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 7;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test81)
{
    unsigned char msg_in[] = {171, 95, 164, 167, 129, 253, 149, 116, 237, 88, 249, 187, 215, 111, 6, 28, 203, 75, 11, 135, 146, 28, 103, 16, 192, 0, 118, 58, 130, 144, 10, 118, 254, 15, 138, 15, 252, 166, 134, 243, 246, 94, 19, 14, 56, 61, 153, 196, 206, 57, 245, 239, 225, 95, 116, 214, 52, 90, 255, 45};
    const unsigned msg_in_sz = 60;
    unsigned char r[] = {171, 95, 164, 116, 129, 253, 149, 116, 237, 88, 249, 187, 215, 111, 6, 28, 203, 75, 11, 135, 146, 28, 103, 16, 192, 0, 118, 58, 130, 144, 10, 118, 254, 15, 138, 15, 252, 166, 134, 243, 246, 94, 19, 14, 56, 61, 153, 196, 206, 57, 245, 239, 225};
    const unsigned r_sz = 53;
    unsigned char c[] = {95, 116, 214, 52, 90, 255, 45};
    const unsigned c_sz = 7;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 7;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test82)
{
    unsigned char msg_in[] = {171, 11, 164, 167, 129, 253, 149, 116, 237, 88, 249, 187, 215, 111, 6, 28, 203, 75, 11, 135, 146, 28, 103, 16, 192, 0, 118, 58, 130, 144, 10, 118, 254, 15, 138, 15, 252, 166, 134, 243, 246, 94, 19, 14, 56, 61, 153, 196, 206, 57, 245, 239, 225, 95, 116, 214, 52, 90, 255, 45};
    const unsigned msg_in_sz = 60;
    unsigned char r[] = {171, 95, 164, 116, 129, 253, 149, 116, 237, 88, 249, 187, 215, 111, 6, 28, 203, 75, 11, 135, 146, 28, 103, 16, 192, 0, 118, 58, 130, 144, 10, 118, 254, 15, 138, 15, 252, 166, 134, 243, 246, 94, 19, 14, 56, 61, 153, 196, 206, 57, 245, 239, 225};
    const unsigned r_sz = 53;
    unsigned char c[] = {95, 116, 214, 52, 90, 255, 45};
    const unsigned c_sz = 7;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 7;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test83)
{
    unsigned char msg_in[] = {171, 11, 164, 167, 129, 253, 149, 116, 237, 88, 238, 187, 215, 111, 6, 28, 203, 75, 11, 135, 146, 28, 103, 16, 192, 0, 118, 58, 130, 144, 10, 118, 254, 15, 138, 15, 252, 166, 134, 243, 246, 94, 19, 14, 56, 61, 153, 196, 206, 57, 245, 239, 225, 95, 116, 214, 52, 90, 255, 45};
    const unsigned msg_in_sz = 60;
    unsigned char r[] = {171, 95, 164, 116, 129, 253, 149, 116, 237, 88, 249, 187, 215, 111, 6, 28, 203, 75, 11, 135, 146, 28, 103, 16, 192, 0, 118, 58, 130, 144, 10, 118, 254, 15, 138, 15, 252, 166, 134, 243, 246, 94, 19, 14, 56, 61, 153, 196, 206, 57, 245, 239, 225};
    const unsigned r_sz = 53;
    unsigned char c[] = {95, 116, 214, 52, 90, 255, 45};
    const unsigned c_sz = 7;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 7;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test84)
{
    unsigned char msg_in[] = {147, 208, 30, 240, 152, 196, 189, 229, 251, 248, 101, 19, 221, 120, 92, 71, 216, 18, 30, 13, 81, 210, 74, 246, 80, 207, 89, 29, 137, 91, 162, 33, 137, 21, 78, 33, 53, 191, 28, 88, 131, 9, 35, 73, 96, 156, 215, 53, 164, 189, 228, 40, 55, 87, 212, 82, 125, 131, 176, 132, 171, 151, 28, 13, 51, 62, 189, 109, 36, 41, 90, 97, 167, 149, 247, 152, 146, 127, 203, 238, 222, 212, 14, 217, 169, 28, 144, 81, 99, 75, 159, 152, 33, 115, 39, 36, 130, 75, 247, 19, 98, 114, 248, 101, 76, 87, 197, 198, 239, 236, 172, 92, 37, 13, 64, 156, 50, 149, 240, 28, 127, 86, 145, 78, 158, 229, 88, 75, 245, 126, 233, 5, 48, 195, 175, 44, 166, 77, 133, 33, 72, 198, 188, 142, 204, 230, 253, 173, 9, 252, 213, 230, 143, 52, 89, 63, 32, 51, 156, 25, 230, 89, 85, 166, 200, 240, 152, 62, 129, 221, 63, 199, 106, 16, 176, 4, 215, 79, 59, 62, 255, 206, 245, 173, 57, 85, 99, 125, 204, 13, 250, 227, 217, 228, 135, 47, 5, 215, 231, 202, 252, 79, 17, 180, 232, 239, 48, 167, 100, 127, 30, 192, 216, 7, 144, 94, 81, 202, 243, 41, 23, 69, 165, 209, 71, 157, 225, 247, 88, 173, 19, 184, 142, 228, 188, 218, 187, 129, 231, 162, 196, 129, 212};
    const unsigned msg_in_sz = 243;
    unsigned char r[] = {147, 208, 30, 240, 152, 196, 189, 229, 251, 248, 101, 19, 221, 120, 92, 71, 216, 18, 30, 13, 81, 210, 74, 246, 80, 207, 89, 29, 137, 91, 162, 33, 137, 21, 78, 33, 53, 191, 28, 88, 131, 9, 35, 73, 96, 156, 215, 53, 164, 189, 228, 40, 55, 87, 212, 82, 125, 131, 176, 132, 171, 151, 28, 13, 51, 62, 189, 109, 36, 41, 90, 97, 167, 149, 247, 152, 146, 127, 203, 238, 222, 212, 14, 217, 169, 28, 144, 81, 99, 75, 159, 152, 33, 115, 39, 36, 130, 75, 247, 19, 98, 114, 248, 101, 76, 87, 197, 198, 239, 236, 172, 92, 37, 13, 64, 156, 50, 149, 240, 28, 127, 86, 145, 78, 158, 229, 88, 75, 245, 126, 233, 5, 48, 195, 175, 44, 166, 77, 133, 33, 72, 198, 188, 142, 204, 230, 253, 173, 9, 252, 213, 230, 143, 52, 89, 63, 32, 51, 156, 25, 230, 89, 85, 166, 200, 240, 152, 62, 129, 221, 63, 199, 106, 16, 176, 4, 215, 79, 59, 62, 255, 206, 245, 173, 57, 85, 99, 125, 204, 13, 250, 227, 217, 228, 135, 47, 5, 215, 231, 202, 252, 79, 17, 180, 232, 239, 48, 167, 100, 127, 30, 192, 216, 7, 144, 94, 81, 202, 243, 41, 23, 69, 165, 209, 71, 157, 225, 247, 88, 173, 19, 184, 142, 228, 188, 218};
    const unsigned r_sz = 236;
    unsigned char c[] = {187, 129, 231, 162, 196, 129, 212};
    const unsigned c_sz = 7;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 7;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test85)
{
    unsigned char msg_in[] = {147, 208, 30, 240, 152, 196, 189, 229, 251, 248, 101, 19, 221, 120, 92, 71, 216, 18, 30, 13, 81, 210, 74, 246, 80, 207, 89, 29, 137, 91, 162, 33, 137, 21, 78, 33, 53, 191, 28, 88, 131, 9, 35, 73, 96, 156, 215, 53, 164, 189, 228, 40, 55, 87, 212, 82, 125, 131, 176, 132, 171, 151, 28, 13, 51, 62, 189, 109, 36, 41, 90, 97, 167, 149, 247, 152, 146, 127, 203, 238, 222, 212, 14, 217, 169, 28, 144, 81, 99, 75, 159, 152, 33, 115, 39, 36, 130, 75, 247, 19, 98, 114, 248, 101, 76, 87, 197, 198, 239, 236, 172, 92, 37, 13, 64, 156, 50, 149, 240, 28, 127, 86, 145, 78, 158, 229, 88, 75, 245, 126, 233, 5, 48, 195, 175, 44, 166, 77, 133, 33, 72, 198, 188, 142, 204, 230, 253, 173, 9, 252, 213, 230, 143, 52, 89, 63, 32, 51, 156, 25, 230, 89, 85, 166, 200, 240, 152, 62, 129, 221, 63, 199, 135, 16, 176, 4, 215, 79, 59, 62, 255, 206, 245, 173, 57, 85, 99, 125, 204, 13, 250, 227, 217, 228, 135, 47, 5, 215, 231, 202, 252, 79, 17, 180, 232, 239, 48, 167, 100, 127, 30, 192, 216, 7, 144, 94, 81, 202, 243, 41, 23, 69, 165, 209, 71, 157, 225, 247, 88, 173, 19, 184, 142, 228, 188, 218, 187, 129, 231, 162, 196, 129, 212};
    const unsigned msg_in_sz = 243;
    unsigned char r[] = {147, 208, 30, 240, 152, 196, 189, 229, 251, 248, 101, 19, 221, 120, 92, 71, 216, 18, 30, 13, 81, 210, 74, 246, 80, 207, 89, 29, 137, 91, 162, 33, 137, 21, 78, 33, 53, 191, 28, 88, 131, 9, 35, 73, 96, 156, 215, 53, 164, 189, 228, 40, 55, 87, 212, 82, 125, 131, 176, 132, 171, 151, 28, 13, 51, 62, 189, 109, 36, 41, 90, 97, 167, 149, 247, 152, 146, 127, 203, 238, 222, 212, 14, 217, 169, 28, 144, 81, 99, 75, 159, 152, 33, 115, 39, 36, 130, 75, 247, 19, 98, 114, 248, 101, 76, 87, 197, 198, 239, 236, 172, 92, 37, 13, 64, 156, 50, 149, 240, 28, 127, 86, 145, 78, 158, 229, 88, 75, 245, 126, 233, 5, 48, 195, 175, 44, 166, 77, 133, 33, 72, 198, 188, 142, 204, 230, 253, 173, 9, 252, 213, 230, 143, 52, 89, 63, 32, 51, 156, 25, 230, 89, 85, 166, 200, 240, 152, 62, 129, 221, 63, 199, 106, 16, 176, 4, 215, 79, 59, 62, 255, 206, 245, 173, 57, 85, 99, 125, 204, 13, 250, 227, 217, 228, 135, 47, 5, 215, 231, 202, 252, 79, 17, 180, 232, 239, 48, 167, 100, 127, 30, 192, 216, 7, 144, 94, 81, 202, 243, 41, 23, 69, 165, 209, 71, 157, 225, 247, 88, 173, 19, 184, 142, 228, 188, 218};
    const unsigned r_sz = 236;
    unsigned char c[] = {187, 129, 231, 162, 196, 129, 212};
    const unsigned c_sz = 7;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 7;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test86)
{
    unsigned char msg_in[] = {147, 208, 30, 240, 152, 196, 189, 229, 251, 248, 101, 19, 221, 120, 92, 71, 216, 18, 30, 13, 81, 210, 74, 246, 80, 207, 89, 29, 137, 91, 162, 33, 137, 21, 78, 33, 53, 191, 28, 88, 131, 9, 35, 73, 96, 156, 215, 53, 164, 189, 228, 40, 55, 87, 212, 82, 125, 131, 176, 132, 171, 151, 28, 13, 51, 62, 189, 109, 36, 41, 90, 97, 167, 149, 247, 152, 146, 127, 203, 238, 222, 212, 14, 217, 169, 28, 144, 81, 99, 75, 159, 152, 33, 115, 39, 36, 130, 75, 247, 19, 98, 114, 248, 101, 76, 87, 197, 198, 239, 236, 172, 92, 37, 13, 64, 156, 50, 149, 240, 28, 127, 86, 145, 78, 158, 229, 88, 75, 245, 126, 233, 5, 48, 195, 175, 44, 166, 77, 133, 33, 72, 198, 188, 142, 204, 230, 253, 173, 9, 252, 213, 230, 143, 52, 89, 63, 32, 51, 156, 25, 230, 89, 85, 166, 200, 240, 152, 62, 129, 221, 63, 199, 135, 16, 176, 4, 215, 79, 59, 62, 255, 206, 245, 173, 57, 85, 99, 125, 204, 13, 250, 227, 217, 228, 135, 47, 5, 215, 231, 202, 252, 79, 17, 180, 232, 239, 48, 167, 100, 127, 30, 192, 216, 7, 144, 94, 81, 202, 243, 41, 23, 69, 165, 209, 71, 157, 225, 247, 88, 179, 19, 184, 142, 228, 188, 218, 187, 129, 231, 162, 196, 129, 212};
    const unsigned msg_in_sz = 243;
    unsigned char r[] = {147, 208, 30, 240, 152, 196, 189, 229, 251, 248, 101, 19, 221, 120, 92, 71, 216, 18, 30, 13, 81, 210, 74, 246, 80, 207, 89, 29, 137, 91, 162, 33, 137, 21, 78, 33, 53, 191, 28, 88, 131, 9, 35, 73, 96, 156, 215, 53, 164, 189, 228, 40, 55, 87, 212, 82, 125, 131, 176, 132, 171, 151, 28, 13, 51, 62, 189, 109, 36, 41, 90, 97, 167, 149, 247, 152, 146, 127, 203, 238, 222, 212, 14, 217, 169, 28, 144, 81, 99, 75, 159, 152, 33, 115, 39, 36, 130, 75, 247, 19, 98, 114, 248, 101, 76, 87, 197, 198, 239, 236, 172, 92, 37, 13, 64, 156, 50, 149, 240, 28, 127, 86, 145, 78, 158, 229, 88, 75, 245, 126, 233, 5, 48, 195, 175, 44, 166, 77, 133, 33, 72, 198, 188, 142, 204, 230, 253, 173, 9, 252, 213, 230, 143, 52, 89, 63, 32, 51, 156, 25, 230, 89, 85, 166, 200, 240, 152, 62, 129, 221, 63, 199, 106, 16, 176, 4, 215, 79, 59, 62, 255, 206, 245, 173, 57, 85, 99, 125, 204, 13, 250, 227, 217, 228, 135, 47, 5, 215, 231, 202, 252, 79, 17, 180, 232, 239, 48, 167, 100, 127, 30, 192, 216, 7, 144, 94, 81, 202, 243, 41, 23, 69, 165, 209, 71, 157, 225, 247, 88, 173, 19, 184, 142, 228, 188, 218};
    const unsigned r_sz = 236;
    unsigned char c[] = {187, 129, 231, 162, 196, 129, 212};
    const unsigned c_sz = 7;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 7;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test87)
{
    unsigned char msg_in[] = {147, 208, 30, 240, 152, 196, 189, 229, 251, 248, 101, 19, 221, 120, 92, 71, 216, 18, 30, 13, 81, 210, 74, 246, 80, 207, 89, 29, 137, 91, 162, 33, 137, 21, 78, 33, 53, 191, 28, 88, 131, 9, 35, 73, 96, 156, 215, 53, 164, 189, 228, 40, 55, 87, 212, 82, 125, 131, 176, 132, 171, 151, 28, 13, 51, 62, 189, 109, 36, 41, 238, 97, 167, 149, 247, 152, 146, 127, 203, 238, 222, 212, 14, 217, 169, 28, 144, 81, 99, 75, 159, 152, 33, 115, 39, 36, 130, 75, 247, 19, 98, 114, 248, 101, 76, 87, 197, 198, 239, 236, 172, 92, 37, 13, 64, 156, 50, 149, 240, 28, 127, 86, 145, 78, 158, 229, 88, 75, 245, 126, 233, 5, 48, 195, 175, 44, 166, 77, 133, 33, 72, 198, 188, 142, 204, 230, 253, 173, 9, 252, 213, 230, 143, 52, 89, 63, 32, 51, 156, 25, 230, 89, 85, 166, 200, 240, 152, 62, 129, 221, 63, 199, 135, 16, 176, 4, 215, 79, 59, 62, 255, 206, 245, 173, 57, 85, 99, 125, 204, 13, 250, 227, 217, 228, 135, 47, 5, 215, 231, 202, 252, 79, 17, 180, 232, 239, 48, 167, 100, 127, 30, 192, 216, 7, 144, 94, 81, 202, 243, 41, 23, 69, 165, 209, 71, 157, 225, 247, 88, 179, 19, 184, 142, 228, 188, 218, 187, 129, 231, 162, 196, 129, 212};
    const unsigned msg_in_sz = 243;
    unsigned char r[] = {147, 208, 30, 240, 152, 196, 189, 229, 251, 248, 101, 19, 221, 120, 92, 71, 216, 18, 30, 13, 81, 210, 74, 246, 80, 207, 89, 29, 137, 91, 162, 33, 137, 21, 78, 33, 53, 191, 28, 88, 131, 9, 35, 73, 96, 156, 215, 53, 164, 189, 228, 40, 55, 87, 212, 82, 125, 131, 176, 132, 171, 151, 28, 13, 51, 62, 189, 109, 36, 41, 90, 97, 167, 149, 247, 152, 146, 127, 203, 238, 222, 212, 14, 217, 169, 28, 144, 81, 99, 75, 159, 152, 33, 115, 39, 36, 130, 75, 247, 19, 98, 114, 248, 101, 76, 87, 197, 198, 239, 236, 172, 92, 37, 13, 64, 156, 50, 149, 240, 28, 127, 86, 145, 78, 158, 229, 88, 75, 245, 126, 233, 5, 48, 195, 175, 44, 166, 77, 133, 33, 72, 198, 188, 142, 204, 230, 253, 173, 9, 252, 213, 230, 143, 52, 89, 63, 32, 51, 156, 25, 230, 89, 85, 166, 200, 240, 152, 62, 129, 221, 63, 199, 106, 16, 176, 4, 215, 79, 59, 62, 255, 206, 245, 173, 57, 85, 99, 125, 204, 13, 250, 227, 217, 228, 135, 47, 5, 215, 231, 202, 252, 79, 17, 180, 232, 239, 48, 167, 100, 127, 30, 192, 216, 7, 144, 94, 81, 202, 243, 41, 23, 69, 165, 209, 71, 157, 225, 247, 88, 173, 19, 184, 142, 228, 188, 218};
    const unsigned r_sz = 236;
    unsigned char c[] = {187, 129, 231, 162, 196, 129, 212};
    const unsigned c_sz = 7;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 7;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test88)
{
    unsigned char msg_in[] = {59, 66, 153, 253, 39, 231, 221, 41, 130, 204, 224, 225, 195, 154, 26, 122, 84, 159, 22, 114, 15, 47, 35, 19, 235, 78, 134, 112, 22, 50, 151};
    const unsigned msg_in_sz = 31;
    unsigned char r[] = {59, 66, 153, 253, 39, 231, 221, 41, 130, 204, 224, 225, 195, 154, 26, 122, 84, 159, 22, 114};
    const unsigned r_sz = 20;
    unsigned char c[] = {15, 47, 35, 19, 235, 78, 134, 112, 22, 50, 151};
    const unsigned c_sz = 11;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 11;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test89)
{
    unsigned char msg_in[] = {59, 66, 153, 253, 39, 231, 221, 41, 130, 204, 224, 225, 195, 201, 26, 122, 84, 159, 22, 114, 15, 47, 35, 19, 235, 78, 134, 112, 22, 50, 151};
    const unsigned msg_in_sz = 31;
    unsigned char r[] = {59, 66, 153, 253, 39, 231, 221, 41, 130, 204, 224, 225, 195, 154, 26, 122, 84, 159, 22, 114};
    const unsigned r_sz = 20;
    unsigned char c[] = {15, 47, 35, 19, 235, 78, 134, 112, 22, 50, 151};
    const unsigned c_sz = 11;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 11;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test90)
{
    unsigned char msg_in[] = {59, 66, 153, 253, 39, 231, 221, 41, 130, 204, 224, 225, 195, 201, 126, 122, 84, 159, 22, 114, 15, 47, 35, 19, 235, 78, 134, 112, 22, 50, 151};
    const unsigned msg_in_sz = 31;
    unsigned char r[] = {59, 66, 153, 253, 39, 231, 221, 41, 130, 204, 224, 225, 195, 154, 26, 122, 84, 159, 22, 114};
    const unsigned r_sz = 20;
    unsigned char c[] = {15, 47, 35, 19, 235, 78, 134, 112, 22, 50, 151};
    const unsigned c_sz = 11;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 11;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test91)
{
    unsigned char msg_in[] = {59, 66, 153, 253, 39, 231, 221, 41, 130, 204, 224, 225, 195, 201, 126, 122, 84, 159, 22, 114, 15, 47, 35, 19, 235, 78, 106, 112, 22, 50, 151};
    const unsigned msg_in_sz = 31;
    unsigned char r[] = {59, 66, 153, 253, 39, 231, 221, 41, 130, 204, 224, 225, 195, 154, 26, 122, 84, 159, 22, 114};
    const unsigned r_sz = 20;
    unsigned char c[] = {15, 47, 35, 19, 235, 78, 134, 112, 22, 50, 151};
    const unsigned c_sz = 11;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 11;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test92)
{
    unsigned char msg_in[] = {59, 66, 8, 253, 39, 231, 221, 41, 130, 204, 224, 225, 195, 201, 126, 122, 84, 159, 22, 114, 15, 47, 35, 19, 235, 78, 106, 112, 22, 50, 151};
    const unsigned msg_in_sz = 31;
    unsigned char r[] = {59, 66, 153, 253, 39, 231, 221, 41, 130, 204, 224, 225, 195, 154, 26, 122, 84, 159, 22, 114};
    const unsigned r_sz = 20;
    unsigned char c[] = {15, 47, 35, 19, 235, 78, 134, 112, 22, 50, 151};
    const unsigned c_sz = 11;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 11;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test93)
{
    unsigned char msg_in[] = {59, 120, 8, 253, 39, 231, 221, 41, 130, 204, 224, 225, 195, 201, 126, 122, 84, 159, 22, 114, 15, 47, 35, 19, 235, 78, 106, 112, 22, 50, 151};
    const unsigned msg_in_sz = 31;
    unsigned char r[] = {59, 66, 153, 253, 39, 231, 221, 41, 130, 204, 224, 225, 195, 154, 26, 122, 84, 159, 22, 114};
    const unsigned r_sz = 20;
    unsigned char c[] = {15, 47, 35, 19, 235, 78, 134, 112, 22, 50, 151};
    const unsigned c_sz = 11;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 11;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test94)
{
    unsigned char msg_in[] = {10, 143, 29, 228, 204, 71, 238, 67, 176, 137, 241, 5, 27, 214, 13, 57, 1, 200, 33, 148, 55, 133, 242, 182, 182, 220, 17, 27, 82, 216, 141, 162, 90, 146, 247, 125, 8, 242, 158, 68, 15, 193, 131, 163, 144, 26, 190, 251, 16, 185, 97, 155, 150, 115, 121, 77, 58, 1, 174, 6, 23, 3, 98, 66, 243, 72, 24, 205, 112, 30, 58, 84, 207, 127, 27, 240, 246, 182, 110, 204, 42, 228, 196, 94, 201, 13, 54, 236, 31, 104, 208, 23, 232, 162, 223, 87, 12, 88, 249, 77, 42, 102, 197, 187, 30, 180, 1, 97, 16, 169, 225, 107, 211, 179, 112, 27, 221, 21, 226, 193, 224, 112, 34, 98, 109, 79, 95, 195, 216, 58, 133, 3, 180, 232, 154, 2, 58, 232, 43, 193, 62, 191, 174, 167, 208, 144, 220, 240, 201, 192, 59, 87, 145, 84, 176, 159, 41, 79, 164, 38, 248, 78, 143, 219, 160, 244, 211, 63, 97, 217, 175, 111, 188, 109, 124, 78, 207, 169, 150, 168, 7, 226, 178, 34, 234, 129, 199, 159, 164, 228, 238, 100, 18, 111, 229, 129, 89, 139, 134, 145, 88, 19, 206, 132, 22, 152, 71, 206, 217, 200, 56, 206, 26, 172, 4, 128};
    const unsigned msg_in_sz = 216;
    unsigned char r[] = {10, 143, 29, 228, 204, 71, 238, 67, 176, 137, 241, 5, 27, 214, 13, 57, 1, 200, 33, 148, 55, 133, 242, 182, 182, 220, 17, 27, 82, 216, 141, 162, 90, 146, 247, 125, 8, 242, 158, 68, 15, 193, 131, 163, 144, 26, 190, 251, 16, 185, 97, 155, 150, 115, 121, 77, 58, 1, 174, 6, 23, 3, 98, 66, 243, 72, 24, 205, 112, 30, 58, 84, 207, 127, 27, 240, 246, 182, 110, 204, 42, 228, 196, 94, 201, 13, 54, 236, 31, 104, 208, 23, 232, 162, 223, 87, 12, 88, 249, 77, 42, 102, 197, 187, 30, 180, 1, 97, 16, 169, 225, 107, 211, 179, 112, 27, 221, 21, 226, 193, 224, 112, 34, 98, 109, 79, 95, 195, 216, 58, 133, 3, 180, 232, 154, 2, 58, 232, 43, 193, 62, 191, 174, 167, 208, 144, 220, 240, 201, 192, 59, 87, 145, 84, 176, 159, 41, 79, 164, 38, 248, 78, 143, 219, 160, 244, 211, 63, 97, 217, 175, 111, 188, 109, 124, 78, 207, 169, 150, 168, 7, 226, 178, 34, 234, 129, 199, 159, 164, 228, 238, 100, 18, 111, 229, 129, 89, 139, 134, 145, 88, 19, 206, 132, 22};
    const unsigned r_sz = 205;
    unsigned char c[] = {152, 71, 206, 217, 200, 56, 206, 26, 172, 4, 128};
    const unsigned c_sz = 11;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 11;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test95)
{
    unsigned char msg_in[] = {10, 143, 29, 228, 204, 71, 238, 67, 176, 137, 241, 5, 27, 214, 13, 57, 1, 200, 33, 148, 55, 133, 242, 182, 182, 220, 17, 27, 82, 216, 141, 162, 90, 146, 247, 125, 8, 242, 158, 68, 15, 193, 131, 163, 144, 26, 190, 251, 16, 185, 97, 155, 150, 115, 121, 77, 58, 1, 174, 6, 23, 3, 98, 66, 243, 72, 24, 205, 112, 30, 58, 84, 207, 127, 27, 240, 246, 182, 110, 204, 42, 228, 196, 94, 201, 13, 54, 236, 31, 104, 208, 23, 232, 162, 223, 87, 12, 88, 249, 77, 142, 102, 197, 187, 30, 180, 1, 97, 16, 169, 225, 107, 211, 179, 112, 27, 221, 21, 226, 193, 224, 112, 34, 98, 109, 79, 95, 195, 216, 58, 133, 3, 180, 232, 154, 2, 58, 232, 43, 193, 62, 191, 174, 167, 208, 144, 220, 240, 201, 192, 59, 87, 145, 84, 176, 159, 41, 79, 164, 38, 248, 78, 143, 219, 160, 244, 211, 63, 97, 217, 175, 111, 188, 109, 124, 78, 207, 169, 150, 168, 7, 226, 178, 34, 234, 129, 199, 159, 164, 228, 238, 100, 18, 111, 229, 129, 89, 139, 134, 145, 88, 19, 206, 132, 22, 152, 71, 206, 217, 200, 56, 206, 26, 172, 4, 128};
    const unsigned msg_in_sz = 216;
    unsigned char r[] = {10, 143, 29, 228, 204, 71, 238, 67, 176, 137, 241, 5, 27, 214, 13, 57, 1, 200, 33, 148, 55, 133, 242, 182, 182, 220, 17, 27, 82, 216, 141, 162, 90, 146, 247, 125, 8, 242, 158, 68, 15, 193, 131, 163, 144, 26, 190, 251, 16, 185, 97, 155, 150, 115, 121, 77, 58, 1, 174, 6, 23, 3, 98, 66, 243, 72, 24, 205, 112, 30, 58, 84, 207, 127, 27, 240, 246, 182, 110, 204, 42, 228, 196, 94, 201, 13, 54, 236, 31, 104, 208, 23, 232, 162, 223, 87, 12, 88, 249, 77, 42, 102, 197, 187, 30, 180, 1, 97, 16, 169, 225, 107, 211, 179, 112, 27, 221, 21, 226, 193, 224, 112, 34, 98, 109, 79, 95, 195, 216, 58, 133, 3, 180, 232, 154, 2, 58, 232, 43, 193, 62, 191, 174, 167, 208, 144, 220, 240, 201, 192, 59, 87, 145, 84, 176, 159, 41, 79, 164, 38, 248, 78, 143, 219, 160, 244, 211, 63, 97, 217, 175, 111, 188, 109, 124, 78, 207, 169, 150, 168, 7, 226, 178, 34, 234, 129, 199, 159, 164, 228, 238, 100, 18, 111, 229, 129, 89, 139, 134, 145, 88, 19, 206, 132, 22};
    const unsigned r_sz = 205;
    unsigned char c[] = {152, 71, 206, 217, 200, 56, 206, 26, 172, 4, 128};
    const unsigned c_sz = 11;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 11;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test96)
{
    unsigned char msg_in[] = {10, 143, 29, 228, 204, 71, 238, 67, 176, 137, 241, 5, 27, 214, 13, 57, 1, 200, 33, 148, 55, 133, 242, 182, 182, 220, 17, 27, 82, 216, 141, 162, 90, 146, 247, 125, 8, 242, 158, 68, 15, 193, 131, 163, 144, 26, 190, 251, 16, 185, 97, 155, 150, 115, 121, 77, 58, 1, 174, 6, 23, 3, 98, 66, 243, 72, 24, 205, 112, 30, 58, 84, 207, 127, 27, 240, 246, 182, 110, 204, 42, 228, 196, 94, 201, 13, 54, 236, 31, 104, 208, 23, 232, 162, 223, 87, 12, 88, 249, 77, 142, 102, 197, 187, 30, 180, 1, 97, 16, 169, 225, 107, 211, 179, 112, 27, 221, 21, 226, 193, 224, 112, 34, 98, 109, 79, 95, 195, 216, 58, 133, 3, 180, 232, 154, 2, 58, 232, 43, 193, 62, 191, 174, 167, 208, 144, 220, 240, 172, 192, 59, 87, 145, 84, 176, 159, 41, 79, 164, 38, 248, 78, 143, 219, 160, 244, 211, 63, 97, 217, 175, 111, 188, 109, 124, 78, 207, 169, 150, 168, 7, 226, 178, 34, 234, 129, 199, 159, 164, 228, 238, 100, 18, 111, 229, 129, 89, 139, 134, 145, 88, 19, 206, 132, 22, 152, 71, 206, 217, 200, 56, 206, 26, 172, 4, 128};
    const unsigned msg_in_sz = 216;
    unsigned char r[] = {10, 143, 29, 228, 204, 71, 238, 67, 176, 137, 241, 5, 27, 214, 13, 57, 1, 200, 33, 148, 55, 133, 242, 182, 182, 220, 17, 27, 82, 216, 141, 162, 90, 146, 247, 125, 8, 242, 158, 68, 15, 193, 131, 163, 144, 26, 190, 251, 16, 185, 97, 155, 150, 115, 121, 77, 58, 1, 174, 6, 23, 3, 98, 66, 243, 72, 24, 205, 112, 30, 58, 84, 207, 127, 27, 240, 246, 182, 110, 204, 42, 228, 196, 94, 201, 13, 54, 236, 31, 104, 208, 23, 232, 162, 223, 87, 12, 88, 249, 77, 42, 102, 197, 187, 30, 180, 1, 97, 16, 169, 225, 107, 211, 179, 112, 27, 221, 21, 226, 193, 224, 112, 34, 98, 109, 79, 95, 195, 216, 58, 133, 3, 180, 232, 154, 2, 58, 232, 43, 193, 62, 191, 174, 167, 208, 144, 220, 240, 201, 192, 59, 87, 145, 84, 176, 159, 41, 79, 164, 38, 248, 78, 143, 219, 160, 244, 211, 63, 97, 217, 175, 111, 188, 109, 124, 78, 207, 169, 150, 168, 7, 226, 178, 34, 234, 129, 199, 159, 164, 228, 238, 100, 18, 111, 229, 129, 89, 139, 134, 145, 88, 19, 206, 132, 22};
    const unsigned r_sz = 205;
    unsigned char c[] = {152, 71, 206, 217, 200, 56, 206, 26, 172, 4, 128};
    const unsigned c_sz = 11;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 11;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test97)
{
    unsigned char msg_in[] = {10, 143, 29, 228, 204, 71, 238, 67, 176, 137, 241, 5, 27, 214, 13, 57, 1, 200, 33, 148, 55, 133, 242, 182, 182, 220, 17, 27, 82, 216, 141, 162, 90, 146, 247, 125, 8, 242, 158, 68, 15, 193, 131, 163, 144, 26, 190, 251, 16, 185, 97, 155, 150, 115, 121, 77, 58, 1, 174, 6, 23, 3, 98, 66, 243, 72, 24, 205, 112, 30, 58, 84, 207, 127, 27, 240, 246, 182, 110, 204, 42, 228, 196, 94, 201, 13, 54, 236, 31, 104, 208, 23, 232, 162, 223, 87, 12, 88, 249, 77, 142, 102, 197, 187, 30, 180, 1, 97, 16, 169, 225, 107, 211, 179, 112, 27, 221, 21, 226, 193, 224, 112, 34, 98, 109, 79, 95, 195, 216, 58, 133, 3, 180, 232, 154, 2, 58, 232, 43, 193, 62, 191, 174, 167, 208, 144, 220, 135, 172, 192, 59, 87, 145, 84, 176, 159, 41, 79, 164, 38, 248, 78, 143, 219, 160, 244, 211, 63, 97, 217, 175, 111, 188, 109, 124, 78, 207, 169, 150, 168, 7, 226, 178, 34, 234, 129, 199, 159, 164, 228, 238, 100, 18, 111, 229, 129, 89, 139, 134, 145, 88, 19, 206, 132, 22, 152, 71, 206, 217, 200, 56, 206, 26, 172, 4, 128};
    const unsigned msg_in_sz = 216;
    unsigned char r[] = {10, 143, 29, 228, 204, 71, 238, 67, 176, 137, 241, 5, 27, 214, 13, 57, 1, 200, 33, 148, 55, 133, 242, 182, 182, 220, 17, 27, 82, 216, 141, 162, 90, 146, 247, 125, 8, 242, 158, 68, 15, 193, 131, 163, 144, 26, 190, 251, 16, 185, 97, 155, 150, 115, 121, 77, 58, 1, 174, 6, 23, 3, 98, 66, 243, 72, 24, 205, 112, 30, 58, 84, 207, 127, 27, 240, 246, 182, 110, 204, 42, 228, 196, 94, 201, 13, 54, 236, 31, 104, 208, 23, 232, 162, 223, 87, 12, 88, 249, 77, 42, 102, 197, 187, 30, 180, 1, 97, 16, 169, 225, 107, 211, 179, 112, 27, 221, 21, 226, 193, 224, 112, 34, 98, 109, 79, 95, 195, 216, 58, 133, 3, 180, 232, 154, 2, 58, 232, 43, 193, 62, 191, 174, 167, 208, 144, 220, 240, 201, 192, 59, 87, 145, 84, 176, 159, 41, 79, 164, 38, 248, 78, 143, 219, 160, 244, 211, 63, 97, 217, 175, 111, 188, 109, 124, 78, 207, 169, 150, 168, 7, 226, 178, 34, 234, 129, 199, 159, 164, 228, 238, 100, 18, 111, 229, 129, 89, 139, 134, 145, 88, 19, 206, 132, 22};
    const unsigned r_sz = 205;
    unsigned char c[] = {152, 71, 206, 217, 200, 56, 206, 26, 172, 4, 128};
    const unsigned c_sz = 11;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 11;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test98)
{
    unsigned char msg_in[] = {10, 143, 29, 228, 204, 71, 238, 67, 176, 137, 241, 5, 27, 214, 13, 57, 1, 200, 33, 148, 55, 133, 242, 182, 182, 220, 17, 27, 82, 216, 141, 162, 90, 146, 247, 125, 8, 242, 158, 68, 15, 193, 131, 163, 144, 26, 190, 251, 16, 185, 97, 155, 150, 115, 121, 77, 58, 1, 174, 6, 23, 3, 98, 66, 243, 72, 24, 205, 112, 30, 58, 84, 207, 127, 27, 240, 246, 182, 110, 204, 42, 228, 196, 94, 201, 13, 54, 236, 31, 104, 208, 23, 232, 162, 223, 87, 12, 88, 249, 77, 142, 110, 197, 187, 30, 180, 1, 97, 16, 169, 225, 107, 211, 179, 112, 27, 221, 21, 226, 193, 224, 112, 34, 98, 109, 79, 95, 195, 216, 58, 133, 3, 180, 232, 154, 2, 58, 232, 43, 193, 62, 191, 174, 167, 208, 144, 220, 135, 172, 192, 59, 87, 145, 84, 176, 159, 41, 79, 164, 38, 248, 78, 143, 219, 160, 244, 211, 63, 97, 217, 175, 111, 188, 109, 124, 78, 207, 169, 150, 168, 7, 226, 178, 34, 234, 129, 199, 159, 164, 228, 238, 100, 18, 111, 229, 129, 89, 139, 134, 145, 88, 19, 206, 132, 22, 152, 71, 206, 217, 200, 56, 206, 26, 172, 4, 128};
    const unsigned msg_in_sz = 216;
    unsigned char r[] = {10, 143, 29, 228, 204, 71, 238, 67, 176, 137, 241, 5, 27, 214, 13, 57, 1, 200, 33, 148, 55, 133, 242, 182, 182, 220, 17, 27, 82, 216, 141, 162, 90, 146, 247, 125, 8, 242, 158, 68, 15, 193, 131, 163, 144, 26, 190, 251, 16, 185, 97, 155, 150, 115, 121, 77, 58, 1, 174, 6, 23, 3, 98, 66, 243, 72, 24, 205, 112, 30, 58, 84, 207, 127, 27, 240, 246, 182, 110, 204, 42, 228, 196, 94, 201, 13, 54, 236, 31, 104, 208, 23, 232, 162, 223, 87, 12, 88, 249, 77, 42, 102, 197, 187, 30, 180, 1, 97, 16, 169, 225, 107, 211, 179, 112, 27, 221, 21, 226, 193, 224, 112, 34, 98, 109, 79, 95, 195, 216, 58, 133, 3, 180, 232, 154, 2, 58, 232, 43, 193, 62, 191, 174, 167, 208, 144, 220, 240, 201, 192, 59, 87, 145, 84, 176, 159, 41, 79, 164, 38, 248, 78, 143, 219, 160, 244, 211, 63, 97, 217, 175, 111, 188, 109, 124, 78, 207, 169, 150, 168, 7, 226, 178, 34, 234, 129, 199, 159, 164, 228, 238, 100, 18, 111, 229, 129, 89, 139, 134, 145, 88, 19, 206, 132, 22};
    const unsigned r_sz = 205;
    unsigned char c[] = {152, 71, 206, 217, 200, 56, 206, 26, 172, 4, 128};
    const unsigned c_sz = 11;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 11;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test99)
{
    unsigned char msg_in[] = {10, 143, 29, 228, 204, 71, 238, 67, 176, 137, 241, 5, 27, 214, 13, 57, 1, 200, 33, 148, 55, 133, 242, 182, 182, 220, 17, 27, 82, 216, 141, 162, 90, 146, 247, 125, 8, 242, 158, 68, 15, 193, 131, 163, 144, 26, 190, 251, 16, 185, 97, 155, 150, 115, 121, 77, 58, 1, 174, 6, 23, 3, 98, 66, 243, 72, 24, 205, 112, 30, 58, 84, 207, 127, 27, 240, 246, 182, 110, 204, 42, 228, 196, 94, 201, 13, 54, 236, 31, 104, 208, 23, 232, 162, 223, 87, 12, 88, 249, 77, 142, 110, 197, 187, 30, 180, 1, 97, 16, 169, 225, 107, 211, 179, 112, 27, 221, 21, 226, 193, 224, 112, 34, 98, 109, 79, 95, 195, 216, 58, 133, 3, 180, 232, 154, 2, 58, 232, 43, 193, 62, 191, 174, 167, 208, 144, 220, 135, 53, 192, 59, 87, 145, 84, 176, 159, 41, 79, 164, 38, 248, 78, 143, 219, 160, 244, 211, 63, 97, 217, 175, 111, 188, 109, 124, 78, 207, 169, 150, 168, 7, 226, 178, 34, 234, 129, 199, 159, 164, 228, 238, 100, 18, 111, 229, 129, 89, 139, 134, 145, 88, 19, 206, 132, 22, 152, 71, 206, 217, 200, 56, 206, 26, 172, 4, 128};
    const unsigned msg_in_sz = 216;
    unsigned char r[] = {10, 143, 29, 228, 204, 71, 238, 67, 176, 137, 241, 5, 27, 214, 13, 57, 1, 200, 33, 148, 55, 133, 242, 182, 182, 220, 17, 27, 82, 216, 141, 162, 90, 146, 247, 125, 8, 242, 158, 68, 15, 193, 131, 163, 144, 26, 190, 251, 16, 185, 97, 155, 150, 115, 121, 77, 58, 1, 174, 6, 23, 3, 98, 66, 243, 72, 24, 205, 112, 30, 58, 84, 207, 127, 27, 240, 246, 182, 110, 204, 42, 228, 196, 94, 201, 13, 54, 236, 31, 104, 208, 23, 232, 162, 223, 87, 12, 88, 249, 77, 42, 102, 197, 187, 30, 180, 1, 97, 16, 169, 225, 107, 211, 179, 112, 27, 221, 21, 226, 193, 224, 112, 34, 98, 109, 79, 95, 195, 216, 58, 133, 3, 180, 232, 154, 2, 58, 232, 43, 193, 62, 191, 174, 167, 208, 144, 220, 240, 201, 192, 59, 87, 145, 84, 176, 159, 41, 79, 164, 38, 248, 78, 143, 219, 160, 244, 211, 63, 97, 217, 175, 111, 188, 109, 124, 78, 207, 169, 150, 168, 7, 226, 178, 34, 234, 129, 199, 159, 164, 228, 238, 100, 18, 111, 229, 129, 89, 139, 134, 145, 88, 19, 206, 132, 22};
    const unsigned r_sz = 205;
    unsigned char c[] = {152, 71, 206, 217, 200, 56, 206, 26, 172, 4, 128};
    const unsigned c_sz = 11;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 11;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test100)
{
    unsigned char msg_in[] = {253, 157, 210, 1, 30, 131, 129, 119, 108, 90, 28, 15, 135, 79, 30, 131, 138, 241, 115, 216, 87, 215, 47, 249, 216, 63, 21, 63, 50, 113, 221, 112, 211, 234, 160, 193, 153, 83, 208, 127, 77, 195, 39, 221, 237, 75, 71, 221, 110, 194, 183, 9, 3, 138, 112, 171, 217, 26, 219, 126, 69, 93, 60, 111, 240, 105, 101, 131, 240, 70, 88, 114, 166, 223, 7, 64, 241, 161, 216, 19, 109, 186, 125, 64, 165, 15, 165, 25, 106, 240, 87, 197, 244, 45, 43, 138, 195, 141, 74, 142, 129, 11, 194, 209, 171, 157, 74, 243, 147, 104, 18, 225, 56, 91, 80, 123, 122, 48, 93, 239, 0, 3, 92, 157, 81, 104};
    const unsigned msg_in_sz = 126;
    unsigned char r[] = {253, 157, 210, 1, 30, 131, 129, 119, 108, 90, 28, 15, 135, 79, 30, 131, 138, 241, 115, 216, 87, 215, 47, 249, 216, 63, 21, 63, 50, 113, 221, 112, 211, 234, 160, 193, 153, 83, 208, 127, 77, 195, 39, 221, 237, 75, 71, 221, 110, 194, 183, 9, 3, 138, 112, 171, 217, 26, 219, 126, 69, 93, 60, 111, 240, 105, 101, 131, 240, 70, 88, 114, 166, 223, 7, 64, 241, 161, 216, 19, 109, 186, 125, 64, 165, 15, 165, 25, 106, 240, 87, 197, 244, 45, 43, 138, 195, 141, 74, 142, 129, 11, 194, 209, 171, 157, 74, 243, 147, 104, 18, 225, 56};
    const unsigned r_sz = 113;
    unsigned char c[] = {91, 80, 123, 122, 48, 93, 239, 0, 3, 92, 157, 81, 104};
    const unsigned c_sz = 13;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 13;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test101)
{
    unsigned char msg_in[] = {253, 157, 210, 1, 30, 131, 129, 119, 108, 90, 28, 15, 135, 79, 242, 131, 138, 241, 115, 216, 87, 215, 47, 249, 216, 63, 21, 63, 50, 113, 221, 112, 211, 234, 160, 193, 153, 83, 208, 127, 77, 195, 39, 221, 237, 75, 71, 221, 110, 194, 183, 9, 3, 138, 112, 171, 217, 26, 219, 126, 69, 93, 60, 111, 240, 105, 101, 131, 240, 70, 88, 114, 166, 223, 7, 64, 241, 161, 216, 19, 109, 186, 125, 64, 165, 15, 165, 25, 106, 240, 87, 197, 244, 45, 43, 138, 195, 141, 74, 142, 129, 11, 194, 209, 171, 157, 74, 243, 147, 104, 18, 225, 56, 91, 80, 123, 122, 48, 93, 239, 0, 3, 92, 157, 81, 104};
    const unsigned msg_in_sz = 126;
    unsigned char r[] = {253, 157, 210, 1, 30, 131, 129, 119, 108, 90, 28, 15, 135, 79, 30, 131, 138, 241, 115, 216, 87, 215, 47, 249, 216, 63, 21, 63, 50, 113, 221, 112, 211, 234, 160, 193, 153, 83, 208, 127, 77, 195, 39, 221, 237, 75, 71, 221, 110, 194, 183, 9, 3, 138, 112, 171, 217, 26, 219, 126, 69, 93, 60, 111, 240, 105, 101, 131, 240, 70, 88, 114, 166, 223, 7, 64, 241, 161, 216, 19, 109, 186, 125, 64, 165, 15, 165, 25, 106, 240, 87, 197, 244, 45, 43, 138, 195, 141, 74, 142, 129, 11, 194, 209, 171, 157, 74, 243, 147, 104, 18, 225, 56};
    const unsigned r_sz = 113;
    unsigned char c[] = {91, 80, 123, 122, 48, 93, 239, 0, 3, 92, 157, 81, 104};
    const unsigned c_sz = 13;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 13;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test102)
{
    unsigned char msg_in[] = {253, 157, 210, 1, 30, 131, 129, 119, 108, 90, 28, 15, 135, 79, 242, 131, 138, 241, 115, 216, 87, 215, 47, 249, 216, 63, 21, 63, 50, 113, 221, 112, 211, 234, 160, 193, 153, 83, 208, 127, 77, 195, 39, 221, 237, 75, 71, 221, 110, 194, 183, 9, 3, 138, 112, 171, 217, 26, 219, 126, 69, 93, 60, 111, 240, 105, 101, 131, 240, 70, 88, 114, 166, 223, 7, 64, 241, 161, 216, 19, 109, 186, 125, 64, 153, 15, 165, 25, 106, 240, 87, 197, 244, 45, 43, 138, 195, 141, 74, 142, 129, 11, 194, 209, 171, 157, 74, 243, 147, 104, 18, 225, 56, 91, 80, 123, 122, 48, 93, 239, 0, 3, 92, 157, 81, 104};
    const unsigned msg_in_sz = 126;
    unsigned char r[] = {253, 157, 210, 1, 30, 131, 129, 119, 108, 90, 28, 15, 135, 79, 30, 131, 138, 241, 115, 216, 87, 215, 47, 249, 216, 63, 21, 63, 50, 113, 221, 112, 211, 234, 160, 193, 153, 83, 208, 127, 77, 195, 39, 221, 237, 75, 71, 221, 110, 194, 183, 9, 3, 138, 112, 171, 217, 26, 219, 126, 69, 93, 60, 111, 240, 105, 101, 131, 240, 70, 88, 114, 166, 223, 7, 64, 241, 161, 216, 19, 109, 186, 125, 64, 165, 15, 165, 25, 106, 240, 87, 197, 244, 45, 43, 138, 195, 141, 74, 142, 129, 11, 194, 209, 171, 157, 74, 243, 147, 104, 18, 225, 56};
    const unsigned r_sz = 113;
    unsigned char c[] = {91, 80, 123, 122, 48, 93, 239, 0, 3, 92, 157, 81, 104};
    const unsigned c_sz = 13;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 13;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test103)
{
    unsigned char msg_in[] = {253, 157, 210, 1, 30, 131, 129, 119, 108, 90, 28, 15, 135, 79, 242, 131, 138, 241, 115, 214, 87, 215, 47, 249, 216, 63, 21, 63, 50, 113, 221, 112, 211, 234, 160, 193, 153, 83, 208, 127, 77, 195, 39, 221, 237, 75, 71, 221, 110, 194, 183, 9, 3, 138, 112, 171, 217, 26, 219, 126, 69, 93, 60, 111, 240, 105, 101, 131, 240, 70, 88, 114, 166, 223, 7, 64, 241, 161, 216, 19, 109, 186, 125, 64, 153, 15, 165, 25, 106, 240, 87, 197, 244, 45, 43, 138, 195, 141, 74, 142, 129, 11, 194, 209, 171, 157, 74, 243, 147, 104, 18, 225, 56, 91, 80, 123, 122, 48, 93, 239, 0, 3, 92, 157, 81, 104};
    const unsigned msg_in_sz = 126;
    unsigned char r[] = {253, 157, 210, 1, 30, 131, 129, 119, 108, 90, 28, 15, 135, 79, 30, 131, 138, 241, 115, 216, 87, 215, 47, 249, 216, 63, 21, 63, 50, 113, 221, 112, 211, 234, 160, 193, 153, 83, 208, 127, 77, 195, 39, 221, 237, 75, 71, 221, 110, 194, 183, 9, 3, 138, 112, 171, 217, 26, 219, 126, 69, 93, 60, 111, 240, 105, 101, 131, 240, 70, 88, 114, 166, 223, 7, 64, 241, 161, 216, 19, 109, 186, 125, 64, 165, 15, 165, 25, 106, 240, 87, 197, 244, 45, 43, 138, 195, 141, 74, 142, 129, 11, 194, 209, 171, 157, 74, 243, 147, 104, 18, 225, 56};
    const unsigned r_sz = 113;
    unsigned char c[] = {91, 80, 123, 122, 48, 93, 239, 0, 3, 92, 157, 81, 104};
    const unsigned c_sz = 13;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 13;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test104)
{
    unsigned char msg_in[] = {253, 157, 210, 1, 30, 131, 129, 119, 108, 90, 28, 15, 135, 79, 242, 131, 138, 241, 115, 214, 87, 215, 47, 249, 216, 63, 21, 63, 50, 113, 221, 112, 211, 234, 160, 193, 153, 83, 208, 127, 77, 195, 39, 221, 237, 75, 71, 221, 110, 194, 183, 9, 3, 138, 112, 171, 217, 26, 219, 126, 69, 93, 60, 111, 240, 105, 101, 131, 240, 70, 88, 114, 166, 223, 7, 64, 241, 161, 216, 19, 109, 186, 125, 64, 153, 15, 165, 25, 106, 240, 87, 197, 244, 45, 43, 138, 195, 141, 74, 142, 129, 113, 194, 209, 171, 157, 74, 243, 147, 104, 18, 225, 56, 91, 80, 123, 122, 48, 93, 239, 0, 3, 92, 157, 81, 104};
    const unsigned msg_in_sz = 126;
    unsigned char r[] = {253, 157, 210, 1, 30, 131, 129, 119, 108, 90, 28, 15, 135, 79, 30, 131, 138, 241, 115, 216, 87, 215, 47, 249, 216, 63, 21, 63, 50, 113, 221, 112, 211, 234, 160, 193, 153, 83, 208, 127, 77, 195, 39, 221, 237, 75, 71, 221, 110, 194, 183, 9, 3, 138, 112, 171, 217, 26, 219, 126, 69, 93, 60, 111, 240, 105, 101, 131, 240, 70, 88, 114, 166, 223, 7, 64, 241, 161, 216, 19, 109, 186, 125, 64, 165, 15, 165, 25, 106, 240, 87, 197, 244, 45, 43, 138, 195, 141, 74, 142, 129, 11, 194, 209, 171, 157, 74, 243, 147, 104, 18, 225, 56};
    const unsigned r_sz = 113;
    unsigned char c[] = {91, 80, 123, 122, 48, 93, 239, 0, 3, 92, 157, 81, 104};
    const unsigned c_sz = 13;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 13;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test105)
{
    unsigned char msg_in[] = {253, 157, 210, 1, 30, 131, 129, 119, 108, 90, 28, 15, 135, 79, 242, 131, 138, 241, 115, 214, 87, 215, 47, 249, 216, 63, 21, 63, 50, 113, 221, 112, 211, 234, 160, 193, 153, 83, 208, 127, 77, 195, 39, 221, 237, 75, 71, 221, 110, 194, 183, 9, 3, 138, 112, 171, 217, 26, 219, 126, 69, 93, 60, 111, 240, 105, 101, 131, 240, 70, 88, 114, 166, 223, 7, 64, 241, 161, 216, 19, 109, 186, 125, 64, 153, 15, 165, 25, 106, 240, 87, 197, 244, 45, 43, 138, 195, 141, 74, 142, 129, 113, 194, 209, 171, 157, 74, 243, 147, 104, 18, 225, 56, 91, 80, 123, 122, 48, 93, 239, 0, 3, 211, 157, 81, 104};
    const unsigned msg_in_sz = 126;
    unsigned char r[] = {253, 157, 210, 1, 30, 131, 129, 119, 108, 90, 28, 15, 135, 79, 30, 131, 138, 241, 115, 216, 87, 215, 47, 249, 216, 63, 21, 63, 50, 113, 221, 112, 211, 234, 160, 193, 153, 83, 208, 127, 77, 195, 39, 221, 237, 75, 71, 221, 110, 194, 183, 9, 3, 138, 112, 171, 217, 26, 219, 126, 69, 93, 60, 111, 240, 105, 101, 131, 240, 70, 88, 114, 166, 223, 7, 64, 241, 161, 216, 19, 109, 186, 125, 64, 165, 15, 165, 25, 106, 240, 87, 197, 244, 45, 43, 138, 195, 141, 74, 142, 129, 11, 194, 209, 171, 157, 74, 243, 147, 104, 18, 225, 56};
    const unsigned r_sz = 113;
    unsigned char c[] = {91, 80, 123, 122, 48, 93, 239, 0, 3, 92, 157, 81, 104};
    const unsigned c_sz = 13;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 13;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test106)
{
    unsigned char msg_in[] = {253, 157, 210, 1, 30, 131, 129, 119, 183, 90, 28, 15, 135, 79, 242, 131, 138, 241, 115, 214, 87, 215, 47, 249, 216, 63, 21, 63, 50, 113, 221, 112, 211, 234, 160, 193, 153, 83, 208, 127, 77, 195, 39, 221, 237, 75, 71, 221, 110, 194, 183, 9, 3, 138, 112, 171, 217, 26, 219, 126, 69, 93, 60, 111, 240, 105, 101, 131, 240, 70, 88, 114, 166, 223, 7, 64, 241, 161, 216, 19, 109, 186, 125, 64, 153, 15, 165, 25, 106, 240, 87, 197, 244, 45, 43, 138, 195, 141, 74, 142, 129, 113, 194, 209, 171, 157, 74, 243, 147, 104, 18, 225, 56, 91, 80, 123, 122, 48, 93, 239, 0, 3, 211, 157, 81, 104};
    const unsigned msg_in_sz = 126;
    unsigned char r[] = {253, 157, 210, 1, 30, 131, 129, 119, 108, 90, 28, 15, 135, 79, 30, 131, 138, 241, 115, 216, 87, 215, 47, 249, 216, 63, 21, 63, 50, 113, 221, 112, 211, 234, 160, 193, 153, 83, 208, 127, 77, 195, 39, 221, 237, 75, 71, 221, 110, 194, 183, 9, 3, 138, 112, 171, 217, 26, 219, 126, 69, 93, 60, 111, 240, 105, 101, 131, 240, 70, 88, 114, 166, 223, 7, 64, 241, 161, 216, 19, 109, 186, 125, 64, 165, 15, 165, 25, 106, 240, 87, 197, 244, 45, 43, 138, 195, 141, 74, 142, 129, 11, 194, 209, 171, 157, 74, 243, 147, 104, 18, 225, 56};
    const unsigned r_sz = 113;
    unsigned char c[] = {91, 80, 123, 122, 48, 93, 239, 0, 3, 92, 157, 81, 104};
    const unsigned c_sz = 13;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 13;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test107)
{
    unsigned char msg_in[] = {17, 238, 2, 50, 71, 54, 67, 211, 112, 30, 91, 61, 153, 226, 125, 7, 139, 100, 227, 181, 237, 57, 25, 107, 35, 48, 114, 214, 94, 199, 153, 63, 141, 7, 158, 36, 95, 231, 42, 22, 43, 81, 124, 120, 19, 232, 115, 236, 3, 3, 105, 184, 183, 199, 129, 9, 112, 55, 184, 221, 222, 138, 55, 11, 53, 245, 23, 98, 165, 95, 59, 163, 12, 245, 255, 102, 99, 89, 75, 126, 198, 195, 148, 27, 109, 190, 222, 126, 160, 183, 36, 47, 197, 74, 101, 83, 225, 39, 105, 169, 77, 11, 166, 252, 140, 138, 62, 192, 180, 172, 34, 122, 91, 130, 59, 86, 38, 29, 59, 248, 155, 233, 246, 134, 15, 106, 58, 99, 52, 112, 192, 182, 7, 202, 101, 242, 24, 235, 159, 206, 84, 176, 100, 209, 110, 10, 49, 64, 152, 51, 196, 19, 250, 155, 190, 122, 181, 92, 214, 199, 108, 35, 157, 223, 235, 17, 8, 108, 250, 23, 89, 125, 110, 192, 182, 79, 47, 38, 190, 62, 34, 124, 192, 146, 160, 83, 5, 57, 180, 133, 254, 116, 136, 170, 46, 166, 76, 178, 61, 65, 116, 39, 144, 173, 233, 195, 143, 56, 182, 63, 132, 70, 90, 243, 15, 185, 174, 131, 50, 231, 20, 165, 50, 203, 190, 129, 105, 115};
    const unsigned msg_in_sz = 228;
    unsigned char r[] = {17, 238, 2, 50, 71, 54, 67, 211, 112, 30, 91, 61, 153, 226, 125, 7, 139, 100, 227, 181, 237, 57, 25, 107, 35, 48, 114, 214, 94, 199, 153, 63, 141, 7, 158, 36, 95, 231, 42, 22, 43, 81, 124, 120, 19, 232, 115, 236, 3, 3, 105, 184, 183, 199, 129, 9, 112, 55, 184, 221, 222, 138, 55, 11, 53, 245, 23, 98, 165, 95, 59, 163, 12, 245, 255, 102, 99, 89, 75, 126, 198, 195, 148, 27, 109, 190, 222, 126, 160, 183, 36, 47, 197, 74, 101, 83, 225, 39, 105, 169, 77, 11, 166, 252, 140, 138, 62, 192, 180, 172, 34, 122, 91, 130, 59, 86, 38, 29, 59, 248, 155, 233, 246, 134, 15, 106, 58, 99, 52, 112, 192, 182, 7, 202, 101, 242, 24, 235, 159, 206, 84, 176, 100, 209, 110, 10, 49, 64, 152, 51, 196, 19, 250, 155, 190, 122, 181, 92, 214, 199, 108, 35, 157, 223, 235, 17, 8, 108, 250, 23, 89, 125, 110, 192, 182, 79, 47, 38, 190, 62, 34, 124, 192, 146, 160, 83, 5, 57, 180, 133, 254, 116, 136, 170, 46, 166, 76, 178, 61, 65, 116, 39, 144, 173, 233, 195, 143, 56, 182, 63, 132, 70, 90, 243, 15};
    const unsigned r_sz = 215;
    unsigned char c[] = {185, 174, 131, 50, 231, 20, 165, 50, 203, 190, 129, 105, 115};
    const unsigned c_sz = 13;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 13;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test108)
{
    unsigned char msg_in[] = {17, 238, 2, 50, 71, 54, 67, 211, 112, 30, 91, 61, 153, 226, 125, 7, 139, 100, 227, 181, 237, 57, 25, 107, 35, 48, 114, 214, 94, 199, 153, 63, 141, 7, 158, 36, 95, 231, 42, 22, 43, 81, 124, 120, 19, 232, 115, 236, 3, 3, 105, 184, 183, 199, 129, 9, 112, 55, 184, 221, 222, 171, 55, 11, 53, 245, 23, 98, 165, 95, 59, 163, 12, 245, 255, 102, 99, 89, 75, 126, 198, 195, 148, 27, 109, 190, 222, 126, 160, 183, 36, 47, 197, 74, 101, 83, 225, 39, 105, 169, 77, 11, 166, 252, 140, 138, 62, 192, 180, 172, 34, 122, 91, 130, 59, 86, 38, 29, 59, 248, 155, 233, 246, 134, 15, 106, 58, 99, 52, 112, 192, 182, 7, 202, 101, 242, 24, 235, 159, 206, 84, 176, 100, 209, 110, 10, 49, 64, 152, 51, 196, 19, 250, 155, 190, 122, 181, 92, 214, 199, 108, 35, 157, 223, 235, 17, 8, 108, 250, 23, 89, 125, 110, 192, 182, 79, 47, 38, 190, 62, 34, 124, 192, 146, 160, 83, 5, 57, 180, 133, 254, 116, 136, 170, 46, 166, 76, 178, 61, 65, 116, 39, 144, 173, 233, 195, 143, 56, 182, 63, 132, 70, 90, 243, 15, 185, 174, 131, 50, 231, 20, 165, 50, 203, 190, 129, 105, 115};
    const unsigned msg_in_sz = 228;
    unsigned char r[] = {17, 238, 2, 50, 71, 54, 67, 211, 112, 30, 91, 61, 153, 226, 125, 7, 139, 100, 227, 181, 237, 57, 25, 107, 35, 48, 114, 214, 94, 199, 153, 63, 141, 7, 158, 36, 95, 231, 42, 22, 43, 81, 124, 120, 19, 232, 115, 236, 3, 3, 105, 184, 183, 199, 129, 9, 112, 55, 184, 221, 222, 138, 55, 11, 53, 245, 23, 98, 165, 95, 59, 163, 12, 245, 255, 102, 99, 89, 75, 126, 198, 195, 148, 27, 109, 190, 222, 126, 160, 183, 36, 47, 197, 74, 101, 83, 225, 39, 105, 169, 77, 11, 166, 252, 140, 138, 62, 192, 180, 172, 34, 122, 91, 130, 59, 86, 38, 29, 59, 248, 155, 233, 246, 134, 15, 106, 58, 99, 52, 112, 192, 182, 7, 202, 101, 242, 24, 235, 159, 206, 84, 176, 100, 209, 110, 10, 49, 64, 152, 51, 196, 19, 250, 155, 190, 122, 181, 92, 214, 199, 108, 35, 157, 223, 235, 17, 8, 108, 250, 23, 89, 125, 110, 192, 182, 79, 47, 38, 190, 62, 34, 124, 192, 146, 160, 83, 5, 57, 180, 133, 254, 116, 136, 170, 46, 166, 76, 178, 61, 65, 116, 39, 144, 173, 233, 195, 143, 56, 182, 63, 132, 70, 90, 243, 15};
    const unsigned r_sz = 215;
    unsigned char c[] = {185, 174, 131, 50, 231, 20, 165, 50, 203, 190, 129, 105, 115};
    const unsigned c_sz = 13;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 13;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test109)
{
    unsigned char msg_in[] = {17, 238, 2, 50, 71, 54, 67, 211, 112, 30, 91, 61, 153, 226, 125, 7, 139, 100, 227, 181, 237, 57, 25, 107, 35, 48, 114, 214, 94, 199, 153, 63, 141, 7, 158, 36, 95, 231, 42, 22, 43, 81, 124, 120, 19, 232, 115, 236, 3, 3, 105, 184, 183, 199, 129, 32, 112, 55, 184, 221, 222, 171, 55, 11, 53, 245, 23, 98, 165, 95, 59, 163, 12, 245, 255, 102, 99, 89, 75, 126, 198, 195, 148, 27, 109, 190, 222, 126, 160, 183, 36, 47, 197, 74, 101, 83, 225, 39, 105, 169, 77, 11, 166, 252, 140, 138, 62, 192, 180, 172, 34, 122, 91, 130, 59, 86, 38, 29, 59, 248, 155, 233, 246, 134, 15, 106, 58, 99, 52, 112, 192, 182, 7, 202, 101, 242, 24, 235, 159, 206, 84, 176, 100, 209, 110, 10, 49, 64, 152, 51, 196, 19, 250, 155, 190, 122, 181, 92, 214, 199, 108, 35, 157, 223, 235, 17, 8, 108, 250, 23, 89, 125, 110, 192, 182, 79, 47, 38, 190, 62, 34, 124, 192, 146, 160, 83, 5, 57, 180, 133, 254, 116, 136, 170, 46, 166, 76, 178, 61, 65, 116, 39, 144, 173, 233, 195, 143, 56, 182, 63, 132, 70, 90, 243, 15, 185, 174, 131, 50, 231, 20, 165, 50, 203, 190, 129, 105, 115};
    const unsigned msg_in_sz = 228;
    unsigned char r[] = {17, 238, 2, 50, 71, 54, 67, 211, 112, 30, 91, 61, 153, 226, 125, 7, 139, 100, 227, 181, 237, 57, 25, 107, 35, 48, 114, 214, 94, 199, 153, 63, 141, 7, 158, 36, 95, 231, 42, 22, 43, 81, 124, 120, 19, 232, 115, 236, 3, 3, 105, 184, 183, 199, 129, 9, 112, 55, 184, 221, 222, 138, 55, 11, 53, 245, 23, 98, 165, 95, 59, 163, 12, 245, 255, 102, 99, 89, 75, 126, 198, 195, 148, 27, 109, 190, 222, 126, 160, 183, 36, 47, 197, 74, 101, 83, 225, 39, 105, 169, 77, 11, 166, 252, 140, 138, 62, 192, 180, 172, 34, 122, 91, 130, 59, 86, 38, 29, 59, 248, 155, 233, 246, 134, 15, 106, 58, 99, 52, 112, 192, 182, 7, 202, 101, 242, 24, 235, 159, 206, 84, 176, 100, 209, 110, 10, 49, 64, 152, 51, 196, 19, 250, 155, 190, 122, 181, 92, 214, 199, 108, 35, 157, 223, 235, 17, 8, 108, 250, 23, 89, 125, 110, 192, 182, 79, 47, 38, 190, 62, 34, 124, 192, 146, 160, 83, 5, 57, 180, 133, 254, 116, 136, 170, 46, 166, 76, 178, 61, 65, 116, 39, 144, 173, 233, 195, 143, 56, 182, 63, 132, 70, 90, 243, 15};
    const unsigned r_sz = 215;
    unsigned char c[] = {185, 174, 131, 50, 231, 20, 165, 50, 203, 190, 129, 105, 115};
    const unsigned c_sz = 13;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 13;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test110)
{
    unsigned char msg_in[] = {17, 238, 2, 50, 71, 54, 28, 211, 112, 30, 91, 61, 153, 226, 125, 7, 139, 100, 227, 181, 237, 57, 25, 107, 35, 48, 114, 214, 94, 199, 153, 63, 141, 7, 158, 36, 95, 231, 42, 22, 43, 81, 124, 120, 19, 232, 115, 236, 3, 3, 105, 184, 183, 199, 129, 32, 112, 55, 184, 221, 222, 171, 55, 11, 53, 245, 23, 98, 165, 95, 59, 163, 12, 245, 255, 102, 99, 89, 75, 126, 198, 195, 148, 27, 109, 190, 222, 126, 160, 183, 36, 47, 197, 74, 101, 83, 225, 39, 105, 169, 77, 11, 166, 252, 140, 138, 62, 192, 180, 172, 34, 122, 91, 130, 59, 86, 38, 29, 59, 248, 155, 233, 246, 134, 15, 106, 58, 99, 52, 112, 192, 182, 7, 202, 101, 242, 24, 235, 159, 206, 84, 176, 100, 209, 110, 10, 49, 64, 152, 51, 196, 19, 250, 155, 190, 122, 181, 92, 214, 199, 108, 35, 157, 223, 235, 17, 8, 108, 250, 23, 89, 125, 110, 192, 182, 79, 47, 38, 190, 62, 34, 124, 192, 146, 160, 83, 5, 57, 180, 133, 254, 116, 136, 170, 46, 166, 76, 178, 61, 65, 116, 39, 144, 173, 233, 195, 143, 56, 182, 63, 132, 70, 90, 243, 15, 185, 174, 131, 50, 231, 20, 165, 50, 203, 190, 129, 105, 115};
    const unsigned msg_in_sz = 228;
    unsigned char r[] = {17, 238, 2, 50, 71, 54, 67, 211, 112, 30, 91, 61, 153, 226, 125, 7, 139, 100, 227, 181, 237, 57, 25, 107, 35, 48, 114, 214, 94, 199, 153, 63, 141, 7, 158, 36, 95, 231, 42, 22, 43, 81, 124, 120, 19, 232, 115, 236, 3, 3, 105, 184, 183, 199, 129, 9, 112, 55, 184, 221, 222, 138, 55, 11, 53, 245, 23, 98, 165, 95, 59, 163, 12, 245, 255, 102, 99, 89, 75, 126, 198, 195, 148, 27, 109, 190, 222, 126, 160, 183, 36, 47, 197, 74, 101, 83, 225, 39, 105, 169, 77, 11, 166, 252, 140, 138, 62, 192, 180, 172, 34, 122, 91, 130, 59, 86, 38, 29, 59, 248, 155, 233, 246, 134, 15, 106, 58, 99, 52, 112, 192, 182, 7, 202, 101, 242, 24, 235, 159, 206, 84, 176, 100, 209, 110, 10, 49, 64, 152, 51, 196, 19, 250, 155, 190, 122, 181, 92, 214, 199, 108, 35, 157, 223, 235, 17, 8, 108, 250, 23, 89, 125, 110, 192, 182, 79, 47, 38, 190, 62, 34, 124, 192, 146, 160, 83, 5, 57, 180, 133, 254, 116, 136, 170, 46, 166, 76, 178, 61, 65, 116, 39, 144, 173, 233, 195, 143, 56, 182, 63, 132, 70, 90, 243, 15};
    const unsigned r_sz = 215;
    unsigned char c[] = {185, 174, 131, 50, 231, 20, 165, 50, 203, 190, 129, 105, 115};
    const unsigned c_sz = 13;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 13;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test111)
{
    unsigned char msg_in[] = {17, 238, 2, 50, 71, 54, 28, 211, 112, 30, 91, 61, 153, 226, 125, 7, 139, 100, 227, 181, 237, 57, 25, 107, 35, 48, 114, 214, 94, 199, 153, 63, 141, 7, 158, 36, 95, 231, 42, 22, 43, 81, 124, 120, 19, 232, 115, 236, 3, 3, 105, 184, 183, 199, 129, 32, 112, 55, 184, 221, 222, 171, 55, 11, 53, 245, 23, 98, 165, 95, 59, 163, 12, 245, 255, 102, 99, 89, 75, 126, 198, 195, 148, 27, 109, 190, 222, 126, 160, 183, 36, 47, 197, 74, 101, 83, 225, 39, 105, 169, 77, 11, 166, 252, 140, 138, 62, 192, 180, 172, 34, 122, 91, 130, 59, 86, 38, 29, 59, 248, 155, 233, 246, 134, 15, 106, 58, 99, 52, 112, 192, 182, 7, 202, 101, 242, 24, 235, 159, 206, 84, 176, 100, 209, 110, 10, 49, 64, 152, 51, 196, 19, 250, 155, 190, 122, 181, 16, 214, 199, 108, 35, 157, 223, 235, 17, 8, 108, 250, 23, 89, 125, 110, 192, 182, 79, 47, 38, 190, 62, 34, 124, 192, 146, 160, 83, 5, 57, 180, 133, 254, 116, 136, 170, 46, 166, 76, 178, 61, 65, 116, 39, 144, 173, 233, 195, 143, 56, 182, 63, 132, 70, 90, 243, 15, 185, 174, 131, 50, 231, 20, 165, 50, 203, 190, 129, 105, 115};
    const unsigned msg_in_sz = 228;
    unsigned char r[] = {17, 238, 2, 50, 71, 54, 67, 211, 112, 30, 91, 61, 153, 226, 125, 7, 139, 100, 227, 181, 237, 57, 25, 107, 35, 48, 114, 214, 94, 199, 153, 63, 141, 7, 158, 36, 95, 231, 42, 22, 43, 81, 124, 120, 19, 232, 115, 236, 3, 3, 105, 184, 183, 199, 129, 9, 112, 55, 184, 221, 222, 138, 55, 11, 53, 245, 23, 98, 165, 95, 59, 163, 12, 245, 255, 102, 99, 89, 75, 126, 198, 195, 148, 27, 109, 190, 222, 126, 160, 183, 36, 47, 197, 74, 101, 83, 225, 39, 105, 169, 77, 11, 166, 252, 140, 138, 62, 192, 180, 172, 34, 122, 91, 130, 59, 86, 38, 29, 59, 248, 155, 233, 246, 134, 15, 106, 58, 99, 52, 112, 192, 182, 7, 202, 101, 242, 24, 235, 159, 206, 84, 176, 100, 209, 110, 10, 49, 64, 152, 51, 196, 19, 250, 155, 190, 122, 181, 92, 214, 199, 108, 35, 157, 223, 235, 17, 8, 108, 250, 23, 89, 125, 110, 192, 182, 79, 47, 38, 190, 62, 34, 124, 192, 146, 160, 83, 5, 57, 180, 133, 254, 116, 136, 170, 46, 166, 76, 178, 61, 65, 116, 39, 144, 173, 233, 195, 143, 56, 182, 63, 132, 70, 90, 243, 15};
    const unsigned r_sz = 215;
    unsigned char c[] = {185, 174, 131, 50, 231, 20, 165, 50, 203, 190, 129, 105, 115};
    const unsigned c_sz = 13;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 13;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test112)
{
    unsigned char msg_in[] = {17, 238, 2, 50, 71, 54, 28, 211, 112, 30, 91, 61, 153, 226, 125, 7, 139, 100, 227, 181, 237, 57, 25, 107, 35, 48, 114, 214, 94, 199, 153, 63, 141, 7, 158, 36, 95, 231, 42, 22, 43, 81, 124, 120, 19, 232, 115, 236, 3, 3, 105, 184, 183, 199, 129, 32, 112, 55, 184, 221, 222, 171, 55, 11, 53, 245, 23, 98, 165, 95, 59, 163, 12, 245, 255, 102, 99, 89, 75, 126, 198, 195, 148, 27, 109, 190, 222, 126, 160, 183, 36, 47, 197, 74, 101, 83, 225, 39, 105, 169, 77, 11, 166, 252, 140, 138, 62, 192, 180, 172, 34, 122, 91, 130, 59, 86, 38, 29, 59, 248, 155, 233, 246, 134, 15, 106, 58, 99, 52, 112, 192, 182, 7, 202, 101, 242, 24, 235, 159, 206, 84, 176, 100, 209, 110, 10, 49, 64, 152, 51, 196, 19, 250, 155, 190, 122, 181, 16, 214, 199, 108, 35, 157, 223, 235, 17, 8, 108, 250, 23, 89, 125, 110, 192, 182, 79, 47, 38, 190, 62, 34, 124, 192, 146, 160, 83, 5, 57, 180, 133, 254, 116, 136, 170, 46, 166, 76, 178, 61, 65, 116, 39, 144, 173, 233, 195, 143, 56, 182, 63, 132, 70, 90, 243, 15, 185, 174, 131, 50, 231, 20, 165, 50, 203, 190, 129, 105, 32};
    const unsigned msg_in_sz = 228;
    unsigned char r[] = {17, 238, 2, 50, 71, 54, 67, 211, 112, 30, 91, 61, 153, 226, 125, 7, 139, 100, 227, 181, 237, 57, 25, 107, 35, 48, 114, 214, 94, 199, 153, 63, 141, 7, 158, 36, 95, 231, 42, 22, 43, 81, 124, 120, 19, 232, 115, 236, 3, 3, 105, 184, 183, 199, 129, 9, 112, 55, 184, 221, 222, 138, 55, 11, 53, 245, 23, 98, 165, 95, 59, 163, 12, 245, 255, 102, 99, 89, 75, 126, 198, 195, 148, 27, 109, 190, 222, 126, 160, 183, 36, 47, 197, 74, 101, 83, 225, 39, 105, 169, 77, 11, 166, 252, 140, 138, 62, 192, 180, 172, 34, 122, 91, 130, 59, 86, 38, 29, 59, 248, 155, 233, 246, 134, 15, 106, 58, 99, 52, 112, 192, 182, 7, 202, 101, 242, 24, 235, 159, 206, 84, 176, 100, 209, 110, 10, 49, 64, 152, 51, 196, 19, 250, 155, 190, 122, 181, 92, 214, 199, 108, 35, 157, 223, 235, 17, 8, 108, 250, 23, 89, 125, 110, 192, 182, 79, 47, 38, 190, 62, 34, 124, 192, 146, 160, 83, 5, 57, 180, 133, 254, 116, 136, 170, 46, 166, 76, 178, 61, 65, 116, 39, 144, 173, 233, 195, 143, 56, 182, 63, 132, 70, 90, 243, 15};
    const unsigned r_sz = 215;
    unsigned char c[] = {185, 174, 131, 50, 231, 20, 165, 50, 203, 190, 129, 105, 115};
    const unsigned c_sz = 13;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 13;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}

TEST(RsCorrectMsg, Test113)
{
    unsigned char msg_in[] = {17, 238, 2, 50, 71, 54, 28, 211, 112, 30, 91, 61, 153, 226, 125, 135, 139, 100, 227, 181, 237, 57, 25, 107, 35, 48, 114, 214, 94, 199, 153, 63, 141, 7, 158, 36, 95, 231, 42, 22, 43, 81, 124, 120, 19, 232, 115, 236, 3, 3, 105, 184, 183, 199, 129, 32, 112, 55, 184, 221, 222, 171, 55, 11, 53, 245, 23, 98, 165, 95, 59, 163, 12, 245, 255, 102, 99, 89, 75, 126, 198, 195, 148, 27, 109, 190, 222, 126, 160, 183, 36, 47, 197, 74, 101, 83, 225, 39, 105, 169, 77, 11, 166, 252, 140, 138, 62, 192, 180, 172, 34, 122, 91, 130, 59, 86, 38, 29, 59, 248, 155, 233, 246, 134, 15, 106, 58, 99, 52, 112, 192, 182, 7, 202, 101, 242, 24, 235, 159, 206, 84, 176, 100, 209, 110, 10, 49, 64, 152, 51, 196, 19, 250, 155, 190, 122, 181, 16, 214, 199, 108, 35, 157, 223, 235, 17, 8, 108, 250, 23, 89, 125, 110, 192, 182, 79, 47, 38, 190, 62, 34, 124, 192, 146, 160, 83, 5, 57, 180, 133, 254, 116, 136, 170, 46, 166, 76, 178, 61, 65, 116, 39, 144, 173, 233, 195, 143, 56, 182, 63, 132, 70, 90, 243, 15, 185, 174, 131, 50, 231, 20, 165, 50, 203, 190, 129, 105, 32};
    const unsigned msg_in_sz = 228;
    unsigned char r[] = {17, 238, 2, 50, 71, 54, 67, 211, 112, 30, 91, 61, 153, 226, 125, 7, 139, 100, 227, 181, 237, 57, 25, 107, 35, 48, 114, 214, 94, 199, 153, 63, 141, 7, 158, 36, 95, 231, 42, 22, 43, 81, 124, 120, 19, 232, 115, 236, 3, 3, 105, 184, 183, 199, 129, 9, 112, 55, 184, 221, 222, 138, 55, 11, 53, 245, 23, 98, 165, 95, 59, 163, 12, 245, 255, 102, 99, 89, 75, 126, 198, 195, 148, 27, 109, 190, 222, 126, 160, 183, 36, 47, 197, 74, 101, 83, 225, 39, 105, 169, 77, 11, 166, 252, 140, 138, 62, 192, 180, 172, 34, 122, 91, 130, 59, 86, 38, 29, 59, 248, 155, 233, 246, 134, 15, 106, 58, 99, 52, 112, 192, 182, 7, 202, 101, 242, 24, 235, 159, 206, 84, 176, 100, 209, 110, 10, 49, 64, 152, 51, 196, 19, 250, 155, 190, 122, 181, 92, 214, 199, 108, 35, 157, 223, 235, 17, 8, 108, 250, 23, 89, 125, 110, 192, 182, 79, 47, 38, 190, 62, 34, 124, 192, 146, 160, 83, 5, 57, 180, 133, 254, 116, 136, 170, 46, 166, 76, 178, 61, 65, 116, 39, 144, 173, 233, 195, 143, 56, 182, 63, 132, 70, 90, 243, 15};
    const unsigned r_sz = 215;
    unsigned char c[] = {185, 174, 131, 50, 231, 20, 165, 50, 203, 190, 129, 105, 115};
    const unsigned c_sz = 13;
    unsigned char buf[300];
    unsigned buf_sz;
    const unsigned nsym = 13;
    memmove(buf, msg_in, msg_in_sz);
    redupe_correct_msg(buf, msg_in_sz - nsym, nsym, buf + msg_in_sz - nsym);
    for (unsigned i = 0; i < r_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i], (unsigned)r[i]);
    }
    for (unsigned i = 0; i < c_sz; ++i)
    {
        ASSERT_EQ((unsigned)buf[i + msg_in_sz - nsym], (unsigned)c[i]);
    }
}
