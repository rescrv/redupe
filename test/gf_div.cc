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

TEST(GfDiv, Test0)
{
    ASSERT_EQ(redupe_gf_div(77, 1), 77);
}

TEST(GfDiv, Test1)
{
    ASSERT_EQ(redupe_gf_div(186, 36), 127);
}

TEST(GfDiv, Test2)
{
    ASSERT_EQ(redupe_gf_div(240, 87), 77);
}

TEST(GfDiv, Test3)
{
    ASSERT_EQ(redupe_gf_div(150, 1), 150);
}

TEST(GfDiv, Test4)
{
    ASSERT_EQ(redupe_gf_div(99, 11), 150);
}

TEST(GfDiv, Test5)
{
    ASSERT_EQ(redupe_gf_div(185, 220), 133);
}

TEST(GfDiv, Test6)
{
    ASSERT_EQ(redupe_gf_div(202, 1), 202);
}

TEST(GfDiv, Test7)
{
    ASSERT_EQ(redupe_gf_div(78, 2), 39);
}

TEST(GfDiv, Test8)
{
    ASSERT_EQ(redupe_gf_div(140, 245), 202);
}

TEST(GfDiv, Test9)
{
    ASSERT_EQ(redupe_gf_div(172, 220), 39);
}

TEST(GfDiv, Test10)
{
    ASSERT_EQ(redupe_gf_div(90, 56), 202);
}

TEST(GfDiv, Test11)
{
    ASSERT_EQ(redupe_gf_div(157, 210), 61);
}

TEST(GfDiv, Test12)
{
    ASSERT_EQ(redupe_gf_div(178, 171), 39);
}

TEST(GfDiv, Test13)
{
    ASSERT_EQ(redupe_gf_div(64, 165), 202);
}

TEST(GfDiv, Test14)
{
    ASSERT_EQ(redupe_gf_div(78, 111), 61);
}

TEST(GfDiv, Test15)
{
    ASSERT_EQ(redupe_gf_div(224, 125), 239);
}

TEST(GfDiv, Test16)
{
    ASSERT_EQ(redupe_gf_div(8, 1), 8);
}

TEST(GfDiv, Test17)
{
    ASSERT_EQ(redupe_gf_div(46, 204), 8);
}

TEST(GfDiv, Test18)
{
    ASSERT_EQ(redupe_gf_div(238, 124), 149);
}

TEST(GfDiv, Test19)
{
    ASSERT_EQ(redupe_gf_div(240, 126), 126);
}

TEST(GfDiv, Test20)
{
    ASSERT_EQ(redupe_gf_div(214, 211), 8);
}

TEST(GfDiv, Test21)
{
    ASSERT_EQ(redupe_gf_div(195, 157), 149);
}

TEST(GfDiv, Test22)
{
    ASSERT_EQ(redupe_gf_div(13, 130), 126);
}

TEST(GfDiv, Test23)
{
    ASSERT_EQ(redupe_gf_div(113, 151), 36);
}

TEST(GfDiv, Test24)
{
    ASSERT_EQ(redupe_gf_div(179, 252), 8);
}

TEST(GfDiv, Test25)
{
    ASSERT_EQ(redupe_gf_div(130, 29), 149);
}

TEST(GfDiv, Test26)
{
    ASSERT_EQ(redupe_gf_div(190, 1), 190);
}

TEST(GfDiv, Test27)
{
    ASSERT_EQ(redupe_gf_div(104, 181), 190);
}

TEST(GfDiv, Test28)
{
    ASSERT_EQ(redupe_gf_div(150, 234), 183);
}

TEST(GfDiv, Test29)
{
    ASSERT_EQ(redupe_gf_div(184, 227), 178);
}

TEST(GfDiv, Test30)
{
    ASSERT_EQ(redupe_gf_div(55, 59), 190);
}

TEST(GfDiv, Test31)
{
    ASSERT_EQ(redupe_gf_div(123, 19), 183);
}

TEST(GfDiv, Test32)
{
    ASSERT_EQ(redupe_gf_div(91, 79), 178);
}

TEST(GfDiv, Test33)
{
    ASSERT_EQ(redupe_gf_div(89, 77), 190);
}

TEST(GfDiv, Test34)
{
    ASSERT_EQ(redupe_gf_div(75, 157), 41);
}

TEST(GfDiv, Test35)
{
    ASSERT_EQ(redupe_gf_div(233, 127), 183);
}

TEST(GfDiv, Test36)
{
    ASSERT_EQ(redupe_gf_div(78, 120), 178);
}

TEST(GfDiv, Test37)
{
    ASSERT_EQ(redupe_gf_div(154, 231), 190);
}

