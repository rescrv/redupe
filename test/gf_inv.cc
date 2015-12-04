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

TEST(GfInverse, Test0)
{
    ASSERT_EQ(redupe_gf_inv(77), 103);
}

TEST(GfInverse, Test1)
{
    ASSERT_EQ(redupe_gf_inv(134), 228);
}

TEST(GfInverse, Test2)
{
    ASSERT_EQ(redupe_gf_inv(50), 111);
}

TEST(GfInverse, Test3)
{
    ASSERT_EQ(redupe_gf_inv(13), 170);
}

TEST(GfInverse, Test4)
{
    ASSERT_EQ(redupe_gf_inv(161), 130);
}

TEST(GfInverse, Test5)
{
    ASSERT_EQ(redupe_gf_inv(150), 15);
}

TEST(GfInverse, Test6)
{
    ASSERT_EQ(redupe_gf_inv(76), 22);
}

TEST(GfInverse, Test7)
{
    ASSERT_EQ(redupe_gf_inv(19), 88);
}

TEST(GfInverse, Test8)
{
    ASSERT_EQ(redupe_gf_inv(74), 43);
}

TEST(GfInverse, Test9)
{
    ASSERT_EQ(redupe_gf_inv(194), 165);
}

TEST(GfInverse, Test10)
{
    ASSERT_EQ(redupe_gf_inv(202), 98);
}

TEST(GfInverse, Test11)
{
    ASSERT_EQ(redupe_gf_inv(40), 112);
}

TEST(GfInverse, Test12)
{
    ASSERT_EQ(redupe_gf_inv(237), 33);
}

TEST(GfInverse, Test13)
{
    ASSERT_EQ(redupe_gf_inv(35), 81);
}

TEST(GfInverse, Test14)
{
    ASSERT_EQ(redupe_gf_inv(24), 144);
}

TEST(GfInverse, Test15)
{
    ASSERT_EQ(redupe_gf_inv(208), 41);
}

TEST(GfInverse, Test16)
{
    ASSERT_EQ(redupe_gf_inv(247), 201);
}

TEST(GfInverse, Test17)
{
    ASSERT_EQ(redupe_gf_inv(225), 63);
}

TEST(GfInverse, Test18)
{
    ASSERT_EQ(redupe_gf_inv(63), 225);
}

TEST(GfInverse, Test19)
{
    ASSERT_EQ(redupe_gf_inv(103), 77);
}

TEST(GfInverse, Test20)
{
    ASSERT_EQ(redupe_gf_inv(151), 92);
}

TEST(GfInverse, Test21)
{
    ASSERT_EQ(redupe_gf_inv(195), 53);
}

TEST(GfInverse, Test22)
{
    ASSERT_EQ(redupe_gf_inv(66), 248);
}

TEST(GfInverse, Test23)
{
    ASSERT_EQ(redupe_gf_inv(8), 173);
}

TEST(GfInverse, Test24)
{
    ASSERT_EQ(redupe_gf_inv(157), 9);
}

TEST(GfInverse, Test25)
{
    ASSERT_EQ(redupe_gf_inv(110), 47);
}

TEST(GfInverse, Test26)
{
    ASSERT_EQ(redupe_gf_inv(227), 240);
}

TEST(GfInverse, Test27)
{
    ASSERT_EQ(redupe_gf_inv(16), 216);
}

TEST(GfInverse, Test28)
{
    ASSERT_EQ(redupe_gf_inv(4), 71);
}

TEST(GfInverse, Test29)
{
    ASSERT_EQ(redupe_gf_inv(199), 158);
}

TEST(GfInverse, Test30)
{
    ASSERT_EQ(redupe_gf_inv(20), 224);
}

TEST(GfInverse, Test31)
{
    ASSERT_EQ(redupe_gf_inv(136), 73);
}

TEST(GfInverse, Test32)
{
    ASSERT_EQ(redupe_gf_inv(190), 174);
}

TEST(GfInverse, Test33)
{
    ASSERT_EQ(redupe_gf_inv(159), 162);
}

