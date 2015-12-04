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

TEST(GfSub, Test0)
{
    ASSERT_EQ(redupe_gf_sub(1, 37), 36);
    ASSERT_EQ(redupe_gf_sub(37, 1), 36);
}

TEST(GfSub, Test1)
{
    ASSERT_EQ(redupe_gf_sub(1, 86), 87);
    ASSERT_EQ(redupe_gf_sub(86, 1), 87);
}

TEST(GfSub, Test2)
{
    ASSERT_EQ(redupe_gf_sub(1, 10), 11);
    ASSERT_EQ(redupe_gf_sub(10, 1), 11);
}

TEST(GfSub, Test3)
{
    ASSERT_EQ(redupe_gf_sub(1, 221), 220);
    ASSERT_EQ(redupe_gf_sub(221, 1), 220);
}

TEST(GfSub, Test4)
{
    ASSERT_EQ(redupe_gf_sub(1, 3), 2);
    ASSERT_EQ(redupe_gf_sub(3, 1), 2);
}

TEST(GfSub, Test5)
{
    ASSERT_EQ(redupe_gf_sub(1, 244), 245);
    ASSERT_EQ(redupe_gf_sub(244, 1), 245);
}

TEST(GfSub, Test6)
{
    ASSERT_EQ(redupe_gf_sub(1, 111), 110);
    ASSERT_EQ(redupe_gf_sub(111, 1), 110);
}

TEST(GfSub, Test7)
{
    ASSERT_EQ(redupe_gf_sub(1, 50), 51);
    ASSERT_EQ(redupe_gf_sub(50, 1), 51);
}

TEST(GfSub, Test8)
{
    ASSERT_EQ(redupe_gf_sub(1, 206), 207);
    ASSERT_EQ(redupe_gf_sub(206, 1), 207);
}

TEST(GfSub, Test9)
{
    ASSERT_EQ(redupe_gf_sub(1, 177), 176);
    ASSERT_EQ(redupe_gf_sub(177, 1), 176);
}

TEST(GfSub, Test10)
{
    ASSERT_EQ(redupe_gf_sub(1, 5), 4);
    ASSERT_EQ(redupe_gf_sub(5, 1), 4);
}

TEST(GfSub, Test11)
{
    ASSERT_EQ(redupe_gf_sub(1, 168), 169);
    ASSERT_EQ(redupe_gf_sub(168, 1), 169);
}

TEST(GfSub, Test12)
{
    ASSERT_EQ(redupe_gf_sub(1, 229), 228);
    ASSERT_EQ(redupe_gf_sub(229, 1), 228);
}

TEST(GfSub, Test13)
{
    ASSERT_EQ(redupe_gf_sub(1, 167), 166);
    ASSERT_EQ(redupe_gf_sub(167, 1), 166);
}

TEST(GfSub, Test14)
{
    ASSERT_EQ(redupe_gf_sub(1, 205), 204);
    ASSERT_EQ(redupe_gf_sub(205, 1), 204);
}

TEST(GfSub, Test15)
{
    ASSERT_EQ(redupe_gf_sub(1, 125), 124);
    ASSERT_EQ(redupe_gf_sub(125, 1), 124);
}

TEST(GfSub, Test16)
{
    ASSERT_EQ(redupe_gf_sub(1, 19), 18);
    ASSERT_EQ(redupe_gf_sub(19, 1), 18);
}

TEST(GfSub, Test17)
{
    ASSERT_EQ(redupe_gf_sub(1, 6), 7);
    ASSERT_EQ(redupe_gf_sub(6, 1), 7);
}

TEST(GfSub, Test18)
{
    ASSERT_EQ(redupe_gf_sub(1, 88), 89);
    ASSERT_EQ(redupe_gf_sub(88, 1), 89);
}

TEST(GfSub, Test19)
{
    ASSERT_EQ(redupe_gf_sub(1, 122), 123);
    ASSERT_EQ(redupe_gf_sub(122, 1), 123);
}

TEST(GfSub, Test20)
{
    ASSERT_EQ(redupe_gf_sub(1, 2), 3);
    ASSERT_EQ(redupe_gf_sub(2, 1), 3);
}

TEST(GfSub, Test21)
{
    ASSERT_EQ(redupe_gf_sub(1, 142), 143);
    ASSERT_EQ(redupe_gf_sub(142, 1), 143);
}

TEST(GfSub, Test22)
{
    ASSERT_EQ(redupe_gf_sub(1, 135), 134);
    ASSERT_EQ(redupe_gf_sub(135, 1), 134);
}

TEST(GfSub, Test23)
{
    ASSERT_EQ(redupe_gf_sub(1, 176), 177);
    ASSERT_EQ(redupe_gf_sub(176, 1), 177);
}

TEST(GfSub, Test24)
{
    ASSERT_EQ(redupe_gf_sub(1, 180), 181);
    ASSERT_EQ(redupe_gf_sub(180, 1), 181);
}

TEST(GfSub, Test25)
{
    ASSERT_EQ(redupe_gf_sub(1, 235), 234);
    ASSERT_EQ(redupe_gf_sub(235, 1), 234);
}

TEST(GfSub, Test26)
{
    ASSERT_EQ(redupe_gf_sub(1, 119), 118);
    ASSERT_EQ(redupe_gf_sub(119, 1), 118);
}

TEST(GfSub, Test27)
{
    ASSERT_EQ(redupe_gf_sub(1, 161), 160);
    ASSERT_EQ(redupe_gf_sub(161, 1), 160);
}

