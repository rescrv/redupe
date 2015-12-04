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

TEST(GfMul, Test0)
{
    ASSERT_EQ(redupe_gf_mul(1, 164), 164);
    ASSERT_EQ(redupe_gf_mul(164, 1), 164);
}

TEST(GfMul, Test1)
{
    ASSERT_EQ(redupe_gf_mul(1, 252), 252);
    ASSERT_EQ(redupe_gf_mul(252, 1), 252);
}

TEST(GfMul, Test2)
{
    ASSERT_EQ(redupe_gf_mul(1, 193), 193);
    ASSERT_EQ(redupe_gf_mul(193, 1), 193);
}

TEST(GfMul, Test3)
{
    ASSERT_EQ(redupe_gf_mul(1, 203), 203);
    ASSERT_EQ(redupe_gf_mul(203, 1), 203);
}

TEST(GfMul, Test4)
{
    ASSERT_EQ(redupe_gf_mul(1, 187), 187);
    ASSERT_EQ(redupe_gf_mul(187, 1), 187);
}

TEST(GfMul, Test5)
{
    ASSERT_EQ(redupe_gf_mul(1, 70), 70);
    ASSERT_EQ(redupe_gf_mul(70, 1), 70);
}

TEST(GfMul, Test6)
{
    ASSERT_EQ(redupe_gf_mul(1, 53), 53);
    ASSERT_EQ(redupe_gf_mul(53, 1), 53);
}

TEST(GfMul, Test7)
{
    ASSERT_EQ(redupe_gf_mul(1, 235), 235);
    ASSERT_EQ(redupe_gf_mul(235, 1), 235);
}

TEST(GfMul, Test8)
{
    ASSERT_EQ(redupe_gf_mul(1, 11), 11);
    ASSERT_EQ(redupe_gf_mul(11, 1), 11);
}

TEST(GfMul, Test9)
{
    ASSERT_EQ(redupe_gf_mul(1, 50), 50);
    ASSERT_EQ(redupe_gf_mul(50, 1), 50);
}

TEST(GfMul, Test10)
{
    ASSERT_EQ(redupe_gf_mul(2, 164), 85);
    ASSERT_EQ(redupe_gf_mul(164, 2), 85);
}

TEST(GfMul, Test11)
{
    ASSERT_EQ(redupe_gf_mul(2, 13), 26);
    ASSERT_EQ(redupe_gf_mul(13, 2), 26);
}

TEST(GfMul, Test12)
{
    ASSERT_EQ(redupe_gf_mul(2, 39), 78);
    ASSERT_EQ(redupe_gf_mul(39, 2), 78);
}

TEST(GfMul, Test13)
{
    ASSERT_EQ(redupe_gf_mul(2, 68), 136);
    ASSERT_EQ(redupe_gf_mul(68, 2), 136);
}

TEST(GfMul, Test14)
{
    ASSERT_EQ(redupe_gf_mul(2, 248), 237);
    ASSERT_EQ(redupe_gf_mul(248, 2), 237);
}

TEST(GfMul, Test15)
{
    ASSERT_EQ(redupe_gf_mul(2, 16), 32);
    ASSERT_EQ(redupe_gf_mul(16, 2), 32);
}

TEST(GfMul, Test16)
{
    ASSERT_EQ(redupe_gf_mul(2, 83), 166);
    ASSERT_EQ(redupe_gf_mul(83, 2), 166);
}

TEST(GfMul, Test17)
{
    ASSERT_EQ(redupe_gf_mul(2, 120), 240);
    ASSERT_EQ(redupe_gf_mul(120, 2), 240);
}

TEST(GfMul, Test18)
{
    ASSERT_EQ(redupe_gf_mul(2, 25), 50);
    ASSERT_EQ(redupe_gf_mul(25, 2), 50);
}

TEST(GfMul, Test19)
{
    ASSERT_EQ(redupe_gf_mul(4, 164), 170);
    ASSERT_EQ(redupe_gf_mul(164, 4), 170);
}

TEST(GfMul, Test20)
{
    ASSERT_EQ(redupe_gf_mul(4, 242), 239);
    ASSERT_EQ(redupe_gf_mul(242, 4), 239);
}

TEST(GfMul, Test21)
{
    ASSERT_EQ(redupe_gf_mul(4, 210), 111);
    ASSERT_EQ(redupe_gf_mul(210, 4), 111);
}

TEST(GfMul, Test22)
{
    ASSERT_EQ(redupe_gf_mul(4, 101), 137);
    ASSERT_EQ(redupe_gf_mul(101, 4), 137);
}

TEST(GfMul, Test23)
{
    ASSERT_EQ(redupe_gf_mul(4, 249), 195);
    ASSERT_EQ(redupe_gf_mul(249, 4), 195);
}

TEST(GfMul, Test24)
{
    ASSERT_EQ(redupe_gf_mul(4, 62), 248);
    ASSERT_EQ(redupe_gf_mul(62, 4), 248);
}

TEST(GfMul, Test25)
{
    ASSERT_EQ(redupe_gf_mul(4, 139), 22);
    ASSERT_EQ(redupe_gf_mul(139, 4), 22);
}

TEST(GfMul, Test26)
{
    ASSERT_EQ(redupe_gf_mul(4, 200), 7);
    ASSERT_EQ(redupe_gf_mul(200, 4), 7);
}

TEST(GfMul, Test27)
{
    ASSERT_EQ(redupe_gf_mul(4, 231), 187);
    ASSERT_EQ(redupe_gf_mul(231, 4), 187);
}

TEST(GfMul, Test28)
{
    ASSERT_EQ(redupe_gf_mul(4, 130), 50);
    ASSERT_EQ(redupe_gf_mul(130, 4), 50);
}

TEST(GfMul, Test29)
{
    ASSERT_EQ(redupe_gf_mul(8, 164), 73);
    ASSERT_EQ(redupe_gf_mul(164, 8), 73);
}

TEST(GfMul, Test30)
{
    ASSERT_EQ(redupe_gf_mul(8, 17), 136);
    ASSERT_EQ(redupe_gf_mul(17, 8), 136);
}

TEST(GfMul, Test31)
{
    ASSERT_EQ(redupe_gf_mul(8, 181), 193);
    ASSERT_EQ(redupe_gf_mul(181, 8), 193);
}

TEST(GfMul, Test32)
{
    ASSERT_EQ(redupe_gf_mul(8, 203), 22);
    ASSERT_EQ(redupe_gf_mul(203, 8), 22);
}

TEST(GfMul, Test33)
{
    ASSERT_EQ(redupe_gf_mul(8, 102), 23);
    ASSERT_EQ(redupe_gf_mul(102, 8), 23);
}

TEST(GfMul, Test34)
{
    ASSERT_EQ(redupe_gf_mul(8, 234), 3);
    ASSERT_EQ(redupe_gf_mul(234, 8), 3);
}

TEST(GfMul, Test35)
{
    ASSERT_EQ(redupe_gf_mul(8, 112), 167);
    ASSERT_EQ(redupe_gf_mul(112, 8), 167);
}

TEST(GfMul, Test36)
{
    ASSERT_EQ(redupe_gf_mul(8, 121), 239);
    ASSERT_EQ(redupe_gf_mul(121, 8), 239);
}

TEST(GfMul, Test37)
{
    ASSERT_EQ(redupe_gf_mul(8, 15), 120);
    ASSERT_EQ(redupe_gf_mul(15, 8), 120);
}

TEST(GfMul, Test38)
{
    ASSERT_EQ(redupe_gf_mul(8, 65), 50);
    ASSERT_EQ(redupe_gf_mul(65, 8), 50);
}

TEST(GfMul, Test39)
{
    ASSERT_EQ(redupe_gf_mul(1, 97), 97);
    ASSERT_EQ(redupe_gf_mul(97, 1), 97);
}

TEST(GfMul, Test40)
{
    ASSERT_EQ(redupe_gf_mul(1, 17), 17);
    ASSERT_EQ(redupe_gf_mul(17, 1), 17);
}

TEST(GfMul, Test41)
{
    ASSERT_EQ(redupe_gf_mul(1, 236), 236);
    ASSERT_EQ(redupe_gf_mul(236, 1), 236);
}

TEST(GfMul, Test42)
{
    ASSERT_EQ(redupe_gf_mul(1, 159), 159);
    ASSERT_EQ(redupe_gf_mul(159, 1), 159);
}

TEST(GfMul, Test43)
{
    ASSERT_EQ(redupe_gf_mul(1, 65), 65);
    ASSERT_EQ(redupe_gf_mul(65, 1), 65);
}

TEST(GfMul, Test44)
{
    ASSERT_EQ(redupe_gf_mul(1, 161), 161);
    ASSERT_EQ(redupe_gf_mul(161, 1), 161);
}

TEST(GfMul, Test45)
{
    ASSERT_EQ(redupe_gf_mul(1, 152), 152);
    ASSERT_EQ(redupe_gf_mul(152, 1), 152);
}

TEST(GfMul, Test46)
{
    ASSERT_EQ(redupe_gf_mul(2, 238), 193);
    ASSERT_EQ(redupe_gf_mul(238, 2), 193);
}

TEST(GfMul, Test47)
{
    ASSERT_EQ(redupe_gf_mul(2, 177), 127);
    ASSERT_EQ(redupe_gf_mul(177, 2), 127);
}

TEST(GfMul, Test48)
{
    ASSERT_EQ(redupe_gf_mul(2, 130), 25);
    ASSERT_EQ(redupe_gf_mul(130, 2), 25);
}

TEST(GfMul, Test49)
{
    ASSERT_EQ(redupe_gf_mul(2, 106), 212);
    ASSERT_EQ(redupe_gf_mul(106, 2), 212);
}

TEST(GfMul, Test50)
{
    ASSERT_EQ(redupe_gf_mul(2, 10), 20);
    ASSERT_EQ(redupe_gf_mul(10, 2), 20);
}

TEST(GfMul, Test51)
{
    ASSERT_EQ(redupe_gf_mul(2, 244), 245);
    ASSERT_EQ(redupe_gf_mul(244, 2), 245);
}

TEST(GfMul, Test52)
{
    ASSERT_EQ(redupe_gf_mul(2, 204), 133);
    ASSERT_EQ(redupe_gf_mul(204, 2), 133);
}

TEST(GfMul, Test53)
{
    ASSERT_EQ(redupe_gf_mul(4, 207), 27);
    ASSERT_EQ(redupe_gf_mul(207, 4), 27);
}

TEST(GfMul, Test54)
{
    ASSERT_EQ(redupe_gf_mul(4, 107), 177);
    ASSERT_EQ(redupe_gf_mul(107, 4), 177);
}

TEST(GfMul, Test55)
{
    ASSERT_EQ(redupe_gf_mul(4, 76), 45);
    ASSERT_EQ(redupe_gf_mul(76, 4), 45);
}

TEST(GfMul, Test56)
{
    ASSERT_EQ(redupe_gf_mul(4, 94), 101);
    ASSERT_EQ(redupe_gf_mul(94, 4), 101);
}

TEST(GfMul, Test57)
{
    ASSERT_EQ(redupe_gf_mul(4, 187), 214);
    ASSERT_EQ(redupe_gf_mul(187, 4), 214);
}

TEST(GfMul, Test58)
{
    ASSERT_EQ(redupe_gf_mul(4, 54), 216);
    ASSERT_EQ(redupe_gf_mul(54, 4), 216);
}

TEST(GfMul, Test59)
{
    ASSERT_EQ(redupe_gf_mul(4, 225), 163);
    ASSERT_EQ(redupe_gf_mul(225, 4), 163);
}

TEST(GfMul, Test60)
{
    ASSERT_EQ(redupe_gf_mul(8, 97), 47);
    ASSERT_EQ(redupe_gf_mul(97, 8), 47);
}

TEST(GfMul, Test61)
{
    ASSERT_EQ(redupe_gf_mul(8, 95), 194);
    ASSERT_EQ(redupe_gf_mul(95, 8), 194);
}

TEST(GfMul, Test62)
{
    ASSERT_EQ(redupe_gf_mul(8, 63), 229);
    ASSERT_EQ(redupe_gf_mul(63, 8), 229);
}

TEST(GfMul, Test63)
{
    ASSERT_EQ(redupe_gf_mul(8, 150), 196);
    ASSERT_EQ(redupe_gf_mul(150, 8), 196);
}

TEST(GfMul, Test64)
{
    ASSERT_EQ(redupe_gf_mul(8, 26), 208);
    ASSERT_EQ(redupe_gf_mul(26, 8), 208);
}

TEST(GfMul, Test65)
{
    ASSERT_EQ(redupe_gf_mul(8, 48), 157);
    ASSERT_EQ(redupe_gf_mul(48, 8), 157);
}

TEST(GfMul, Test66)
{
    ASSERT_EQ(redupe_gf_mul(1, 170), 170);
    ASSERT_EQ(redupe_gf_mul(170, 1), 170);
}

TEST(GfMul, Test67)
{
    ASSERT_EQ(redupe_gf_mul(0, 170), 0);
    ASSERT_EQ(redupe_gf_mul(170, 0), 0);
}

TEST(GfMul, Test68)
{
    ASSERT_EQ(redupe_gf_mul(1, 13), 13);
    ASSERT_EQ(redupe_gf_mul(13, 1), 13);
}

TEST(GfMul, Test69)
{
    ASSERT_EQ(redupe_gf_mul(13, 170), 1);
    ASSERT_EQ(redupe_gf_mul(170, 13), 1);
}

TEST(GfMul, Test70)
{
    ASSERT_EQ(redupe_gf_mul(170, 170), 35);
    ASSERT_EQ(redupe_gf_mul(170, 170), 35);
}

TEST(GfMul, Test71)
{
    ASSERT_EQ(redupe_gf_mul(13, 148), 42);
    ASSERT_EQ(redupe_gf_mul(148, 13), 42);
}

TEST(GfMul, Test72)
{
    ASSERT_EQ(redupe_gf_mul(0, 148), 0);
    ASSERT_EQ(redupe_gf_mul(148, 0), 0);
}

TEST(GfMul, Test73)
{
    ASSERT_EQ(redupe_gf_mul(128, 183), 145);
    ASSERT_EQ(redupe_gf_mul(183, 128), 145);
}

TEST(GfMul, Test74)
{
    ASSERT_EQ(redupe_gf_mul(128, 145), 123);
    ASSERT_EQ(redupe_gf_mul(145, 128), 123);
}

TEST(GfMul, Test75)
{
    ASSERT_EQ(redupe_gf_mul(1, 1), 1);
    ASSERT_EQ(redupe_gf_mul(1, 1), 1);
}

TEST(GfMul, Test76)
{
    ASSERT_EQ(redupe_gf_mul(1, 2), 2);
    ASSERT_EQ(redupe_gf_mul(2, 1), 2);
}

TEST(GfMul, Test77)
{
    ASSERT_EQ(redupe_gf_mul(1, 4), 4);
    ASSERT_EQ(redupe_gf_mul(4, 1), 4);
}

TEST(GfMul, Test78)
{
    ASSERT_EQ(redupe_gf_mul(1, 8), 8);
    ASSERT_EQ(redupe_gf_mul(8, 1), 8);
}

TEST(GfMul, Test79)
{
    ASSERT_EQ(redupe_gf_mul(1, 16), 16);
    ASSERT_EQ(redupe_gf_mul(16, 1), 16);
}

TEST(GfMul, Test80)
{
    ASSERT_EQ(redupe_gf_mul(1, 32), 32);
    ASSERT_EQ(redupe_gf_mul(32, 1), 32);
}

TEST(GfMul, Test81)
{
    ASSERT_EQ(redupe_gf_mul(1, 64), 64);
    ASSERT_EQ(redupe_gf_mul(64, 1), 64);
}

TEST(GfMul, Test82)
{
    ASSERT_EQ(redupe_gf_mul(1, 128), 128);
    ASSERT_EQ(redupe_gf_mul(128, 1), 128);
}

TEST(GfMul, Test83)
{
    ASSERT_EQ(redupe_gf_mul(1, 29), 29);
    ASSERT_EQ(redupe_gf_mul(29, 1), 29);
}

TEST(GfMul, Test84)
{
    ASSERT_EQ(redupe_gf_mul(1, 58), 58);
    ASSERT_EQ(redupe_gf_mul(58, 1), 58);
}

TEST(GfMul, Test85)
{
    ASSERT_EQ(redupe_gf_mul(1, 116), 116);
    ASSERT_EQ(redupe_gf_mul(116, 1), 116);
}

TEST(GfMul, Test86)
{
    ASSERT_EQ(redupe_gf_mul(27, 170), 168);
    ASSERT_EQ(redupe_gf_mul(170, 27), 168);
}

TEST(GfMul, Test87)
{
    ASSERT_EQ(redupe_gf_mul(128, 168), 170);
    ASSERT_EQ(redupe_gf_mul(168, 128), 170);
}

TEST(GfMul, Test88)
{
    ASSERT_EQ(redupe_gf_mul(1, 69), 69);
    ASSERT_EQ(redupe_gf_mul(69, 1), 69);
}

TEST(GfMul, Test89)
{
    ASSERT_EQ(redupe_gf_mul(1, 184), 184);
    ASSERT_EQ(redupe_gf_mul(184, 1), 184);
}

TEST(GfMul, Test90)
{
    ASSERT_EQ(redupe_gf_mul(1, 21), 21);
    ASSERT_EQ(redupe_gf_mul(21, 1), 21);
}

TEST(GfMul, Test91)
{
    ASSERT_EQ(redupe_gf_mul(1, 245), 245);
    ASSERT_EQ(redupe_gf_mul(245, 1), 245);
}

TEST(GfMul, Test92)
{
    ASSERT_EQ(redupe_gf_mul(1, 204), 204);
    ASSERT_EQ(redupe_gf_mul(204, 1), 204);
}

TEST(GfMul, Test93)
{
    ASSERT_EQ(redupe_gf_mul(2, 229), 215);
    ASSERT_EQ(redupe_gf_mul(229, 2), 215);
}

TEST(GfMul, Test94)
{
    ASSERT_EQ(redupe_gf_mul(2, 42), 84);
    ASSERT_EQ(redupe_gf_mul(42, 2), 84);
}

TEST(GfMul, Test95)
{
    ASSERT_EQ(redupe_gf_mul(2, 144), 61);
    ASSERT_EQ(redupe_gf_mul(144, 2), 61);
}

TEST(GfMul, Test96)
{
    ASSERT_EQ(redupe_gf_mul(2, 221), 167);
    ASSERT_EQ(redupe_gf_mul(221, 2), 167);
}

TEST(GfMul, Test97)
{
    ASSERT_EQ(redupe_gf_mul(2, 158), 33);
    ASSERT_EQ(redupe_gf_mul(158, 2), 33);
}

TEST(GfMul, Test98)
{
    ASSERT_EQ(redupe_gf_mul(4, 63), 252);
    ASSERT_EQ(redupe_gf_mul(63, 4), 252);
}

TEST(GfMul, Test99)
{
    ASSERT_EQ(redupe_gf_mul(4, 119), 193);
    ASSERT_EQ(redupe_gf_mul(119, 4), 193);
}

TEST(GfMul, Test100)
{
    ASSERT_EQ(redupe_gf_mul(4, 31), 124);
    ASSERT_EQ(redupe_gf_mul(31, 4), 124);
}

TEST(GfMul, Test101)
{
    ASSERT_EQ(redupe_gf_mul(4, 156), 74);
    ASSERT_EQ(redupe_gf_mul(156, 4), 74);
}

TEST(GfMul, Test102)
{
    ASSERT_EQ(redupe_gf_mul(4, 115), 209);
    ASSERT_EQ(redupe_gf_mul(115, 4), 209);
}

TEST(GfMul, Test103)
{
    ASSERT_EQ(redupe_gf_mul(8, 11), 88);
    ASSERT_EQ(redupe_gf_mul(11, 8), 88);
}

TEST(GfMul, Test104)
{
    ASSERT_EQ(redupe_gf_mul(8, 165), 65);
    ASSERT_EQ(redupe_gf_mul(165, 8), 65);
}

TEST(GfMul, Test105)
{
    ASSERT_EQ(redupe_gf_mul(8, 50), 141);
    ASSERT_EQ(redupe_gf_mul(50, 8), 141);
}

TEST(GfMul, Test106)
{
    ASSERT_EQ(redupe_gf_mul(8, 83), 162);
    ASSERT_EQ(redupe_gf_mul(83, 8), 162);
}

TEST(GfMul, Test107)
{
    ASSERT_EQ(redupe_gf_mul(8, 66), 42);
    ASSERT_EQ(redupe_gf_mul(66, 8), 42);
}

TEST(GfMul, Test108)
{
    ASSERT_EQ(redupe_gf_mul(8, 19), 152);
    ASSERT_EQ(redupe_gf_mul(19, 8), 152);
}

TEST(GfMul, Test109)
{
    ASSERT_EQ(redupe_gf_mul(1, 254), 254);
    ASSERT_EQ(redupe_gf_mul(254, 1), 254);
}

TEST(GfMul, Test110)
{
    ASSERT_EQ(redupe_gf_mul(0, 254), 0);
    ASSERT_EQ(redupe_gf_mul(254, 0), 0);
}

TEST(GfMul, Test111)
{
    ASSERT_EQ(redupe_gf_mul(1, 126), 126);
    ASSERT_EQ(redupe_gf_mul(126, 1), 126);
}

TEST(GfMul, Test112)
{
    ASSERT_EQ(redupe_gf_mul(126, 254), 1);
    ASSERT_EQ(redupe_gf_mul(254, 126), 1);
}

TEST(GfMul, Test113)
{
    ASSERT_EQ(redupe_gf_mul(254, 254), 227);
    ASSERT_EQ(redupe_gf_mul(254, 254), 227);
}

TEST(GfMul, Test114)
{
    ASSERT_EQ(redupe_gf_mul(126, 240), 207);
    ASSERT_EQ(redupe_gf_mul(240, 126), 207);
}

TEST(GfMul, Test115)
{
    ASSERT_EQ(redupe_gf_mul(0, 240), 0);
    ASSERT_EQ(redupe_gf_mul(240, 0), 0);
}

TEST(GfMul, Test116)
{
    ASSERT_EQ(redupe_gf_mul(19, 49), 100);
    ASSERT_EQ(redupe_gf_mul(49, 19), 100);
}

TEST(GfMul, Test117)
{
    ASSERT_EQ(redupe_gf_mul(126, 135), 150);
    ASSERT_EQ(redupe_gf_mul(135, 126), 150);
}

TEST(GfMul, Test118)
{
    ASSERT_EQ(redupe_gf_mul(0, 135), 0);
    ASSERT_EQ(redupe_gf_mul(135, 0), 0);
}

TEST(GfMul, Test119)
{
    ASSERT_EQ(redupe_gf_mul(49, 176), 252);
    ASSERT_EQ(redupe_gf_mul(176, 49), 252);
}

TEST(GfMul, Test120)
{
    ASSERT_EQ(redupe_gf_mul(1, 176), 176);
    ASSERT_EQ(redupe_gf_mul(176, 1), 176);
}

TEST(GfMul, Test121)
{
    ASSERT_EQ(redupe_gf_mul(135, 252), 49);
    ASSERT_EQ(redupe_gf_mul(252, 135), 49);
}

TEST(GfMul, Test122)
{
    ASSERT_EQ(redupe_gf_mul(135, 176), 1);
    ASSERT_EQ(redupe_gf_mul(176, 135), 1);
}

TEST(GfMul, Test123)
{
    ASSERT_EQ(redupe_gf_mul(49, 227), 68);
    ASSERT_EQ(redupe_gf_mul(227, 49), 68);
}

TEST(GfMul, Test124)
{
    ASSERT_EQ(redupe_gf_mul(19, 150), 50);
    ASSERT_EQ(redupe_gf_mul(150, 19), 50);
}