TEST(GfInverse, Test34)
{
    ASSERT_EQ(redupe_gf_inv(9), 157);
}

TEST(GfInverse, Test35)
{
    ASSERT_EQ(redupe_gf_inv(97), 87);
}

TEST(GfInverse, Test36)
{
    ASSERT_EQ(redupe_gf_inv(187), 123);
}

TEST(GfInverse, Test37)
{
    ASSERT_EQ(redupe_gf_inv(146), 68);
}

TEST(GfInverse, Test38)
{
    ASSERT_EQ(redupe_gf_inv(144), 24);
}

TEST(GfInverse, Test39)
{
    ASSERT_EQ(redupe_gf_inv(64), 54);
}

TEST(GfInverse, Test40)
{
    ASSERT_EQ(redupe_gf_inv(111), 50);
}

TEST(GfInverse, Test41)
{
    ASSERT_EQ(redupe_gf_inv(54), 64);
}

TEST(GfInverse, Test42)
{
    ASSERT_EQ(redupe_gf_inv(101), 196);
}

TEST(GfInverse, Test43)
{
    ASSERT_EQ(redupe_gf_inv(51), 46);
}

TEST(GfInverse, Test44)
{
    ASSERT_EQ(redupe_gf_inv(90), 203);
}

TEST(GfInverse, Test45)
{
    ASSERT_EQ(redupe_gf_inv(42), 31);
}

TEST(GfInverse, Test46)
{
    ASSERT_EQ(redupe_gf_inv(254), 126);
}

TEST(GfInverse, Test47)
{
    ASSERT_EQ(redupe_gf_inv(154), 189);
}

TEST(GfInverse, Test48)
{
    ASSERT_EQ(redupe_gf_inv(241), 231);
}

TEST(GfInverse, Test49)
{
    ASSERT_EQ(redupe_gf_inv(196), 101);
}

TEST(GfInverse, Test50)
{
    ASSERT_EQ(redupe_gf_inv(250), 232);
}

TEST(GfInverse, Test51)
{
    ASSERT_EQ(redupe_gf_inv(201), 247);
}

TEST(GfInverse, Test52)
{
    ASSERT_EQ(redupe_gf_inv(61), 12);
}

TEST(GfInverse, Test53)
{
    ASSERT_EQ(redupe_gf_inv(81), 35);
}

TEST(GfInverse, Test54)
{
    ASSERT_EQ(redupe_gf_inv(115), 217);
}

TEST(GfInverse, Test55)
{
    ASSERT_EQ(redupe_gf_inv(184), 197);
}

TEST(GfInverse, Test56)
{
    ASSERT_EQ(redupe_gf_inv(56), 80);
}

TEST(GfInverse, Test57)
{
    ASSERT_EQ(redupe_gf_inv(175), 183);
}

TEST(GfInverse, Test58)
{
    ASSERT_EQ(redupe_gf_inv(166), 70);
}

TEST(GfInverse, Test59)
{
    ASSERT_EQ(redupe_gf_inv(213), 67);
}

TEST(GfInverse, Test60)
{
    ASSERT_EQ(redupe_gf_inv(246), 211);
}

TEST(GfInverse, Test61)
{
    ASSERT_EQ(redupe_gf_inv(143), 245);
}

TEST(GfInverse, Test62)
{
    ASSERT_EQ(redupe_gf_inv(107), 179);
}

TEST(GfInverse, Test63)
{
    ASSERT_EQ(redupe_gf_inv(164), 52);
}

TEST(GfInverse, Test64)
{
    ASSERT_EQ(redupe_gf_inv(78), 69);
}

TEST(GfInverse, Test65)
{
    ASSERT_EQ(redupe_gf_inv(80), 56);
}

TEST(GfInverse, Test66)
{
    ASSERT_EQ(redupe_gf_inv(177), 229);
}

TEST(GfInverse, Test67)
{
    ASSERT_EQ(redupe_gf_inv(67), 213);
}

TEST(GfInverse, Test68)
{
    ASSERT_EQ(redupe_gf_inv(216), 16);
}