TEST(GfSub, Test28)
{
    ASSERT_EQ(redupe_gf_sub(1, 121), 120);
    ASSERT_EQ(redupe_gf_sub(121, 1), 120);
}

TEST(GfSub, Test29)
{
    ASSERT_EQ(redupe_gf_sub(1, 130), 131);
    ASSERT_EQ(redupe_gf_sub(130, 1), 131);
}

TEST(GfSub, Test30)
{
    ASSERT_EQ(redupe_gf_sub(1, 238), 239);
    ASSERT_EQ(redupe_gf_sub(238, 1), 239);
}

TEST(GfSub, Test31)
{
    ASSERT_EQ(redupe_gf_sub(1, 178), 179);
    ASSERT_EQ(redupe_gf_sub(178, 1), 179);
}

TEST(GfSub, Test32)
{
    ASSERT_EQ(redupe_gf_sub(1, 90), 91);
    ASSERT_EQ(redupe_gf_sub(90, 1), 91);
}

TEST(GfSub, Test33)
{
    ASSERT_EQ(redupe_gf_sub(1, 203), 202);
    ASSERT_EQ(redupe_gf_sub(203, 1), 202);
}

TEST(GfSub, Test34)
{
    ASSERT_EQ(redupe_gf_sub(1, 140), 141);
    ASSERT_EQ(redupe_gf_sub(140, 1), 141);
}

TEST(GfSub, Test35)
{
    ASSERT_EQ(redupe_gf_sub(1, 64), 65);
    ASSERT_EQ(redupe_gf_sub(64, 1), 65);
}

TEST(GfSub, Test36)
{
    ASSERT_EQ(redupe_gf_sub(1, 32), 33);
    ASSERT_EQ(redupe_gf_sub(32, 1), 33);
}

TEST(GfSub, Test37)
{
    ASSERT_EQ(redupe_gf_sub(1, 83), 82);
    ASSERT_EQ(redupe_gf_sub(83, 1), 82);
}

TEST(GfSub, Test38)
{
    ASSERT_EQ(redupe_gf_sub(1, 54), 55);
    ASSERT_EQ(redupe_gf_sub(54, 1), 55);
}

TEST(GfSub, Test39)
{
    ASSERT_EQ(redupe_gf_sub(1, 108), 109);
    ASSERT_EQ(redupe_gf_sub(108, 1), 109);
}

TEST(GfSub, Test40)
{
    ASSERT_EQ(redupe_gf_sub(1, 201), 200);
    ASSERT_EQ(redupe_gf_sub(201, 1), 200);
}

TEST(GfSub, Test41)
{
    ASSERT_EQ(redupe_gf_sub(1, 143), 142);
    ASSERT_EQ(redupe_gf_sub(143, 1), 142);
}

TEST(GfSub, Test42)
{
    ASSERT_EQ(redupe_gf_sub(1, 48), 49);
    ASSERT_EQ(redupe_gf_sub(48, 1), 49);
}

TEST(GfSub, Test43)
{
    ASSERT_EQ(redupe_gf_sub(1, 247), 246);
    ASSERT_EQ(redupe_gf_sub(247, 1), 246);
}

TEST(GfSub, Test44)
{
    ASSERT_EQ(redupe_gf_sub(1, 245), 244);
    ASSERT_EQ(redupe_gf_sub(245, 1), 244);
}

TEST(GfSub, Test45)
{
    ASSERT_EQ(redupe_gf_sub(1, 72), 73);
    ASSERT_EQ(redupe_gf_sub(72, 1), 73);
}

TEST(GfSub, Test46)
{
    ASSERT_EQ(redupe_gf_sub(1, 94), 95);
    ASSERT_EQ(redupe_gf_sub(94, 1), 95);
}

TEST(GfSub, Test47)
{
    ASSERT_EQ(redupe_gf_sub(1, 12), 13);
    ASSERT_EQ(redupe_gf_sub(12, 1), 13);
}

TEST(GfSub, Test48)
{
    ASSERT_EQ(redupe_gf_sub(1, 117), 116);
    ASSERT_EQ(redupe_gf_sub(117, 1), 116);
}

TEST(GfSub, Test49)
{
    ASSERT_EQ(redupe_gf_sub(1, 128), 129);
    ASSERT_EQ(redupe_gf_sub(128, 1), 129);
}

TEST(GfSub, Test50)
{
    ASSERT_EQ(redupe_gf_sub(1, 55), 54);
    ASSERT_EQ(redupe_gf_sub(55, 1), 54);
}

TEST(GfSub, Test51)
{
    ASSERT_EQ(redupe_gf_sub(1, 61), 60);
    ASSERT_EQ(redupe_gf_sub(61, 1), 60);
}

TEST(GfSub, Test52)
{
    ASSERT_EQ(redupe_gf_sub(1, 251), 250);
    ASSERT_EQ(redupe_gf_sub(251, 1), 250);
}

TEST(GfSub, Test53)
{
    ASSERT_EQ(redupe_gf_sub(1, 27), 26);
    ASSERT_EQ(redupe_gf_sub(27, 1), 26);
}

TEST(GfSub, Test54)
{
    ASSERT_EQ(redupe_gf_sub(1, 192), 193);
    ASSERT_EQ(redupe_gf_sub(192, 1), 193);
}

TEST(GfSub, Test55)
{
    ASSERT_EQ(redupe_gf_sub(1, 29), 28);
    ASSERT_EQ(redupe_gf_sub(29, 1), 28);
}