TEST(GfMul, Test125)
{
    ASSERT_EQ(redupe_gf_mul(220, 252), 17);
    ASSERT_EQ(redupe_gf_mul(252, 220), 17);
}

TEST(GfMul, Test126)
{
    ASSERT_EQ(redupe_gf_mul(176, 220), 241);
    ASSERT_EQ(redupe_gf_mul(220, 176), 241);
}

TEST(GfMul, Test127)
{
    ASSERT_EQ(redupe_gf_mul(0, 220), 0);
    ASSERT_EQ(redupe_gf_mul(220, 0), 0);
}

TEST(GfMul, Test128)
{
    ASSERT_EQ(redupe_gf_mul(2, 194), 153);
    ASSERT_EQ(redupe_gf_mul(194, 2), 153);
}

TEST(GfMul, Test129)
{
    ASSERT_EQ(redupe_gf_mul(4, 196), 55);
    ASSERT_EQ(redupe_gf_mul(196, 4), 55);
}

TEST(GfMul, Test130)
{
    ASSERT_EQ(redupe_gf_mul(8, 200), 14);
    ASSERT_EQ(redupe_gf_mul(200, 8), 14);
}

TEST(GfMul, Test131)
{
    ASSERT_EQ(redupe_gf_mul(16, 208), 129);
    ASSERT_EQ(redupe_gf_mul(208, 16), 129);
}

TEST(GfMul, Test132)
{
    ASSERT_EQ(redupe_gf_mul(32, 224), 81);
    ASSERT_EQ(redupe_gf_mul(224, 32), 81);
}

TEST(GfMul, Test133)
{
    ASSERT_EQ(redupe_gf_mul(64, 128), 135);
    ASSERT_EQ(redupe_gf_mul(128, 64), 135);
}

TEST(GfMul, Test134)
{
    ASSERT_EQ(redupe_gf_mul(29, 221), 121);
    ASSERT_EQ(redupe_gf_mul(221, 29), 121);
}

TEST(GfMul, Test135)
{
    ASSERT_EQ(redupe_gf_mul(58, 250), 71);
    ASSERT_EQ(redupe_gf_mul(250, 58), 71);
}

TEST(GfMul, Test136)
{
    ASSERT_EQ(redupe_gf_mul(116, 180), 96);
    ASSERT_EQ(redupe_gf_mul(180, 116), 96);
}

TEST(GfMul, Test137)
{
    ASSERT_EQ(redupe_gf_mul(54, 128), 2);
    ASSERT_EQ(redupe_gf_mul(128, 54), 2);
}

TEST(GfMul, Test138)
{
    ASSERT_EQ(redupe_gf_mul(1, 3), 3);
    ASSERT_EQ(redupe_gf_mul(3, 1), 3);
}

TEST(GfMul, Test139)
{
    ASSERT_EQ(redupe_gf_mul(54, 252), 191);
    ASSERT_EQ(redupe_gf_mul(252, 54), 191);
}

TEST(GfMul, Test140)
{
    ASSERT_EQ(redupe_gf_mul(64, 191), 252);
    ASSERT_EQ(redupe_gf_mul(191, 64), 252);
}

TEST(GfMul, Test141)
{
    ASSERT_EQ(redupe_gf_mul(27, 64), 142);
    ASSERT_EQ(redupe_gf_mul(64, 27), 142);
}

TEST(GfMul, Test142)
{
    ASSERT_EQ(redupe_gf_mul(1, 143), 143);
    ASSERT_EQ(redupe_gf_mul(143, 1), 143);
}

TEST(GfMul, Test143)
{
    ASSERT_EQ(redupe_gf_mul(27, 128), 1);
    ASSERT_EQ(redupe_gf_mul(128, 27), 1);
}

TEST(GfMul, Test144)
{
    ASSERT_EQ(redupe_gf_mul(27, 255), 252);
    ASSERT_EQ(redupe_gf_mul(255, 27), 252);
}

TEST(GfMul, Test145)
{
    ASSERT_EQ(redupe_gf_mul(128, 252), 255);
    ASSERT_EQ(redupe_gf_mul(252, 128), 255);
}

TEST(GfMul, Test146)
{
    ASSERT_EQ(redupe_gf_mul(1, 249), 249);
    ASSERT_EQ(redupe_gf_mul(249, 1), 249);
}

TEST(GfMul, Test147)
{
    ASSERT_EQ(redupe_gf_mul(1, 169), 169);
    ASSERT_EQ(redupe_gf_mul(169, 1), 169);
}

TEST(GfMul, Test148)
{
    ASSERT_EQ(redupe_gf_mul(1, 173), 173);
    ASSERT_EQ(redupe_gf_mul(173, 1), 173);
}

TEST(GfMul, Test149)
{
    ASSERT_EQ(redupe_gf_mul(1, 194), 194);
    ASSERT_EQ(redupe_gf_mul(194, 1), 194);
}

TEST(GfMul, Test150)
{
    ASSERT_EQ(redupe_gf_mul(1, 41), 41);
    ASSERT_EQ(redupe_gf_mul(41, 1), 41);
}

TEST(GfMul, Test151)
{
    ASSERT_EQ(redupe_gf_mul(1, 226), 226);
    ASSERT_EQ(redupe_gf_mul(226, 1), 226);
}

TEST(GfMul, Test152)
{
    ASSERT_EQ(redupe_gf_mul(1, 139), 139);
    ASSERT_EQ(redupe_gf_mul(139, 1), 139);
}

TEST(GfMul, Test153)
{
    ASSERT_EQ(redupe_gf_mul(1, 153), 153);
    ASSERT_EQ(redupe_gf_mul(153, 1), 153);
}

TEST(GfMul, Test154)
{
    ASSERT_EQ(redupe_gf_mul(1, 40), 40);
    ASSERT_EQ(redupe_gf_mul(40, 1), 40);
}

TEST(GfMul, Test155)
{
    ASSERT_EQ(redupe_gf_mul(1, 216), 216);
    ASSERT_EQ(redupe_gf_mul(216, 1), 216);
}

TEST(GfMul, Test156)
{
    ASSERT_EQ(redupe_gf_mul(1, 23), 23);
    ASSERT_EQ(redupe_gf_mul(23, 1), 23);
}

TEST(GfMul, Test157)
{
    ASSERT_EQ(redupe_gf_mul(1, 209), 209);
    ASSERT_EQ(redupe_gf_mul(209, 1), 209);
}

TEST(GfMul, Test158)
{
    ASSERT_EQ(redupe_gf_mul(1, 47), 47);
    ASSERT_EQ(redupe_gf_mul(47, 1), 47);
}

TEST(GfMul, Test159)
{
    ASSERT_EQ(redupe_gf_mul(1, 255), 255);
    ASSERT_EQ(redupe_gf_mul(255, 1), 255);
}

TEST(GfMul, Test160)
{
    ASSERT_EQ(redupe_gf_mul(1, 20), 20);
    ASSERT_EQ(redupe_gf_mul(20, 1), 20);
}

TEST(GfMul, Test161)
{
    ASSERT_EQ(redupe_gf_mul(1, 190), 190);
    ASSERT_EQ(redupe_gf_mul(190, 1), 190);
}

TEST(GfMul, Test162)
{
    ASSERT_EQ(redupe_gf_mul(1, 99), 99);
    ASSERT_EQ(redupe_gf_mul(99, 1), 99);
}

TEST(GfMul, Test163)
{
    ASSERT_EQ(redupe_gf_mul(1, 198), 198);
    ASSERT_EQ(redupe_gf_mul(198, 1), 198);
}

TEST(GfMul, Test164)
{
    ASSERT_EQ(redupe_gf_mul(1, 135), 135);
    ASSERT_EQ(redupe_gf_mul(135, 1), 135);
}

TEST(GfMul, Test165)
{
    ASSERT_EQ(redupe_gf_mul(1, 119), 119);
    ASSERT_EQ(redupe_gf_mul(119, 1), 119);
}

TEST(GfMul, Test166)
{
    ASSERT_EQ(redupe_gf_mul(1, 206), 206);
    ASSERT_EQ(redupe_gf_mul(206, 1), 206);
}

TEST(GfMul, Test167)
{
    ASSERT_EQ(redupe_gf_mul(1, 132), 132);
    ASSERT_EQ(redupe_gf_mul(132, 1), 132);
}

TEST(GfMul, Test168)
{
    ASSERT_EQ(redupe_gf_mul(1, 15), 15);
    ASSERT_EQ(redupe_gf_mul(15, 1), 15);
}

TEST(GfMul, Test169)
{
    ASSERT_EQ(redupe_gf_mul(1, 168), 168);
    ASSERT_EQ(redupe_gf_mul(168, 1), 168);
}

TEST(GfMul, Test170)
{
    ASSERT_EQ(redupe_gf_mul(1, 165), 165);
    ASSERT_EQ(redupe_gf_mul(165, 1), 165);
}

TEST(GfMul, Test171)
{
    ASSERT_EQ(redupe_gf_mul(1, 122), 122);
    ASSERT_EQ(redupe_gf_mul(122, 1), 122);
}

TEST(GfMul, Test172)
{
    ASSERT_EQ(redupe_gf_mul(1, 156), 156);
    ASSERT_EQ(redupe_gf_mul(156, 1), 156);
}

TEST(GfMul, Test173)
{
    ASSERT_EQ(redupe_gf_mul(1, 44), 44);
    ASSERT_EQ(redupe_gf_mul(44, 1), 44);
}

TEST(GfMul, Test174)
{
    ASSERT_EQ(redupe_gf_mul(1, 26), 26);
    ASSERT_EQ(redupe_gf_mul(26, 1), 26);
}

TEST(GfMul, Test175)
{
    ASSERT_EQ(redupe_gf_mul(1, 60), 60);
    ASSERT_EQ(redupe_gf_mul(60, 1), 60);
}

TEST(GfMul, Test176)
{
    ASSERT_EQ(redupe_gf_mul(1, 43), 43);
    ASSERT_EQ(redupe_gf_mul(43, 1), 43);
}

TEST(GfMul, Test177)
{
    ASSERT_EQ(redupe_gf_mul(1, 211), 211);
    ASSERT_EQ(redupe_gf_mul(211, 1), 211);
}

TEST(GfMul, Test178)
{
    ASSERT_EQ(redupe_gf_mul(1, 232), 232);
    ASSERT_EQ(redupe_gf_mul(232, 1), 232);
}

TEST(GfMul, Test179)
{
    ASSERT_EQ(redupe_gf_mul(1, 118), 118);
    ASSERT_EQ(redupe_gf_mul(118, 1), 118);
}

TEST(GfMul, Test180)
{
    ASSERT_EQ(redupe_gf_mul(1, 214), 214);
    ASSERT_EQ(redupe_gf_mul(214, 1), 214);
}

TEST(GfMul, Test181)
{
    ASSERT_EQ(redupe_gf_mul(1, 33), 33);
    ASSERT_EQ(redupe_gf_mul(33, 1), 33);
}

TEST(GfMul, Test182)
{
    ASSERT_EQ(redupe_gf_mul(1, 239), 239);
    ASSERT_EQ(redupe_gf_mul(239, 1), 239);
}

TEST(GfMul, Test183)
{
    ASSERT_EQ(redupe_gf_mul(1, 112), 112);
    ASSERT_EQ(redupe_gf_mul(112, 1), 112);
}

TEST(GfMul, Test184)
{
    ASSERT_EQ(redupe_gf_mul(1, 113), 113);
    ASSERT_EQ(redupe_gf_mul(113, 1), 113);
}

TEST(GfMul, Test185)
{
    ASSERT_EQ(redupe_gf_mul(1, 221), 221);
    ASSERT_EQ(redupe_gf_mul(221, 1), 221);
}

TEST(GfMul, Test186)
{
    ASSERT_EQ(redupe_gf_mul(1, 30), 30);
    ASSERT_EQ(redupe_gf_mul(30, 1), 30);
}

TEST(GfMul, Test187)
{
    ASSERT_EQ(redupe_gf_mul(1, 166), 166);
    ASSERT_EQ(redupe_gf_mul(166, 1), 166);
}

TEST(GfMul, Test188)
{
    ASSERT_EQ(redupe_gf_mul(1, 94), 94);
    ASSERT_EQ(redupe_gf_mul(94, 1), 94);
}

TEST(GfMul, Test189)
{
    ASSERT_EQ(redupe_gf_mul(1, 61), 61);
    ASSERT_EQ(redupe_gf_mul(61, 1), 61);
}

TEST(GfMul, Test190)
{
    ASSERT_EQ(redupe_gf_mul(1, 175), 175);
    ASSERT_EQ(redupe_gf_mul(175, 1), 175);
}

TEST(GfMul, Test191)
{
    ASSERT_EQ(redupe_gf_mul(1, 215), 215);
    ASSERT_EQ(redupe_gf_mul(215, 1), 215);
}

TEST(GfMul, Test192)
{
    ASSERT_EQ(redupe_gf_mul(1, 222), 222);
    ASSERT_EQ(redupe_gf_mul(222, 1), 222);
}

TEST(GfMul, Test193)
{
    ASSERT_EQ(redupe_gf_mul(1, 192), 192);
    ASSERT_EQ(redupe_gf_mul(192, 1), 192);
}

TEST(GfMul, Test194)
{
    ASSERT_EQ(redupe_gf_mul(1, 246), 246);
    ASSERT_EQ(redupe_gf_mul(246, 1), 246);
}

TEST(GfMul, Test195)
{
    ASSERT_EQ(redupe_gf_mul(1, 154), 154);
    ASSERT_EQ(redupe_gf_mul(154, 1), 154);
}

TEST(GfMul, Test196)
{
    ASSERT_EQ(redupe_gf_mul(1, 201), 201);
    ASSERT_EQ(redupe_gf_mul(201, 1), 201);
}

TEST(GfMul, Test197)
{
    ASSERT_EQ(redupe_gf_mul(1, 217), 217);
    ASSERT_EQ(redupe_gf_mul(217, 1), 217);
}

TEST(GfMul, Test198)
{
    ASSERT_EQ(redupe_gf_mul(1, 81), 81);
    ASSERT_EQ(redupe_gf_mul(81, 1), 81);
}

TEST(GfMul, Test199)
{
    ASSERT_EQ(redupe_gf_mul(1, 244), 244);
    ASSERT_EQ(redupe_gf_mul(244, 1), 244);
}

TEST(GfMul, Test200)
{
    ASSERT_EQ(redupe_gf_mul(1, 77), 77);
    ASSERT_EQ(redupe_gf_mul(77, 1), 77);
}

TEST(GfMul, Test201)
{
    ASSERT_EQ(redupe_gf_mul(1, 140), 140);
    ASSERT_EQ(redupe_gf_mul(140, 1), 140);
}

TEST(GfMul, Test202)
{
    ASSERT_EQ(redupe_gf_mul(1, 57), 57);
    ASSERT_EQ(redupe_gf_mul(57, 1), 57);
}

TEST(GfMul, Test203)
{
    ASSERT_EQ(redupe_gf_mul(1, 145), 145);
    ASSERT_EQ(redupe_gf_mul(145, 1), 145);
}

TEST(GfMul, Test204)
{
    ASSERT_EQ(redupe_gf_mul(1, 93), 93);
    ASSERT_EQ(redupe_gf_mul(93, 1), 93);
}

TEST(GfMul, Test205)
{
    ASSERT_EQ(redupe_gf_mul(1, 137), 137);
    ASSERT_EQ(redupe_gf_mul(137, 1), 137);
}

TEST(GfMul, Test206)
{
    ASSERT_EQ(redupe_gf_mul(1, 104), 104);
    ASSERT_EQ(redupe_gf_mul(104, 1), 104);
}

TEST(GfMul, Test207)
{
    ASSERT_EQ(redupe_gf_mul(1, 202), 202);
    ASSERT_EQ(redupe_gf_mul(202, 1), 202);
}

TEST(GfMul, Test208)
{
    ASSERT_EQ(redupe_gf_mul(1, 247), 247);
    ASSERT_EQ(redupe_gf_mul(247, 1), 247);
}

TEST(GfMul, Test209)
{
    ASSERT_EQ(redupe_gf_mul(1, 45), 45);
    ASSERT_EQ(redupe_gf_mul(45, 1), 45);
}

TEST(GfMul, Test210)
{
    ASSERT_EQ(redupe_gf_mul(1, 129), 129);
    ASSERT_EQ(redupe_gf_mul(129, 1), 129);
}

TEST(GfMul, Test211)
{
    ASSERT_EQ(redupe_gf_mul(1, 238), 238);
    ASSERT_EQ(redupe_gf_mul(238, 1), 238);
}

TEST(GfMul, Test212)
{
    ASSERT_EQ(redupe_gf_mul(1, 212), 212);
    ASSERT_EQ(redupe_gf_mul(212, 1), 212);
}

TEST(GfMul, Test213)
{
    ASSERT_EQ(redupe_gf_mul(1, 231), 231);
    ASSERT_EQ(redupe_gf_mul(231, 1), 231);
}

TEST(GfMul, Test214)
{
    ASSERT_EQ(redupe_gf_mul(1, 179), 179);
    ASSERT_EQ(redupe_gf_mul(179, 1), 179);
}

TEST(GfMul, Test215)
{
    ASSERT_EQ(redupe_gf_mul(1, 223), 223);
    ASSERT_EQ(redupe_gf_mul(223, 1), 223);
}

TEST(GfMul, Test216)
{
    ASSERT_EQ(redupe_gf_mul(1, 22), 22);
    ASSERT_EQ(redupe_gf_mul(22, 1), 22);
}

TEST(GfMul, Test217)
{
    ASSERT_EQ(redupe_gf_mul(1, 115), 115);
    ASSERT_EQ(redupe_gf_mul(115, 1), 115);
}

TEST(GfMul, Test218)
{
    ASSERT_EQ(redupe_gf_mul(1, 5), 5);
    ASSERT_EQ(redupe_gf_mul(5, 1), 5);
}

TEST(GfMul, Test219)
{
    ASSERT_EQ(redupe_gf_mul(1, 142), 142);
    ASSERT_EQ(redupe_gf_mul(142, 1), 142);
}

TEST(GfMul, Test220)
{
    ASSERT_EQ(redupe_gf_mul(1, 208), 208);
    ASSERT_EQ(redupe_gf_mul(208, 1), 208);
}

TEST(GfMul, Test221)
{
    ASSERT_EQ(redupe_gf_mul(1, 110), 110);
    ASSERT_EQ(redupe_gf_mul(110, 1), 110);
}

TEST(GfMul, Test222)
{
    ASSERT_EQ(redupe_gf_mul(1, 148), 148);
    ASSERT_EQ(redupe_gf_mul(148, 1), 148);
}

TEST(GfMul, Test223)
{
    ASSERT_EQ(redupe_gf_mul(1, 18), 18);
    ASSERT_EQ(redupe_gf_mul(18, 1), 18);
}

TEST(GfMul, Test224)
{
    ASSERT_EQ(redupe_gf_mul(1, 199), 199);
    ASSERT_EQ(redupe_gf_mul(199, 1), 199);
}

TEST(GfMul, Test225)
{
    ASSERT_EQ(redupe_gf_mul(1, 250), 250);
    ASSERT_EQ(redupe_gf_mul(250, 1), 250);
}

TEST(GfMul, Test226)
{
    ASSERT_EQ(redupe_gf_mul(1, 182), 182);
    ASSERT_EQ(redupe_gf_mul(182, 1), 182);
}

TEST(GfMul, Test227)
{
    ASSERT_EQ(redupe_gf_mul(1, 78), 78);
    ASSERT_EQ(redupe_gf_mul(78, 1), 78);
}

TEST(GfMul, Test228)
{
    ASSERT_EQ(redupe_gf_mul(1, 151), 151);
    ASSERT_EQ(redupe_gf_mul(151, 1), 151);
}

TEST(GfMul, Test229)
{
    ASSERT_EQ(redupe_gf_mul(1, 172), 172);
    ASSERT_EQ(redupe_gf_mul(172, 1), 172);
}

TEST(GfMul, Test230)
{
    ASSERT_EQ(redupe_gf_mul(1, 19), 19);
    ASSERT_EQ(redupe_gf_mul(19, 1), 19);
}

TEST(GfMul, Test231)
{
    ASSERT_EQ(redupe_gf_mul(1, 42), 42);
    ASSERT_EQ(redupe_gf_mul(42, 1), 42);
}

TEST(GfMul, Test232)
{
    ASSERT_EQ(redupe_gf_mul(1, 79), 79);
    ASSERT_EQ(redupe_gf_mul(79, 1), 79);
}

TEST(GfMul, Test233)
{
    ASSERT_EQ(redupe_gf_mul(1, 121), 121);
    ASSERT_EQ(redupe_gf_mul(121, 1), 121);
}

TEST(GfMul, Test234)
{
    ASSERT_EQ(redupe_gf_mul(1, 144), 144);
    ASSERT_EQ(redupe_gf_mul(144, 1), 144);
}

TEST(GfMul, Test235)
{
    ASSERT_EQ(redupe_gf_mul(1, 14), 14);
    ASSERT_EQ(redupe_gf_mul(14, 1), 14);
}

TEST(GfMul, Test236)
{
    ASSERT_EQ(redupe_gf_mul(1, 242), 242);
    ASSERT_EQ(redupe_gf_mul(242, 1), 242);
}

TEST(GfMul, Test237)
{
    ASSERT_EQ(redupe_gf_mul(1, 55), 55);
    ASSERT_EQ(redupe_gf_mul(55, 1), 55);
}

TEST(GfMul, Test238)
{
    ASSERT_EQ(redupe_gf_mul(1, 230), 230);
    ASSERT_EQ(redupe_gf_mul(230, 1), 230);
}

TEST(GfMul, Test239)
{
    ASSERT_EQ(redupe_gf_mul(1, 213), 213);
    ASSERT_EQ(redupe_gf_mul(213, 1), 213);
}

TEST(GfMul, Test240)
{
    ASSERT_EQ(redupe_gf_mul(1, 100), 100);
    ASSERT_EQ(redupe_gf_mul(100, 1), 100);
}

TEST(GfMul, Test241)
{
    ASSERT_EQ(redupe_gf_mul(1, 27), 27);
    ASSERT_EQ(redupe_gf_mul(27, 1), 27);
}

TEST(GfMul, Test242)
{
    ASSERT_EQ(redupe_gf_mul(1, 237), 237);
    ASSERT_EQ(redupe_gf_mul(237, 1), 237);
}

TEST(GfMul, Test243)
{
    ASSERT_EQ(redupe_gf_mul(1, 35), 35);
    ASSERT_EQ(redupe_gf_mul(35, 1), 35);
}

TEST(GfMul, Test244)
{
    ASSERT_EQ(redupe_gf_mul(1, 36), 36);
    ASSERT_EQ(redupe_gf_mul(36, 1), 36);
}

TEST(GfMul, Test245)
{
    ASSERT_EQ(redupe_gf_mul(1, 37), 37);
    ASSERT_EQ(redupe_gf_mul(37, 1), 37);
}

TEST(GfMul, Test246)
{
    ASSERT_EQ(redupe_gf_mul(1, 91), 91);
    ASSERT_EQ(redupe_gf_mul(91, 1), 91);
}

TEST(GfMul, Test247)
{
    ASSERT_EQ(redupe_gf_mul(1, 141), 141);
    ASSERT_EQ(redupe_gf_mul(141, 1), 141);
}

TEST(GfMul, Test248)
{
    ASSERT_EQ(redupe_gf_mul(1, 24), 24);
    ASSERT_EQ(redupe_gf_mul(24, 1), 24);
}

TEST(GfMul, Test249)
{
    ASSERT_EQ(redupe_gf_mul(1, 138), 138);
    ASSERT_EQ(redupe_gf_mul(138, 1), 138);
}