TEST(GfInverse, Test69)
{
    ASSERT_EQ(redupe_gf_inv(210), 200);
}

TEST(GfInverse, Test70)
{
    ASSERT_EQ(redupe_gf_inv(248), 66);
}

TEST(GfInverse, Test71)
{
    ASSERT_EQ(redupe_gf_inv(3), 244);
}

TEST(GfInverse, Test72)
{
    ASSERT_EQ(redupe_gf_inv(179), 107);
}

TEST(GfInverse, Test73)
{
    ASSERT_EQ(redupe_gf_inv(163), 198);
}

TEST(GfInverse, Test74)
{
    ASSERT_EQ(redupe_gf_inv(114), 17);
}

TEST(GfInverse, Test75)
{
    ASSERT_EQ(redupe_gf_inv(79), 147);
}

TEST(GfInverse, Test76)
{
    ASSERT_EQ(redupe_gf_inv(209), 113);
}

TEST(GfInverse, Test77)
{
    ASSERT_EQ(redupe_gf_inv(217), 115);
}

TEST(GfInverse, Test78)
{
    ASSERT_EQ(redupe_gf_inv(123), 187);
}

TEST(GfInverse, Test79)
{
    ASSERT_EQ(redupe_gf_inv(220), 153);
}

TEST(GfInverse, Test80)
{
    ASSERT_EQ(redupe_gf_inv(82), 104);
}

TEST(GfInverse, Test81)
{
    ASSERT_EQ(redupe_gf_inv(185), 100);
}

TEST(GfInverse, Test82)
{
    ASSERT_EQ(redupe_gf_inv(70), 166);
}

TEST(GfInverse, Test83)
{
    ASSERT_EQ(redupe_gf_inv(102), 23);
}

TEST(GfInverse, Test84)
{
    ASSERT_EQ(redupe_gf_inv(32), 108);
}

TEST(GfInverse, Test85)
{
    ASSERT_EQ(redupe_gf_inv(176), 135);
}

TEST(GfInverse, Test86)
{
    ASSERT_EQ(redupe_gf_inv(92), 151);
}

TEST(GfInverse, Test87)
{
    ASSERT_EQ(redupe_gf_inv(129), 84);
}

TEST(GfInverse, Test88)
{
    ASSERT_EQ(redupe_gf_inv(192), 18);
}

TEST(GfInverse, Test89)
{
    ASSERT_EQ(redupe_gf_inv(73), 136);
}

TEST(GfInverse, Test90)
{
    ASSERT_EQ(redupe_gf_inv(219), 120);
}

TEST(GfInverse, Test91)
{
    ASSERT_EQ(redupe_gf_inv(140), 83);
}

TEST(GfInverse, Test92)
{
    ASSERT_EQ(redupe_gf_inv(214), 215);
}

TEST(GfInverse, Test93)
{
    ASSERT_EQ(redupe_gf_inv(98), 202);
}

TEST(GfInverse, Test94)
{
    ASSERT_EQ(redupe_gf_inv(88), 19);
}

TEST(GfInverse, Test95)
{
    ASSERT_EQ(redupe_gf_inv(33), 237);
}

TEST(GfInverse, Test96)
{
    ASSERT_EQ(redupe_gf_inv(14), 93);
}

TEST(GfInverse, Test97)
{
    ASSERT_EQ(redupe_gf_inv(30), 75);
}

TEST(GfInverse, Test98)
{
    ASSERT_EQ(redupe_gf_inv(91), 99);
}

TEST(GfInverse, Test99)
{
    ASSERT_EQ(redupe_gf_inv(197), 184);
}

TEST(GfInverse, Test100)
{
    ASSERT_EQ(redupe_gf_inv(116), 233);
}

TEST(GfInverse, Test101)
{
    ASSERT_EQ(redupe_gf_inv(84), 129);
}

TEST(GfInverse, Test102)
{
    ASSERT_EQ(redupe_gf_inv(27), 128);
}

TEST(GfInverse, Test103)
{
    ASSERT_EQ(redupe_gf_inv(22), 76);
}