TEST(GfSub, Test56)
{
    ASSERT_EQ(redupe_gf_sub(1, 4), 5);
    ASSERT_EQ(redupe_gf_sub(4, 1), 5);
}

TEST(GfSub, Test57)
{
    ASSERT_EQ(redupe_gf_sub(1, 18), 19);
    ASSERT_EQ(redupe_gf_sub(18, 1), 19);
}

TEST(GfSub, Test58)
{
    ASSERT_EQ(redupe_gf_sub(1, 131), 130);
    ASSERT_EQ(redupe_gf_sub(131, 1), 130);
}

TEST(GfSub, Test59)
{
    ASSERT_EQ(redupe_gf_sub(1, 71), 70);
    ASSERT_EQ(redupe_gf_sub(71, 1), 70);
}

TEST(GfSub, Test60)
{
    ASSERT_EQ(redupe_gf_sub(1, 45), 44);
    ASSERT_EQ(redupe_gf_sub(45, 1), 44);
}

TEST(GfSub, Test61)
{
    ASSERT_EQ(redupe_gf_sub(1, 139), 138);
    ASSERT_EQ(redupe_gf_sub(139, 1), 138);
}

TEST(GfSub, Test62)
{
    ASSERT_EQ(redupe_gf_sub(1, 148), 149);
    ASSERT_EQ(redupe_gf_sub(148, 1), 149);
}

TEST(GfSub, Test63)
{
    ASSERT_EQ(redupe_gf_sub(1, 93), 92);
    ASSERT_EQ(redupe_gf_sub(93, 1), 92);
}

TEST(GfSub, Test64)
{
    ASSERT_EQ(redupe_gf_sub(1, 155), 154);
    ASSERT_EQ(redupe_gf_sub(155, 1), 154);
}

TEST(GfSub, Test65)
{
    ASSERT_EQ(redupe_gf_sub(1, 14), 15);
    ASSERT_EQ(redupe_gf_sub(14, 1), 15);
}

TEST(GfSub, Test66)
{
    ASSERT_EQ(redupe_gf_sub(1, 188), 189);
    ASSERT_EQ(redupe_gf_sub(188, 1), 189);
}

TEST(GfSub, Test67)
{
    ASSERT_EQ(redupe_gf_sub(1, 106), 107);
    ASSERT_EQ(redupe_gf_sub(106, 1), 107);
}

TEST(GfSub, Test68)
{
    ASSERT_EQ(redupe_gf_sub(1, 156), 157);
    ASSERT_EQ(redupe_gf_sub(156, 1), 157);
}

TEST(GfSub, Test69)
{
    ASSERT_EQ(redupe_gf_sub(1, 39), 38);
    ASSERT_EQ(redupe_gf_sub(39, 1), 38);
}

TEST(GfSub, Test70)
{
    ASSERT_EQ(redupe_gf_sub(1, 38), 39);
    ASSERT_EQ(redupe_gf_sub(38, 1), 39);
}

TEST(GfSub, Test71)
{
    ASSERT_EQ(redupe_gf_sub(1, 149), 148);
    ASSERT_EQ(redupe_gf_sub(149, 1), 148);
}

TEST(GfSub, Test72)
{
    ASSERT_EQ(redupe_gf_sub(1, 239), 238);
    ASSERT_EQ(redupe_gf_sub(239, 1), 238);
}

TEST(GfSub, Test73)
{
    ASSERT_EQ(redupe_gf_sub(1, 172), 173);
    ASSERT_EQ(redupe_gf_sub(172, 1), 173);
}

TEST(GfSub, Test74)
{
    ASSERT_EQ(redupe_gf_sub(1, 138), 139);
    ASSERT_EQ(redupe_gf_sub(138, 1), 139);
}

TEST(GfSub, Test75)
{
    ASSERT_EQ(redupe_gf_sub(1, 44), 45);
    ASSERT_EQ(redupe_gf_sub(44, 1), 45);
}

TEST(GfSub, Test76)
{
    ASSERT_EQ(redupe_gf_sub(1, 232), 233);
    ASSERT_EQ(redupe_gf_sub(232, 1), 233);
}

TEST(GfSub, Test77)
{
    ASSERT_EQ(redupe_gf_sub(1, 181), 180);
    ASSERT_EQ(redupe_gf_sub(181, 1), 180);
}

TEST(GfSub, Test78)
{
    ASSERT_EQ(redupe_gf_sub(1, 35), 34);
    ASSERT_EQ(redupe_gf_sub(35, 1), 34);
}

TEST(GfSub, Test79)
{
    ASSERT_EQ(redupe_gf_sub(1, 194), 195);
    ASSERT_EQ(redupe_gf_sub(194, 1), 195);
}

TEST(GfSub, Test80)
{
    ASSERT_EQ(redupe_gf_sub(1, 211), 210);
    ASSERT_EQ(redupe_gf_sub(211, 1), 210);
}

TEST(GfSub, Test81)
{
    ASSERT_EQ(redupe_gf_sub(1, 250), 251);
    ASSERT_EQ(redupe_gf_sub(250, 1), 251);
}

TEST(GfSub, Test82)
{
    ASSERT_EQ(redupe_gf_sub(1, 242), 243);
    ASSERT_EQ(redupe_gf_sub(242, 1), 243);
}

TEST(GfSub, Test83)
{
    ASSERT_EQ(redupe_gf_sub(1, 81), 80);
    ASSERT_EQ(redupe_gf_sub(81, 1), 80);
}

TEST(GfSub, Test84)
{
    ASSERT_EQ(redupe_gf_sub(1, 165), 164);
    ASSERT_EQ(redupe_gf_sub(165, 1), 164);
}