TEST(GfMul, Test250)
{
    ASSERT_EQ(redupe_gf_mul(1, 59), 59);
    ASSERT_EQ(redupe_gf_mul(59, 1), 59);
}

TEST(GfMul, Test251)
{
    ASSERT_EQ(redupe_gf_mul(1, 51), 51);
    ASSERT_EQ(redupe_gf_mul(51, 1), 51);
}

TEST(GfMul, Test252)
{
    ASSERT_EQ(redupe_gf_mul(0, 1), 0);
    ASSERT_EQ(redupe_gf_mul(1, 0), 0);
}

TEST(GfMul, Test253)
{
    ASSERT_EQ(redupe_gf_mul(1, 83), 83);
    ASSERT_EQ(redupe_gf_mul(83, 1), 83);
}

TEST(GfMul, Test254)
{
    ASSERT_EQ(redupe_gf_mul(1, 108), 108);
    ASSERT_EQ(redupe_gf_mul(108, 1), 108);
}

TEST(GfMul, Test255)
{
    ASSERT_EQ(redupe_gf_mul(1, 67), 67);
    ASSERT_EQ(redupe_gf_mul(67, 1), 67);
}

TEST(GfMul, Test256)
{
    ASSERT_EQ(redupe_gf_mul(1, 66), 66);
    ASSERT_EQ(redupe_gf_mul(66, 1), 66);
}

TEST(GfMul, Test257)
{
    ASSERT_EQ(redupe_gf_mul(1, 177), 177);
    ASSERT_EQ(redupe_gf_mul(177, 1), 177);
}

TEST(GfMul, Test258)
{
    ASSERT_EQ(redupe_gf_mul(1, 107), 107);
    ASSERT_EQ(redupe_gf_mul(107, 1), 107);
}

TEST(GfMul, Test259)
{
    ASSERT_EQ(redupe_gf_mul(1, 150), 150);
    ASSERT_EQ(redupe_gf_mul(150, 1), 150);
}

TEST(GfMul, Test260)
{
    ASSERT_EQ(redupe_gf_mul(1, 227), 227);
    ASSERT_EQ(redupe_gf_mul(227, 1), 227);
}

TEST(GfMul, Test261)
{
    ASSERT_EQ(redupe_gf_mul(1, 225), 225);
    ASSERT_EQ(redupe_gf_mul(225, 1), 225);
}

TEST(GfMul, Test262)
{
    ASSERT_EQ(redupe_gf_mul(2, 249), 239);
    ASSERT_EQ(redupe_gf_mul(249, 2), 239);
}

TEST(GfMul, Test263)
{
    ASSERT_EQ(redupe_gf_mul(2, 191), 99);
    ASSERT_EQ(redupe_gf_mul(191, 2), 99);
}

TEST(GfMul, Test264)
{
    ASSERT_EQ(redupe_gf_mul(2, 103), 206);
    ASSERT_EQ(redupe_gf_mul(103, 2), 206);
}

TEST(GfMul, Test265)
{
    ASSERT_EQ(redupe_gf_mul(2, 161), 95);
    ASSERT_EQ(redupe_gf_mul(161, 2), 95);
}

TEST(GfMul, Test266)
{
    ASSERT_EQ(redupe_gf_mul(2, 180), 117);
    ASSERT_EQ(redupe_gf_mul(180, 2), 117);
}

TEST(GfMul, Test267)
{
    ASSERT_EQ(redupe_gf_mul(2, 190), 97);
    ASSERT_EQ(redupe_gf_mul(190, 2), 97);
}

TEST(GfMul, Test268)
{
    ASSERT_EQ(redupe_gf_mul(2, 8), 16);
    ASSERT_EQ(redupe_gf_mul(8, 2), 16);
}

TEST(GfMul, Test269)
{
    ASSERT_EQ(redupe_gf_mul(2, 2), 4);
    ASSERT_EQ(redupe_gf_mul(2, 2), 4);
}

TEST(GfMul, Test270)
{
    ASSERT_EQ(redupe_gf_mul(2, 181), 119);
    ASSERT_EQ(redupe_gf_mul(181, 2), 119);
}

TEST(GfMul, Test271)
{
    ASSERT_EQ(redupe_gf_mul(2, 135), 19);
    ASSERT_EQ(redupe_gf_mul(135, 2), 19);
}

TEST(GfMul, Test272)
{
    ASSERT_EQ(redupe_gf_mul(2, 220), 165);
    ASSERT_EQ(redupe_gf_mul(220, 2), 165);
}

TEST(GfMul, Test273)
{
    ASSERT_EQ(redupe_gf_mul(2, 99), 198);
    ASSERT_EQ(redupe_gf_mul(99, 2), 198);
}

TEST(GfMul, Test274)
{
    ASSERT_EQ(redupe_gf_mul(2, 37), 74);
    ASSERT_EQ(redupe_gf_mul(37, 2), 74);
}

TEST(GfMul, Test275)
{
    ASSERT_EQ(redupe_gf_mul(2, 87), 174);
    ASSERT_EQ(redupe_gf_mul(87, 2), 174);
}

TEST(GfMul, Test276)
{
    ASSERT_EQ(redupe_gf_mul(2, 193), 159);
    ASSERT_EQ(redupe_gf_mul(193, 2), 159);
}

TEST(GfMul, Test277)
{
    ASSERT_EQ(redupe_gf_mul(2, 33), 66);
    ASSERT_EQ(redupe_gf_mul(33, 2), 66);
}

TEST(GfMul, Test278)
{
    ASSERT_EQ(redupe_gf_mul(2, 67), 134);
    ASSERT_EQ(redupe_gf_mul(67, 2), 134);
}

TEST(GfMul, Test279)
{
    ASSERT_EQ(redupe_gf_mul(2, 109), 218);
    ASSERT_EQ(redupe_gf_mul(109, 2), 218);
}

TEST(GfMul, Test280)
{
    ASSERT_EQ(redupe_gf_mul(2, 112), 224);
    ASSERT_EQ(redupe_gf_mul(112, 2), 224);
}

TEST(GfMul, Test281)
{
    ASSERT_EQ(redupe_gf_mul(2, 61), 122);
    ASSERT_EQ(redupe_gf_mul(61, 2), 122);
}

TEST(GfMul, Test282)
{
    ASSERT_EQ(redupe_gf_mul(2, 223), 163);
    ASSERT_EQ(redupe_gf_mul(223, 2), 163);
}

TEST(GfMul, Test283)
{
    ASSERT_EQ(redupe_gf_mul(2, 226), 217);
    ASSERT_EQ(redupe_gf_mul(226, 2), 217);
}

TEST(GfMul, Test284)
{
    ASSERT_EQ(redupe_gf_mul(2, 40), 80);
    ASSERT_EQ(redupe_gf_mul(40, 2), 80);
}

TEST(GfMul, Test285)
{
    ASSERT_EQ(redupe_gf_mul(2, 233), 207);
    ASSERT_EQ(redupe_gf_mul(233, 2), 207);
}

TEST(GfMul, Test286)
{
    ASSERT_EQ(redupe_gf_mul(2, 133), 23);
    ASSERT_EQ(redupe_gf_mul(133, 2), 23);
}

TEST(GfMul, Test287)
{
    ASSERT_EQ(redupe_gf_mul(2, 156), 37);
    ASSERT_EQ(redupe_gf_mul(156, 2), 37);
}

TEST(GfMul, Test288)
{
    ASSERT_EQ(redupe_gf_mul(2, 115), 230);
    ASSERT_EQ(redupe_gf_mul(115, 2), 230);
}

TEST(GfMul, Test289)
{
    ASSERT_EQ(redupe_gf_mul(2, 101), 202);
    ASSERT_EQ(redupe_gf_mul(101, 2), 202);
}

TEST(GfMul, Test290)
{
    ASSERT_EQ(redupe_gf_mul(2, 46), 92);
    ASSERT_EQ(redupe_gf_mul(46, 2), 92);
}

TEST(GfMul, Test291)
{
    ASSERT_EQ(redupe_gf_mul(2, 250), 233);
    ASSERT_EQ(redupe_gf_mul(250, 2), 233);
}

TEST(GfMul, Test292)
{
    ASSERT_EQ(redupe_gf_mul(2, 219), 171);
    ASSERT_EQ(redupe_gf_mul(219, 2), 171);
}

TEST(GfMul, Test293)
{
    ASSERT_EQ(redupe_gf_mul(2, 27), 54);
    ASSERT_EQ(redupe_gf_mul(27, 2), 54);
}

TEST(GfMul, Test294)
{
    ASSERT_EQ(redupe_gf_mul(0, 2), 0);
    ASSERT_EQ(redupe_gf_mul(2, 0), 0);
}

TEST(GfMul, Test295)
{
    ASSERT_EQ(redupe_gf_mul(2, 38), 76);
    ASSERT_EQ(redupe_gf_mul(38, 2), 76);
}

TEST(GfMul, Test296)
{
    ASSERT_EQ(redupe_gf_mul(2, 76), 152);
    ASSERT_EQ(redupe_gf_mul(76, 2), 152);
}

TEST(GfMul, Test297)
{
    ASSERT_EQ(redupe_gf_mul(2, 143), 3);
    ASSERT_EQ(redupe_gf_mul(143, 2), 3);
}

TEST(GfMul, Test298)
{
    ASSERT_EQ(redupe_gf_mul(2, 251), 235);
    ASSERT_EQ(redupe_gf_mul(251, 2), 235);
}

TEST(GfMul, Test299)
{
    ASSERT_EQ(redupe_gf_mul(2, 146), 57);
    ASSERT_EQ(redupe_gf_mul(146, 2), 57);
}

TEST(GfMul, Test300)
{
    ASSERT_EQ(redupe_gf_mul(2, 123), 246);
    ASSERT_EQ(redupe_gf_mul(123, 2), 246);
}

TEST(GfMul, Test301)
{
    ASSERT_EQ(redupe_gf_mul(2, 104), 208);
    ASSERT_EQ(redupe_gf_mul(104, 2), 208);
}

TEST(GfMul, Test302)
{
    ASSERT_EQ(redupe_gf_mul(2, 23), 46);
    ASSERT_EQ(redupe_gf_mul(23, 2), 46);
}

TEST(GfMul, Test303)
{
    ASSERT_EQ(redupe_gf_mul(2, 153), 47);
    ASSERT_EQ(redupe_gf_mul(153, 2), 47);
}

TEST(GfMul, Test304)
{
    ASSERT_EQ(redupe_gf_mul(2, 176), 125);
    ASSERT_EQ(redupe_gf_mul(176, 2), 125);
}

TEST(GfMul, Test305)
{
    ASSERT_EQ(redupe_gf_mul(2, 124), 248);
    ASSERT_EQ(redupe_gf_mul(124, 2), 248);
}

TEST(GfMul, Test306)
{
    ASSERT_EQ(redupe_gf_mul(2, 107), 214);
    ASSERT_EQ(redupe_gf_mul(107, 2), 214);
}

TEST(GfMul, Test307)
{
    ASSERT_EQ(redupe_gf_mul(2, 75), 150);
    ASSERT_EQ(redupe_gf_mul(75, 2), 150);
}

TEST(GfMul, Test308)
{
    ASSERT_EQ(redupe_gf_mul(2, 54), 108);
    ASSERT_EQ(redupe_gf_mul(54, 2), 108);
}

TEST(GfMul, Test309)
{
    ASSERT_EQ(redupe_gf_mul(2, 254), 225);
    ASSERT_EQ(redupe_gf_mul(254, 2), 225);
}

TEST(GfMul, Test310)
{
    ASSERT_EQ(redupe_gf_mul(2, 89), 178);
    ASSERT_EQ(redupe_gf_mul(89, 2), 178);
}

TEST(GfMul, Test311)
{
    ASSERT_EQ(redupe_gf_mul(2, 114), 228);
    ASSERT_EQ(redupe_gf_mul(114, 2), 228);
}

TEST(GfMul, Test312)
{
    ASSERT_EQ(redupe_gf_mul(2, 237), 199);
    ASSERT_EQ(redupe_gf_mul(237, 2), 199);
}

TEST(GfMul, Test313)
{
    ASSERT_EQ(redupe_gf_mul(2, 217), 175);
    ASSERT_EQ(redupe_gf_mul(217, 2), 175);
}

TEST(GfMul, Test314)
{
    ASSERT_EQ(redupe_gf_mul(2, 47), 94);
    ASSERT_EQ(redupe_gf_mul(47, 2), 94);
}

TEST(GfMul, Test315)
{
    ASSERT_EQ(redupe_gf_mul(2, 232), 205);
    ASSERT_EQ(redupe_gf_mul(232, 2), 205);
}

TEST(GfMul, Test316)
{
    ASSERT_EQ(redupe_gf_mul(2, 187), 107);
    ASSERT_EQ(redupe_gf_mul(187, 2), 107);
}

TEST(GfMul, Test317)
{
    ASSERT_EQ(redupe_gf_mul(2, 113), 226);
    ASSERT_EQ(redupe_gf_mul(113, 2), 226);
}

TEST(GfMul, Test318)
{
    ASSERT_EQ(redupe_gf_mul(2, 111), 222);
    ASSERT_EQ(redupe_gf_mul(111, 2), 222);
}

TEST(GfMul, Test319)
{
    ASSERT_EQ(redupe_gf_mul(2, 59), 118);
    ASSERT_EQ(redupe_gf_mul(59, 2), 118);
}

TEST(GfMul, Test320)
{
    ASSERT_EQ(redupe_gf_mul(2, 129), 31);
    ASSERT_EQ(redupe_gf_mul(129, 2), 31);
}

TEST(GfMul, Test321)
{
    ASSERT_EQ(redupe_gf_mul(2, 178), 121);
    ASSERT_EQ(redupe_gf_mul(178, 2), 121);
}

TEST(GfMul, Test322)
{
    ASSERT_EQ(redupe_gf_mul(2, 192), 157);
    ASSERT_EQ(redupe_gf_mul(192, 2), 157);
}

TEST(GfMul, Test323)
{
    ASSERT_EQ(redupe_gf_mul(2, 92), 184);
    ASSERT_EQ(redupe_gf_mul(92, 2), 184);
}

TEST(GfMul, Test324)
{
    ASSERT_EQ(redupe_gf_mul(2, 246), 241);
    ASSERT_EQ(redupe_gf_mul(246, 2), 241);
}

TEST(GfMul, Test325)
{
    ASSERT_EQ(redupe_gf_mul(2, 188), 101);
    ASSERT_EQ(redupe_gf_mul(188, 2), 101);
}

TEST(GfMul, Test326)
{
    ASSERT_EQ(redupe_gf_mul(2, 169), 79);
    ASSERT_EQ(redupe_gf_mul(169, 2), 79);
}

TEST(GfMul, Test327)
{
    ASSERT_EQ(redupe_gf_mul(2, 155), 43);
    ASSERT_EQ(redupe_gf_mul(155, 2), 43);
}

TEST(GfMul, Test328)
{
    ASSERT_EQ(redupe_gf_mul(2, 216), 173);
    ASSERT_EQ(redupe_gf_mul(216, 2), 173);
}

TEST(GfMul, Test329)
{
    ASSERT_EQ(redupe_gf_mul(2, 44), 88);
    ASSERT_EQ(redupe_gf_mul(44, 2), 88);
}

TEST(GfMul, Test330)
{
    ASSERT_EQ(redupe_gf_mul(2, 205), 135);
    ASSERT_EQ(redupe_gf_mul(205, 2), 135);
}

TEST(GfMul, Test331)
{
    ASSERT_EQ(redupe_gf_mul(2, 196), 149);
    ASSERT_EQ(redupe_gf_mul(196, 2), 149);
}

TEST(GfMul, Test332)
{
    ASSERT_EQ(redupe_gf_mul(2, 195), 155);
    ASSERT_EQ(redupe_gf_mul(195, 2), 155);
}

TEST(GfMul, Test333)
{
    ASSERT_EQ(redupe_gf_mul(2, 65), 130);
    ASSERT_EQ(redupe_gf_mul(65, 2), 130);
}

TEST(GfMul, Test334)
{
    ASSERT_EQ(redupe_gf_mul(2, 51), 102);
    ASSERT_EQ(redupe_gf_mul(51, 2), 102);
}

TEST(GfMul, Test335)
{
    ASSERT_EQ(redupe_gf_mul(2, 235), 203);
    ASSERT_EQ(redupe_gf_mul(235, 2), 203);
}

TEST(GfMul, Test336)
{
    ASSERT_EQ(redupe_gf_mul(2, 234), 201);
    ASSERT_EQ(redupe_gf_mul(234, 2), 201);
}

TEST(GfMul, Test337)
{
    ASSERT_EQ(redupe_gf_mul(2, 50), 100);
    ASSERT_EQ(redupe_gf_mul(50, 2), 100);
}

TEST(GfMul, Test338)
{
    ASSERT_EQ(redupe_gf_mul(2, 34), 68);
    ASSERT_EQ(redupe_gf_mul(34, 2), 68);
}

TEST(GfMul, Test339)
{
    ASSERT_EQ(redupe_gf_mul(2, 63), 126);
    ASSERT_EQ(redupe_gf_mul(63, 2), 126);
}

TEST(GfMul, Test340)
{
    ASSERT_EQ(redupe_gf_mul(2, 32), 64);
    ASSERT_EQ(redupe_gf_mul(32, 2), 64);
}

TEST(GfMul, Test341)
{
    ASSERT_EQ(redupe_gf_mul(2, 175), 67);
    ASSERT_EQ(redupe_gf_mul(175, 2), 67);
}

TEST(GfMul, Test342)
{
    ASSERT_EQ(redupe_gf_mul(2, 212), 181);
    ASSERT_EQ(redupe_gf_mul(212, 2), 181);
}

TEST(GfMul, Test343)
{
    ASSERT_EQ(redupe_gf_mul(2, 203), 139);
    ASSERT_EQ(redupe_gf_mul(203, 2), 139);
}

TEST(GfMul, Test344)
{
    ASSERT_EQ(redupe_gf_mul(2, 26), 52);
    ASSERT_EQ(redupe_gf_mul(26, 2), 52);
}

TEST(GfMul, Test345)
{
    ASSERT_EQ(redupe_gf_mul(2, 228), 213);
    ASSERT_EQ(redupe_gf_mul(228, 2), 213);
}

TEST(GfMul, Test346)
{
    ASSERT_EQ(redupe_gf_mul(2, 218), 169);
    ASSERT_EQ(redupe_gf_mul(218, 2), 169);
}

TEST(GfMul, Test347)
{
    ASSERT_EQ(redupe_gf_mul(2, 145), 63);
    ASSERT_EQ(redupe_gf_mul(145, 2), 63);
}

TEST(GfMul, Test348)
{
    ASSERT_EQ(redupe_gf_mul(2, 43), 86);
    ASSERT_EQ(redupe_gf_mul(43, 2), 86);
}

TEST(GfMul, Test349)
{
    ASSERT_EQ(redupe_gf_mul(2, 55), 110);
    ASSERT_EQ(redupe_gf_mul(55, 2), 110);
}

TEST(GfMul, Test350)
{
    ASSERT_EQ(redupe_gf_mul(2, 174), 65);
    ASSERT_EQ(redupe_gf_mul(174, 2), 65);
}

TEST(GfMul, Test351)
{
    ASSERT_EQ(redupe_gf_mul(2, 3), 6);
    ASSERT_EQ(redupe_gf_mul(3, 2), 6);
}

TEST(GfMul, Test352)
{
    ASSERT_EQ(redupe_gf_mul(2, 152), 45);
    ASSERT_EQ(redupe_gf_mul(152, 2), 45);
}

TEST(GfMul, Test353)
{
    ASSERT_EQ(redupe_gf_mul(2, 95), 190);
    ASSERT_EQ(redupe_gf_mul(95, 2), 190);
}

TEST(GfMul, Test354)
{
    ASSERT_EQ(redupe_gf_mul(2, 119), 238);
    ASSERT_EQ(redupe_gf_mul(119, 2), 238);
}

TEST(GfMul, Test355)
{
    ASSERT_EQ(redupe_gf_mul(2, 139), 11);
    ASSERT_EQ(redupe_gf_mul(139, 2), 11);
}

TEST(GfMul, Test356)
{
    ASSERT_EQ(redupe_gf_mul(2, 185), 111);
    ASSERT_EQ(redupe_gf_mul(185, 2), 111);
}

TEST(GfMul, Test357)
{
    ASSERT_EQ(redupe_gf_mul(2, 132), 21);
    ASSERT_EQ(redupe_gf_mul(132, 2), 21);
}

TEST(GfMul, Test358)
{
    ASSERT_EQ(redupe_gf_mul(2, 20), 40);
    ASSERT_EQ(redupe_gf_mul(20, 2), 40);
}

TEST(GfMul, Test359)
{
    ASSERT_EQ(redupe_gf_mul(2, 136), 13);
    ASSERT_EQ(redupe_gf_mul(136, 2), 13);
}

TEST(GfMul, Test360)
{
    ASSERT_EQ(redupe_gf_mul(2, 73), 146);
    ASSERT_EQ(redupe_gf_mul(73, 2), 146);
}

TEST(GfMul, Test361)
{
    ASSERT_EQ(redupe_gf_mul(2, 230), 209);
    ASSERT_EQ(redupe_gf_mul(230, 2), 209);
}

TEST(GfMul, Test362)
{
    ASSERT_EQ(redupe_gf_mul(2, 96), 192);
    ASSERT_EQ(redupe_gf_mul(96, 2), 192);
}

TEST(GfMul, Test363)
{
    ASSERT_EQ(redupe_gf_mul(2, 125), 250);
    ASSERT_EQ(redupe_gf_mul(125, 2), 250);
}

TEST(GfMul, Test364)
{
    ASSERT_EQ(redupe_gf_mul(2, 108), 216);
    ASSERT_EQ(redupe_gf_mul(108, 2), 216);
}

TEST(GfMul, Test365)
{
    ASSERT_EQ(redupe_gf_mul(2, 91), 182);
    ASSERT_EQ(redupe_gf_mul(91, 2), 182);
}

TEST(GfMul, Test366)
{
    ASSERT_EQ(redupe_gf_mul(2, 77), 154);
    ASSERT_EQ(redupe_gf_mul(77, 2), 154);
}

TEST(GfMul, Test367)
{
    ASSERT_EQ(redupe_gf_mul(2, 157), 39);
    ASSERT_EQ(redupe_gf_mul(157, 2), 39);
}

TEST(GfMul, Test368)
{
    ASSERT_EQ(redupe_gf_mul(2, 224), 221);
    ASSERT_EQ(redupe_gf_mul(224, 2), 221);
}

TEST(GfMul, Test369)
{
    ASSERT_EQ(redupe_gf_mul(2, 56), 112);
    ASSERT_EQ(redupe_gf_mul(56, 2), 112);
}

TEST(GfMul, Test370)
{
    ASSERT_EQ(redupe_gf_mul(2, 24), 48);
    ASSERT_EQ(redupe_gf_mul(24, 2), 48);
}

TEST(GfMul, Test371)
{
    ASSERT_EQ(redupe_gf_mul(2, 45), 90);
    ASSERT_EQ(redupe_gf_mul(45, 2), 90);
}

TEST(GfMul, Test372)
{
    ASSERT_EQ(redupe_gf_mul(2, 14), 28);
    ASSERT_EQ(redupe_gf_mul(14, 2), 28);
}

TEST(GfMul, Test373)
{
    ASSERT_EQ(redupe_gf_mul(2, 12), 24);
    ASSERT_EQ(redupe_gf_mul(12, 2), 24);
}

TEST(GfMul, Test374)
{
    ASSERT_EQ(redupe_gf_mul(2, 239), 195);
    ASSERT_EQ(redupe_gf_mul(239, 2), 195);
}