TEST(GfDiv, Test38)
{
    ASSERT_EQ(redupe_gf_div(222, 215), 41);
}

TEST(GfDiv, Test39)
{
    ASSERT_EQ(redupe_gf_div(137, 150), 164);
}

TEST(GfDiv, Test40)
{
    ASSERT_EQ(redupe_gf_div(28, 181), 183);
}

TEST(GfDiv, Test41)
{
    ASSERT_EQ(redupe_gf_div(30, 59), 178);
}

TEST(GfDiv, Test42)
{
    ASSERT_EQ(redupe_gf_div(167, 58), 200);
}

TEST(GfDiv, Test43)
{
    ASSERT_EQ(redupe_gf_div(95, 142), 190);
}

TEST(GfDiv, Test44)
{
    ASSERT_EQ(redupe_gf_div(74, 77), 41);
}

TEST(GfDiv, Test45)
{
    ASSERT_EQ(redupe_gf_div(72, 60), 164);
}

TEST(GfDiv, Test46)
{
    ASSERT_EQ(redupe_gf_div(201, 59), 183);
}

TEST(GfDiv, Test47)
{
    ASSERT_EQ(redupe_gf_div(132, 149), 178);
}

TEST(GfDiv, Test48)
{
    ASSERT_EQ(redupe_gf_div(166, 232), 200);
}

TEST(GfDiv, Test49)
{
    ASSERT_EQ(redupe_gf_div(252, 136), 190);
}

TEST(GfDiv, Test50)
{
    ASSERT_EQ(redupe_gf_div(235, 254), 41);
}

TEST(GfDiv, Test51)
{
    ASSERT_EQ(redupe_gf_div(203, 127), 164);
}

TEST(GfDiv, Test52)
{
    ASSERT_EQ(redupe_gf_div(169, 247), 183);
}

TEST(GfDiv, Test53)
{
    ASSERT_EQ(redupe_gf_div(108, 78), 195);
}

TEST(GfDiv, Test54)
{
    ASSERT_EQ(redupe_gf_div(197, 126), 178);
}

TEST(GfDiv, Test55)
{
    ASSERT_EQ(redupe_gf_div(173, 93), 200);
}

TEST(GfDiv, Test56)
{
    ASSERT_EQ(redupe_gf_div(31, 70), 190);
}

TEST(GfDiv, Test57)
{
    ASSERT_EQ(redupe_gf_div(91, 28), 41);
}

TEST(GfDiv, Test58)
{
    ASSERT_EQ(redupe_gf_div(192, 158), 164);
}

TEST(GfDiv, Test59)
{
    ASSERT_EQ(redupe_gf_div(155, 1), 155);
}

TEST(GfDiv, Test60)
{
    ASSERT_EQ(redupe_gf_div(108, 91), 183);
}

TEST(GfDiv, Test61)
{
    ASSERT_EQ(redupe_gf_div(153, 104), 195);
}

TEST(GfDiv, Test62)
{
    ASSERT_EQ(redupe_gf_div(177, 1), 177);
}

TEST(GfDiv, Test63)
{
    ASSERT_EQ(redupe_gf_div(188, 44), 177);
}

TEST(GfDiv, Test64)
{
    ASSERT_EQ(redupe_gf_div(3, 138), 105);
}

TEST(GfDiv, Test65)
{
    ASSERT_EQ(redupe_gf_div(156, 31), 219);
}

TEST(GfDiv, Test66)
{
    ASSERT_EQ(redupe_gf_div(227, 223), 177);
}

TEST(GfDiv, Test67)
{
    ASSERT_EQ(redupe_gf_div(2, 7), 105);
}

TEST(GfDiv, Test68)
{
    ASSERT_EQ(redupe_gf_div(246, 216), 219);
}

TEST(GfDiv, Test69)
{
    ASSERT_EQ(redupe_gf_div(166, 36), 139);
}

TEST(GfDiv, Test70)
{
    ASSERT_EQ(redupe_gf_div(18, 33), 177);
}

TEST(GfDiv, Test71)
{
    ASSERT_EQ(redupe_gf_div(201, 172), 105);
}

TEST(GfDiv, Test72)
{
    ASSERT_EQ(redupe_gf_div(40, 15), 243);
}

TEST(GfDiv, Test73)
{
    ASSERT_EQ(redupe_gf_div(220, 116), 219);
}

TEST(GfDiv, Test74)
{
    ASSERT_EQ(redupe_gf_div(21, 115), 139);
}

TEST(GfDiv, Test75)
{
    ASSERT_EQ(redupe_gf_div(124, 48), 177);
}

TEST(GfDiv, Test76)
{
    ASSERT_EQ(redupe_gf_div(67, 106), 105);
}