TEST(GfSub, Test85)
{
    ASSERT_EQ(redupe_gf_sub(1, 246), 247);
    ASSERT_EQ(redupe_gf_sub(246, 1), 247);
}

TEST(GfSub, Test86)
{
    ASSERT_EQ(redupe_gf_sub(1, 78), 79);
    ASSERT_EQ(redupe_gf_sub(78, 1), 79);
}

TEST(GfSub, Test87)
{
    ASSERT_EQ(redupe_gf_sub(1, 69), 68);
    ASSERT_EQ(redupe_gf_sub(69, 1), 68);
}

TEST(GfSub, Test88)
{
    ASSERT_EQ(redupe_gf_sub(1, 70), 71);
    ASSERT_EQ(redupe_gf_sub(70, 1), 71);
}

TEST(GfSub, Test89)
{
    ASSERT_EQ(redupe_gf_sub(1, 166), 167);
    ASSERT_EQ(redupe_gf_sub(166, 1), 167);
}

TEST(GfSub, Test90)
{
    ASSERT_EQ(redupe_gf_sub(1, 157), 156);
    ASSERT_EQ(redupe_gf_sub(157, 1), 156);
}

TEST(GfSub, Test91)
{
    ASSERT_EQ(redupe_gf_sub(1, 9), 8);
    ASSERT_EQ(redupe_gf_sub(9, 1), 8);
}

TEST(GfSub, Test92)
{
    ASSERT_EQ(redupe_gf_sub(1, 96), 97);
    ASSERT_EQ(redupe_gf_sub(96, 1), 97);
}

TEST(GfSub, Test93)
{
    ASSERT_EQ(redupe_gf_sub(1, 36), 37);
    ASSERT_EQ(redupe_gf_sub(36, 1), 37);
}

TEST(GfSub, Test94)
{
    ASSERT_EQ(redupe_gf_sub(1, 187), 186);
    ASSERT_EQ(redupe_gf_sub(187, 1), 186);
}

TEST(GfSub, Test95)
{
    ASSERT_EQ(redupe_gf_sub(1, 20), 21);
    ASSERT_EQ(redupe_gf_sub(20, 1), 21);
}

TEST(GfSub, Test96)
{
    ASSERT_EQ(redupe_gf_sub(1, 234), 235);
    ASSERT_EQ(redupe_gf_sub(234, 1), 235);
}

TEST(GfSub, Test97)
{
    ASSERT_EQ(redupe_gf_sub(1, 123), 122);
    ASSERT_EQ(redupe_gf_sub(123, 1), 122);
}

TEST(GfSub, Test98)
{
    ASSERT_EQ(redupe_gf_sub(1, 224), 225);
    ASSERT_EQ(redupe_gf_sub(224, 1), 225);
}

TEST(GfSub, Test99)
{
    ASSERT_EQ(redupe_gf_sub(1, 243), 242);
    ASSERT_EQ(redupe_gf_sub(243, 1), 242);
}

TEST(GfSub, Test100)
{
    ASSERT_EQ(redupe_gf_sub(1, 26), 27);
    ASSERT_EQ(redupe_gf_sub(26, 1), 27);
}

TEST(GfSub, Test101)
{
    ASSERT_EQ(redupe_gf_sub(1, 137), 136);
    ASSERT_EQ(redupe_gf_sub(137, 1), 136);
}

TEST(GfSub, Test102)
{
    ASSERT_EQ(redupe_gf_sub(1, 85), 84);
    ASSERT_EQ(redupe_gf_sub(85, 1), 84);
}

TEST(GfSub, Test103)
{
    ASSERT_EQ(redupe_gf_sub(1, 49), 48);
    ASSERT_EQ(redupe_gf_sub(49, 1), 48);
}

TEST(GfSub, Test104)
{
    ASSERT_EQ(redupe_gf_sub(1, 104), 105);
    ASSERT_EQ(redupe_gf_sub(104, 1), 105);
}

TEST(GfSub, Test105)
{
    ASSERT_EQ(redupe_gf_sub(1, 30), 31);
    ASSERT_EQ(redupe_gf_sub(30, 1), 31);
}

TEST(GfSub, Test106)
{
    ASSERT_EQ(redupe_gf_sub(1, 159), 158);
    ASSERT_EQ(redupe_gf_sub(159, 1), 158);
}

TEST(GfSub, Test107)
{
    ASSERT_EQ(redupe_gf_sub(1, 82), 83);
    ASSERT_EQ(redupe_gf_sub(82, 1), 83);
}

TEST(GfSub, Test108)
{
    ASSERT_EQ(redupe_gf_sub(1, 75), 74);
    ASSERT_EQ(redupe_gf_sub(75, 1), 74);
}

TEST(GfSub, Test109)
{
    ASSERT_EQ(redupe_gf_sub(1, 162), 163);
    ASSERT_EQ(redupe_gf_sub(162, 1), 163);
}

TEST(GfSub, Test110)
{
    ASSERT_EQ(redupe_gf_sub(1, 68), 69);
    ASSERT_EQ(redupe_gf_sub(68, 1), 69);
}

TEST(GfSub, Test111)
{
    ASSERT_EQ(redupe_gf_sub(1, 212), 213);
    ASSERT_EQ(redupe_gf_sub(212, 1), 213);
}

TEST(GfSub, Test112)
{
    ASSERT_EQ(redupe_gf_sub(1, 53), 52);
    ASSERT_EQ(redupe_gf_sub(53, 1), 52);
}