TEST(GfMul, Test375)
{
    ASSERT_EQ(redupe_gf_mul(2, 18), 36);
    ASSERT_EQ(redupe_gf_mul(18, 2), 36);
}

TEST(GfMul, Test376)
{
    ASSERT_EQ(redupe_gf_mul(2, 78), 156);
    ASSERT_EQ(redupe_gf_mul(78, 2), 156);
}

TEST(GfMul, Test377)
{
    ASSERT_EQ(redupe_gf_mul(2, 19), 38);
    ASSERT_EQ(redupe_gf_mul(19, 2), 38);
}

TEST(GfMul, Test378)
{
    ASSERT_EQ(redupe_gf_mul(2, 171), 75);
    ASSERT_EQ(redupe_gf_mul(171, 2), 75);
}

TEST(GfMul, Test379)
{
    ASSERT_EQ(redupe_gf_mul(2, 214), 177);
    ASSERT_EQ(redupe_gf_mul(214, 2), 177);
}

TEST(GfMul, Test380)
{
    ASSERT_EQ(redupe_gf_mul(2, 173), 71);
    ASSERT_EQ(redupe_gf_mul(173, 2), 71);
}

TEST(GfMul, Test381)
{
    ASSERT_EQ(redupe_gf_mul(2, 121), 242);
    ASSERT_EQ(redupe_gf_mul(121, 2), 242);
}

TEST(GfMul, Test382)
{
    ASSERT_EQ(redupe_gf_mul(2, 222), 161);
    ASSERT_EQ(redupe_gf_mul(222, 2), 161);
}

TEST(GfMul, Test383)
{
    ASSERT_EQ(redupe_gf_mul(4, 147), 118);
    ASSERT_EQ(redupe_gf_mul(147, 4), 118);
}

TEST(GfMul, Test384)
{
    ASSERT_EQ(redupe_gf_mul(4, 114), 213);
    ASSERT_EQ(redupe_gf_mul(114, 4), 213);
}

TEST(GfMul, Test385)
{
    ASSERT_EQ(redupe_gf_mul(4, 186), 210);
    ASSERT_EQ(redupe_gf_mul(186, 4), 210);
}

TEST(GfMul, Test386)
{
    ASSERT_EQ(redupe_gf_mul(4, 57), 228);
    ASSERT_EQ(redupe_gf_mul(57, 4), 228);
}

TEST(GfMul, Test387)
{
    ASSERT_EQ(redupe_gf_mul(4, 47), 188);
    ASSERT_EQ(redupe_gf_mul(47, 4), 188);
}

TEST(GfMul, Test388)
{
    ASSERT_EQ(redupe_gf_mul(4, 213), 115);
    ASSERT_EQ(redupe_gf_mul(213, 4), 115);
}

TEST(GfMul, Test389)
{
    ASSERT_EQ(redupe_gf_mul(4, 97), 153);
    ASSERT_EQ(redupe_gf_mul(97, 4), 153);
}

TEST(GfMul, Test390)
{
    ASSERT_EQ(redupe_gf_mul(4, 40), 160);
    ASSERT_EQ(redupe_gf_mul(40, 4), 160);
}

TEST(GfMul, Test391)
{
    ASSERT_EQ(redupe_gf_mul(4, 80), 93);
    ASSERT_EQ(redupe_gf_mul(80, 4), 93);
}

TEST(GfMul, Test392)
{
    ASSERT_EQ(redupe_gf_mul(4, 146), 114);
    ASSERT_EQ(redupe_gf_mul(146, 4), 114);
}

TEST(GfMul, Test393)
{
    ASSERT_EQ(redupe_gf_mul(4, 180), 234);
    ASSERT_EQ(redupe_gf_mul(180, 4), 234);
}

TEST(GfMul, Test394)
{
    ASSERT_EQ(redupe_gf_mul(4, 9), 36);
    ASSERT_EQ(redupe_gf_mul(9, 4), 36);
}

TEST(GfMul, Test395)
{
    ASSERT_EQ(redupe_gf_mul(4, 168), 154);
    ASSERT_EQ(redupe_gf_mul(168, 4), 154);
}

TEST(GfMul, Test396)
{
    ASSERT_EQ(redupe_gf_mul(4, 155), 86);
    ASSERT_EQ(redupe_gf_mul(155, 4), 86);
}

TEST(GfMul, Test397)
{
    ASSERT_EQ(redupe_gf_mul(4, 189), 206);
    ASSERT_EQ(redupe_gf_mul(189, 4), 206);
}

TEST(GfMul, Test398)
{
    ASSERT_EQ(redupe_gf_mul(4, 100), 141);
    ASSERT_EQ(redupe_gf_mul(100, 4), 141);
}

TEST(GfMul, Test399)
{
    ASSERT_EQ(redupe_gf_mul(4, 248), 199);
    ASSERT_EQ(redupe_gf_mul(248, 4), 199);
}

TEST(GfMul, Test400)
{
    ASSERT_EQ(redupe_gf_mul(4, 134), 34);
    ASSERT_EQ(redupe_gf_mul(134, 4), 34);
}

TEST(GfMul, Test401)
{
    ASSERT_EQ(redupe_gf_mul(4, 15), 60);
    ASSERT_EQ(redupe_gf_mul(15, 4), 60);
}

TEST(GfMul, Test402)
{
    ASSERT_EQ(redupe_gf_mul(4, 26), 104);
    ASSERT_EQ(redupe_gf_mul(26, 4), 104);
}

TEST(GfMul, Test403)
{
    ASSERT_EQ(redupe_gf_mul(4, 34), 136);
    ASSERT_EQ(redupe_gf_mul(34, 4), 136);
}

TEST(GfMul, Test404)
{
    ASSERT_EQ(redupe_gf_mul(3, 4), 12);
    ASSERT_EQ(redupe_gf_mul(4, 3), 12);
}

TEST(GfMul, Test405)
{
    ASSERT_EQ(redupe_gf_mul(4, 171), 150);
    ASSERT_EQ(redupe_gf_mul(171, 4), 150);
}

TEST(GfMul, Test406)
{
    ASSERT_EQ(redupe_gf_mul(4, 252), 215);
    ASSERT_EQ(redupe_gf_mul(252, 4), 215);
}

TEST(GfMul, Test407)
{
    ASSERT_EQ(redupe_gf_mul(4, 84), 77);
    ASSERT_EQ(redupe_gf_mul(84, 4), 77);
}

TEST(GfMul, Test408)
{
    ASSERT_EQ(redupe_gf_mul(4, 169), 158);
    ASSERT_EQ(redupe_gf_mul(169, 4), 158);
}

TEST(GfMul, Test409)
{
    ASSERT_EQ(redupe_gf_mul(4, 56), 224);
    ASSERT_EQ(redupe_gf_mul(56, 4), 224);
}

TEST(GfMul, Test410)
{
    ASSERT_EQ(redupe_gf_mul(4, 153), 94);
    ASSERT_EQ(redupe_gf_mul(153, 4), 94);
}

TEST(GfMul, Test411)
{
    ASSERT_EQ(redupe_gf_mul(4, 184), 218);
    ASSERT_EQ(redupe_gf_mul(184, 4), 218);
}

TEST(GfMul, Test412)
{
    ASSERT_EQ(redupe_gf_mul(4, 106), 181);
    ASSERT_EQ(redupe_gf_mul(106, 4), 181);
}

TEST(GfMul, Test413)
{
    ASSERT_EQ(redupe_gf_mul(4, 131), 54);
    ASSERT_EQ(redupe_gf_mul(131, 4), 54);
}

TEST(GfMul, Test414)
{
    ASSERT_EQ(redupe_gf_mul(4, 16), 64);
    ASSERT_EQ(redupe_gf_mul(16, 4), 64);
}

TEST(GfMul, Test415)
{
    ASSERT_EQ(redupe_gf_mul(4, 64), 29);
    ASSERT_EQ(redupe_gf_mul(64, 4), 29);
}

TEST(GfMul, Test416)
{
    ASSERT_EQ(redupe_gf_mul(4, 10), 40);
    ASSERT_EQ(redupe_gf_mul(10, 4), 40);
}

TEST(GfMul, Test417)
{
    ASSERT_EQ(redupe_gf_mul(4, 208), 103);
    ASSERT_EQ(redupe_gf_mul(208, 4), 103);
}

TEST(GfMul, Test418)
{
    ASSERT_EQ(redupe_gf_mul(4, 30), 120);
    ASSERT_EQ(redupe_gf_mul(30, 4), 120);
}

TEST(GfMul, Test419)
{
    ASSERT_EQ(redupe_gf_mul(4, 58), 232);
    ASSERT_EQ(redupe_gf_mul(58, 4), 232);
}

TEST(GfMul, Test420)
{
    ASSERT_EQ(redupe_gf_mul(4, 118), 197);
    ASSERT_EQ(redupe_gf_mul(118, 4), 197);
}

TEST(GfMul, Test421)
{
    ASSERT_EQ(redupe_gf_mul(4, 126), 229);
    ASSERT_EQ(redupe_gf_mul(126, 4), 229);
}

TEST(GfMul, Test422)
{
    ASSERT_EQ(redupe_gf_mul(4, 23), 92);
    ASSERT_EQ(redupe_gf_mul(23, 4), 92);
}

TEST(GfMul, Test423)
{
    ASSERT_EQ(redupe_gf_mul(4, 96), 157);
    ASSERT_EQ(redupe_gf_mul(96, 4), 157);
}

TEST(GfMul, Test424)
{
    ASSERT_EQ(redupe_gf_mul(2, 4), 8);
    ASSERT_EQ(redupe_gf_mul(4, 2), 8);
}

TEST(GfMul, Test425)
{
    ASSERT_EQ(redupe_gf_mul(4, 183), 230);
    ASSERT_EQ(redupe_gf_mul(183, 4), 230);
}

TEST(GfMul, Test426)
{
    ASSERT_EQ(redupe_gf_mul(4, 217), 67);
    ASSERT_EQ(redupe_gf_mul(217, 4), 67);
}

TEST(GfMul, Test427)
{
    ASSERT_EQ(redupe_gf_mul(4, 177), 254);
    ASSERT_EQ(redupe_gf_mul(177, 4), 254);
}

TEST(GfMul, Test428)
{
    ASSERT_EQ(redupe_gf_mul(4, 163), 182);
    ASSERT_EQ(redupe_gf_mul(163, 4), 182);
}

TEST(GfMul, Test429)
{
    ASSERT_EQ(redupe_gf_mul(4, 78), 37);
    ASSERT_EQ(redupe_gf_mul(78, 4), 37);
}

TEST(GfMul, Test430)
{
    ASSERT_EQ(redupe_gf_mul(4, 70), 5);
    ASSERT_EQ(redupe_gf_mul(70, 4), 5);
}

TEST(GfMul, Test431)
{
    ASSERT_EQ(redupe_gf_mul(4, 151), 102);
    ASSERT_EQ(redupe_gf_mul(151, 4), 102);
}

TEST(GfMul, Test432)
{
    ASSERT_EQ(redupe_gf_mul(4, 222), 95);
    ASSERT_EQ(redupe_gf_mul(222, 4), 95);
}

TEST(GfMul, Test433)
{
    ASSERT_EQ(redupe_gf_mul(4, 159), 70);
    ASSERT_EQ(redupe_gf_mul(159, 4), 70);
}

TEST(GfMul, Test434)
{
    ASSERT_EQ(redupe_gf_mul(4, 79), 33);
    ASSERT_EQ(redupe_gf_mul(79, 4), 33);
}

TEST(GfMul, Test435)
{
    ASSERT_EQ(redupe_gf_mul(4, 124), 237);
    ASSERT_EQ(redupe_gf_mul(124, 4), 237);
}

TEST(GfMul, Test436)
{
    ASSERT_EQ(redupe_gf_mul(4, 91), 113);
    ASSERT_EQ(redupe_gf_mul(91, 4), 113);
}

TEST(GfMul, Test437)
{
    ASSERT_EQ(redupe_gf_mul(4, 7), 28);
    ASSERT_EQ(redupe_gf_mul(7, 4), 28);
}

TEST(GfMul, Test438)
{
    ASSERT_EQ(redupe_gf_mul(4, 6), 24);
    ASSERT_EQ(redupe_gf_mul(6, 4), 24);
}

TEST(GfMul, Test439)
{
    ASSERT_EQ(redupe_gf_mul(4, 75), 49);
    ASSERT_EQ(redupe_gf_mul(75, 4), 49);
}

TEST(GfMul, Test440)
{
    ASSERT_EQ(redupe_gf_mul(4, 33), 132);
    ASSERT_EQ(redupe_gf_mul(33, 4), 132);
}

TEST(GfMul, Test441)
{
    ASSERT_EQ(redupe_gf_mul(4, 110), 165);
    ASSERT_EQ(redupe_gf_mul(110, 4), 165);
}

TEST(GfMul, Test442)
{
    ASSERT_EQ(redupe_gf_mul(4, 89), 121);
    ASSERT_EQ(redupe_gf_mul(89, 4), 121);
}

TEST(GfMul, Test443)
{
    ASSERT_EQ(redupe_gf_mul(4, 192), 39);
    ASSERT_EQ(redupe_gf_mul(192, 4), 39);
}

TEST(GfMul, Test444)
{
    ASSERT_EQ(redupe_gf_mul(4, 230), 191);
    ASSERT_EQ(redupe_gf_mul(230, 4), 191);
}

TEST(GfMul, Test445)
{
    ASSERT_EQ(redupe_gf_mul(4, 241), 227);
    ASSERT_EQ(redupe_gf_mul(241, 4), 227);
}

TEST(GfMul, Test446)
{
    ASSERT_EQ(redupe_gf_mul(4, 24), 96);
    ASSERT_EQ(redupe_gf_mul(24, 4), 96);
}

TEST(GfMul, Test447)
{
    ASSERT_EQ(redupe_gf_mul(4, 203), 11);
    ASSERT_EQ(redupe_gf_mul(203, 4), 11);
}

TEST(GfMul, Test448)
{
    ASSERT_EQ(redupe_gf_mul(4, 223), 91);
    ASSERT_EQ(redupe_gf_mul(223, 4), 91);
}

TEST(GfMul, Test449)
{
    ASSERT_EQ(redupe_gf_mul(4, 136), 26);
    ASSERT_EQ(redupe_gf_mul(136, 4), 26);
}

TEST(GfMul, Test450)
{
    ASSERT_EQ(redupe_gf_mul(4, 191), 198);
    ASSERT_EQ(redupe_gf_mul(191, 4), 198);
}

TEST(GfMul, Test451)
{
    ASSERT_EQ(redupe_gf_mul(4, 83), 81);
    ASSERT_EQ(redupe_gf_mul(83, 4), 81);
}

TEST(GfMul, Test452)
{
    ASSERT_EQ(redupe_gf_mul(4, 18), 72);
    ASSERT_EQ(redupe_gf_mul(18, 4), 72);
}

TEST(GfMul, Test453)
{
    ASSERT_EQ(redupe_gf_mul(4, 162), 178);
    ASSERT_EQ(redupe_gf_mul(162, 4), 178);
}

TEST(GfMul, Test454)
{
    ASSERT_EQ(redupe_gf_mul(4, 209), 99);
    ASSERT_EQ(redupe_gf_mul(209, 4), 99);
}

TEST(GfMul, Test455)
{
    ASSERT_EQ(redupe_gf_mul(4, 212), 119);
    ASSERT_EQ(redupe_gf_mul(212, 4), 119);
}

TEST(GfMul, Test456)
{
    ASSERT_EQ(redupe_gf_mul(4, 173), 142);
    ASSERT_EQ(redupe_gf_mul(173, 4), 142);
}

TEST(GfMul, Test457)
{
    ASSERT_EQ(redupe_gf_mul(4, 123), 241);
    ASSERT_EQ(redupe_gf_mul(123, 4), 241);
}

TEST(GfMul, Test458)
{
    ASSERT_EQ(redupe_gf_mul(4, 238), 159);
    ASSERT_EQ(redupe_gf_mul(238, 4), 159);
}

TEST(GfMul, Test459)
{
    ASSERT_EQ(redupe_gf_mul(4, 138), 18);
    ASSERT_EQ(redupe_gf_mul(138, 4), 18);
}

TEST(GfMul, Test460)
{
    ASSERT_EQ(redupe_gf_mul(4, 65), 25);
    ASSERT_EQ(redupe_gf_mul(65, 4), 25);
}

TEST(GfMul, Test461)
{
    ASSERT_EQ(redupe_gf_mul(4, 190), 194);
    ASSERT_EQ(redupe_gf_mul(190, 4), 194);
}

TEST(GfMul, Test462)
{
    ASSERT_EQ(redupe_gf_mul(4, 250), 207);
    ASSERT_EQ(redupe_gf_mul(250, 4), 207);
}

TEST(GfMul, Test463)
{
    ASSERT_EQ(redupe_gf_mul(4, 68), 13);
    ASSERT_EQ(redupe_gf_mul(68, 4), 13);
}

TEST(GfMul, Test464)
{
    ASSERT_EQ(redupe_gf_mul(4, 239), 155);
    ASSERT_EQ(redupe_gf_mul(239, 4), 155);
}

TEST(GfMul, Test465)
{
    ASSERT_EQ(redupe_gf_mul(4, 226), 175);
    ASSERT_EQ(redupe_gf_mul(226, 4), 175);
}

TEST(GfMul, Test466)
{
    ASSERT_EQ(redupe_gf_mul(4, 219), 75);
    ASSERT_EQ(redupe_gf_mul(219, 4), 75);
}

TEST(GfMul, Test467)
{
    ASSERT_EQ(redupe_gf_mul(4, 43), 172);
    ASSERT_EQ(redupe_gf_mul(43, 4), 172);
}

TEST(GfMul, Test468)
{
    ASSERT_EQ(redupe_gf_mul(4, 14), 56);
    ASSERT_EQ(redupe_gf_mul(14, 4), 56);
}

TEST(GfMul, Test469)
{
    ASSERT_EQ(redupe_gf_mul(4, 254), 223);
    ASSERT_EQ(redupe_gf_mul(254, 4), 223);
}

TEST(GfMul, Test470)
{
    ASSERT_EQ(redupe_gf_mul(4, 228), 183);
    ASSERT_EQ(redupe_gf_mul(228, 4), 183);
}

TEST(GfMul, Test471)
{
    ASSERT_EQ(redupe_gf_mul(4, 236), 151);
    ASSERT_EQ(redupe_gf_mul(236, 4), 151);
}

TEST(GfMul, Test472)
{
    ASSERT_EQ(redupe_gf_mul(4, 72), 61);
    ASSERT_EQ(redupe_gf_mul(72, 4), 61);
}

TEST(GfMul, Test473)
{
    ASSERT_EQ(redupe_gf_mul(4, 98), 149);
    ASSERT_EQ(redupe_gf_mul(98, 4), 149);
}

TEST(GfMul, Test474)
{
    ASSERT_EQ(redupe_gf_mul(4, 240), 231);
    ASSERT_EQ(redupe_gf_mul(240, 4), 231);
}

TEST(GfMul, Test475)
{
    ASSERT_EQ(redupe_gf_mul(4, 49), 196);
    ASSERT_EQ(redupe_gf_mul(49, 4), 196);
}

TEST(GfMul, Test476)
{
    ASSERT_EQ(redupe_gf_mul(4, 218), 79);
    ASSERT_EQ(redupe_gf_mul(218, 4), 79);
}

TEST(GfMul, Test477)
{
    ASSERT_EQ(redupe_gf_mul(4, 216), 71);
    ASSERT_EQ(redupe_gf_mul(216, 4), 71);
}

TEST(GfMul, Test478)
{
    ASSERT_EQ(redupe_gf_mul(4, 46), 184);
    ASSERT_EQ(redupe_gf_mul(46, 4), 184);
}

TEST(GfMul, Test479)
{
    ASSERT_EQ(redupe_gf_mul(4, 42), 168);
    ASSERT_EQ(redupe_gf_mul(42, 4), 168);
}

TEST(GfMul, Test480)
{
    ASSERT_EQ(redupe_gf_mul(4, 13), 52);
    ASSERT_EQ(redupe_gf_mul(13, 4), 52);
}

TEST(GfMul, Test481)
{
    ASSERT_EQ(redupe_gf_mul(4, 172), 138);
    ASSERT_EQ(redupe_gf_mul(172, 4), 138);
}

TEST(GfMul, Test482)
{
    ASSERT_EQ(redupe_gf_mul(4, 81), 89);
    ASSERT_EQ(redupe_gf_mul(81, 4), 89);
}

TEST(GfMul, Test483)
{
    ASSERT_EQ(redupe_gf_mul(4, 66), 21);
    ASSERT_EQ(redupe_gf_mul(66, 4), 21);
}

TEST(GfMul, Test484)
{
    ASSERT_EQ(redupe_gf_mul(4, 109), 169);
    ASSERT_EQ(redupe_gf_mul(109, 4), 169);
}

TEST(GfMul, Test485)
{
    ASSERT_EQ(redupe_gf_mul(4, 121), 249);
    ASSERT_EQ(redupe_gf_mul(121, 4), 249);
}

TEST(GfMul, Test486)
{
    ASSERT_EQ(redupe_gf_mul(4, 193), 35);
    ASSERT_EQ(redupe_gf_mul(193, 4), 35);
}

TEST(GfMul, Test487)
{
    ASSERT_EQ(redupe_gf_mul(4, 160), 186);
    ASSERT_EQ(redupe_gf_mul(160, 4), 186);
}

TEST(GfMul, Test488)
{
    ASSERT_EQ(redupe_gf_mul(4, 149), 110);
    ASSERT_EQ(redupe_gf_mul(149, 4), 110);
}

TEST(GfMul, Test489)
{
    ASSERT_EQ(redupe_gf_mul(4, 12), 48);
    ASSERT_EQ(redupe_gf_mul(12, 4), 48);
}

TEST(GfMul, Test490)
{
    ASSERT_EQ(redupe_gf_mul(4, 55), 220);
    ASSERT_EQ(redupe_gf_mul(55, 4), 220);
}

TEST(GfMul, Test491)
{
    ASSERT_EQ(redupe_gf_mul(4, 221), 83);
    ASSERT_EQ(redupe_gf_mul(221, 4), 83);
}

TEST(GfMul, Test492)
{
    ASSERT_EQ(redupe_gf_mul(4, 45), 180);
    ASSERT_EQ(redupe_gf_mul(45, 4), 180);
}

TEST(GfMul, Test493)
{
    ASSERT_EQ(redupe_gf_mul(4, 206), 31);
    ASSERT_EQ(redupe_gf_mul(206, 4), 31);
}

TEST(GfMul, Test494)
{
    ASSERT_EQ(redupe_gf_mul(4, 214), 127);
    ASSERT_EQ(redupe_gf_mul(214, 4), 127);
}

TEST(GfMul, Test495)
{
    ASSERT_EQ(redupe_gf_mul(4, 233), 131);
    ASSERT_EQ(redupe_gf_mul(233, 4), 131);
}

TEST(GfMul, Test496)
{
    ASSERT_EQ(redupe_gf_mul(4, 29), 116);
    ASSERT_EQ(redupe_gf_mul(29, 4), 116);
}

TEST(GfMul, Test497)
{
    ASSERT_EQ(redupe_gf_mul(4, 87), 65);
    ASSERT_EQ(redupe_gf_mul(87, 4), 65);
}

TEST(GfMul, Test498)
{
    ASSERT_EQ(redupe_gf_mul(4, 227), 171);
    ASSERT_EQ(redupe_gf_mul(227, 4), 171);
}

TEST(GfMul, Test499)
{
    ASSERT_EQ(redupe_gf_mul(4, 154), 82);
    ASSERT_EQ(redupe_gf_mul(154, 4), 82);
}