TEST(GfInverse, Test104)
{
    ASSERT_EQ(redupe_gf_inv(148), 155);
}

TEST(GfInverse, Test105)
{
    ASSERT_EQ(redupe_gf_inv(118), 218);
}

TEST(GfInverse, Test106)
{
    ASSERT_EQ(redupe_gf_inv(46), 51);
}

TEST(GfInverse, Test107)
{
    ASSERT_EQ(redupe_gf_inv(239), 106);
}

TEST(GfInverse, Test108)
{
    ASSERT_EQ(redupe_gf_inv(145), 223);
}

TEST(GfInverse, Test109)
{
    ASSERT_EQ(redupe_gf_inv(155), 148);
}

TEST(GfInverse, Test110)
{
    ASSERT_EQ(redupe_gf_inv(69), 78);
}

TEST(GfInverse, Test111)
{
    ASSERT_EQ(redupe_gf_inv(242), 181);
}

TEST(GfInverse, Test112)
{
    ASSERT_EQ(redupe_gf_inv(126), 254);
}

TEST(GfInverse, Test113)
{
    ASSERT_EQ(redupe_gf_inv(141), 105);
}

TEST(GfInverse, Test114)
{
    ASSERT_EQ(redupe_gf_inv(11), 152);
}

TEST(GfInverse, Test115)
{
    ASSERT_EQ(redupe_gf_inv(39), 138);
}

TEST(GfInverse, Test116)
{
    ASSERT_EQ(redupe_gf_inv(203), 90);
}

TEST(GfInverse, Test117)
{
    ASSERT_EQ(redupe_gf_inv(191), 182);
}

TEST(GfInverse, Test118)
{
    ASSERT_EQ(redupe_gf_inv(2), 142);
}

TEST(GfInverse, Test119)
{
    ASSERT_EQ(redupe_gf_inv(171), 60);
}

TEST(GfInverse, Test120)
{
    ASSERT_EQ(redupe_gf_inv(198), 163);
}

TEST(GfInverse, Test121)
{
    ASSERT_EQ(redupe_gf_inv(17), 114);
}

TEST(GfInverse, Test122)
{
    ASSERT_EQ(redupe_gf_inv(31), 42);
}

TEST(GfInverse, Test123)
{
    ASSERT_EQ(redupe_gf_inv(55), 94);
}

TEST(GfInverse, Test124)
{
    ASSERT_EQ(redupe_gf_inv(37), 86);
}

TEST(GfInverse, Test125)
{
    ASSERT_EQ(redupe_gf_inv(108), 32);
}

TEST(GfInverse, Test126)
{
    ASSERT_EQ(redupe_gf_inv(234), 243);
}

TEST(GfInverse, Test127)
{
    ASSERT_EQ(redupe_gf_inv(131), 29);
}

TEST(GfInverse, Test128)
{
    ASSERT_EQ(redupe_gf_inv(169), 59);
}

TEST(GfInverse, Test129)
{
    ASSERT_EQ(redupe_gf_inv(160), 28);
}

TEST(GfInverse, Test130)
{
    ASSERT_EQ(redupe_gf_inv(229), 177);
}

TEST(GfInverse, Test131)
{
    ASSERT_EQ(redupe_gf_inv(243), 234);
}

TEST(GfInverse, Test132)
{
    ASSERT_EQ(redupe_gf_inv(52), 164);
}

TEST(GfInverse, Test133)
{
    ASSERT_EQ(redupe_gf_inv(89), 193);
}

TEST(GfInverse, Test134)
{
    ASSERT_EQ(redupe_gf_inv(180), 235);
}

TEST(GfInverse, Test135)
{
    ASSERT_EQ(redupe_gf_inv(49), 137);
}

TEST(GfInverse, Test136)
{
    ASSERT_EQ(redupe_gf_inv(127), 252);
}

TEST(GfInverse, Test137)
{
    ASSERT_EQ(redupe_gf_inv(240), 227);
}