TEST(GfSub, Test113)
{
    ASSERT_EQ(redupe_gf_sub(1, 146), 147);
    ASSERT_EQ(redupe_gf_sub(146, 1), 147);
}

TEST(GfSub, Test114)
{
    ASSERT_EQ(redupe_gf_sub(1, 249), 248);
    ASSERT_EQ(redupe_gf_sub(249, 1), 248);
}

TEST(GfSub, Test115)
{
    ASSERT_EQ(redupe_gf_sub(1, 195), 194);
    ASSERT_EQ(redupe_gf_sub(195, 1), 194);
}

TEST(GfSub, Test116)
{
    ASSERT_EQ(redupe_gf_sub(1, 8), 9);
    ASSERT_EQ(redupe_gf_sub(8, 1), 9);
}

TEST(GfSub, Test117)
{
    ASSERT_EQ(redupe_gf_sub(1, 173), 172);
    ASSERT_EQ(redupe_gf_sub(173, 1), 172);
}

TEST(GfSub, Test118)
{
    ASSERT_EQ(redupe_gf_sub(1, 51), 50);
    ASSERT_EQ(redupe_gf_sub(51, 1), 50);
}

TEST(GfSub, Test119)
{
    ASSERT_EQ(redupe_gf_sub(1, 113), 112);
    ASSERT_EQ(redupe_gf_sub(113, 1), 112);
}

TEST(GfSub, Test120)
{
    ASSERT_EQ(redupe_gf_sub(1, 95), 94);
    ASSERT_EQ(redupe_gf_sub(95, 1), 94);
}

TEST(GfSub, Test121)
{
    ASSERT_EQ(redupe_gf_sub(1, 222), 223);
    ASSERT_EQ(redupe_gf_sub(222, 1), 223);
}

TEST(GfSub, Test122)
{
    ASSERT_EQ(redupe_gf_sub(1, 46), 47);
    ASSERT_EQ(redupe_gf_sub(46, 1), 47);
}

TEST(GfSub, Test123)
{
    ASSERT_EQ(redupe_gf_sub(1, 209), 208);
    ASSERT_EQ(redupe_gf_sub(209, 1), 208);
}

TEST(GfSub, Test124)
{
    ASSERT_EQ(redupe_gf_sub(1, 65), 64);
    ASSERT_EQ(redupe_gf_sub(65, 1), 64);
}

TEST(GfSub, Test125)
{
    ASSERT_EQ(redupe_gf_sub(1, 25), 24);
    ASSERT_EQ(redupe_gf_sub(25, 1), 24);
}

TEST(GfSub, Test126)
{
    ASSERT_EQ(redupe_gf_sub(1, 175), 174);
    ASSERT_EQ(redupe_gf_sub(175, 1), 174);
}

TEST(GfSub, Test127)
{
    ASSERT_EQ(redupe_gf_sub(1, 97), 96);
    ASSERT_EQ(redupe_gf_sub(97, 1), 96);
}

TEST(GfSub, Test128)
{
    ASSERT_EQ(redupe_gf_sub(1, 183), 182);
    ASSERT_EQ(redupe_gf_sub(183, 1), 182);
}

TEST(GfSub, Test129)
{
    ASSERT_EQ(redupe_gf_sub(1, 87), 86);
    ASSERT_EQ(redupe_gf_sub(87, 1), 86);
}

TEST(GfSub, Test130)
{
    ASSERT_EQ(redupe_gf_sub(1, 116), 117);
    ASSERT_EQ(redupe_gf_sub(116, 1), 117);
}

TEST(GfSub, Test131)
{
    ASSERT_EQ(redupe_gf_sub(1, 24), 25);
    ASSERT_EQ(redupe_gf_sub(24, 1), 25);
}

TEST(GfSub, Test132)
{
    ASSERT_EQ(redupe_gf_sub(1, 233), 232);
    ASSERT_EQ(redupe_gf_sub(233, 1), 232);
}

TEST(GfSub, Test133)
{
    ASSERT_EQ(redupe_gf_sub(1, 144), 145);
    ASSERT_EQ(redupe_gf_sub(144, 1), 145);
}

TEST(GfSub, Test134)
{
    ASSERT_EQ(redupe_gf_sub(1, 118), 119);
    ASSERT_EQ(redupe_gf_sub(118, 1), 119);
}

TEST(GfSub, Test135)
{
    ASSERT_EQ(redupe_gf_sub(1, 223), 222);
    ASSERT_EQ(redupe_gf_sub(223, 1), 222);
}

TEST(GfSub, Test136)
{
    ASSERT_EQ(redupe_gf_sub(1, 185), 184);
    ASSERT_EQ(redupe_gf_sub(185, 1), 184);
}

TEST(GfSub, Test137)
{
    ASSERT_EQ(redupe_gf_sub(1, 105), 104);
    ASSERT_EQ(redupe_gf_sub(105, 1), 104);
}

TEST(GfSub, Test138)
{
    ASSERT_EQ(redupe_gf_sub(1, 76), 77);
    ASSERT_EQ(redupe_gf_sub(76, 1), 77);
}

TEST(GfSub, Test139)
{
    ASSERT_EQ(redupe_gf_sub(1, 218), 219);
    ASSERT_EQ(redupe_gf_sub(218, 1), 219);
}

TEST(GfSub, Test140)
{
    ASSERT_EQ(redupe_gf_sub(1, 145), 144);
    ASSERT_EQ(redupe_gf_sub(145, 1), 144);
}