TEST(GfDiv, Test77)
{
    ASSERT_EQ(redupe_gf_div(191, 149), 243);
}

TEST(GfDiv, Test78)
{
    ASSERT_EQ(redupe_gf_div(76, 113), 219);
}

TEST(GfDiv, Test79)
{
    ASSERT_EQ(redupe_gf_div(246, 65), 139);
}

TEST(GfDiv, Test80)
{
    ASSERT_EQ(redupe_gf_div(46, 238), 177);
}

TEST(GfDiv, Test81)
{
    ASSERT_EQ(redupe_gf_div(92, 202), 105);
}

TEST(GfDiv, Test82)
{
    ASSERT_EQ(redupe_gf_div(20, 240), 61);
}

TEST(GfDiv, Test83)
{
    ASSERT_EQ(redupe_gf_div(65, 202), 199);
}

TEST(GfDiv, Test84)
{
    ASSERT_EQ(redupe_gf_div(21, 99), 243);
}

TEST(GfDiv, Test85)
{
    ASSERT_EQ(redupe_gf_div(54, 101), 219);
}

TEST(GfDiv, Test86)
{
    ASSERT_EQ(redupe_gf_div(144, 233), 139);
}

TEST(GfDiv, Test87)
{
    ASSERT_EQ(redupe_gf_div(201, 130), 177);
}

TEST(GfDiv, Test88)
{
    ASSERT_EQ(redupe_gf_div(48, 93), 61);
}

TEST(GfDiv, Test89)
{
    ASSERT_EQ(redupe_gf_div(101, 162), 199);
}

TEST(GfDiv, Test90)
{
    ASSERT_EQ(redupe_gf_div(211, 13), 243);
}

TEST(GfDiv, Test91)
{
    ASSERT_EQ(redupe_gf_div(171, 103), 153);
}

TEST(GfDiv, Test92)
{
    ASSERT_EQ(redupe_gf_div(110, 58), 219);
}

TEST(GfDiv, Test93)
{
    ASSERT_EQ(redupe_gf_div(105, 30), 139);
}

TEST(GfDiv, Test94)
{
    ASSERT_EQ(redupe_gf_div(212, 89), 177);
}

TEST(GfDiv, Test95)
{
    ASSERT_EQ(redupe_gf_div(128, 221), 105);
}

TEST(GfDiv, Test96)
{
    ASSERT_EQ(redupe_gf_div(251, 64), 61);
}

TEST(GfDiv, Test97)
{
    ASSERT_EQ(redupe_gf_div(195, 1), 195);
}

TEST(GfDiv, Test98)
{
    ASSERT_EQ(redupe_gf_div(76, 160), 195);
}

TEST(GfDiv, Test99)
{
    ASSERT_EQ(redupe_gf_div(100, 131), 224);
}

TEST(GfDiv, Test100)
{
    ASSERT_EQ(redupe_gf_div(111, 17), 195);
}

TEST(GfDiv, Test101)
{
    ASSERT_EQ(redupe_gf_div(11, 140), 87);
}

TEST(GfDiv, Test102)
{
    ASSERT_EQ(redupe_gf_div(7, 108), 224);
}

TEST(GfDiv, Test103)
{
    ASSERT_EQ(redupe_gf_div(131, 192), 195);
}

TEST(GfDiv, Test104)
{
    ASSERT_EQ(redupe_gf_div(140, 124), 87);
}

TEST(GfDiv, Test105)
{
    ASSERT_EQ(redupe_gf_div(195, 178), 32);
}

TEST(GfDiv, Test106)
{
    ASSERT_EQ(redupe_gf_div(207, 119), 224);
}

TEST(GfDiv, Test107)
{
    ASSERT_EQ(redupe_gf_div(140, 254), 195);
}

TEST(GfDiv, Test108)
{
    ASSERT_EQ(redupe_gf_div(174, 2), 87);
}

TEST(GfDiv, Test109)
{
    ASSERT_EQ(redupe_gf_div(200, 65), 32);
}

TEST(GfDiv, Test110)
{
    ASSERT_EQ(redupe_gf_div(39, 214), 224);
}

TEST(GfDiv, Test111)
{
    ASSERT_EQ(redupe_gf_div(147, 119), 30);
}

TEST(GfDiv, Test112)
{
    ASSERT_EQ(redupe_gf_div(181, 231), 195);
}

TEST(GfDiv, Test113)
{
    ASSERT_EQ(redupe_gf_div(148, 13), 87);
}

TEST(GfDiv, Test114)
{
    ASSERT_EQ(redupe_gf_div(228, 170), 32);
}

TEST(GfDiv, Test115)
{
    ASSERT_EQ(redupe_gf_div(40, 26), 224);
}