TEST(GfMul, Test500)
{
    ASSERT_EQ(redupe_gf_mul(4, 135), 38);
    ASSERT_EQ(redupe_gf_mul(135, 4), 38);
}

TEST(GfMul, Test501)
{
    ASSERT_EQ(redupe_gf_mul(4, 60), 240);
    ASSERT_EQ(redupe_gf_mul(60, 4), 240);
}

TEST(GfMul, Test502)
{
    ASSERT_EQ(redupe_gf_mul(4, 111), 161);
    ASSERT_EQ(redupe_gf_mul(111, 4), 161);
}

TEST(GfMul, Test503)
{
    ASSERT_EQ(redupe_gf_mul(4, 165), 174);
    ASSERT_EQ(redupe_gf_mul(165, 4), 174);
}

TEST(GfMul, Test504)
{
    ASSERT_EQ(redupe_gf_mul(4, 20), 80);
    ASSERT_EQ(redupe_gf_mul(20, 4), 80);
}

TEST(GfMul, Test505)
{
    ASSERT_EQ(redupe_gf_mul(4, 125), 233);
    ASSERT_EQ(redupe_gf_mul(125, 4), 233);
}

TEST(GfMul, Test506)
{
    ASSERT_EQ(redupe_gf_mul(8, 249), 155);
    ASSERT_EQ(redupe_gf_mul(249, 8), 155);
}

TEST(GfMul, Test507)
{
    ASSERT_EQ(redupe_gf_mul(8, 18), 144);
    ASSERT_EQ(redupe_gf_mul(18, 8), 144);
}

TEST(GfMul, Test508)
{
    ASSERT_EQ(redupe_gf_mul(8, 255), 171);
    ASSERT_EQ(redupe_gf_mul(255, 8), 171);
}

TEST(GfMul, Test509)
{
    ASSERT_EQ(redupe_gf_mul(8, 64), 58);
    ASSERT_EQ(redupe_gf_mul(64, 8), 58);
}

TEST(GfMul, Test510)
{
    ASSERT_EQ(redupe_gf_mul(8, 241), 219);
    ASSERT_EQ(redupe_gf_mul(241, 8), 219);
}

TEST(GfMul, Test511)
{
    ASSERT_EQ(redupe_gf_mul(8, 178), 249);
    ASSERT_EQ(redupe_gf_mul(178, 8), 249);
}

TEST(GfMul, Test512)
{
    ASSERT_EQ(redupe_gf_mul(8, 235), 11);
    ASSERT_EQ(redupe_gf_mul(235, 8), 11);
}

TEST(GfMul, Test513)
{
    ASSERT_EQ(redupe_gf_mul(8, 186), 185);
    ASSERT_EQ(redupe_gf_mul(186, 8), 185);
}

TEST(GfMul, Test514)
{
    ASSERT_EQ(redupe_gf_mul(8, 73), 114);
    ASSERT_EQ(redupe_gf_mul(73, 8), 114);
}

TEST(GfMul, Test515)
{
    ASSERT_EQ(redupe_gf_mul(8, 189), 129);
    ASSERT_EQ(redupe_gf_mul(189, 8), 129);
}

TEST(GfMul, Test516)
{
    ASSERT_EQ(redupe_gf_mul(8, 71), 2);
    ASSERT_EQ(redupe_gf_mul(71, 8), 2);
}

TEST(GfMul, Test517)
{
    ASSERT_EQ(redupe_gf_mul(8, 225), 91);
    ASSERT_EQ(redupe_gf_mul(225, 8), 91);
}

TEST(GfMul, Test518)
{
    ASSERT_EQ(redupe_gf_mul(8, 70), 10);
    ASSERT_EQ(redupe_gf_mul(70, 8), 10);
}

TEST(GfMul, Test519)
{
    ASSERT_EQ(redupe_gf_mul(8, 101), 15);
    ASSERT_EQ(redupe_gf_mul(101, 8), 15);
}

TEST(GfMul, Test520)
{
    ASSERT_EQ(redupe_gf_mul(8, 177), 225);
    ASSERT_EQ(redupe_gf_mul(177, 8), 225);
}

TEST(GfMul, Test521)
{
    ASSERT_EQ(redupe_gf_mul(8, 224), 83);
    ASSERT_EQ(redupe_gf_mul(224, 8), 83);
}

TEST(GfMul, Test522)
{
    ASSERT_EQ(redupe_gf_mul(8, 184), 169);
    ASSERT_EQ(redupe_gf_mul(184, 8), 169);
}

TEST(GfMul, Test523)
{
    ASSERT_EQ(redupe_gf_mul(3, 8), 24);
    ASSERT_EQ(redupe_gf_mul(8, 3), 24);
}

TEST(GfMul, Test524)
{
    ASSERT_EQ(redupe_gf_mul(8, 197), 102);
    ASSERT_EQ(redupe_gf_mul(197, 8), 102);
}

TEST(GfMul, Test525)
{
    ASSERT_EQ(redupe_gf_mul(8, 195), 86);
    ASSERT_EQ(redupe_gf_mul(195, 8), 86);
}

TEST(GfMul, Test526)
{
    ASSERT_EQ(redupe_gf_mul(8, 23), 184);
    ASSERT_EQ(redupe_gf_mul(23, 8), 184);
}

TEST(GfMul, Test527)
{
    ASSERT_EQ(redupe_gf_mul(8, 149), 220);
    ASSERT_EQ(redupe_gf_mul(149, 8), 220);
}

TEST(GfMul, Test528)
{
    ASSERT_EQ(redupe_gf_mul(8, 171), 49);
    ASSERT_EQ(redupe_gf_mul(171, 8), 49);
}

TEST(GfMul, Test529)
{
    ASSERT_EQ(redupe_gf_mul(8, 30), 240);
    ASSERT_EQ(redupe_gf_mul(30, 8), 240);
}

TEST(GfMul, Test530)
{
    ASSERT_EQ(redupe_gf_mul(8, 154), 164);
    ASSERT_EQ(redupe_gf_mul(154, 8), 164);
}

TEST(GfMul, Test531)
{
    ASSERT_EQ(redupe_gf_mul(8, 39), 37);
    ASSERT_EQ(redupe_gf_mul(39, 8), 37);
}

TEST(GfMul, Test532)
{
    ASSERT_EQ(redupe_gf_mul(8, 193), 70);
    ASSERT_EQ(redupe_gf_mul(193, 8), 70);
}

TEST(GfMul, Test533)
{
    ASSERT_EQ(redupe_gf_mul(8, 42), 77);
    ASSERT_EQ(redupe_gf_mul(42, 8), 77);
}

TEST(GfMul, Test534)
{
    ASSERT_EQ(redupe_gf_mul(8, 129), 124);
    ASSERT_EQ(redupe_gf_mul(129, 8), 124);
}

TEST(GfMul, Test535)
{
    ASSERT_EQ(redupe_gf_mul(8, 74), 106);
    ASSERT_EQ(redupe_gf_mul(74, 8), 106);
}

TEST(GfMul, Test536)
{
    ASSERT_EQ(redupe_gf_mul(8, 76), 90);
    ASSERT_EQ(redupe_gf_mul(76, 8), 90);
}

TEST(GfMul, Test537)
{
    ASSERT_EQ(redupe_gf_mul(8, 90), 234);
    ASSERT_EQ(redupe_gf_mul(90, 8), 234);
}

TEST(GfMul, Test538)
{
    ASSERT_EQ(redupe_gf_mul(8, 253), 187);
    ASSERT_EQ(redupe_gf_mul(253, 8), 187);
}

TEST(GfMul, Test539)
{
    ASSERT_EQ(redupe_gf_mul(8, 67), 34);
    ASSERT_EQ(redupe_gf_mul(67, 8), 34);
}

TEST(GfMul, Test540)
{
    ASSERT_EQ(redupe_gf_mul(8, 91), 226);
    ASSERT_EQ(redupe_gf_mul(91, 8), 226);
}

TEST(GfMul, Test541)
{
    ASSERT_EQ(redupe_gf_mul(8, 160), 105);
    ASSERT_EQ(redupe_gf_mul(160, 8), 105);
}

TEST(GfMul, Test542)
{
    ASSERT_EQ(redupe_gf_mul(8, 247), 235);
    ASSERT_EQ(redupe_gf_mul(247, 8), 235);
}

TEST(GfMul, Test543)
{
    ASSERT_EQ(redupe_gf_mul(8, 75), 98);
    ASSERT_EQ(redupe_gf_mul(75, 8), 98);
}

TEST(GfMul, Test544)
{
    ASSERT_EQ(redupe_gf_mul(8, 46), 109);
    ASSERT_EQ(redupe_gf_mul(46, 8), 109);
}

TEST(GfMul, Test545)
{
    ASSERT_EQ(redupe_gf_mul(8, 81), 178);
    ASSERT_EQ(redupe_gf_mul(81, 8), 178);
}

TEST(GfMul, Test546)
{
    ASSERT_EQ(redupe_gf_mul(8, 45), 117);
    ASSERT_EQ(redupe_gf_mul(45, 8), 117);
}

TEST(GfMul, Test547)
{
    ASSERT_EQ(redupe_gf_mul(8, 116), 135);
    ASSERT_EQ(redupe_gf_mul(116, 8), 135);
}

TEST(GfMul, Test548)
{
    ASSERT_EQ(redupe_gf_mul(8, 20), 160);
    ASSERT_EQ(redupe_gf_mul(20, 8), 160);
}

TEST(GfMul, Test549)
{
    ASSERT_EQ(redupe_gf_mul(8, 159), 140);
    ASSERT_EQ(redupe_gf_mul(159, 8), 140);
}

TEST(GfMul, Test550)
{
    ASSERT_EQ(redupe_gf_mul(8, 126), 215);
    ASSERT_EQ(redupe_gf_mul(126, 8), 215);
}

TEST(GfMul, Test551)
{
    ASSERT_EQ(redupe_gf_mul(8, 230), 99);
    ASSERT_EQ(redupe_gf_mul(230, 8), 99);
}

TEST(GfMul, Test552)
{
    ASSERT_EQ(redupe_gf_mul(8, 219), 150);
    ASSERT_EQ(redupe_gf_mul(219, 8), 150);
}

TEST(GfMul, Test553)
{
    ASSERT_EQ(redupe_gf_mul(8, 110), 87);
    ASSERT_EQ(redupe_gf_mul(110, 8), 87);
}

TEST(GfMul, Test554)
{
    ASSERT_EQ(redupe_gf_mul(8, 52), 189);
    ASSERT_EQ(redupe_gf_mul(52, 8), 189);
}

TEST(GfMul, Test555)
{
    ASSERT_EQ(redupe_gf_mul(8, 47), 101);
    ASSERT_EQ(redupe_gf_mul(47, 8), 101);
}

TEST(GfMul, Test556)
{
    ASSERT_EQ(redupe_gf_mul(8, 221), 166);
    ASSERT_EQ(redupe_gf_mul(221, 8), 166);
}

TEST(GfMul, Test557)
{
    ASSERT_EQ(redupe_gf_mul(8, 238), 35);
    ASSERT_EQ(redupe_gf_mul(238, 8), 35);
}

TEST(GfMul, Test558)
{
    ASSERT_EQ(redupe_gf_mul(8, 163), 113);
    ASSERT_EQ(redupe_gf_mul(163, 8), 113);
}

TEST(GfMul, Test559)
{
    ASSERT_EQ(redupe_gf_mul(8, 199), 118);
    ASSERT_EQ(redupe_gf_mul(199, 8), 118);
}

TEST(GfMul, Test560)
{
    ASSERT_EQ(redupe_gf_mul(0, 8), 0);
    ASSERT_EQ(redupe_gf_mul(8, 0), 0);
}

TEST(GfMul, Test561)
{
    ASSERT_EQ(redupe_gf_mul(8, 131), 108);
    ASSERT_EQ(redupe_gf_mul(131, 8), 108);
}

TEST(GfMul, Test562)
{
    ASSERT_EQ(redupe_gf_mul(8, 124), 199);
    ASSERT_EQ(redupe_gf_mul(124, 8), 199);
}

TEST(GfMul, Test563)
{
    ASSERT_EQ(redupe_gf_mul(8, 34), 13);
    ASSERT_EQ(redupe_gf_mul(34, 8), 13);
}

TEST(GfMul, Test564)
{
    ASSERT_EQ(redupe_gf_mul(8, 250), 131);
    ASSERT_EQ(redupe_gf_mul(250, 8), 131);
}

TEST(GfMul, Test565)
{
    ASSERT_EQ(redupe_gf_mul(8, 25), 200);
    ASSERT_EQ(redupe_gf_mul(25, 8), 200);
}

TEST(GfMul, Test566)
{
    ASSERT_EQ(redupe_gf_mul(8, 109), 79);
    ASSERT_EQ(redupe_gf_mul(109, 8), 79);
}

TEST(GfMul, Test567)
{
    ASSERT_EQ(redupe_gf_mul(8, 246), 227);
    ASSERT_EQ(redupe_gf_mul(246, 8), 227);
}

TEST(GfMul, Test568)
{
    ASSERT_EQ(redupe_gf_mul(8, 217), 134);
    ASSERT_EQ(redupe_gf_mul(217, 8), 134);
}

TEST(GfMul, Test569)
{
    ASSERT_EQ(redupe_gf_mul(8, 161), 97);
    ASSERT_EQ(redupe_gf_mul(161, 8), 97);
}

TEST(GfMul, Test570)
{
    ASSERT_EQ(redupe_gf_mul(8, 182), 217);
    ASSERT_EQ(redupe_gf_mul(182, 8), 217);
}

TEST(GfMul, Test571)
{
    ASSERT_EQ(redupe_gf_mul(8, 228), 115);
    ASSERT_EQ(redupe_gf_mul(228, 8), 115);
}

TEST(GfMul, Test572)
{
    ASSERT_EQ(redupe_gf_mul(8, 40), 93);
    ASSERT_EQ(redupe_gf_mul(40, 8), 93);
}

TEST(GfMul, Test573)
{
    ASSERT_EQ(redupe_gf_mul(8, 77), 82);
    ASSERT_EQ(redupe_gf_mul(77, 8), 82);
}

TEST(GfMul, Test574)
{
    ASSERT_EQ(redupe_gf_mul(4, 8), 32);
    ASSERT_EQ(redupe_gf_mul(8, 4), 32);
}

TEST(GfMul, Test575)
{
    ASSERT_EQ(redupe_gf_mul(8, 10), 80);
    ASSERT_EQ(redupe_gf_mul(10, 8), 80);
}

TEST(GfMul, Test576)
{
    ASSERT_EQ(redupe_gf_mul(8, 128), 116);
    ASSERT_EQ(redupe_gf_mul(128, 8), 116);
}

TEST(GfMul, Test577)
{
    ASSERT_EQ(redupe_gf_mul(8, 58), 205);
    ASSERT_EQ(redupe_gf_mul(58, 8), 205);
}

TEST(GfMul, Test578)
{
    ASSERT_EQ(redupe_gf_mul(8, 57), 213);
    ASSERT_EQ(redupe_gf_mul(57, 8), 213);
}

TEST(GfMul, Test579)
{
    ASSERT_EQ(redupe_gf_mul(8, 151), 204);
    ASSERT_EQ(redupe_gf_mul(151, 8), 204);
}

TEST(GfMul, Test580)
{
    ASSERT_EQ(redupe_gf_mul(8, 152), 180);
    ASSERT_EQ(redupe_gf_mul(152, 8), 180);
}

TEST(GfMul, Test581)
{
    ASSERT_EQ(redupe_gf_mul(8, 183), 209);
    ASSERT_EQ(redupe_gf_mul(183, 8), 209);
}

TEST(GfMul, Test582)
{
    ASSERT_EQ(redupe_gf_mul(8, 191), 145);
    ASSERT_EQ(redupe_gf_mul(191, 8), 145);
}

TEST(GfMul, Test583)
{
    ASSERT_EQ(redupe_gf_mul(8, 44), 125);
    ASSERT_EQ(redupe_gf_mul(44, 8), 125);
}

TEST(GfMul, Test584)
{
    ASSERT_EQ(redupe_gf_mul(8, 146), 228);
    ASSERT_EQ(redupe_gf_mul(146, 8), 228);
}

TEST(GfMul, Test585)
{
    ASSERT_EQ(redupe_gf_mul(8, 24), 192);
    ASSERT_EQ(redupe_gf_mul(24, 8), 192);
}

TEST(GfMul, Test586)
{
    ASSERT_EQ(redupe_gf_mul(8, 232), 19);
    ASSERT_EQ(redupe_gf_mul(232, 8), 19);
}

TEST(GfMul, Test587)
{
    ASSERT_EQ(redupe_gf_mul(8, 130), 100);
    ASSERT_EQ(redupe_gf_mul(130, 8), 100);
}

TEST(GfMul, Test588)
{
    ASSERT_EQ(redupe_gf_mul(8, 180), 201);
    ASSERT_EQ(redupe_gf_mul(180, 8), 201);
}

TEST(GfMul, Test589)
{
    ASSERT_EQ(redupe_gf_mul(8, 198), 126);
    ASSERT_EQ(redupe_gf_mul(198, 8), 126);
}

TEST(GfMul, Test590)
{
    ASSERT_EQ(redupe_gf_mul(8, 179), 241);
    ASSERT_EQ(redupe_gf_mul(179, 8), 241);
}

TEST(GfMul, Test591)
{
    ASSERT_EQ(redupe_gf_mul(8, 222), 190);
    ASSERT_EQ(redupe_gf_mul(222, 8), 190);
}

TEST(GfMul, Test592)
{
    ASSERT_EQ(redupe_gf_mul(8, 68), 26);
    ASSERT_EQ(redupe_gf_mul(68, 8), 26);
}

TEST(GfMul, Test593)
{
    ASSERT_EQ(redupe_gf_mul(8, 218), 158);
    ASSERT_EQ(redupe_gf_mul(218, 8), 158);
}

TEST(GfMul, Test594)
{
    ASSERT_EQ(redupe_gf_mul(8, 79), 66);
    ASSERT_EQ(redupe_gf_mul(79, 8), 66);
}

TEST(GfMul, Test595)
{
    ASSERT_EQ(redupe_gf_mul(8, 237), 59);
    ASSERT_EQ(redupe_gf_mul(237, 8), 59);
}

TEST(GfMul, Test596)
{
    ASSERT_EQ(redupe_gf_mul(8, 143), 12);
    ASSERT_EQ(redupe_gf_mul(143, 8), 12);
}

TEST(GfMul, Test597)
{
    ASSERT_EQ(redupe_gf_mul(8, 55), 165);
    ASSERT_EQ(redupe_gf_mul(55, 8), 165);
}

TEST(GfMul, Test598)
{
    ASSERT_EQ(redupe_gf_mul(8, 254), 163);
    ASSERT_EQ(redupe_gf_mul(254, 8), 163);
}

TEST(GfMul, Test599)
{
    ASSERT_EQ(redupe_gf_mul(8, 252), 179);
    ASSERT_EQ(redupe_gf_mul(252, 8), 179);
}

TEST(GfMul, Test600)
{
    ASSERT_EQ(redupe_gf_mul(8, 92), 218);
    ASSERT_EQ(redupe_gf_mul(92, 8), 218);
}

TEST(GfMul, Test601)
{
    ASSERT_EQ(redupe_gf_mul(8, 28), 224);
    ASSERT_EQ(redupe_gf_mul(28, 8), 224);
}

TEST(GfMul, Test602)
{
    ASSERT_EQ(redupe_gf_mul(8, 119), 159);
    ASSERT_EQ(redupe_gf_mul(119, 8), 159);
}

TEST(GfMul, Test603)
{
    ASSERT_EQ(redupe_gf_mul(8, 108), 71);
    ASSERT_EQ(redupe_gf_mul(108, 8), 71);
}

TEST(GfMul, Test604)
{
    ASSERT_EQ(redupe_gf_mul(8, 226), 67);
    ASSERT_EQ(redupe_gf_mul(226, 8), 67);
}

TEST(GfMul, Test605)
{
    ASSERT_EQ(redupe_gf_mul(8, 120), 231);
    ASSERT_EQ(redupe_gf_mul(120, 8), 231);
}

TEST(GfMul, Test606)
{
    ASSERT_EQ(redupe_gf_mul(8, 27), 216);
    ASSERT_EQ(redupe_gf_mul(27, 8), 216);
}

TEST(GfMul, Test607)
{
    ASSERT_EQ(redupe_gf_mul(8, 99), 63);
    ASSERT_EQ(redupe_gf_mul(99, 8), 63);
}

TEST(GfMul, Test608)
{
    ASSERT_EQ(redupe_gf_mul(8, 140), 20);
    ASSERT_EQ(redupe_gf_mul(140, 8), 20);
}

TEST(GfMul, Test609)
{
    ASSERT_EQ(redupe_gf_mul(8, 122), 247);
    ASSERT_EQ(redupe_gf_mul(122, 8), 247);
}

TEST(GfMul, Test610)
{
    ASSERT_EQ(redupe_gf_mul(8, 167), 81);
    ASSERT_EQ(redupe_gf_mul(167, 8), 81);
}

TEST(GfMul, Test611)
{
    ASSERT_EQ(redupe_gf_mul(8, 220), 174);
    ASSERT_EQ(redupe_gf_mul(220, 8), 174);
}

TEST(GfMul, Test612)
{
    ASSERT_EQ(redupe_gf_mul(8, 209), 198);
    ASSERT_EQ(redupe_gf_mul(209, 8), 198);
}

TEST(GfMul, Test613)
{
    ASSERT_EQ(redupe_gf_mul(8, 216), 142);
    ASSERT_EQ(redupe_gf_mul(216, 8), 142);
}

TEST(GfMul, Test614)
{
    ASSERT_EQ(redupe_gf_mul(8, 94), 202);
    ASSERT_EQ(redupe_gf_mul(94, 8), 202);
}

TEST(GfMul, Test615)
{
    ASSERT_EQ(redupe_gf_mul(8, 242), 195);
    ASSERT_EQ(redupe_gf_mul(242, 8), 195);
}

TEST(GfMul, Test616)
{
    ASSERT_EQ(redupe_gf_mul(8, 21), 168);
    ASSERT_EQ(redupe_gf_mul(21, 8), 168);
}

TEST(GfMul, Test617)
{
    ASSERT_EQ(redupe_gf_mul(8, 202), 30);
    ASSERT_EQ(redupe_gf_mul(202, 8), 30);
}

TEST(GfMul, Test618)
{
    ASSERT_EQ(redupe_gf_mul(8, 201), 6);
    ASSERT_EQ(redupe_gf_mul(201, 8), 6);
}

TEST(GfMul, Test619)
{
    ASSERT_EQ(redupe_gf_mul(8, 204), 46);
    ASSERT_EQ(redupe_gf_mul(204, 8), 46);
}

TEST(GfMul, Test620)
{
    ASSERT_EQ(redupe_gf_mul(8, 187), 177);
    ASSERT_EQ(redupe_gf_mul(187, 8), 177);
}

TEST(GfMul, Test621)
{
    ASSERT_EQ(redupe_gf_mul(8, 118), 151);
    ASSERT_EQ(redupe_gf_mul(118, 8), 151);
}

TEST(GfMul, Test622)
{
    ASSERT_EQ(redupe_gf_mul(8, 155), 172);
    ASSERT_EQ(redupe_gf_mul(155, 8), 172);
}

TEST(GfMul, Test623)
{
    ASSERT_EQ(redupe_gf_mul(8, 196), 110);
    ASSERT_EQ(redupe_gf_mul(196, 8), 110);
}

TEST(GfMul, Test624)
{
    ASSERT_EQ(redupe_gf_mul(8, 215), 246);
    ASSERT_EQ(redupe_gf_mul(215, 8), 246);
}

TEST(GfMul, Test625)
{
    ASSERT_EQ(redupe_gf_mul(8, 104), 103);
    ASSERT_EQ(redupe_gf_mul(104, 8), 103);
}