TEST(GfInverse, Test138)
{
    ASSERT_EQ(redupe_gf_inv(178), 238);
}

TEST(GfInverse, Test139)
{
    ASSERT_EQ(redupe_gf_inv(45), 139);
}

TEST(GfInverse, Test140)
{
    ASSERT_EQ(redupe_gf_inv(130), 161);
}

TEST(GfInverse, Test141)
{
    ASSERT_EQ(redupe_gf_inv(226), 230);
}

TEST(GfInverse, Test142)
{
    ASSERT_EQ(redupe_gf_inv(167), 5);
}

TEST(GfInverse, Test143)
{
    ASSERT_EQ(redupe_gf_inv(170), 13);
}

TEST(GfInverse, Test144)
{
    ASSERT_EQ(redupe_gf_inv(183), 175);
}

TEST(GfInverse, Test145)
{
    ASSERT_EQ(redupe_gf_inv(36), 96);
}

TEST(GfInverse, Test146)
{
    ASSERT_EQ(redupe_gf_inv(28), 160);
}

TEST(GfInverse, Test147)
{
    ASSERT_EQ(redupe_gf_inv(94), 55);
}

TEST(GfInverse, Test148)
{
    ASSERT_EQ(redupe_gf_inv(93), 14);
}

TEST(GfInverse, Test149)
{
    ASSERT_EQ(redupe_gf_inv(60), 171);
}

TEST(GfInverse, Test150)
{
    ASSERT_EQ(redupe_gf_inv(181), 242);
}

TEST(GfInverse, Test151)
{
    ASSERT_EQ(redupe_gf_inv(174), 190);
}

TEST(GfInverse, Test152)
{
    ASSERT_EQ(redupe_gf_inv(121), 119);
}

TEST(GfInverse, Test153)
{
    ASSERT_EQ(redupe_gf_inv(122), 6);
}

TEST(GfInverse, Test154)
{
    ASSERT_EQ(redupe_gf_inv(86), 37);
}

TEST(GfInverse, Test155)
{
    ASSERT_EQ(redupe_gf_inv(156), 172);
}

TEST(GfInverse, Test156)
{
    ASSERT_EQ(redupe_gf_inv(125), 205);
}

TEST(GfInverse, Test157)
{
    ASSERT_EQ(redupe_gf_inv(158), 199);
}

TEST(GfInverse, Test158)
{
    ASSERT_EQ(redupe_gf_inv(25), 222);
}

TEST(GfInverse, Test159)
{
    ASSERT_EQ(redupe_gf_inv(120), 219);
}

TEST(GfInverse, Test160)
{
    ASSERT_EQ(redupe_gf_inv(204), 133);
}

TEST(GfInverse, Test161)
{
    ASSERT_EQ(redupe_gf_inv(245), 143);
}

TEST(GfInverse, Test162)
{
    ASSERT_EQ(redupe_gf_inv(193), 89);
}

TEST(GfInverse, Test163)
{
    ASSERT_EQ(redupe_gf_inv(23), 102);
}

TEST(GfInverse, Test164)
{
    ASSERT_EQ(redupe_gf_inv(62), 21);
}

TEST(GfInverse, Test165)
{
    ASSERT_EQ(redupe_gf_inv(137), 49);
}

TEST(GfInverse, Test166)
{
    ASSERT_EQ(redupe_gf_inv(57), 34);
}

TEST(GfInverse, Test167)
{
    ASSERT_EQ(redupe_gf_inv(96), 36);
}

TEST(GfInverse, Test168)
{
    ASSERT_EQ(redupe_gf_inv(211), 246);
}

TEST(GfInverse, Test169)
{
    ASSERT_EQ(redupe_gf_inv(58), 207);
}

TEST(GfInverse, Test170)
{
    ASSERT_EQ(redupe_gf_inv(48), 72);
}

TEST(GfInverse, Test171)
{
    ASSERT_EQ(redupe_gf_inv(188), 149);
}

TEST(GfInverse, Test172)
{
    ASSERT_EQ(redupe_gf_inv(117), 251);
}