TEST(GfSub, Test141)
{
    ASSERT_EQ(redupe_gf_sub(1, 100), 101);
    ASSERT_EQ(redupe_gf_sub(100, 1), 101);
}

TEST(GfSub, Test142)
{
    ASSERT_EQ(redupe_gf_sub(1, 141), 140);
    ASSERT_EQ(redupe_gf_sub(141, 1), 140);
}

TEST(GfSub, Test143)
{
    ASSERT_EQ(redupe_gf_sub(1, 22), 23);
    ASSERT_EQ(redupe_gf_sub(22, 1), 23);
}

TEST(GfSub, Test144)
{
    ASSERT_EQ(redupe_gf_sub(1, 16), 17);
    ASSERT_EQ(redupe_gf_sub(16, 1), 17);
}

TEST(GfSub, Test145)
{
    ASSERT_EQ(redupe_gf_sub(1, 216), 217);
    ASSERT_EQ(redupe_gf_sub(216, 1), 217);
}

TEST(GfSub, Test146)
{
    ASSERT_EQ(redupe_gf_sub(1, 228), 229);
    ASSERT_EQ(redupe_gf_sub(228, 1), 229);
}

TEST(GfSub, Test147)
{
    ASSERT_EQ(redupe_gf_sub(1, 226), 227);
    ASSERT_EQ(redupe_gf_sub(226, 1), 227);
}

TEST(GfSub, Test148)
{
    ASSERT_EQ(redupe_gf_sub(1, 182), 183);
    ASSERT_EQ(redupe_gf_sub(182, 1), 183);
}

TEST(GfSub, Test149)
{
    ASSERT_EQ(redupe_gf_sub(1, 202), 203);
    ASSERT_EQ(redupe_gf_sub(202, 1), 203);
}

TEST(GfSub, Test150)
{
    ASSERT_EQ(redupe_gf_sub(1, 210), 211);
    ASSERT_EQ(redupe_gf_sub(210, 1), 211);
}

TEST(GfSub, Test151)
{
    ASSERT_EQ(redupe_gf_sub(1, 80), 81);
    ASSERT_EQ(redupe_gf_sub(80, 1), 81);
}

TEST(GfSub, Test152)
{
    ASSERT_EQ(redupe_gf_sub(1, 134), 135);
    ASSERT_EQ(redupe_gf_sub(134, 1), 135);
}

TEST(GfSub, Test153)
{
    ASSERT_EQ(redupe_gf_sub(1, 230), 231);
    ASSERT_EQ(redupe_gf_sub(230, 1), 231);
}

TEST(GfSub, Test154)
{
    ASSERT_EQ(redupe_gf_sub(1, 191), 190);
    ASSERT_EQ(redupe_gf_sub(191, 1), 190);
}

TEST(GfSub, Test155)
{
    ASSERT_EQ(redupe_gf_sub(1, 98), 99);
    ASSERT_EQ(redupe_gf_sub(98, 1), 99);
}

TEST(GfSub, Test156)
{
    ASSERT_EQ(redupe_gf_sub(1, 200), 201);
    ASSERT_EQ(redupe_gf_sub(200, 1), 201);
}

TEST(GfSub, Test157)
{
    ASSERT_EQ(redupe_gf_sub(1, 56), 57);
    ASSERT_EQ(redupe_gf_sub(56, 1), 57);
}

TEST(GfSub, Test158)
{
    ASSERT_EQ(redupe_gf_sub(1, 153), 152);
    ASSERT_EQ(redupe_gf_sub(153, 1), 152);
}

TEST(GfSub, Test159)
{
    ASSERT_EQ(redupe_gf_sub(1, 220), 221);
    ASSERT_EQ(redupe_gf_sub(220, 1), 221);
}

TEST(GfSub, Test160)
{
    ASSERT_EQ(redupe_gf_sub(1, 186), 187);
    ASSERT_EQ(redupe_gf_sub(186, 1), 187);
}

TEST(GfSub, Test161)
{
    ASSERT_EQ(redupe_gf_sub(1, 7), 6);
    ASSERT_EQ(redupe_gf_sub(7, 1), 6);
}

TEST(GfSub, Test162)
{
    ASSERT_EQ(redupe_gf_sub(1, 13), 12);
    ASSERT_EQ(redupe_gf_sub(13, 1), 12);
}

TEST(GfSub, Test163)
{
    ASSERT_EQ(redupe_gf_sub(1, 170), 171);
    ASSERT_EQ(redupe_gf_sub(170, 1), 171);
}

TEST(GfSub, Test164)
{
    ASSERT_EQ(redupe_gf_sub(1, 152), 153);
    ASSERT_EQ(redupe_gf_sub(152, 1), 153);
}

TEST(GfSub, Test165)
{
    ASSERT_EQ(redupe_gf_sub(1, 11), 10);
    ASSERT_EQ(redupe_gf_sub(11, 1), 10);
}

TEST(GfSub, Test166)
{
    ASSERT_EQ(redupe_gf_sub(1, 17), 16);
    ASSERT_EQ(redupe_gf_sub(17, 1), 16);
}

TEST(GfSub, Test167)
{
    ASSERT_EQ(redupe_gf_sub(1, 236), 237);
    ASSERT_EQ(redupe_gf_sub(236, 1), 237);
}

TEST(GfSub, Test168)
{
    ASSERT_EQ(redupe_gf_sub(1, 79), 78);
    ASSERT_EQ(redupe_gf_sub(79, 1), 78);
}