TEST(GfMul, Test626)
{
    ASSERT_EQ(redupe_gf_mul(8, 162), 121);
    ASSERT_EQ(redupe_gf_mul(162, 8), 121);
}

TEST(GfMul, Test627)
{
    ASSERT_EQ(redupe_gf_mul(8, 80), 186);
    ASSERT_EQ(redupe_gf_mul(80, 8), 186);
}

TEST(GfMul, Test628)
{
    ASSERT_EQ(redupe_gf_mul(8, 240), 211);
    ASSERT_EQ(redupe_gf_mul(240, 8), 211);
}

TEST(GfMul, Test629)
{
    ASSERT_EQ(redupe_gf_mul(8, 170), 57);
    ASSERT_EQ(redupe_gf_mul(170, 8), 57);
}

TEST(GfMul, Test630)
{
    ASSERT_EQ(redupe_gf_mul(8, 62), 237);
    ASSERT_EQ(redupe_gf_mul(62, 8), 237);
}

TEST(GfMul, Test631)
{
    ASSERT_EQ(redupe_gf_mul(8, 43), 69);
    ASSERT_EQ(redupe_gf_mul(43, 8), 69);
}

TEST(GfMul, Test632)
{
    ASSERT_EQ(redupe_gf_mul(8, 49), 149);
    ASSERT_EQ(redupe_gf_mul(49, 8), 149);
}

TEST(GfMul, Test633)
{
    ASSERT_EQ(redupe_gf_mul(8, 185), 161);
    ASSERT_EQ(redupe_gf_mul(185, 8), 161);
}

TEST(GfMul, Test634)
{
    ASSERT_EQ(redupe_gf_mul(1, 183), 183);
    ASSERT_EQ(redupe_gf_mul(183, 1), 183);
}

TEST(GfMul, Test635)
{
    ASSERT_EQ(redupe_gf_mul(1, 253), 253);
    ASSERT_EQ(redupe_gf_mul(253, 1), 253);
}

TEST(GfMul, Test636)
{
    ASSERT_EQ(redupe_gf_mul(1, 56), 56);
    ASSERT_EQ(redupe_gf_mul(56, 1), 56);
}

TEST(GfMul, Test637)
{
    ASSERT_EQ(redupe_gf_mul(1, 220), 220);
    ASSERT_EQ(redupe_gf_mul(220, 1), 220);
}

TEST(GfMul, Test638)
{
    ASSERT_EQ(redupe_gf_mul(1, 229), 229);
    ASSERT_EQ(redupe_gf_mul(229, 1), 229);
}

TEST(GfMul, Test639)
{
    ASSERT_EQ(redupe_gf_mul(1, 85), 85);
    ASSERT_EQ(redupe_gf_mul(85, 1), 85);
}

TEST(GfMul, Test640)
{
    ASSERT_EQ(redupe_gf_mul(1, 82), 82);
    ASSERT_EQ(redupe_gf_mul(82, 1), 82);
}

TEST(GfMul, Test641)
{
    ASSERT_EQ(redupe_gf_mul(1, 88), 88);
    ASSERT_EQ(redupe_gf_mul(88, 1), 88);
}

TEST(GfMul, Test642)
{
    ASSERT_EQ(redupe_gf_mul(1, 9), 9);
    ASSERT_EQ(redupe_gf_mul(9, 1), 9);
}

TEST(GfMul, Test643)
{
    ASSERT_EQ(redupe_gf_mul(1, 155), 155);
    ASSERT_EQ(redupe_gf_mul(155, 1), 155);
}

TEST(GfMul, Test644)
{
    ASSERT_EQ(redupe_gf_mul(1, 86), 86);
    ASSERT_EQ(redupe_gf_mul(86, 1), 86);
}

TEST(GfMul, Test645)
{
    ASSERT_EQ(redupe_gf_mul(1, 103), 103);
    ASSERT_EQ(redupe_gf_mul(103, 1), 103);
}

TEST(GfMul, Test646)
{
    ASSERT_EQ(redupe_gf_mul(1, 39), 39);
    ASSERT_EQ(redupe_gf_mul(39, 1), 39);
}

TEST(GfMul, Test647)
{
    ASSERT_EQ(redupe_gf_mul(1, 68), 68);
    ASSERT_EQ(redupe_gf_mul(68, 1), 68);
}

TEST(GfMul, Test648)
{
    ASSERT_EQ(redupe_gf_mul(1, 174), 174);
    ASSERT_EQ(redupe_gf_mul(174, 1), 174);
}

TEST(GfMul, Test649)
{
    ASSERT_EQ(redupe_gf_mul(1, 167), 167);
    ASSERT_EQ(redupe_gf_mul(167, 1), 167);
}

TEST(GfMul, Test650)
{
    ASSERT_EQ(redupe_gf_mul(1, 185), 185);
    ASSERT_EQ(redupe_gf_mul(185, 1), 185);
}

TEST(GfMul, Test651)
{
    ASSERT_EQ(redupe_gf_mul(1, 160), 160);
    ASSERT_EQ(redupe_gf_mul(160, 1), 160);
}

TEST(GfMul, Test652)
{
    ASSERT_EQ(redupe_gf_mul(1, 178), 178);
    ASSERT_EQ(redupe_gf_mul(178, 1), 178);
}

TEST(GfMul, Test653)
{
    ASSERT_EQ(redupe_gf_mul(1, 52), 52);
    ASSERT_EQ(redupe_gf_mul(52, 1), 52);
}

TEST(GfMul, Test654)
{
    ASSERT_EQ(redupe_gf_mul(1, 240), 240);
    ASSERT_EQ(redupe_gf_mul(240, 1), 240);
}

TEST(GfMul, Test655)
{
    ASSERT_EQ(redupe_gf_mul(1, 84), 84);
    ASSERT_EQ(redupe_gf_mul(84, 1), 84);
}

TEST(GfMul, Test656)
{
    ASSERT_EQ(redupe_gf_mul(1, 248), 248);
    ASSERT_EQ(redupe_gf_mul(248, 1), 248);
}

TEST(GfMul, Test657)
{
    ASSERT_EQ(redupe_gf_mul(1, 191), 191);
    ASSERT_EQ(redupe_gf_mul(191, 1), 191);
}

TEST(GfMul, Test658)
{
    ASSERT_EQ(redupe_gf_mul(1, 158), 158);
    ASSERT_EQ(redupe_gf_mul(158, 1), 158);
}

TEST(GfMul, Test659)
{
    ASSERT_EQ(redupe_gf_mul(1, 111), 111);
    ASSERT_EQ(redupe_gf_mul(111, 1), 111);
}

TEST(GfMul, Test660)
{
    ASSERT_EQ(redupe_gf_mul(1, 10), 10);
    ASSERT_EQ(redupe_gf_mul(10, 1), 10);
}

TEST(GfMul, Test661)
{
    ASSERT_EQ(redupe_gf_mul(1, 75), 75);
    ASSERT_EQ(redupe_gf_mul(75, 1), 75);
}

TEST(GfMul, Test662)
{
    ASSERT_EQ(redupe_gf_mul(1, 124), 124);
    ASSERT_EQ(redupe_gf_mul(124, 1), 124);
}

TEST(GfMul, Test663)
{
    ASSERT_EQ(redupe_gf_mul(1, 131), 131);
    ASSERT_EQ(redupe_gf_mul(131, 1), 131);
}

TEST(GfMul, Test664)
{
    ASSERT_EQ(redupe_gf_mul(1, 109), 109);
    ASSERT_EQ(redupe_gf_mul(109, 1), 109);
}

TEST(GfMul, Test665)
{
    ASSERT_EQ(redupe_gf_mul(1, 207), 207);
    ASSERT_EQ(redupe_gf_mul(207, 1), 207);
}

TEST(GfMul, Test666)
{
    ASSERT_EQ(redupe_gf_mul(1, 106), 106);
    ASSERT_EQ(redupe_gf_mul(106, 1), 106);
}

TEST(GfMul, Test667)
{
    ASSERT_EQ(redupe_gf_mul(1, 54), 54);
    ASSERT_EQ(redupe_gf_mul(54, 1), 54);
}

TEST(GfMul, Test668)
{
    ASSERT_EQ(redupe_gf_mul(1, 224), 224);
    ASSERT_EQ(redupe_gf_mul(224, 1), 224);
}

TEST(GfMul, Test669)
{
    ASSERT_EQ(redupe_gf_mul(1, 105), 105);
    ASSERT_EQ(redupe_gf_mul(105, 1), 105);
}

TEST(GfMul, Test670)
{
    ASSERT_EQ(redupe_gf_mul(1, 233), 233);
    ASSERT_EQ(redupe_gf_mul(233, 1), 233);
}

TEST(GfMul, Test671)
{
    ASSERT_EQ(redupe_gf_mul(1, 76), 76);
    ASSERT_EQ(redupe_gf_mul(76, 1), 76);
}

TEST(GfMul, Test672)
{
    ASSERT_EQ(redupe_gf_mul(1, 134), 134);
    ASSERT_EQ(redupe_gf_mul(134, 1), 134);
}

TEST(GfMul, Test673)
{
    ASSERT_EQ(redupe_gf_mul(1, 98), 98);
    ASSERT_EQ(redupe_gf_mul(98, 1), 98);
}

TEST(GfMul, Test674)
{
    ASSERT_EQ(redupe_gf_mul(1, 90), 90);
    ASSERT_EQ(redupe_gf_mul(90, 1), 90);
}

TEST(GfMul, Test675)
{
    ASSERT_EQ(redupe_gf_mul(1, 92), 92);
    ASSERT_EQ(redupe_gf_mul(92, 1), 92);
}

TEST(GfMul, Test676)
{
    ASSERT_EQ(redupe_gf_mul(1, 34), 34);
    ASSERT_EQ(redupe_gf_mul(34, 1), 34);
}

TEST(GfMul, Test677)
{
    ASSERT_EQ(redupe_gf_mul(1, 243), 243);
    ASSERT_EQ(redupe_gf_mul(243, 1), 243);
}

TEST(GfMul, Test678)
{
    ASSERT_EQ(redupe_gf_mul(1, 74), 74);
    ASSERT_EQ(redupe_gf_mul(74, 1), 74);
}

TEST(GfMul, Test679)
{
    ASSERT_EQ(redupe_gf_mul(1, 80), 80);
    ASSERT_EQ(redupe_gf_mul(80, 1), 80);
}

TEST(GfMul, Test680)
{
    ASSERT_EQ(redupe_gf_mul(1, 200), 200);
    ASSERT_EQ(redupe_gf_mul(200, 1), 200);
}

TEST(GfMul, Test681)
{
    ASSERT_EQ(redupe_gf_mul(2, 6), 12);
    ASSERT_EQ(redupe_gf_mul(6, 2), 12);
}

TEST(GfMul, Test682)
{
    ASSERT_EQ(redupe_gf_mul(2, 209), 191);
    ASSERT_EQ(redupe_gf_mul(209, 2), 191);
}

TEST(GfMul, Test683)
{
    ASSERT_EQ(redupe_gf_mul(2, 70), 140);
    ASSERT_EQ(redupe_gf_mul(70, 2), 140);
}

TEST(GfMul, Test684)
{
    ASSERT_EQ(redupe_gf_mul(2, 7), 14);
    ASSERT_EQ(redupe_gf_mul(7, 2), 14);
}

TEST(GfMul, Test685)
{
    ASSERT_EQ(redupe_gf_mul(2, 201), 143);
    ASSERT_EQ(redupe_gf_mul(201, 2), 143);
}

TEST(GfMul, Test686)
{
    ASSERT_EQ(redupe_gf_mul(2, 72), 144);
    ASSERT_EQ(redupe_gf_mul(72, 2), 144);
}

TEST(GfMul, Test687)
{
    ASSERT_EQ(redupe_gf_mul(2, 182), 113);
    ASSERT_EQ(redupe_gf_mul(182, 2), 113);
}

TEST(GfMul, Test688)
{
    ASSERT_EQ(redupe_gf_mul(2, 245), 247);
    ASSERT_EQ(redupe_gf_mul(245, 2), 247);
}

TEST(GfMul, Test689)
{
    ASSERT_EQ(redupe_gf_mul(2, 15), 30);
    ASSERT_EQ(redupe_gf_mul(15, 2), 30);
}

TEST(GfMul, Test690)
{
    ASSERT_EQ(redupe_gf_mul(2, 140), 5);
    ASSERT_EQ(redupe_gf_mul(140, 2), 5);
}

TEST(GfMul, Test691)
{
    ASSERT_EQ(redupe_gf_mul(2, 252), 229);
    ASSERT_EQ(redupe_gf_mul(252, 2), 229);
}

TEST(GfMul, Test692)
{
    ASSERT_EQ(redupe_gf_mul(2, 71), 142);
    ASSERT_EQ(redupe_gf_mul(71, 2), 142);
}

TEST(GfMul, Test693)
{
    ASSERT_EQ(redupe_gf_mul(2, 141), 7);
    ASSERT_EQ(redupe_gf_mul(141, 2), 7);
}

TEST(GfMul, Test694)
{
    ASSERT_EQ(redupe_gf_mul(2, 66), 132);
    ASSERT_EQ(redupe_gf_mul(66, 2), 132);
}

TEST(GfMul, Test695)
{
    ASSERT_EQ(redupe_gf_mul(2, 53), 106);
    ASSERT_EQ(redupe_gf_mul(53, 2), 106);
}

TEST(GfMul, Test696)
{
    ASSERT_EQ(redupe_gf_mul(2, 179), 123);
    ASSERT_EQ(redupe_gf_mul(179, 2), 123);
}

TEST(GfMul, Test697)
{
    ASSERT_EQ(redupe_gf_mul(2, 165), 87);
    ASSERT_EQ(redupe_gf_mul(165, 2), 87);
}

TEST(GfMul, Test698)
{
    ASSERT_EQ(redupe_gf_mul(2, 242), 249);
    ASSERT_EQ(redupe_gf_mul(242, 2), 249);
}

TEST(GfMul, Test699)
{
    ASSERT_EQ(redupe_gf_mul(2, 64), 128);
    ASSERT_EQ(redupe_gf_mul(64, 2), 128);
}

TEST(GfMul, Test700)
{
    ASSERT_EQ(redupe_gf_mul(2, 126), 252);
    ASSERT_EQ(redupe_gf_mul(126, 2), 252);
}

TEST(GfMul, Test701)
{
    ASSERT_EQ(redupe_gf_mul(2, 84), 168);
    ASSERT_EQ(redupe_gf_mul(84, 2), 168);
}

TEST(GfMul, Test702)
{
    ASSERT_EQ(redupe_gf_mul(2, 100), 200);
    ASSERT_EQ(redupe_gf_mul(100, 2), 200);
}

TEST(GfMul, Test703)
{
    ASSERT_EQ(redupe_gf_mul(2, 28), 56);
    ASSERT_EQ(redupe_gf_mul(28, 2), 56);
}

TEST(GfMul, Test704)
{
    ASSERT_EQ(redupe_gf_mul(2, 118), 236);
    ASSERT_EQ(redupe_gf_mul(118, 2), 236);
}

TEST(GfMul, Test705)
{
    ASSERT_EQ(redupe_gf_mul(2, 41), 82);
    ASSERT_EQ(redupe_gf_mul(41, 2), 82);
}

TEST(GfMul, Test706)
{
    ASSERT_EQ(redupe_gf_mul(2, 48), 96);
    ASSERT_EQ(redupe_gf_mul(48, 2), 96);
}

TEST(GfMul, Test707)
{
    ASSERT_EQ(redupe_gf_mul(2, 82), 164);
    ASSERT_EQ(redupe_gf_mul(82, 2), 164);
}

TEST(GfMul, Test708)
{
    ASSERT_EQ(redupe_gf_mul(2, 131), 27);
    ASSERT_EQ(redupe_gf_mul(131, 2), 27);
}

TEST(GfMul, Test709)
{
    ASSERT_EQ(redupe_gf_mul(2, 151), 51);
    ASSERT_EQ(redupe_gf_mul(151, 2), 51);
}

TEST(GfMul, Test710)
{
    ASSERT_EQ(redupe_gf_mul(2, 35), 70);
    ASSERT_EQ(redupe_gf_mul(35, 2), 70);
}

TEST(GfMul, Test711)
{
    ASSERT_EQ(redupe_gf_mul(2, 134), 17);
    ASSERT_EQ(redupe_gf_mul(134, 2), 17);
}

TEST(GfMul, Test712)
{
    ASSERT_EQ(redupe_gf_mul(2, 163), 91);
    ASSERT_EQ(redupe_gf_mul(163, 2), 91);
}

TEST(GfMul, Test713)
{
    ASSERT_EQ(redupe_gf_mul(2, 102), 204);
    ASSERT_EQ(redupe_gf_mul(102, 2), 204);
}

TEST(GfMul, Test714)
{
    ASSERT_EQ(redupe_gf_mul(2, 116), 232);
    ASSERT_EQ(redupe_gf_mul(116, 2), 232);
}

TEST(GfMul, Test715)
{
    ASSERT_EQ(redupe_gf_mul(2, 22), 44);
    ASSERT_EQ(redupe_gf_mul(22, 2), 44);
}

TEST(GfMul, Test716)
{
    ASSERT_EQ(redupe_gf_mul(2, 150), 49);
    ASSERT_EQ(redupe_gf_mul(150, 2), 49);
}

TEST(GfMul, Test717)
{
    ASSERT_EQ(redupe_gf_mul(2, 166), 81);
    ASSERT_EQ(redupe_gf_mul(166, 2), 81);
}

TEST(GfMul, Test718)
{
    ASSERT_EQ(redupe_gf_mul(2, 36), 72);
    ASSERT_EQ(redupe_gf_mul(36, 2), 72);
}

TEST(GfMul, Test719)
{
    ASSERT_EQ(redupe_gf_mul(2, 159), 35);
    ASSERT_EQ(redupe_gf_mul(159, 2), 35);
}

TEST(GfMul, Test720)
{
    ASSERT_EQ(redupe_gf_mul(2, 210), 185);
    ASSERT_EQ(redupe_gf_mul(210, 2), 185);
}

TEST(GfMul, Test721)
{
    ASSERT_EQ(redupe_gf_mul(2, 236), 197);
    ASSERT_EQ(redupe_gf_mul(236, 2), 197);
}

TEST(GfMul, Test722)
{
    ASSERT_EQ(redupe_gf_mul(2, 247), 243);
    ASSERT_EQ(redupe_gf_mul(247, 2), 243);
}

TEST(GfMul, Test723)
{
    ASSERT_EQ(redupe_gf_mul(2, 11), 22);
    ASSERT_EQ(redupe_gf_mul(11, 2), 22);
}

TEST(GfMul, Test724)
{
    ASSERT_EQ(redupe_gf_mul(2, 137), 15);
    ASSERT_EQ(redupe_gf_mul(137, 2), 15);
}

TEST(GfMul, Test725)
{
    ASSERT_EQ(redupe_gf_mul(2, 240), 253);
    ASSERT_EQ(redupe_gf_mul(240, 2), 253);
}

TEST(GfMul, Test726)
{
    ASSERT_EQ(redupe_gf_mul(2, 110), 220);
    ASSERT_EQ(redupe_gf_mul(110, 2), 220);
}

TEST(GfMul, Test727)
{
    ASSERT_EQ(redupe_gf_mul(2, 57), 114);
    ASSERT_EQ(redupe_gf_mul(57, 2), 114);
}

TEST(GfMul, Test728)
{
    ASSERT_EQ(redupe_gf_mul(2, 168), 77);
    ASSERT_EQ(redupe_gf_mul(168, 2), 77);
}

TEST(GfMul, Test729)
{
    ASSERT_EQ(redupe_gf_mul(2, 243), 251);
    ASSERT_EQ(redupe_gf_mul(243, 2), 251);
}

TEST(GfMul, Test730)
{
    ASSERT_EQ(redupe_gf_mul(2, 97), 194);
    ASSERT_EQ(redupe_gf_mul(97, 2), 194);
}

TEST(GfMul, Test731)
{
    ASSERT_EQ(redupe_gf_mul(2, 49), 98);
    ASSERT_EQ(redupe_gf_mul(49, 2), 98);
}

TEST(GfMul, Test732)
{
    ASSERT_EQ(redupe_gf_mul(2, 147), 59);
    ASSERT_EQ(redupe_gf_mul(147, 2), 59);
}

TEST(GfMul, Test733)
{
    ASSERT_EQ(redupe_gf_mul(4, 255), 219);
    ASSERT_EQ(redupe_gf_mul(255, 4), 219);
}

TEST(GfMul, Test734)
{
    ASSERT_EQ(redupe_gf_mul(4, 246), 255);
    ASSERT_EQ(redupe_gf_mul(246, 4), 255);
}

TEST(GfMul, Test735)
{
    ASSERT_EQ(redupe_gf_mul(4, 142), 2);
    ASSERT_EQ(redupe_gf_mul(142, 4), 2);
}

TEST(GfMul, Test736)
{
    ASSERT_EQ(redupe_gf_mul(4, 137), 30);
    ASSERT_EQ(redupe_gf_mul(137, 4), 30);
}

TEST(GfMul, Test737)
{
    ASSERT_EQ(redupe_gf_mul(4, 185), 222);
    ASSERT_EQ(redupe_gf_mul(185, 4), 222);
}

TEST(GfMul, Test738)
{
    ASSERT_EQ(redupe_gf_mul(4, 105), 185);
    ASSERT_EQ(redupe_gf_mul(105, 4), 185);
}

TEST(GfMul, Test739)
{
    ASSERT_EQ(redupe_gf_mul(4, 93), 105);
    ASSERT_EQ(redupe_gf_mul(93, 4), 105);
}

TEST(GfMul, Test740)
{
    ASSERT_EQ(redupe_gf_mul(4, 175), 134);
    ASSERT_EQ(redupe_gf_mul(175, 4), 134);
}

TEST(GfMul, Test741)
{
    ASSERT_EQ(redupe_gf_mul(4, 197), 51);
    ASSERT_EQ(redupe_gf_mul(197, 4), 51);
}

TEST(GfMul, Test742)
{
    ASSERT_EQ(redupe_gf_mul(4, 103), 129);
    ASSERT_EQ(redupe_gf_mul(103, 4), 129);
}

TEST(GfMul, Test743)
{
    ASSERT_EQ(redupe_gf_mul(4, 224), 167);
    ASSERT_EQ(redupe_gf_mul(224, 4), 167);
}

TEST(GfMul, Test744)
{
    ASSERT_EQ(redupe_gf_mul(4, 48), 192);
    ASSERT_EQ(redupe_gf_mul(48, 4), 192);
}

TEST(GfMul, Test745)
{
    ASSERT_EQ(redupe_gf_mul(4, 41), 164);
    ASSERT_EQ(redupe_gf_mul(41, 4), 164);
}

TEST(GfMul, Test746)
{
    ASSERT_EQ(redupe_gf_mul(4, 69), 9);
    ASSERT_EQ(redupe_gf_mul(69, 4), 9);
}

TEST(GfMul, Test747)
{
    ASSERT_EQ(redupe_gf_mul(4, 95), 97);
    ASSERT_EQ(redupe_gf_mul(95, 4), 97);
}

TEST(GfMul, Test748)
{
    ASSERT_EQ(redupe_gf_mul(4, 104), 189);
    ASSERT_EQ(redupe_gf_mul(104, 4), 189);
}

TEST(GfMul, Test749)
{
    ASSERT_EQ(redupe_gf_mul(4, 211), 107);
    ASSERT_EQ(redupe_gf_mul(211, 4), 107);
}

TEST(GfMul, Test750)
{
    ASSERT_EQ(redupe_gf_mul(4, 113), 217);
    ASSERT_EQ(redupe_gf_mul(113, 4), 217);
}