TEST(GfDiv, Test116)
{
    ASSERT_EQ(redupe_gf_div(134, 201), 30);
}

TEST(GfDiv, Test117)
{
    ASSERT_EQ(redupe_gf_div(29, 143), 22);
}

TEST(GfDiv, Test118)
{
    ASSERT_EQ(redupe_gf_div(17, 66), 195);
}

TEST(GfDiv, Test119)
{
    ASSERT_EQ(redupe_gf_div(170, 155), 87);
}

TEST(GfDiv, Test120)
{
    ASSERT_EQ(redupe_gf_div(148, 39), 32);
}

TEST(GfDiv, Test121)
{
    ASSERT_EQ(redupe_gf_div(135, 190), 224);
}

TEST(GfDiv, Test122)
{
    ASSERT_EQ(redupe_gf_div(67, 234), 30);
}

TEST(GfDiv, Test123)
{
    ASSERT_EQ(redupe_gf_div(105, 137), 22);
}

TEST(GfDiv, Test124)
{
    ASSERT_EQ(redupe_gf_div(128, 45), 250);
}

TEST(GfDiv, Test125)
{
    ASSERT_EQ(redupe_gf_div(97, 26), 195);
}

TEST(GfDiv, Test126)
{
    ASSERT_EQ(redupe_gf_div(32, 188), 87);
}

TEST(GfDiv, Test127)
{
    ASSERT_EQ(redupe_gf_div(100, 174), 32);
}

TEST(GfDiv, Test128)
{
    ASSERT_EQ(redupe_gf_div(147, 179), 224);
}

TEST(GfDiv, Test129)
{
    ASSERT_EQ(redupe_gf_div(174, 62), 30);
}

TEST(GfDiv, Test130)
{
    ASSERT_EQ(redupe_gf_div(144, 58), 43);
}

TEST(GfDiv, Test131)
{
    ASSERT_EQ(redupe_gf_div(201, 53), 22);
}

TEST(GfDiv, Test132)
{
    ASSERT_EQ(redupe_gf_div(132, 170), 250);
}

TEST(GfDiv, Test133)
{
    ASSERT_EQ(redupe_gf_div(32, 238), 195);
}

TEST(GfDiv, Test134)
{
    ASSERT_EQ(redupe_gf_div(166, 45), 87);
}

TEST(GfDiv, Test135)
{
    ASSERT_EQ(redupe_gf_div(116, 32), 32);
}

TEST(GfDiv, Test136)
{
    ASSERT_EQ(redupe_gf_div(162, 64), 224);
}

TEST(GfDiv, Test137)
{
    ASSERT_EQ(redupe_gf_div(89, 218), 30);
}

TEST(GfDiv, Test138)
{
    ASSERT_EQ(redupe_gf_div(252, 167), 43);
}

TEST(GfDiv, Test139)
{
    ASSERT_EQ(redupe_gf_div(190, 231), 22);
}

TEST(GfDiv, Test140)
{
    ASSERT_EQ(redupe_gf_div(51, 79), 250);
}

TEST(GfDiv, Test141)
{
    ASSERT_EQ(redupe_gf_div(88, 217), 77);
}

TEST(GfDiv, Test142)
{
    ASSERT_EQ(redupe_gf_div(100, 251), 195);
}

TEST(GfDiv, Test143)
{
    ASSERT_EQ(redupe_gf_div(139, 70), 87);
}

TEST(GfDiv, Test144)
{
    ASSERT_EQ(redupe_gf_div(235, 244), 32);
}

TEST(GfDiv, Test145)
{
    ASSERT_EQ(redupe_gf_div(223, 42), 224);
}

TEST(GfDiv, Test146)
{
    ASSERT_EQ(redupe_gf_div(75, 136), 30);
}

TEST(GfDiv, Test147)
{
    ASSERT_EQ(redupe_gf_div(16, 223), 229);
}

TEST(GfDiv, Test148)
{
    ASSERT_EQ(redupe_gf_div(159, 187), 43);
}

TEST(GfDiv, Test149)
{
    ASSERT_EQ(redupe_gf_div(4, 45), 22);
}

TEST(GfDiv, Test150)
{
    ASSERT_EQ(redupe_gf_div(79, 41), 250);
}

TEST(GfDiv, Test151)
{
    ASSERT_EQ(redupe_gf_div(170, 64), 77);
}

TEST(GfDiv, Test152)
{
    ASSERT_EQ(redupe_gf_div(11, 234), 195);
}

TEST(GfDiv, Test153)
{
    ASSERT_EQ(redupe_gf_div(238, 103), 87);
}

TEST(GfDiv, Test154)
{
    ASSERT_EQ(redupe_gf_div(129, 104), 32);
}