TEST(GfSub, Test169)
{
    ASSERT_EQ(redupe_gf_sub(1, 33), 32);
    ASSERT_EQ(redupe_gf_sub(33, 1), 32);
}

TEST(GfSub, Test170)
{
    ASSERT_EQ(redupe_gf_sub(1, 21), 20);
    ASSERT_EQ(redupe_gf_sub(21, 1), 20);
}

TEST(GfSub, Test171)
{
    ASSERT_EQ(redupe_gf_sub(1, 84), 85);
    ASSERT_EQ(redupe_gf_sub(84, 1), 85);
}

TEST(GfSub, Test172)
{
    ASSERT_EQ(redupe_gf_sub(1, 154), 155);
    ASSERT_EQ(redupe_gf_sub(154, 1), 155);
}

TEST(GfSub, Test173)
{
    ASSERT_EQ(redupe_gf_sub(1, 198), 199);
    ASSERT_EQ(redupe_gf_sub(198, 1), 199);
}

TEST(GfSub, Test174)
{
    ASSERT_EQ(redupe_gf_sub(1, 114), 115);
    ASSERT_EQ(redupe_gf_sub(114, 1), 115);
}

TEST(GfSub, Test175)
{
    ASSERT_EQ(redupe_gf_sub(1, 109), 108);
    ASSERT_EQ(redupe_gf_sub(109, 1), 108);
}

TEST(GfSub, Test176)
{
    ASSERT_EQ(redupe_gf_sub(1, 147), 146);
    ASSERT_EQ(redupe_gf_sub(147, 1), 146);
}

TEST(GfSub, Test177)
{
    ASSERT_EQ(redupe_gf_sub(1, 237), 236);
    ASSERT_EQ(redupe_gf_sub(237, 1), 236);
}

TEST(GfSub, Test178)
{
    ASSERT_EQ(redupe_gf_sub(1, 62), 63);
    ASSERT_EQ(redupe_gf_sub(62, 1), 63);
}

TEST(GfSub, Test179)
{
    ASSERT_EQ(redupe_gf_sub(1, 129), 128);
    ASSERT_EQ(redupe_gf_sub(129, 1), 128);
}

TEST(GfSub, Test180)
{
    ASSERT_EQ(redupe_gf_sub(1, 189), 188);
    ASSERT_EQ(redupe_gf_sub(189, 1), 188);
}

TEST(GfSub, Test181)
{
    ASSERT_EQ(redupe_gf_sub(1, 163), 162);
    ASSERT_EQ(redupe_gf_sub(163, 1), 162);
}

TEST(GfSub, Test182)
{
    ASSERT_EQ(redupe_gf_sub(1, 92), 93);
    ASSERT_EQ(redupe_gf_sub(92, 1), 93);
}

TEST(GfSub, Test183)
{
    ASSERT_EQ(redupe_gf_sub(1, 151), 150);
    ASSERT_EQ(redupe_gf_sub(151, 1), 150);
}

TEST(GfSub, Test184)
{
    ASSERT_EQ(redupe_gf_sub(1, 23), 22);
    ASSERT_EQ(redupe_gf_sub(23, 1), 22);
}

TEST(GfSub, Test185)
{
    ASSERT_EQ(redupe_gf_sub(1, 102), 103);
    ASSERT_EQ(redupe_gf_sub(102, 1), 103);
}

TEST(GfSub, Test186)
{
    ASSERT_EQ(redupe_gf_sub(1, 74), 75);
    ASSERT_EQ(redupe_gf_sub(74, 1), 75);
}

TEST(GfSub, Test187)
{
    ASSERT_EQ(redupe_gf_sub(1, 43), 42);
    ASSERT_EQ(redupe_gf_sub(43, 1), 42);
}

TEST(GfSub, Test188)
{
    ASSERT_EQ(redupe_gf_sub(1, 101), 100);
    ASSERT_EQ(redupe_gf_sub(101, 1), 100);
}

TEST(GfSub, Test189)
{
    ASSERT_EQ(redupe_gf_sub(1, 91), 90);
    ASSERT_EQ(redupe_gf_sub(91, 1), 90);
}

TEST(GfSub, Test190)
{
    ASSERT_EQ(redupe_gf_sub(1, 196), 197);
    ASSERT_EQ(redupe_gf_sub(196, 1), 197);
}

TEST(GfSub, Test191)
{
    ASSERT_EQ(redupe_gf_sub(1, 99), 98);
    ASSERT_EQ(redupe_gf_sub(99, 1), 98);
}

TEST(GfSub, Test192)
{
    ASSERT_EQ(redupe_gf_sub(1, 103), 102);
    ASSERT_EQ(redupe_gf_sub(103, 1), 102);
}

TEST(GfSub, Test193)
{
    ASSERT_EQ(redupe_gf_sub(1, 77), 76);
    ASSERT_EQ(redupe_gf_sub(77, 1), 76);
}

TEST(GfSub, Test194)
{
    ASSERT_EQ(redupe_gf_sub(1, 199), 198);
    ASSERT_EQ(redupe_gf_sub(199, 1), 198);
}

TEST(GfSub, Test195)
{
    ASSERT_EQ(redupe_gf_sub(1, 231), 230);
    ASSERT_EQ(redupe_gf_sub(231, 1), 230);
}

TEST(GfSub, Test196)
{
    ASSERT_EQ(redupe_gf_sub(1, 58), 59);
    ASSERT_EQ(redupe_gf_sub(58, 1), 59);
}

TEST(GfSub, Test197)
{
    ASSERT_EQ(redupe_gf_sub(1, 158), 159);
    ASSERT_EQ(redupe_gf_sub(158, 1), 159);
}