TEST(GfMul, Test751)
{
    ASSERT_EQ(redupe_gf_mul(4, 237), 147);
    ASSERT_EQ(redupe_gf_mul(237, 4), 147);
}

TEST(GfMul, Test752)
{
    ASSERT_EQ(redupe_gf_mul(4, 122), 245);
    ASSERT_EQ(redupe_gf_mul(122, 4), 245);
}

TEST(GfMul, Test753)
{
    ASSERT_EQ(redupe_gf_mul(4, 52), 208);
    ASSERT_EQ(redupe_gf_mul(52, 4), 208);
}

TEST(GfMul, Test754)
{
    ASSERT_EQ(redupe_gf_mul(4, 158), 66);
    ASSERT_EQ(redupe_gf_mul(158, 4), 66);
}

TEST(GfMul, Test755)
{
    ASSERT_EQ(redupe_gf_mul(4, 61), 244);
    ASSERT_EQ(redupe_gf_mul(61, 4), 244);
}

TEST(GfMul, Test756)
{
    ASSERT_EQ(redupe_gf_mul(4, 201), 3);
    ASSERT_EQ(redupe_gf_mul(201, 4), 3);
}

TEST(GfMul, Test757)
{
    ASSERT_EQ(redupe_gf_mul(4, 88), 125);
    ASSERT_EQ(redupe_gf_mul(88, 4), 125);
}

TEST(GfMul, Test758)
{
    ASSERT_EQ(redupe_gf_mul(4, 232), 135);
    ASSERT_EQ(redupe_gf_mul(232, 4), 135);
}

TEST(GfMul, Test759)
{
    ASSERT_EQ(redupe_gf_mul(4, 67), 17);
    ASSERT_EQ(redupe_gf_mul(67, 4), 17);
}

TEST(GfMul, Test760)
{
    ASSERT_EQ(redupe_gf_mul(4, 161), 190);
    ASSERT_EQ(redupe_gf_mul(161, 4), 190);
}

TEST(GfMul, Test761)
{
    ASSERT_EQ(redupe_gf_mul(4, 51), 204);
    ASSERT_EQ(redupe_gf_mul(51, 4), 204);
}

TEST(GfMul, Test762)
{
    ASSERT_EQ(redupe_gf_mul(4, 143), 6);
    ASSERT_EQ(redupe_gf_mul(143, 4), 6);
}

TEST(GfMul, Test763)
{
    ASSERT_EQ(redupe_gf_mul(4, 243), 235);
    ASSERT_EQ(redupe_gf_mul(243, 4), 235);
}

TEST(GfMul, Test764)
{
    ASSERT_EQ(redupe_gf_mul(4, 178), 242);
    ASSERT_EQ(redupe_gf_mul(178, 4), 242);
}

TEST(GfMul, Test765)
{
    ASSERT_EQ(redupe_gf_mul(4, 141), 14);
    ASSERT_EQ(redupe_gf_mul(141, 4), 14);
}

TEST(GfMul, Test766)
{
    ASSERT_EQ(redupe_gf_mul(4, 179), 246);
    ASSERT_EQ(redupe_gf_mul(179, 4), 246);
}

TEST(GfMul, Test767)
{
    ASSERT_EQ(redupe_gf_mul(4, 25), 100);
    ASSERT_EQ(redupe_gf_mul(25, 4), 100);
}

TEST(GfMul, Test768)
{
    ASSERT_EQ(redupe_gf_mul(4, 21), 84);
    ASSERT_EQ(redupe_gf_mul(21, 4), 84);
}

TEST(GfMul, Test769)
{
    ASSERT_EQ(redupe_gf_mul(4, 17), 68);
    ASSERT_EQ(redupe_gf_mul(17, 4), 68);
}

TEST(GfMul, Test770)
{
    ASSERT_EQ(redupe_gf_mul(4, 53), 212);
    ASSERT_EQ(redupe_gf_mul(53, 4), 212);
}

TEST(GfMul, Test771)
{
    ASSERT_EQ(redupe_gf_mul(4, 82), 85);
    ASSERT_EQ(redupe_gf_mul(82, 4), 85);
}

TEST(GfMul, Test772)
{
    ASSERT_EQ(redupe_gf_mul(4, 73), 57);
    ASSERT_EQ(redupe_gf_mul(73, 4), 57);
}

TEST(GfMul, Test773)
{
    ASSERT_EQ(redupe_gf_mul(4, 4), 16);
    ASSERT_EQ(redupe_gf_mul(4, 4), 16);
}

TEST(GfMul, Test774)
{
    ASSERT_EQ(redupe_gf_mul(4, 157), 78);
    ASSERT_EQ(redupe_gf_mul(157, 4), 78);
}

TEST(GfMul, Test775)
{
    ASSERT_EQ(redupe_gf_mul(4, 117), 201);
    ASSERT_EQ(redupe_gf_mul(117, 4), 201);
}

TEST(GfMul, Test776)
{
    ASSERT_EQ(redupe_gf_mul(4, 181), 238);
    ASSERT_EQ(redupe_gf_mul(181, 4), 238);
}

TEST(GfMul, Test777)
{
    ASSERT_EQ(redupe_gf_mul(4, 176), 250);
    ASSERT_EQ(redupe_gf_mul(176, 4), 250);
}

TEST(GfMul, Test778)
{
    ASSERT_EQ(redupe_gf_mul(4, 235), 139);
    ASSERT_EQ(redupe_gf_mul(235, 4), 139);
}

TEST(GfMul, Test779)
{
    ASSERT_EQ(redupe_gf_mul(4, 28), 112);
    ASSERT_EQ(redupe_gf_mul(28, 4), 112);
}

TEST(GfMul, Test780)
{
    ASSERT_EQ(redupe_gf_mul(4, 22), 88);
    ASSERT_EQ(redupe_gf_mul(22, 4), 88);
}

TEST(GfMul, Test781)
{
    ASSERT_EQ(redupe_gf_mul(4, 59), 236);
    ASSERT_EQ(redupe_gf_mul(59, 4), 236);
}

TEST(GfMul, Test782)
{
    ASSERT_EQ(redupe_gf_mul(4, 132), 42);
    ASSERT_EQ(redupe_gf_mul(132, 4), 42);
}

TEST(GfMul, Test783)
{
    ASSERT_EQ(redupe_gf_mul(4, 5), 20);
    ASSERT_EQ(redupe_gf_mul(5, 4), 20);
}

TEST(GfMul, Test784)
{
    ASSERT_EQ(redupe_gf_mul(4, 194), 47);
    ASSERT_EQ(redupe_gf_mul(194, 4), 47);
}

TEST(GfMul, Test785)
{
    ASSERT_EQ(redupe_gf_mul(4, 198), 63);
    ASSERT_EQ(redupe_gf_mul(198, 4), 63);
}

TEST(GfMul, Test786)
{
    ASSERT_EQ(redupe_gf_mul(4, 150), 98);
    ASSERT_EQ(redupe_gf_mul(150, 4), 98);
}

TEST(GfMul, Test787)
{
    ASSERT_EQ(redupe_gf_mul(4, 202), 15);
    ASSERT_EQ(redupe_gf_mul(202, 4), 15);
}

TEST(GfMul, Test788)
{
    ASSERT_EQ(redupe_gf_mul(4, 145), 126);
    ASSERT_EQ(redupe_gf_mul(145, 4), 126);
}

TEST(GfMul, Test789)
{
    ASSERT_EQ(redupe_gf_mul(4, 71), 1);
    ASSERT_EQ(redupe_gf_mul(71, 4), 1);
}

TEST(GfMul, Test790)
{
    ASSERT_EQ(redupe_gf_mul(4, 182), 226);
    ASSERT_EQ(redupe_gf_mul(182, 4), 226);
}

TEST(GfMul, Test791)
{
    ASSERT_EQ(redupe_gf_mul(4, 85), 73);
    ASSERT_EQ(redupe_gf_mul(85, 4), 73);
}

TEST(GfMul, Test792)
{
    ASSERT_EQ(redupe_gf_mul(4, 245), 243);
    ASSERT_EQ(redupe_gf_mul(245, 4), 243);
}

TEST(GfMul, Test793)
{
    ASSERT_EQ(redupe_gf_mul(8, 244), 243);
    ASSERT_EQ(redupe_gf_mul(244, 8), 243);
}

TEST(GfMul, Test794)
{
    ASSERT_EQ(redupe_gf_mul(8, 105), 111);
    ASSERT_EQ(redupe_gf_mul(105, 8), 111);
}

TEST(GfMul, Test795)
{
    ASSERT_EQ(redupe_gf_mul(8, 236), 51);
    ASSERT_EQ(redupe_gf_mul(236, 8), 51);
}

TEST(GfMul, Test796)
{
    ASSERT_EQ(redupe_gf_mul(8, 176), 233);
    ASSERT_EQ(redupe_gf_mul(176, 8), 233);
}

TEST(GfMul, Test797)
{
    ASSERT_EQ(redupe_gf_mul(8, 89), 242);
    ASSERT_EQ(redupe_gf_mul(89, 8), 242);
}

TEST(GfMul, Test798)
{
    ASSERT_EQ(redupe_gf_mul(8, 72), 122);
    ASSERT_EQ(redupe_gf_mul(72, 8), 122);
}

TEST(GfMul, Test799)
{
    ASSERT_EQ(redupe_gf_mul(8, 56), 221);
    ASSERT_EQ(redupe_gf_mul(56, 8), 221);
}

TEST(GfMul, Test800)
{
    ASSERT_EQ(redupe_gf_mul(8, 147), 236);
    ASSERT_EQ(redupe_gf_mul(147, 8), 236);
}

TEST(GfMul, Test801)
{
    ASSERT_EQ(redupe_gf_mul(8, 192), 78);
    ASSERT_EQ(redupe_gf_mul(192, 8), 78);
}

TEST(GfMul, Test802)
{
    ASSERT_EQ(redupe_gf_mul(8, 113), 175);
    ASSERT_EQ(redupe_gf_mul(113, 8), 175);
}

TEST(GfMul, Test803)
{
    ASSERT_EQ(redupe_gf_mul(8, 93), 210);
    ASSERT_EQ(redupe_gf_mul(93, 8), 210);
}

TEST(GfMul, Test804)
{
    ASSERT_EQ(redupe_gf_mul(8, 227), 75);
    ASSERT_EQ(redupe_gf_mul(227, 8), 75);
}

TEST(GfMul, Test805)
{
    ASSERT_EQ(redupe_gf_mul(8, 243), 203);
    ASSERT_EQ(redupe_gf_mul(243, 8), 203);
}

TEST(GfMul, Test806)
{
    ASSERT_EQ(redupe_gf_mul(8, 51), 133);
    ASSERT_EQ(redupe_gf_mul(51, 8), 133);
}

TEST(GfMul, Test807)
{
    ASSERT_EQ(redupe_gf_mul(8, 103), 31);
    ASSERT_EQ(redupe_gf_mul(103, 8), 31);
}

TEST(GfMul, Test808)
{
    ASSERT_EQ(redupe_gf_mul(8, 98), 55);
    ASSERT_EQ(redupe_gf_mul(98, 8), 55);
}

TEST(GfMul, Test809)
{
    ASSERT_EQ(redupe_gf_mul(8, 59), 197);
    ASSERT_EQ(redupe_gf_mul(59, 8), 197);
}

TEST(GfMul, Test810)
{
    ASSERT_EQ(redupe_gf_mul(8, 96), 39);
    ASSERT_EQ(redupe_gf_mul(96, 8), 39);
}

TEST(GfMul, Test811)
{
    ASSERT_EQ(redupe_gf_mul(8, 158), 132);
    ASSERT_EQ(redupe_gf_mul(158, 8), 132);
}

TEST(GfMul, Test812)
{
    ASSERT_EQ(redupe_gf_mul(8, 69), 18);
    ASSERT_EQ(redupe_gf_mul(69, 8), 18);
}

TEST(GfMul, Test813)
{
    ASSERT_EQ(redupe_gf_mul(8, 33), 21);
    ASSERT_EQ(redupe_gf_mul(33, 8), 21);
}

TEST(GfMul, Test814)
{
    ASSERT_EQ(redupe_gf_mul(8, 134), 68);
    ASSERT_EQ(redupe_gf_mul(134, 8), 68);
}

TEST(GfMul, Test815)
{
    ASSERT_EQ(redupe_gf_mul(8, 82), 170);
    ASSERT_EQ(redupe_gf_mul(82, 8), 170);
}

TEST(GfMul, Test816)
{
    ASSERT_EQ(redupe_gf_mul(8, 233), 27);
    ASSERT_EQ(redupe_gf_mul(233, 8), 27);
}

TEST(GfMul, Test817)
{
    ASSERT_EQ(redupe_gf_mul(8, 136), 52);
    ASSERT_EQ(redupe_gf_mul(136, 8), 52);
}

TEST(GfMul, Test818)
{
    ASSERT_EQ(redupe_gf_mul(8, 111), 95);
    ASSERT_EQ(redupe_gf_mul(111, 8), 95);
}

TEST(GfMul, Test819)
{
    ASSERT_EQ(redupe_gf_mul(8, 61), 245);
    ASSERT_EQ(redupe_gf_mul(61, 8), 245);
}

TEST(GfMul, Test820)
{
    ASSERT_EQ(redupe_gf_mul(8, 141), 28);
    ASSERT_EQ(redupe_gf_mul(141, 8), 28);
}

TEST(GfMul, Test821)
{
    ASSERT_EQ(redupe_gf_mul(8, 142), 4);
    ASSERT_EQ(redupe_gf_mul(142, 8), 4);
}

TEST(GfMul, Test822)
{
    ASSERT_EQ(redupe_gf_mul(8, 87), 130);
    ASSERT_EQ(redupe_gf_mul(87, 8), 130);
}

TEST(GfMul, Test823)
{
    ASSERT_EQ(redupe_gf_mul(8, 145), 252);
    ASSERT_EQ(redupe_gf_mul(145, 8), 252);
}

TEST(GfMul, Test824)
{
    ASSERT_EQ(redupe_gf_mul(8, 84), 154);
    ASSERT_EQ(redupe_gf_mul(84, 8), 154);
}

TEST(GfMul, Test825)
{
    ASSERT_EQ(redupe_gf_mul(8, 214), 254);
    ASSERT_EQ(redupe_gf_mul(214, 8), 254);
}

TEST(GfMul, Test826)
{
    ASSERT_EQ(redupe_gf_mul(8, 205), 38);
    ASSERT_EQ(redupe_gf_mul(205, 8), 38);
}

TEST(GfMul, Test827)
{
    ASSERT_EQ(redupe_gf_mul(8, 36), 61);
    ASSERT_EQ(redupe_gf_mul(36, 8), 61);
}

TEST(GfMul, Test828)
{
    ASSERT_EQ(redupe_gf_mul(8, 53), 181);
    ASSERT_EQ(redupe_gf_mul(53, 8), 181);
}

TEST(GfMul, Test829)
{
    ASSERT_EQ(redupe_gf_mul(8, 148), 212);
    ASSERT_EQ(redupe_gf_mul(148, 8), 212);
}

TEST(GfMul, Test830)
{
    ASSERT_EQ(redupe_gf_mul(8, 37), 53);
    ASSERT_EQ(redupe_gf_mul(37, 8), 53);
}

TEST(GfMul, Test831)
{
    ASSERT_EQ(redupe_gf_mul(5, 8), 40);
    ASSERT_EQ(redupe_gf_mul(8, 5), 40);
}

TEST(GfMul, Test832)
{
    ASSERT_EQ(redupe_gf_mul(8, 135), 76);
    ASSERT_EQ(redupe_gf_mul(135, 8), 76);
}

TEST(GfMul, Test833)
{
    ASSERT_EQ(redupe_gf_mul(8, 138), 36);
    ASSERT_EQ(redupe_gf_mul(138, 8), 36);
}

TEST(GfMul, Test834)
{
    ASSERT_EQ(redupe_gf_mul(8, 29), 232);
    ASSERT_EQ(redupe_gf_mul(29, 8), 232);
}

TEST(GfMul, Test835)
{
    ASSERT_EQ(redupe_gf_mul(8, 208), 206);
    ASSERT_EQ(redupe_gf_mul(208, 8), 206);
}

TEST(GfMul, Test836)
{
    ASSERT_EQ(redupe_gf_mul(8, 125), 207);
    ASSERT_EQ(redupe_gf_mul(125, 8), 207);
}

TEST(GfMul, Test837)
{
    ASSERT_EQ(redupe_gf_mul(8, 173), 1);
    ASSERT_EQ(redupe_gf_mul(173, 8), 1);
}

TEST(GfMul, Test838)
{
    ASSERT_EQ(redupe_gf_mul(6, 8), 48);
    ASSERT_EQ(redupe_gf_mul(8, 6), 48);
}

TEST(GfMul, Test839)
{
    ASSERT_EQ(redupe_gf_mul(8, 115), 191);
    ASSERT_EQ(redupe_gf_mul(115, 8), 191);
}

TEST(GfMul, Test840)
{
    ASSERT_EQ(redupe_gf_mul(8, 54), 173);
    ASSERT_EQ(redupe_gf_mul(54, 8), 173);
}

TEST(GfMul, Test841)
{
    ASSERT_EQ(redupe_gf_mul(8, 207), 54);
    ASSERT_EQ(redupe_gf_mul(207, 8), 54);
}

TEST(GfMul, Test842)
{
    ASSERT_EQ(redupe_gf_mul(8, 114), 183);
    ASSERT_EQ(redupe_gf_mul(114, 8), 183);
}

TEST(GfMul, Test843)
{
    ASSERT_EQ(redupe_gf_mul(8, 32), 29);
    ASSERT_EQ(redupe_gf_mul(32, 8), 29);
}

TEST(GfMul, Test844)
{
    ASSERT_EQ(redupe_gf_mul(8, 156), 148);
    ASSERT_EQ(redupe_gf_mul(156, 8), 148);
}

TEST(GfMul, Test845)
{
    ASSERT_EQ(redupe_gf_mul(0, 121), 0);
    ASSERT_EQ(redupe_gf_mul(121, 0), 0);
}

TEST(GfMul, Test846)
{
    ASSERT_EQ(redupe_gf_mul(119, 121), 1);
    ASSERT_EQ(redupe_gf_mul(121, 119), 1);
}

TEST(GfMul, Test847)
{
    ASSERT_EQ(redupe_gf_mul(121, 121), 229);
    ASSERT_EQ(redupe_gf_mul(121, 121), 229);
}

TEST(GfMul, Test848)
{
    ASSERT_EQ(redupe_gf_mul(93, 119), 134);
    ASSERT_EQ(redupe_gf_mul(119, 93), 134);
}

TEST(GfMul, Test849)
{
    ASSERT_EQ(redupe_gf_mul(0, 93), 0);
    ASSERT_EQ(redupe_gf_mul(93, 0), 0);
}

TEST(GfMul, Test850)
{
    ASSERT_EQ(redupe_gf_mul(184, 255), 20);
    ASSERT_EQ(redupe_gf_mul(255, 184), 20);
}

TEST(GfMul, Test851)
{
    ASSERT_EQ(redupe_gf_mul(20, 255), 144);
    ASSERT_EQ(redupe_gf_mul(255, 20), 144);
}

TEST(GfMul, Test852)
{
    ASSERT_EQ(redupe_gf_mul(1, 205), 205);
    ASSERT_EQ(redupe_gf_mul(205, 1), 205);
}

TEST(GfMul, Test853)
{
    ASSERT_EQ(redupe_gf_mul(1, 38), 38);
    ASSERT_EQ(redupe_gf_mul(38, 1), 38);
}

TEST(GfMul, Test854)
{
    ASSERT_EQ(redupe_gf_mul(1, 180), 180);
    ASSERT_EQ(redupe_gf_mul(180, 1), 180);
}

TEST(GfMul, Test855)
{
    ASSERT_EQ(redupe_gf_mul(1, 117), 117);
    ASSERT_EQ(redupe_gf_mul(117, 1), 117);
}

TEST(GfMul, Test856)
{
    ASSERT_EQ(redupe_gf_mul(1, 234), 234);
    ASSERT_EQ(redupe_gf_mul(234, 1), 234);
}

TEST(GfMul, Test857)
{
    ASSERT_EQ(redupe_gf_mul(1, 6), 6);
    ASSERT_EQ(redupe_gf_mul(6, 1), 6);
}

TEST(GfMul, Test858)
{
    ASSERT_EQ(redupe_gf_mul(1, 12), 12);
    ASSERT_EQ(redupe_gf_mul(12, 1), 12);
}

TEST(GfMul, Test859)
{
    ASSERT_EQ(redupe_gf_mul(1, 48), 48);
    ASSERT_EQ(redupe_gf_mul(48, 1), 48);
}

TEST(GfMul, Test860)
{
    ASSERT_EQ(redupe_gf_mul(1, 96), 96);
    ASSERT_EQ(redupe_gf_mul(96, 1), 96);
}

TEST(GfMul, Test861)
{
    ASSERT_EQ(redupe_gf_mul(1, 157), 157);
    ASSERT_EQ(redupe_gf_mul(157, 1), 157);
}

TEST(GfMul, Test862)
{
    ASSERT_EQ(redupe_gf_mul(1, 181), 181);
    ASSERT_EQ(redupe_gf_mul(181, 1), 181);
}

TEST(GfMul, Test863)
{
    ASSERT_EQ(redupe_gf_mul(1, 186), 186);
    ASSERT_EQ(redupe_gf_mul(186, 1), 186);
}

TEST(GfMul, Test864)
{
    ASSERT_EQ(redupe_gf_mul(1, 210), 210);
    ASSERT_EQ(redupe_gf_mul(210, 1), 210);
}

TEST(GfMul, Test865)
{
    ASSERT_EQ(redupe_gf_mul(1, 95), 95);
    ASSERT_EQ(redupe_gf_mul(95, 1), 95);
}

TEST(GfMul, Test866)
{
    ASSERT_EQ(redupe_gf_mul(1, 188), 188);
    ASSERT_EQ(redupe_gf_mul(188, 1), 188);
}

TEST(GfMul, Test867)
{
    ASSERT_EQ(redupe_gf_mul(1, 101), 101);
    ASSERT_EQ(redupe_gf_mul(101, 1), 101);
}

TEST(GfMul, Test868)
{
    ASSERT_EQ(redupe_gf_mul(1, 120), 120);
    ASSERT_EQ(redupe_gf_mul(120, 1), 120);
}

TEST(GfMul, Test869)
{
    ASSERT_EQ(redupe_gf_mul(1, 127), 127);
    ASSERT_EQ(redupe_gf_mul(127, 1), 127);
}

TEST(GfMul, Test870)
{
    ASSERT_EQ(redupe_gf_mul(1, 163), 163);
    ASSERT_EQ(redupe_gf_mul(163, 1), 163);
}

TEST(GfMul, Test871)
{
    ASSERT_EQ(redupe_gf_mul(1, 136), 136);
    ASSERT_EQ(redupe_gf_mul(136, 1), 136);
}

TEST(GfMul, Test872)
{
    ASSERT_EQ(redupe_gf_mul(1, 189), 189);
    ASSERT_EQ(redupe_gf_mul(189, 1), 189);
}

TEST(GfMul, Test873)
{
    ASSERT_EQ(redupe_gf_mul(1, 31), 31);
    ASSERT_EQ(redupe_gf_mul(31, 1), 31);
}

TEST(GfMul, Test874)
{
    ASSERT_EQ(redupe_gf_mul(1, 62), 62);
    ASSERT_EQ(redupe_gf_mul(62, 1), 62);
}

TEST(GfMul, Test875)
{
    ASSERT_EQ(redupe_gf_mul(1, 147), 147);
    ASSERT_EQ(redupe_gf_mul(147, 1), 147);
}