TEST(GfDiv, Test155)
{
    ASSERT_EQ(redupe_gf_div(141, 54), 224);
}

TEST(GfDiv, Test156)
{
    ASSERT_EQ(redupe_gf_div(208, 157), 30);
}

TEST(GfDiv, Test157)
{
    ASSERT_EQ(redupe_gf_div(8, 225), 229);
}

TEST(GfDiv, Test158)
{
    ASSERT_EQ(redupe_gf_div(33, 255), 43);
}

TEST(GfDiv, Test159)
{
    ASSERT_EQ(redupe_gf_div(41, 99), 22);
}

TEST(GfDiv, Test160)
{
    ASSERT_EQ(redupe_gf_div(26, 248), 250);
}

TEST(GfDiv, Test161)
{
    ASSERT_EQ(redupe_gf_div(232, 33), 133);
}

TEST(GfDiv, Test162)
{
    ASSERT_EQ(redupe_gf_div(131, 68), 77);
}

TEST(GfDiv, Test163)
{
    ASSERT_EQ(redupe_gf_div(73, 65), 195);
}

TEST(GfDiv, Test164)
{
    ASSERT_EQ(redupe_gf_div(39, 24), 32);
}

TEST(GfDiv, Test165)
{
    ASSERT_EQ(redupe_gf_div(17, 73), 224);
}

TEST(GfDiv, Test166)
{
    ASSERT_EQ(redupe_gf_div(225, 135), 30);
}

TEST(GfDiv, Test167)
{
    ASSERT_EQ(redupe_gf_div(214, 179), 229);
}

TEST(GfDiv, Test168)
{
    ASSERT_EQ(redupe_gf_div(163, 133), 43);
}

TEST(GfDiv, Test169)
{
    ASSERT_EQ(redupe_gf_div(46, 154), 22);
}

TEST(GfDiv, Test170)
{
    ASSERT_EQ(redupe_gf_div(35, 105), 250);
}

TEST(GfDiv, Test171)
{
    ASSERT_EQ(redupe_gf_div(119, 215), 133);
}

TEST(GfDiv, Test172)
{
    ASSERT_EQ(redupe_gf_div(74, 41), 77);
}

TEST(GfDiv, Test173)
{
    ASSERT_EQ(redupe_gf_div(198, 164), 38);
}

TEST(GfDiv, Test174)
{
    ASSERT_EQ(redupe_gf_div(46, 24), 68);
}

TEST(GfDiv, Test175)
{
    ASSERT_EQ(redupe_gf_div(145, 221), 195);
}

TEST(GfDiv, Test176)
{
    ASSERT_EQ(redupe_gf_div(1, 97), 87);
}

TEST(GfDiv, Test177)
{
    ASSERT_EQ(redupe_gf_div(210, 121), 68);
}

TEST(GfDiv, Test178)
{
    ASSERT_EQ(redupe_gf_div(94, 236), 224);
}

TEST(GfDiv, Test179)
{
    ASSERT_EQ(redupe_gf_div(251, 183), 30);
}

TEST(GfDiv, Test180)
{
    ASSERT_EQ(redupe_gf_div(169, 69), 229);
}

TEST(GfDiv, Test181)
{
    ASSERT_EQ(redupe_gf_div(74, 244), 222);
}

TEST(GfDiv, Test182)
{
    ASSERT_EQ(redupe_gf_div(93, 182), 43);
}

TEST(GfDiv, Test183)
{
    ASSERT_EQ(redupe_gf_div(185, 30), 22);
}

TEST(GfDiv, Test184)
{
    ASSERT_EQ(redupe_gf_div(22, 108), 250);
}

TEST(GfDiv, Test185)
{
    ASSERT_EQ(redupe_gf_div(2, 133), 133);
}

TEST(GfDiv, Test186)
{
    ASSERT_EQ(redupe_gf_div(162, 95), 77);
}

TEST(GfDiv, Test187)
{
    ASSERT_EQ(redupe_gf_div(174, 255), 38);
}

TEST(GfDiv, Test188)
{
    ASSERT_EQ(redupe_gf_div(130, 245), 195);
}

TEST(GfDiv, Test189)
{
    ASSERT_EQ(redupe_gf_div(203, 35), 87);
}

TEST(GfDiv, Test190)
{
    ASSERT_EQ(redupe_gf_div(150, 120), 68);
}

TEST(GfDiv, Test191)
{
    ASSERT_EQ(redupe_gf_div(144, 143), 224);
}

TEST(GfDiv, Test192)
{
    ASSERT_EQ(redupe_gf_div(250, 252), 30);
}

TEST(GfDiv, Test193)
{
    ASSERT_EQ(redupe_gf_div(131, 120), 229);
}