TEST(GfSub, Test198)
{
    ASSERT_EQ(redupe_gf_sub(1, 241), 240);
    ASSERT_EQ(redupe_gf_sub(241, 1), 240);
}

TEST(GfSub, Test199)
{
    ASSERT_EQ(redupe_gf_sub(1, 207), 206);
    ASSERT_EQ(redupe_gf_sub(207, 1), 206);
}

TEST(GfSub, Test200)
{
    ASSERT_EQ(redupe_gf_sub(1, 217), 216);
    ASSERT_EQ(redupe_gf_sub(217, 1), 216);
}

TEST(GfSub, Test201)
{
    ASSERT_EQ(redupe_gf_sub(1, 115), 114);
    ASSERT_EQ(redupe_gf_sub(115, 1), 114);
}

TEST(GfSub, Test202)
{
    ASSERT_EQ(redupe_gf_sub(1, 59), 58);
    ASSERT_EQ(redupe_gf_sub(59, 1), 58);
}

TEST(GfSub, Test203)
{
    ASSERT_EQ(redupe_gf_sub(1, 133), 132);
    ASSERT_EQ(redupe_gf_sub(133, 1), 132);
}

TEST(GfSub, Test204)
{
    ASSERT_EQ(redupe_gf_sub(1, 66), 67);
    ASSERT_EQ(redupe_gf_sub(66, 1), 67);
}

TEST(GfSub, Test205)
{
    ASSERT_EQ(redupe_gf_sub(1, 169), 168);
    ASSERT_EQ(redupe_gf_sub(169, 1), 168);
}

TEST(GfSub, Test206)
{
    ASSERT_EQ(redupe_gf_sub(1, 204), 205);
    ASSERT_EQ(redupe_gf_sub(204, 1), 205);
}

TEST(GfSub, Test207)
{
    ASSERT_EQ(redupe_gf_sub(1, 248), 249);
    ASSERT_EQ(redupe_gf_sub(248, 1), 249);
}

TEST(GfSub, Test208)
{
    ASSERT_EQ(redupe_gf_sub(1, 47), 46);
    ASSERT_EQ(redupe_gf_sub(47, 1), 46);
}

TEST(GfSub, Test209)
{
    ASSERT_EQ(redupe_gf_sub(1, 120), 121);
    ASSERT_EQ(redupe_gf_sub(120, 1), 121);
}

TEST(GfSub, Test210)
{
    ASSERT_EQ(redupe_gf_sub(1, 225), 224);
    ASSERT_EQ(redupe_gf_sub(225, 1), 224);
}

TEST(GfSub, Test211)
{
    ASSERT_EQ(redupe_gf_sub(1, 110), 111);
    ASSERT_EQ(redupe_gf_sub(110, 1), 111);
}

TEST(GfSub, Test212)
{
    ASSERT_EQ(redupe_gf_sub(1, 219), 218);
    ASSERT_EQ(redupe_gf_sub(219, 1), 218);
}

TEST(GfSub, Test213)
{
    ASSERT_EQ(redupe_gf_sub(1, 63), 62);
    ASSERT_EQ(redupe_gf_sub(63, 1), 62);
}

TEST(GfSub, Test214)
{
    ASSERT_EQ(redupe_gf_sub(1, 197), 196);
    ASSERT_EQ(redupe_gf_sub(197, 1), 196);
}

TEST(GfSub, Test215)
{
    ASSERT_EQ(redupe_gf_sub(1, 184), 185);
    ASSERT_EQ(redupe_gf_sub(184, 1), 185);
}

TEST(GfSub, Test216)
{
    ASSERT_EQ(redupe_gf_sub(1, 160), 161);
    ASSERT_EQ(redupe_gf_sub(160, 1), 161);
}

TEST(GfSub, Test217)
{
    ASSERT_EQ(redupe_gf_sub(1, 28), 29);
    ASSERT_EQ(redupe_gf_sub(28, 1), 29);
}

TEST(GfSub, Test218)
{
    ASSERT_EQ(redupe_gf_sub(1, 15), 14);
    ASSERT_EQ(redupe_gf_sub(15, 1), 14);
}

TEST(GfSub, Test219)
{
    ASSERT_EQ(redupe_gf_sub(1, 190), 191);
    ASSERT_EQ(redupe_gf_sub(190, 1), 191);
}

TEST(GfSub, Test220)
{
    ASSERT_EQ(redupe_gf_sub(1, 150), 151);
    ASSERT_EQ(redupe_gf_sub(150, 1), 151);
}

TEST(GfSub, Test221)
{
    ASSERT_EQ(redupe_gf_sub(1, 174), 175);
    ASSERT_EQ(redupe_gf_sub(174, 1), 175);
}

TEST(GfSub, Test222)
{
    ASSERT_EQ(redupe_gf_sub(1, 193), 192);
    ASSERT_EQ(redupe_gf_sub(193, 1), 192);
}

TEST(GfSub, Test223)
{
    ASSERT_EQ(redupe_gf_sub(1, 40), 41);
    ASSERT_EQ(redupe_gf_sub(40, 1), 41);
}

TEST(GfSub, Test224)
{
    ASSERT_EQ(redupe_gf_sub(1, 89), 88);
    ASSERT_EQ(redupe_gf_sub(89, 1), 88);
}

TEST(GfSub, Test225)
{
    ASSERT_EQ(redupe_gf_sub(1, 112), 113);
    ASSERT_EQ(redupe_gf_sub(112, 1), 113);
}