TEST(GfMul, Test876)
{
    ASSERT_EQ(redupe_gf_mul(1, 197), 197);
    ASSERT_EQ(redupe_gf_mul(197, 1), 197);
}

TEST(GfMul, Test877)
{
    ASSERT_EQ(redupe_gf_mul(1, 102), 102);
    ASSERT_EQ(redupe_gf_mul(102, 1), 102);
}

TEST(GfMul, Test878)
{
    ASSERT_EQ(redupe_gf_mul(1, 133), 133);
    ASSERT_EQ(redupe_gf_mul(133, 1), 133);
}

TEST(GfMul, Test879)
{
    ASSERT_EQ(redupe_gf_mul(1, 46), 46);
    ASSERT_EQ(redupe_gf_mul(46, 1), 46);
}

TEST(GfMul, Test880)
{
    ASSERT_EQ(redupe_gf_mul(1, 218), 218);
    ASSERT_EQ(redupe_gf_mul(218, 1), 218);
}

TEST(GfMul, Test881)
{
    ASSERT_EQ(redupe_gf_mul(1, 73), 73);
    ASSERT_EQ(redupe_gf_mul(73, 1), 73);
}

TEST(GfMul, Test882)
{
    ASSERT_EQ(redupe_gf_mul(1, 146), 146);
    ASSERT_EQ(redupe_gf_mul(146, 1), 146);
}

TEST(GfMul, Test883)
{
    ASSERT_EQ(redupe_gf_mul(1, 114), 114);
    ASSERT_EQ(redupe_gf_mul(114, 1), 114);
}

TEST(GfMul, Test884)
{
    ASSERT_EQ(redupe_gf_mul(1, 228), 228);
    ASSERT_EQ(redupe_gf_mul(228, 1), 228);
}

TEST(GfMul, Test885)
{
    ASSERT_EQ(redupe_gf_mul(1, 63), 63);
    ASSERT_EQ(redupe_gf_mul(63, 1), 63);
}

TEST(GfMul, Test886)
{
    ASSERT_EQ(redupe_gf_mul(1, 123), 123);
    ASSERT_EQ(redupe_gf_mul(123, 1), 123);
}

TEST(GfMul, Test887)
{
    ASSERT_EQ(redupe_gf_mul(1, 241), 241);
    ASSERT_EQ(redupe_gf_mul(241, 1), 241);
}

TEST(GfMul, Test888)
{
    ASSERT_EQ(redupe_gf_mul(1, 219), 219);
    ASSERT_EQ(redupe_gf_mul(219, 1), 219);
}

TEST(GfMul, Test889)
{
    ASSERT_EQ(redupe_gf_mul(1, 171), 171);
    ASSERT_EQ(redupe_gf_mul(171, 1), 171);
}

TEST(GfMul, Test890)
{
    ASSERT_EQ(redupe_gf_mul(1, 49), 49);
    ASSERT_EQ(redupe_gf_mul(49, 1), 49);
}

TEST(GfMul, Test891)
{
    ASSERT_EQ(redupe_gf_mul(1, 196), 196);
    ASSERT_EQ(redupe_gf_mul(196, 1), 196);
}

TEST(GfMul, Test892)
{
    ASSERT_EQ(redupe_gf_mul(1, 149), 149);
    ASSERT_EQ(redupe_gf_mul(149, 1), 149);
}

TEST(GfMul, Test893)
{
    ASSERT_EQ(redupe_gf_mul(1, 87), 87);
    ASSERT_EQ(redupe_gf_mul(87, 1), 87);
}

TEST(GfMul, Test894)
{
    ASSERT_EQ(redupe_gf_mul(1, 130), 130);
    ASSERT_EQ(redupe_gf_mul(130, 1), 130);
}

TEST(GfMul, Test895)
{
    ASSERT_EQ(redupe_gf_mul(1, 25), 25);
    ASSERT_EQ(redupe_gf_mul(25, 1), 25);
}

TEST(GfMul, Test896)
{
    ASSERT_EQ(redupe_gf_mul(121, 253), 74);
    ASSERT_EQ(redupe_gf_mul(253, 121), 74);
}

TEST(GfMul, Test897)
{
    ASSERT_EQ(redupe_gf_mul(74, 255), 121);
    ASSERT_EQ(redupe_gf_mul(255, 74), 121);
}

TEST(GfMul, Test898)
{
    ASSERT_EQ(redupe_gf_mul(1, 125), 125);
    ASSERT_EQ(redupe_gf_mul(125, 1), 125);
}

TEST(GfMul, Test899)
{
    ASSERT_EQ(redupe_gf_mul(1, 162), 162);
    ASSERT_EQ(redupe_gf_mul(162, 1), 162);
}

TEST(GfMul, Test900)
{
    ASSERT_EQ(redupe_gf_mul(2, 206), 129);
    ASSERT_EQ(redupe_gf_mul(206, 2), 129);
}

TEST(GfMul, Test901)
{
    ASSERT_EQ(redupe_gf_mul(2, 128), 29);
    ASSERT_EQ(redupe_gf_mul(128, 2), 29);
}

TEST(GfMul, Test902)
{
    ASSERT_EQ(redupe_gf_mul(2, 160), 93);
    ASSERT_EQ(redupe_gf_mul(160, 2), 93);
}

TEST(GfMul, Test903)
{
    ASSERT_EQ(redupe_gf_mul(2, 202), 137);
    ASSERT_EQ(redupe_gf_mul(202, 2), 137);
}

TEST(GfMul, Test904)
{
    ASSERT_EQ(redupe_gf_mul(2, 225), 223);
    ASSERT_EQ(redupe_gf_mul(225, 2), 223);
}

TEST(GfMul, Test905)
{
    ASSERT_EQ(redupe_gf_mul(2, 162), 89);
    ASSERT_EQ(redupe_gf_mul(162, 2), 89);
}

TEST(GfMul, Test906)
{
    ASSERT_EQ(redupe_gf_mul(2, 253), 231);
    ASSERT_EQ(redupe_gf_mul(253, 2), 231);
}

TEST(GfMul, Test907)
{
    ASSERT_EQ(redupe_gf_mul(2, 90), 180);
    ASSERT_EQ(redupe_gf_mul(90, 2), 180);
}

TEST(GfMul, Test908)
{
    ASSERT_EQ(redupe_gf_mul(2, 88), 176);
    ASSERT_EQ(redupe_gf_mul(88, 2), 176);
}

TEST(GfMul, Test909)
{
    ASSERT_EQ(redupe_gf_mul(2, 29), 58);
    ASSERT_EQ(redupe_gf_mul(29, 2), 58);
}

TEST(GfMul, Test910)
{
    ASSERT_EQ(redupe_gf_mul(4, 127), 225);
    ASSERT_EQ(redupe_gf_mul(127, 4), 225);
}

TEST(GfMul, Test911)
{
    ASSERT_EQ(redupe_gf_mul(4, 247), 251);
    ASSERT_EQ(redupe_gf_mul(247, 4), 251);
}

TEST(GfMul, Test912)
{
    ASSERT_EQ(redupe_gf_mul(4, 37), 148);
    ASSERT_EQ(redupe_gf_mul(37, 4), 148);
}

TEST(GfMul, Test913)
{
    ASSERT_EQ(redupe_gf_mul(4, 195), 43);
    ASSERT_EQ(redupe_gf_mul(195, 4), 43);
}

TEST(GfMul, Test914)
{
    ASSERT_EQ(redupe_gf_mul(4, 39), 156);
    ASSERT_EQ(redupe_gf_mul(39, 4), 156);
}

TEST(GfMul, Test915)
{
    ASSERT_EQ(redupe_gf_mul(4, 244), 247);
    ASSERT_EQ(redupe_gf_mul(244, 4), 247);
}

TEST(GfMul, Test916)
{
    ASSERT_EQ(redupe_gf_mul(4, 44), 176);
    ASSERT_EQ(redupe_gf_mul(44, 4), 176);
}

TEST(GfMul, Test917)
{
    ASSERT_EQ(redupe_gf_mul(4, 92), 109);
    ASSERT_EQ(redupe_gf_mul(92, 4), 109);
}

TEST(GfMul, Test918)
{
    ASSERT_EQ(redupe_gf_mul(4, 144), 122);
    ASSERT_EQ(redupe_gf_mul(144, 4), 122);
}

TEST(GfMul, Test919)
{
    ASSERT_EQ(redupe_gf_mul(4, 36), 144);
    ASSERT_EQ(redupe_gf_mul(36, 4), 144);
}

TEST(GfMul, Test920)
{
    ASSERT_EQ(redupe_gf_mul(4, 99), 145);
    ASSERT_EQ(redupe_gf_mul(99, 4), 145);
}

TEST(GfMul, Test921)
{
    ASSERT_EQ(redupe_gf_mul(8, 251), 139);
    ASSERT_EQ(redupe_gf_mul(251, 8), 139);
}

TEST(GfMul, Test922)
{
    ASSERT_EQ(redupe_gf_mul(8, 190), 153);
    ASSERT_EQ(redupe_gf_mul(190, 8), 153);
}

TEST(GfMul, Test923)
{
    ASSERT_EQ(redupe_gf_mul(8, 172), 9);
    ASSERT_EQ(redupe_gf_mul(172, 8), 9);
}

TEST(GfMul, Test924)
{
    ASSERT_EQ(redupe_gf_mul(8, 31), 248);
    ASSERT_EQ(redupe_gf_mul(31, 8), 248);
}

TEST(GfMul, Test925)
{
    ASSERT_EQ(redupe_gf_mul(8, 16), 128);
    ASSERT_EQ(redupe_gf_mul(16, 8), 128);
}

TEST(GfMul, Test926)
{
    ASSERT_EQ(redupe_gf_mul(8, 211), 214);
    ASSERT_EQ(redupe_gf_mul(211, 8), 214);
}

TEST(GfMul, Test927)
{
    ASSERT_EQ(redupe_gf_mul(8, 231), 107);
    ASSERT_EQ(redupe_gf_mul(231, 8), 107);
}

TEST(GfMul, Test928)
{
    ASSERT_EQ(redupe_gf_mul(8, 106), 119);
    ASSERT_EQ(redupe_gf_mul(106, 8), 119);
}

TEST(GfMul, Test929)
{
    ASSERT_EQ(redupe_gf_mul(8, 35), 5);
    ASSERT_EQ(redupe_gf_mul(35, 8), 5);
}

TEST(GfMul, Test930)
{
    ASSERT_EQ(redupe_gf_mul(135, 135), 6);
    ASSERT_EQ(redupe_gf_mul(135, 135), 6);
}

TEST(GfMul, Test931)
{
    ASSERT_EQ(redupe_gf_mul(176, 252), 114);
    ASSERT_EQ(redupe_gf_mul(252, 176), 114);
}

TEST(GfMul, Test932)
{
    ASSERT_EQ(redupe_gf_mul(0, 252), 0);
    ASSERT_EQ(redupe_gf_mul(252, 0), 0);
}

TEST(GfMul, Test933)
{
    ASSERT_EQ(redupe_gf_mul(245, 250), 172);
    ASSERT_EQ(redupe_gf_mul(250, 245), 172);
}

TEST(GfMul, Test934)
{
    ASSERT_EQ(redupe_gf_mul(22, 176), 72);
    ASSERT_EQ(redupe_gf_mul(176, 22), 72);
}

TEST(GfMul, Test935)
{
    ASSERT_EQ(redupe_gf_mul(0, 22), 0);
    ASSERT_EQ(redupe_gf_mul(22, 0), 0);
}

TEST(GfMul, Test936)
{
    ASSERT_EQ(redupe_gf_mul(76, 245), 131);
    ASSERT_EQ(redupe_gf_mul(245, 76), 131);
}

TEST(GfMul, Test937)
{
    ASSERT_EQ(redupe_gf_mul(22, 131), 245);
    ASSERT_EQ(redupe_gf_mul(131, 22), 245);
}

TEST(GfMul, Test938)
{
    ASSERT_EQ(redupe_gf_mul(22, 76), 1);
    ASSERT_EQ(redupe_gf_mul(76, 22), 1);
}

TEST(GfMul, Test939)
{
    ASSERT_EQ(redupe_gf_mul(186, 245), 39);
    ASSERT_EQ(redupe_gf_mul(245, 186), 39);
}

TEST(GfMul, Test940)
{
    ASSERT_EQ(redupe_gf_mul(72, 250), 239);
    ASSERT_EQ(redupe_gf_mul(250, 72), 239);
}

TEST(GfMul, Test941)
{
    ASSERT_EQ(redupe_gf_mul(16, 229), 246);
    ASSERT_EQ(redupe_gf_mul(229, 16), 246);
}

TEST(GfMul, Test942)
{
    ASSERT_EQ(redupe_gf_mul(32, 213), 191);
    ASSERT_EQ(redupe_gf_mul(213, 32), 191);
}

TEST(GfMul, Test943)
{
    ASSERT_EQ(redupe_gf_mul(64, 181), 70);
    ASSERT_EQ(redupe_gf_mul(181, 64), 70);
}

TEST(GfMul, Test944)
{
    ASSERT_EQ(redupe_gf_mul(117, 128), 24);
    ASSERT_EQ(redupe_gf_mul(128, 117), 24);
}

TEST(GfMul, Test945)
{
    ASSERT_EQ(redupe_gf_mul(29, 232), 90);
    ASSERT_EQ(redupe_gf_mul(232, 29), 90);
}

TEST(GfMul, Test946)
{
    ASSERT_EQ(redupe_gf_mul(58, 207), 1);
    ASSERT_EQ(redupe_gf_mul(207, 58), 1);
}

TEST(GfMul, Test947)
{
    ASSERT_EQ(redupe_gf_mul(116, 129), 236);
    ASSERT_EQ(redupe_gf_mul(129, 116), 236);
}

TEST(GfMul, Test948)
{
    ASSERT_EQ(redupe_gf_mul(56, 205), 242);
    ASSERT_EQ(redupe_gf_mul(205, 56), 242);
}

TEST(GfMul, Test949)
{
    ASSERT_EQ(redupe_gf_mul(114, 135), 252);
    ASSERT_EQ(redupe_gf_mul(135, 114), 252);
}

TEST(GfMul, Test950)
{
    ASSERT_EQ(redupe_gf_mul(19, 230), 241);
    ASSERT_EQ(redupe_gf_mul(230, 19), 241);
}

TEST(GfMul, Test951)
{
    ASSERT_EQ(redupe_gf_mul(38, 211), 175);
    ASSERT_EQ(redupe_gf_mul(211, 38), 175);
}

TEST(GfMul, Test952)
{
    ASSERT_EQ(redupe_gf_mul(76, 185), 30);
    ASSERT_EQ(redupe_gf_mul(185, 76), 30);
}

TEST(GfMul, Test953)
{
    ASSERT_EQ(redupe_gf_mul(109, 152), 85);
    ASSERT_EQ(redupe_gf_mul(152, 109), 85);
}

TEST(GfMul, Test954)
{
    ASSERT_EQ(redupe_gf_mul(45, 216), 19);
    ASSERT_EQ(redupe_gf_mul(216, 45), 19);
}

TEST(GfMul, Test955)
{
    ASSERT_EQ(redupe_gf_mul(90, 175), 248);
    ASSERT_EQ(redupe_gf_mul(175, 90), 248);
}

TEST(GfMul, Test956)
{
    ASSERT_EQ(redupe_gf_mul(65, 180), 178);
    ASSERT_EQ(redupe_gf_mul(180, 65), 178);
}

TEST(GfMul, Test957)
{
    ASSERT_EQ(redupe_gf_mul(31, 234), 169);
    ASSERT_EQ(redupe_gf_mul(234, 31), 169);
}

TEST(GfMul, Test958)
{
    ASSERT_EQ(redupe_gf_mul(60, 201), 17);
    ASSERT_EQ(redupe_gf_mul(201, 60), 17);
}

TEST(GfMul, Test959)
{
    ASSERT_EQ(redupe_gf_mul(122, 143), 71);
    ASSERT_EQ(redupe_gf_mul(143, 122), 71);
}

TEST(GfMul, Test960)
{
    ASSERT_EQ(redupe_gf_mul(3, 246), 7);
    ASSERT_EQ(redupe_gf_mul(246, 3), 7);
}

TEST(GfMul, Test961)
{
    ASSERT_EQ(redupe_gf_mul(6, 243), 16);
    ASSERT_EQ(redupe_gf_mul(243, 6), 16);
}

TEST(GfMul, Test962)
{
    ASSERT_EQ(redupe_gf_mul(12, 249), 88);
    ASSERT_EQ(redupe_gf_mul(249, 12), 88);
}

TEST(GfMul, Test963)
{
    ASSERT_EQ(redupe_gf_mul(24, 237), 77);
    ASSERT_EQ(redupe_gf_mul(237, 24), 77);
}

TEST(GfMul, Test964)
{
    ASSERT_EQ(redupe_gf_mul(48, 197), 73);
    ASSERT_EQ(redupe_gf_mul(197, 48), 73);
}

TEST(GfMul, Test965)
{
    ASSERT_EQ(redupe_gf_mul(96, 149), 249);
    ASSERT_EQ(redupe_gf_mul(149, 96), 249);
}

TEST(GfMul, Test966)
{
    ASSERT_EQ(redupe_gf_mul(53, 192), 94);
    ASSERT_EQ(redupe_gf_mul(192, 53), 94);
}

TEST(GfMul, Test967)
{
    ASSERT_EQ(redupe_gf_mul(104, 157), 66);
    ASSERT_EQ(redupe_gf_mul(157, 104), 66);
}

TEST(GfMul, Test968)
{
    ASSERT_EQ(redupe_gf_mul(39, 210), 91);
    ASSERT_EQ(redupe_gf_mul(210, 39), 91);
}

TEST(GfMul, Test969)
{
    ASSERT_EQ(redupe_gf_mul(78, 187), 237);
    ASSERT_EQ(redupe_gf_mul(187, 78), 237);
}

TEST(GfMul, Test970)
{
    ASSERT_EQ(redupe_gf_mul(105, 156), 182);
    ASSERT_EQ(redupe_gf_mul(156, 105), 182);
}

TEST(GfMul, Test971)
{
    ASSERT_EQ(redupe_gf_mul(37, 208), 168);
    ASSERT_EQ(redupe_gf_mul(208, 37), 168);
}

TEST(GfMul, Test972)
{
    ASSERT_EQ(redupe_gf_mul(74, 191), 14);
    ASSERT_EQ(redupe_gf_mul(191, 74), 14);
}

TEST(GfMul, Test973)
{
    ASSERT_EQ(redupe_gf_mul(97, 148), 13);
    ASSERT_EQ(redupe_gf_mul(148, 97), 13);
}

TEST(GfMul, Test974)
{
    ASSERT_EQ(redupe_gf_mul(106, 159), 177);
    ASSERT_EQ(redupe_gf_mul(159, 106), 177);
}

TEST(GfMul, Test975)
{
    ASSERT_EQ(redupe_gf_mul(33, 212), 75);
    ASSERT_EQ(redupe_gf_mul(212, 33), 75);
}

TEST(GfMul, Test976)
{
    ASSERT_EQ(redupe_gf_mul(119, 130), 235);
    ASSERT_EQ(redupe_gf_mul(130, 119), 235);
}

TEST(GfMul, Test977)
{
    ASSERT_EQ(redupe_gf_mul(27, 238), 74);
    ASSERT_EQ(redupe_gf_mul(238, 27), 74);
}

TEST(GfMul, Test978)
{
    ASSERT_EQ(redupe_gf_mul(52, 193), 170);
    ASSERT_EQ(redupe_gf_mul(193, 52), 170);
}

TEST(GfMul, Test979)
{
    ASSERT_EQ(redupe_gf_mul(35, 214), 184);
    ASSERT_EQ(redupe_gf_mul(214, 35), 184);
}

TEST(GfMul, Test980)
{
    ASSERT_EQ(redupe_gf_mul(70, 179), 86);
    ASSERT_EQ(redupe_gf_mul(179, 70), 86);
}

TEST(GfMul, Test981)
{
    ASSERT_EQ(redupe_gf_mul(121, 140), 64);
    ASSERT_EQ(redupe_gf_mul(140, 121), 64);
}

TEST(GfMul, Test982)
{
    ASSERT_EQ(redupe_gf_mul(5, 240), 23);
    ASSERT_EQ(redupe_gf_mul(240, 5), 23);
}

TEST(GfMul, Test983)
{
    ASSERT_EQ(redupe_gf_mul(10, 255), 72);
    ASSERT_EQ(redupe_gf_mul(255, 10), 72);
}

TEST(GfMul, Test984)
{
    ASSERT_EQ(redupe_gf_mul(20, 225), 21);
    ASSERT_EQ(redupe_gf_mul(225, 20), 21);
}

TEST(GfMul, Test985)
{
    ASSERT_EQ(redupe_gf_mul(40, 221), 4);
    ASSERT_EQ(redupe_gf_mul(221, 40), 4);
}

TEST(GfMul, Test986)
{
    ASSERT_EQ(redupe_gf_mul(80, 165), 176);
    ASSERT_EQ(redupe_gf_mul(165, 80), 176);
}

TEST(GfMul, Test987)
{
    ASSERT_EQ(redupe_gf_mul(85, 160), 167);
    ASSERT_EQ(redupe_gf_mul(160, 85), 167);
}

TEST(GfMul, Test988)
{
    ASSERT_EQ(redupe_gf_mul(93, 168), 28);
    ASSERT_EQ(redupe_gf_mul(168, 93), 28);
}

TEST(GfMul, Test989)
{
    ASSERT_EQ(redupe_gf_mul(79, 186), 25);
    ASSERT_EQ(redupe_gf_mul(186, 79), 25);
}

TEST(GfMul, Test990)
{
    ASSERT_EQ(redupe_gf_mul(111, 154), 166);
    ASSERT_EQ(redupe_gf_mul(154, 111), 166);
}

TEST(GfMul, Test991)
{
    ASSERT_EQ(redupe_gf_mul(43, 222), 3);
    ASSERT_EQ(redupe_gf_mul(222, 43), 3);
}

TEST(GfMul, Test992)
{
    ASSERT_EQ(redupe_gf_mul(84, 161), 83);
    ASSERT_EQ(redupe_gf_mul(161, 84), 83);
}

TEST(GfMul, Test993)
{
    ASSERT_EQ(redupe_gf_mul(95, 170), 239);
    ASSERT_EQ(redupe_gf_mul(170, 95), 239);
}

TEST(GfMul, Test994)
{
    ASSERT_EQ(redupe_gf_mul(75, 190), 250);
    ASSERT_EQ(redupe_gf_mul(190, 75), 250);
}

TEST(GfMul, Test995)
{
    ASSERT_EQ(redupe_gf_mul(55, 194), 173);
    ASSERT_EQ(redupe_gf_mul(194, 55), 173);
}

TEST(GfMul, Test996)
{
    ASSERT_EQ(redupe_gf_mul(108, 153), 161);
    ASSERT_EQ(redupe_gf_mul(153, 108), 161);
}

TEST(GfMul, Test997)
{
    ASSERT_EQ(redupe_gf_mul(47, 218), 224);
    ASSERT_EQ(redupe_gf_mul(218, 47), 224);
}

TEST(GfMul, Test998)
{
    ASSERT_EQ(redupe_gf_mul(94, 171), 27);
    ASSERT_EQ(redupe_gf_mul(171, 94), 27);
}

TEST(GfMul, Test999)
{
    ASSERT_EQ(redupe_gf_mul(73, 188), 9);
    ASSERT_EQ(redupe_gf_mul(188, 73), 9);
}

TEST(GfMul, Test1000)
{
    ASSERT_EQ(redupe_gf_mul(101, 144), 238);
    ASSERT_EQ(redupe_gf_mul(144, 101), 238);
}