TEST(GfDiv, Test194)
{
    ASSERT_EQ(redupe_gf_div(255, 31), 222);
}

TEST(GfDiv, Test195)
{
    ASSERT_EQ(redupe_gf_div(52, 84), 43);
}

TEST(GfDiv, Test196)
{
    ASSERT_EQ(redupe_gf_div(25, 4), 65);
}

TEST(GfDiv, Test197)
{
    ASSERT_EQ(redupe_gf_div(107, 17), 22);
}

TEST(GfDiv, Test198)
{
    ASSERT_EQ(redupe_gf_div(221, 239), 250);
}

TEST(GfDiv, Test199)
{
    ASSERT_EQ(redupe_gf_div(20, 75), 133);
}

TEST(GfDiv, Test200)
{
    ASSERT_EQ(redupe_gf_div(7, 40), 77);
}

TEST(GfDiv, Test201)
{
    ASSERT_EQ(redupe_gf_div(143, 58), 38);
}

TEST(GfDiv, Test202)
{
    ASSERT_EQ(redupe_gf_div(14, 34), 67);
}

TEST(GfDiv, Test203)
{
    ASSERT_EQ(redupe_gf_div(16, 119), 195);
}

TEST(GfDiv, Test204)
{
    ASSERT_EQ(redupe_gf_div(244, 212), 87);
}

TEST(GfDiv, Test205)
{
    ASSERT_EQ(redupe_gf_div(107, 139), 68);
}

TEST(GfDiv, Test206)
{
    ASSERT_EQ(redupe_gf_div(163, 84), 224);
}

TEST(GfDiv, Test207)
{
    ASSERT_EQ(redupe_gf_div(22, 99), 30);
}

TEST(GfDiv, Test208)
{
    ASSERT_EQ(redupe_gf_div(77, 245), 229);
}

TEST(GfDiv, Test209)
{
    ASSERT_EQ(redupe_gf_div(181, 235), 222);
}

TEST(GfDiv, Test210)
{
    ASSERT_EQ(redupe_gf_div(152, 80), 43);
}

TEST(GfDiv, Test211)
{
    ASSERT_EQ(redupe_gf_div(28, 58), 65);
}

TEST(GfDiv, Test212)
{
    ASSERT_EQ(redupe_gf_div(15, 163), 22);
}

TEST(GfDiv, Test213)
{
    ASSERT_EQ(redupe_gf_div(180, 192), 250);
}

TEST(GfDiv, Test214)
{
    ASSERT_EQ(redupe_gf_div(61, 17), 133);
}

TEST(GfDiv, Test215)
{
    ASSERT_EQ(redupe_gf_div(73, 128), 77);
}

TEST(GfDiv, Test216)
{
    ASSERT_EQ(redupe_gf_div(228, 21), 38);
}

TEST(GfDiv, Test217)
{
    ASSERT_EQ(redupe_gf_div(6, 1), 6);
}

TEST(GfDiv, Test218)
{
    ASSERT_EQ(redupe_gf_div(220, 93), 92);
}

TEST(GfDiv, Test219)
{
    ASSERT_EQ(redupe_gf_div(83, 150), 6);
}

TEST(GfDiv, Test220)
{
    ASSERT_EQ(redupe_gf_div(179, 106), 92);
}

TEST(GfDiv, Test221)
{
    ASSERT_EQ(redupe_gf_div(118, 230), 195);
}

TEST(GfDiv, Test222)
{
    ASSERT_EQ(redupe_gf_div(142, 61), 6);
}

TEST(GfDiv, Test223)
{
    ASSERT_EQ(redupe_gf_div(176, 206), 92);
}

TEST(GfDiv, Test224)
{
    ASSERT_EQ(redupe_gf_div(208, 22), 151);
}

TEST(GfDiv, Test225)
{
    ASSERT_EQ(redupe_gf_div(84, 98), 195);
}

TEST(GfDiv, Test226)
{
    ASSERT_EQ(redupe_gf_div(121, 110), 6);
}

TEST(GfDiv, Test227)
{
    ASSERT_EQ(redupe_gf_div(63, 156), 92);
}

TEST(GfDiv, Test228)
{
    ASSERT_EQ(redupe_gf_div(89, 70), 191);
}

TEST(GfDiv, Test229)
{
    ASSERT_EQ(redupe_gf_div(245, 104), 151);
}

TEST(GfDiv, Test230)
{
    ASSERT_EQ(redupe_gf_div(94, 189), 195);
}

TEST(GfDiv, Test231)
{
    ASSERT_EQ(redupe_gf_div(190, 53), 6);
}