TEST(GfInverse, Test173)
{
    ASSERT_EQ(redupe_gf_inv(6), 122);
}

TEST(GfInverse, Test174)
{
    ASSERT_EQ(redupe_gf_inv(152), 11);
}

TEST(GfInverse, Test175)
{
    ASSERT_EQ(redupe_gf_inv(232), 250);
}

TEST(GfInverse, Test176)
{
    ASSERT_EQ(redupe_gf_inv(153), 220);
}

TEST(GfInverse, Test177)
{
    ASSERT_EQ(redupe_gf_inv(244), 3);
}

TEST(GfInverse, Test178)
{
    ASSERT_EQ(redupe_gf_inv(47), 110);
}

TEST(GfInverse, Test179)
{
    ASSERT_EQ(redupe_gf_inv(132), 124);
}

TEST(GfInverse, Test180)
{
    ASSERT_EQ(redupe_gf_inv(238), 178);
}

TEST(GfInverse, Test181)
{
    ASSERT_EQ(redupe_gf_inv(15), 150);
}

TEST(GfInverse, Test182)
{
    ASSERT_EQ(redupe_gf_inv(59), 169);
}

TEST(GfInverse, Test183)
{
    ASSERT_EQ(redupe_gf_inv(149), 188);
}

TEST(GfInverse, Test184)
{
    ASSERT_EQ(redupe_gf_inv(75), 30);
}

TEST(GfInverse, Test185)
{
    ASSERT_EQ(redupe_gf_inv(71), 4);
}

TEST(GfInverse, Test186)
{
    ASSERT_EQ(redupe_gf_inv(205), 125);
}

TEST(GfInverse, Test187)
{
    ASSERT_EQ(redupe_gf_inv(65), 95);
}

TEST(GfInverse, Test188)
{
    ASSERT_EQ(redupe_gf_inv(253), 255);
}

TEST(GfInverse, Test189)
{
    ASSERT_EQ(redupe_gf_inv(189), 154);
}

TEST(GfInverse, Test190)
{
    ASSERT_EQ(redupe_gf_inv(228), 134);
}

TEST(GfInverse, Test191)
{
    ASSERT_EQ(redupe_gf_inv(221), 10);
}

TEST(GfInverse, Test192)
{
    ASSERT_EQ(redupe_gf_inv(172), 156);
}

TEST(GfInverse, Test193)
{
    ASSERT_EQ(redupe_gf_inv(168), 206);
}

TEST(GfInverse, Test194)
{
    ASSERT_EQ(redupe_gf_inv(1), 1);
}

TEST(GfInverse, Test195)
{
    ASSERT_EQ(redupe_gf_inv(135), 176);
}

TEST(GfInverse, Test196)
{
    ASSERT_EQ(redupe_gf_inv(165), 194);
}

TEST(GfInverse, Test197)
{
    ASSERT_EQ(redupe_gf_inv(29), 131);
}

TEST(GfInverse, Test198)
{
    ASSERT_EQ(redupe_gf_inv(231), 241);
}

TEST(GfInverse, Test199)
{
    ASSERT_EQ(redupe_gf_inv(85), 26);
}

TEST(GfInverse, Test200)
{
    ASSERT_EQ(redupe_gf_inv(10), 221);
}

TEST(GfInverse, Test201)
{
    ASSERT_EQ(redupe_gf_inv(249), 212);
}

TEST(GfInverse, Test202)
{
    ASSERT_EQ(redupe_gf_inv(230), 226);
}

TEST(GfInverse, Test203)
{
    ASSERT_EQ(redupe_gf_inv(218), 118);
}

TEST(GfInverse, Test204)
{
    ASSERT_EQ(redupe_gf_inv(112), 40);
}

TEST(GfInverse, Test205)
{
    ASSERT_EQ(redupe_gf_inv(41), 208);
}

TEST(GfInverse, Test206)
{
    ASSERT_EQ(redupe_gf_inv(182), 191);
}

TEST(GfInverse, Test207)
{
    ASSERT_EQ(redupe_gf_inv(83), 140);
}