TEST(GfDiv, Test232)
{
    ASSERT_EQ(redupe_gf_div(74, 209), 92);
}

TEST(GfDiv, Test233)
{
    ASSERT_EQ(redupe_gf_div(65, 48), 191);
}

TEST(GfDiv, Test234)
{
    ASSERT_EQ(redupe_gf_div(2, 184), 151);
}

TEST(GfDiv, Test235)
{
    ASSERT_EQ(redupe_gf_div(217, 5), 159);
}

TEST(GfDiv, Test236)
{
    ASSERT_EQ(redupe_gf_div(80, 24), 6);
}

TEST(GfDiv, Test237)
{
    ASSERT_EQ(redupe_gf_div(56, 94), 92);
}

TEST(GfDiv, Test238)
{
    ASSERT_EQ(redupe_gf_div(217, 87), 191);
}

TEST(GfDiv, Test239)
{
    ASSERT_EQ(redupe_gf_div(118, 173), 151);
}

TEST(GfDiv, Test240)
{
    ASSERT_EQ(redupe_gf_div(212, 108), 159);
}

TEST(GfDiv, Test241)
{
    ASSERT_EQ(redupe_gf_div(196, 128), 227);
}

TEST(GfDiv, Test242)
{
    ASSERT_EQ(redupe_gf_div(236, 209), 195);
}

TEST(GfDiv, Test243)
{
    ASSERT_EQ(redupe_gf_div(132, 62), 6);
}

TEST(GfDiv, Test244)
{
    ASSERT_EQ(redupe_gf_div(61, 209), 194);
}

TEST(GfDiv, Test245)
{
    ASSERT_EQ(redupe_gf_div(188, 173), 137);
}

TEST(GfDiv, Test246)
{
    ASSERT_EQ(redupe_gf_div(200, 190), 92);
}

TEST(GfDiv, Test247)
{
    ASSERT_EQ(redupe_gf_div(91, 55), 191);
}

TEST(GfDiv, Test248)
{
    ASSERT_EQ(redupe_gf_div(94, 216), 137);
}

TEST(GfDiv, Test249)
{
    ASSERT_EQ(redupe_gf_div(139, 65), 159);
}

TEST(GfDiv, Test250)
{
    ASSERT_EQ(redupe_gf_div(195, 106), 227);
}

TEST(GfDiv, Test251)
{
    ASSERT_EQ(redupe_gf_div(202, 64), 194);
}

TEST(GfDiv, Test252)
{
    ASSERT_EQ(redupe_gf_div(174, 198), 6);
}

TEST(GfDiv, Test253)
{
    ASSERT_EQ(redupe_gf_div(121, 101), 132);
}

TEST(GfDiv, Test254)
{
    ASSERT_EQ(redupe_gf_div(232, 55), 231);
}

TEST(GfDiv, Test255)
{
    ASSERT_EQ(redupe_gf_div(245, 249), 152);
}

TEST(GfDiv, Test256)
{
    ASSERT_EQ(redupe_gf_div(166, 30), 92);
}

TEST(GfDiv, Test257)
{
    ASSERT_EQ(redupe_gf_div(190, 22), 231);
}

TEST(GfDiv, Test258)
{
    ASSERT_EQ(redupe_gf_div(13, 96), 137);
}

TEST(GfDiv, Test259)
{
    ASSERT_EQ(redupe_gf_div(102, 253), 159);
}

TEST(GfDiv, Test260)
{
    ASSERT_EQ(redupe_gf_div(61, 20), 227);
}

TEST(GfDiv, Test261)
{
    ASSERT_EQ(redupe_gf_div(157, 172), 194);
}

TEST(GfDiv, Test262)
{
    ASSERT_EQ(redupe_gf_div(34, 15), 6);
}

TEST(GfDiv, Test263)
{
    ASSERT_EQ(redupe_gf_div(86, 240), 132);
}

TEST(GfDiv, Test264)
{
    ASSERT_EQ(redupe_gf_div(243, 195), 152);
}

TEST(GfDiv, Test265)
{
    ASSERT_EQ(redupe_gf_div(37, 230), 92);
}

TEST(GfDiv, Test266)
{
    ASSERT_EQ(redupe_gf_div(39, 166), 231);
}

TEST(GfDiv, Test267)
{
    ASSERT_EQ(redupe_gf_div(232, 123), 113);
}

TEST(GfDiv, Test268)
{
    ASSERT_EQ(redupe_gf_div(145, 163), 137);
}

TEST(GfDiv, Test269)
{
    ASSERT_EQ(redupe_gf_div(59, 137), 159);
}

TEST(GfDiv, Test270)
{
    ASSERT_EQ(redupe_gf_div(104, 110), 227);
}

TEST(GfDiv, Test271)
{
    ASSERT_EQ(redupe_gf_div(154, 240), 194);
}

TEST(GfDiv, Test272)
{
    ASSERT_EQ(redupe_gf_div(86, 25), 6);
}

TEST(GfDiv, Test273)
{
    ASSERT_EQ(redupe_gf_div(48, 168), 132);
}

TEST(GfDiv, Test274)
{
    ASSERT_EQ(redupe_gf_div(61, 178), 152);
}

TEST(GfDiv, Test275)
{
    ASSERT_EQ(redupe_gf_div(86, 254), 92);
}

TEST(GfDiv, Test276)
{
    ASSERT_EQ(redupe_gf_div(180, 50), 231);
}

TEST(GfDiv, Test277)
{
    ASSERT_EQ(redupe_gf_div(153, 122), 113);
}

TEST(GfDiv, Test278)
{
    ASSERT_EQ(redupe_gf_div(218, 185), 137);
}

TEST(GfDiv, Test279)
{
    ASSERT_EQ(redupe_gf_div(86, 246), 159);
}

TEST(GfDiv, Test280)
{
    ASSERT_EQ(redupe_gf_div(233, 47), 227);
}

TEST(GfDiv, Test281)
{
    ASSERT_EQ(redupe_gf_div(221, 133), 30);
}

TEST(GfDiv, Test282)
{
    ASSERT_EQ(redupe_gf_div(30, 58), 194);
}

TEST(GfDiv, Test283)
{
    ASSERT_EQ(redupe_gf_div(228, 46), 6);
}

TEST(GfDiv, Test284)
{
    ASSERT_EQ(redupe_gf_div(106, 114), 132);
}

TEST(GfDiv, Test285)
{
    ASSERT_EQ(redupe_gf_div(162, 130), 152);
}

TEST(GfDiv, Test286)
{
    ASSERT_EQ(redupe_gf_div(90, 84), 92);
}

TEST(GfDiv, Test287)
{
    ASSERT_EQ(redupe_gf_div(43, 158), 231);
}

TEST(GfDiv, Test288)
{
    ASSERT_EQ(redupe_gf_div(58, 215), 113);
}

TEST(GfDiv, Test289)
{
    ASSERT_EQ(redupe_gf_div(122, 143), 167);
}

TEST(GfDiv, Test290)
{
    ASSERT_EQ(redupe_gf_div(36, 170), 137);
}

TEST(GfDiv, Test291)
{
    ASSERT_EQ(redupe_gf_div(45, 144), 159);
}

TEST(GfDiv, Test292)
{
    ASSERT_EQ(redupe_gf_div(71, 60), 227);
}

TEST(GfDiv, Test293)
{
    ASSERT_EQ(redupe_gf_div(117, 28), 30);
}

TEST(GfDiv, Test294)
{
    ASSERT_EQ(redupe_gf_div(106, 61), 194);
}

TEST(GfDiv, Test295)
{
    ASSERT_EQ(redupe_gf_div(26, 240), 6);
}

TEST(GfDiv, Test296)
{
    ASSERT_EQ(redupe_gf_div(78, 164), 132);
}

TEST(GfDiv, Test297)
{
    ASSERT_EQ(redupe_gf_div(146, 79), 152);
}

TEST(GfDiv, Test298)
{
    ASSERT_EQ(redupe_gf_div(49, 5), 92);
}

TEST(GfDiv, Test299)
{
    ASSERT_EQ(redupe_gf_div(228, 15), 231);
}

TEST(GfDiv, Test300)
{
    ASSERT_EQ(redupe_gf_div(116, 179), 113);
}

TEST(GfDiv, Test301)
{
    ASSERT_EQ(redupe_gf_div(143, 137), 167);
}

TEST(GfDiv, Test302)
{
    ASSERT_EQ(redupe_gf_div(17, 128), 182);
}

TEST(GfDiv, Test303)
{
    ASSERT_EQ(redupe_gf_div(21, 194), 137);
}

TEST(GfDiv, Test304)
{
    ASSERT_EQ(redupe_gf_div(16, 242), 159);
}

TEST(GfDiv, Test305)
{
    ASSERT_EQ(redupe_gf_div(91, 179), 227);
}

TEST(GfDiv, Test306)
{
    ASSERT_EQ(redupe_gf_div(94, 54), 30);
}

TEST(GfDiv, Test307)
{
    ASSERT_EQ(redupe_gf_div(159, 251), 194);
}

TEST(GfDiv, Test308)
{
    ASSERT_EQ(redupe_gf_div(47, 119), 6);
}

TEST(GfDiv, Test309)
{
    ASSERT_EQ(redupe_gf_div(11, 67), 132);
}
