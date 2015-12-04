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

TEST(GfPow, Test0)
{
    ASSERT_EQ(redupe_gf_pow(2, 0), 1);
}

TEST(GfPow, Test1)
{
    ASSERT_EQ(redupe_gf_pow(2, 1), 2);
}

TEST(GfPow, Test2)
{
    ASSERT_EQ(redupe_gf_pow(2, 2), 4);
}

TEST(GfPow, Test3)
{
    ASSERT_EQ(redupe_gf_pow(2, 3), 8);
}

TEST(GfPow, Test4)
{
    ASSERT_EQ(redupe_gf_pow(2, 4), 16);
}

TEST(GfPow, Test5)
{
    ASSERT_EQ(redupe_gf_pow(2, 5), 32);
}

TEST(GfPow, Test6)
{
    ASSERT_EQ(redupe_gf_pow(2, 6), 64);
}

TEST(GfPow, Test7)
{
    ASSERT_EQ(redupe_gf_pow(2, 7), 128);
}

TEST(GfPow, Test8)
{
    ASSERT_EQ(redupe_gf_pow(2, 8), 29);
}

TEST(GfPow, Test9)
{
    ASSERT_EQ(redupe_gf_pow(2, 9), 58);
}

TEST(GfPow, Test10)
{
    ASSERT_EQ(redupe_gf_pow(2, 10), 116);
}

TEST(GfPow, Test11)
{
    ASSERT_EQ(redupe_gf_pow(2, 11), 232);
}

TEST(GfPow, Test12)
{
    ASSERT_EQ(redupe_gf_pow(2, 12), 205);
}

TEST(GfPow, Test13)
{
    ASSERT_EQ(redupe_gf_pow(2, 13), 135);
}

TEST(GfPow, Test14)
{
    ASSERT_EQ(redupe_gf_pow(2, 14), 19);
}

TEST(GfPow, Test15)
{
    ASSERT_EQ(redupe_gf_pow(2, 15), 38);
}

TEST(GfPow, Test16)
{
    ASSERT_EQ(redupe_gf_pow(2, 16), 76);
}

TEST(GfPow, Test17)
{
    ASSERT_EQ(redupe_gf_pow(2, 17), 152);
}

TEST(GfPow, Test18)
{
    ASSERT_EQ(redupe_gf_pow(2, 18), 45);
}

TEST(GfPow, Test19)
{
    ASSERT_EQ(redupe_gf_pow(2, 19), 90);
}

TEST(GfPow, Test20)
{
    ASSERT_EQ(redupe_gf_pow(2, 20), 180);
}

TEST(GfPow, Test21)
{
    ASSERT_EQ(redupe_gf_pow(2, 21), 117);
}

TEST(GfPow, Test22)
{
    ASSERT_EQ(redupe_gf_pow(2, 22), 234);
}

TEST(GfPow, Test23)
{
    ASSERT_EQ(redupe_gf_pow(2, 23), 201);
}

TEST(GfPow, Test24)
{
    ASSERT_EQ(redupe_gf_pow(2, 24), 143);
}

TEST(GfPow, Test25)
{
    ASSERT_EQ(redupe_gf_pow(2, 25), 3);
}

TEST(GfPow, Test26)
{
    ASSERT_EQ(redupe_gf_pow(2, 26), 6);
}

TEST(GfPow, Test27)
{
    ASSERT_EQ(redupe_gf_pow(2, 27), 12);
}

TEST(GfPow, Test28)
{
    ASSERT_EQ(redupe_gf_pow(2, 28), 24);
}

TEST(GfPow, Test29)
{
    ASSERT_EQ(redupe_gf_pow(2, 29), 48);
}

TEST(GfPow, Test30)
{
    ASSERT_EQ(redupe_gf_pow(2, 30), 96);
}

TEST(GfPow, Test31)
{
    ASSERT_EQ(redupe_gf_pow(2, 31), 192);
}

TEST(GfPow, Test32)
{
    ASSERT_EQ(redupe_gf_pow(2, 32), 157);
}

TEST(GfPow, Test33)
{
    ASSERT_EQ(redupe_gf_pow(2, 33), 39);
}

TEST(GfPow, Test34)
{
    ASSERT_EQ(redupe_gf_pow(2, 34), 78);
}

TEST(GfPow, Test35)
{
    ASSERT_EQ(redupe_gf_pow(2, 35), 156);
}

TEST(GfPow, Test36)
{
    ASSERT_EQ(redupe_gf_pow(2, 36), 37);
}

TEST(GfPow, Test37)
{
    ASSERT_EQ(redupe_gf_pow(2, 37), 74);
}

TEST(GfPow, Test38)
{
    ASSERT_EQ(redupe_gf_pow(2, 38), 148);
}

TEST(GfPow, Test39)
{
    ASSERT_EQ(redupe_gf_pow(2, 39), 53);
}

TEST(GfPow, Test40)
{
    ASSERT_EQ(redupe_gf_pow(2, 40), 106);
}

TEST(GfPow, Test41)
{
    ASSERT_EQ(redupe_gf_pow(2, 41), 212);
}

TEST(GfPow, Test42)
{
    ASSERT_EQ(redupe_gf_pow(2, 42), 181);
}

TEST(GfPow, Test43)
{
    ASSERT_EQ(redupe_gf_pow(2, 43), 119);
}

TEST(GfPow, Test44)
{
    ASSERT_EQ(redupe_gf_pow(2, 44), 238);
}

TEST(GfPow, Test45)
{
    ASSERT_EQ(redupe_gf_pow(2, 45), 193);
}

TEST(GfPow, Test46)
{
    ASSERT_EQ(redupe_gf_pow(2, 46), 159);
}

TEST(GfPow, Test47)
{
    ASSERT_EQ(redupe_gf_pow(2, 47), 35);
}

TEST(GfPow, Test48)
{
    ASSERT_EQ(redupe_gf_pow(2, 48), 70);
}

TEST(GfPow, Test49)
{
    ASSERT_EQ(redupe_gf_pow(2, 49), 140);
}

TEST(GfPow, Test50)
{
    ASSERT_EQ(redupe_gf_pow(2, 50), 5);
}

TEST(GfPow, Test51)
{
    ASSERT_EQ(redupe_gf_pow(2, 51), 10);
}

TEST(GfPow, Test52)
{
    ASSERT_EQ(redupe_gf_pow(2, 52), 20);
}

TEST(GfPow, Test53)
{
    ASSERT_EQ(redupe_gf_pow(2, 53), 40);
}

TEST(GfPow, Test54)
{
    ASSERT_EQ(redupe_gf_pow(2, 54), 80);
}

TEST(GfPow, Test55)
{
    ASSERT_EQ(redupe_gf_pow(2, 55), 160);
}

TEST(GfPow, Test56)
{
    ASSERT_EQ(redupe_gf_pow(2, 56), 93);
}

TEST(GfPow, Test57)
{
    ASSERT_EQ(redupe_gf_pow(2, 57), 186);
}

TEST(GfPow, Test58)
{
    ASSERT_EQ(redupe_gf_pow(2, 58), 105);
}

TEST(GfPow, Test59)
{
    ASSERT_EQ(redupe_gf_pow(2, 59), 210);
}

TEST(GfPow, Test60)
{
    ASSERT_EQ(redupe_gf_pow(2, 60), 185);
}

TEST(GfPow, Test61)
{
    ASSERT_EQ(redupe_gf_pow(2, 61), 111);
}

TEST(GfPow, Test62)
{
    ASSERT_EQ(redupe_gf_pow(2, 62), 222);
}

TEST(GfPow, Test63)
{
    ASSERT_EQ(redupe_gf_pow(2, 63), 161);
}

TEST(GfPow, Test64)
{
    ASSERT_EQ(redupe_gf_pow(2, 64), 95);
}

TEST(GfPow, Test65)
{
    ASSERT_EQ(redupe_gf_pow(2, 65), 190);
}

TEST(GfPow, Test66)
{
    ASSERT_EQ(redupe_gf_pow(2, 66), 97);
}

TEST(GfPow, Test67)
{
    ASSERT_EQ(redupe_gf_pow(2, 67), 194);
}

TEST(GfPow, Test68)
{
    ASSERT_EQ(redupe_gf_pow(2, 68), 153);
}

TEST(GfPow, Test69)
{
    ASSERT_EQ(redupe_gf_pow(2, 69), 47);
}

TEST(GfPow, Test70)
{
    ASSERT_EQ(redupe_gf_pow(2, 70), 94);
}

TEST(GfPow, Test71)
{
    ASSERT_EQ(redupe_gf_pow(2, 71), 188);
}

TEST(GfPow, Test72)
{
    ASSERT_EQ(redupe_gf_pow(2, 72), 101);
}

TEST(GfPow, Test73)
{
    ASSERT_EQ(redupe_gf_pow(2, 73), 202);
}

TEST(GfPow, Test74)
{
    ASSERT_EQ(redupe_gf_pow(2, 74), 137);
}

TEST(GfPow, Test75)
{
    ASSERT_EQ(redupe_gf_pow(2, 75), 15);
}

TEST(GfPow, Test76)
{
    ASSERT_EQ(redupe_gf_pow(2, 76), 30);
}

TEST(GfPow, Test77)
{
    ASSERT_EQ(redupe_gf_pow(2, 77), 60);
}

TEST(GfPow, Test78)
{
    ASSERT_EQ(redupe_gf_pow(2, 78), 120);
}

TEST(GfPow, Test79)
{
    ASSERT_EQ(redupe_gf_pow(2, 79), 240);
}

TEST(GfPow, Test80)
{
    ASSERT_EQ(redupe_gf_pow(2, 80), 253);
}

TEST(GfPow, Test81)
{
    ASSERT_EQ(redupe_gf_pow(2, 81), 231);
}

TEST(GfPow, Test82)
{
    ASSERT_EQ(redupe_gf_pow(2, 82), 211);
}

TEST(GfPow, Test83)
{
    ASSERT_EQ(redupe_gf_pow(2, 83), 187);
}

TEST(GfPow, Test84)
{
    ASSERT_EQ(redupe_gf_pow(2, 84), 107);
}

TEST(GfPow, Test85)
{
    ASSERT_EQ(redupe_gf_pow(2, 85), 214);
}

TEST(GfPow, Test86)
{
    ASSERT_EQ(redupe_gf_pow(2, 86), 177);
}

TEST(GfPow, Test87)
{
    ASSERT_EQ(redupe_gf_pow(2, 87), 127);
}

TEST(GfPow, Test88)
{
    ASSERT_EQ(redupe_gf_pow(2, 88), 254);
}

TEST(GfPow, Test89)
{
    ASSERT_EQ(redupe_gf_pow(2, 89), 225);
}

TEST(GfPow, Test90)
{
    ASSERT_EQ(redupe_gf_pow(2, 90), 223);
}

TEST(GfPow, Test91)
{
    ASSERT_EQ(redupe_gf_pow(2, 91), 163);
}

TEST(GfPow, Test92)
{
    ASSERT_EQ(redupe_gf_pow(2, 92), 91);
}

TEST(GfPow, Test93)
{
    ASSERT_EQ(redupe_gf_pow(2, 93), 182);
}

TEST(GfPow, Test94)
{
    ASSERT_EQ(redupe_gf_pow(2, 94), 113);
}

TEST(GfPow, Test95)
{
    ASSERT_EQ(redupe_gf_pow(2, 95), 226);
}

TEST(GfPow, Test96)
{
    ASSERT_EQ(redupe_gf_pow(2, 96), 217);
}

TEST(GfPow, Test97)
{
    ASSERT_EQ(redupe_gf_pow(2, 97), 175);
}

TEST(GfPow, Test98)
{
    ASSERT_EQ(redupe_gf_pow(2, 98), 67);
}

TEST(GfPow, Test99)
{
    ASSERT_EQ(redupe_gf_pow(2, 99), 134);
}

TEST(GfPow, Test100)
{
    ASSERT_EQ(redupe_gf_pow(2, 100), 17);
}

TEST(GfPow, Test101)
{
    ASSERT_EQ(redupe_gf_pow(2, 101), 34);
}

TEST(GfPow, Test102)
{
    ASSERT_EQ(redupe_gf_pow(2, 102), 68);
}

TEST(GfPow, Test103)
{
    ASSERT_EQ(redupe_gf_pow(2, 103), 136);
}

TEST(GfPow, Test104)
{
    ASSERT_EQ(redupe_gf_pow(2, 104), 13);
}

TEST(GfPow, Test105)
{
    ASSERT_EQ(redupe_gf_pow(2, 105), 26);
}

TEST(GfPow, Test106)
{
    ASSERT_EQ(redupe_gf_pow(2, 106), 52);
}

TEST(GfPow, Test107)
{
    ASSERT_EQ(redupe_gf_pow(2, 107), 104);
}

TEST(GfPow, Test108)
{
    ASSERT_EQ(redupe_gf_pow(2, 108), 208);
}

TEST(GfPow, Test109)
{
    ASSERT_EQ(redupe_gf_pow(2, 109), 189);
}

TEST(GfPow, Test110)
{
    ASSERT_EQ(redupe_gf_pow(2, 110), 103);
}

TEST(GfPow, Test111)
{
    ASSERT_EQ(redupe_gf_pow(2, 111), 206);
}

TEST(GfPow, Test112)
{
    ASSERT_EQ(redupe_gf_pow(2, 112), 129);
}

TEST(GfPow, Test113)
{
    ASSERT_EQ(redupe_gf_pow(2, -156), 134);
}

TEST(GfPow, Test114)
{
    ASSERT_EQ(redupe_gf_pow(134, 1), 134);
}

TEST(GfPow, Test115)
{
    ASSERT_EQ(redupe_gf_pow(2, -192), 161);
}

TEST(GfPow, Test116)
{
    ASSERT_EQ(redupe_gf_pow(161, 1), 161);
}

TEST(GfPow, Test117)
{
    ASSERT_EQ(redupe_gf_pow(2, -239), 76);
}

TEST(GfPow, Test118)
{
    ASSERT_EQ(redupe_gf_pow(76, 1), 76);
}

TEST(GfPow, Test119)
{
    ASSERT_EQ(redupe_gf_pow(2, -188), 194);
}

TEST(GfPow, Test120)
{
    ASSERT_EQ(redupe_gf_pow(194, 1), 194);
}

TEST(GfPow, Test121)
{
    ASSERT_EQ(redupe_gf_pow(2, 113), 31);
}

TEST(GfPow, Test122)
{
    ASSERT_EQ(redupe_gf_pow(2, 114), 62);
}

TEST(GfPow, Test123)
{
    ASSERT_EQ(redupe_gf_pow(2, 115), 124);
}

TEST(GfPow, Test124)
{
    ASSERT_EQ(redupe_gf_pow(2, 116), 248);
}

TEST(GfPow, Test125)
{
    ASSERT_EQ(redupe_gf_pow(2, 117), 237);
}

TEST(GfPow, Test126)
{
    ASSERT_EQ(redupe_gf_pow(2, 118), 199);
}

TEST(GfPow, Test127)
{
    ASSERT_EQ(redupe_gf_pow(2, 119), 147);
}

TEST(GfPow, Test128)
{
    ASSERT_EQ(redupe_gf_pow(2, 120), 59);
}

TEST(GfPow, Test129)
{
    ASSERT_EQ(redupe_gf_pow(2, 121), 118);
}

TEST(GfPow, Test130)
{
    ASSERT_EQ(redupe_gf_pow(2, 122), 236);
}

TEST(GfPow, Test131)
{
    ASSERT_EQ(redupe_gf_pow(2, 123), 197);
}

TEST(GfPow, Test132)
{
    ASSERT_EQ(redupe_gf_pow(2, 124), 151);
}

TEST(GfPow, Test133)
{
    ASSERT_EQ(redupe_gf_pow(2, 125), 51);
}

TEST(GfPow, Test134)
{
    ASSERT_EQ(redupe_gf_pow(2, 126), 102);
}

TEST(GfPow, Test135)
{
    ASSERT_EQ(redupe_gf_pow(2, 127), 204);
}

TEST(GfPow, Test136)
{
    ASSERT_EQ(redupe_gf_pow(2, 128), 133);
}

TEST(GfPow, Test137)
{
    ASSERT_EQ(redupe_gf_pow(2, 129), 23);
}

TEST(GfPow, Test138)
{
    ASSERT_EQ(redupe_gf_pow(2, 130), 46);
}

TEST(GfPow, Test139)
{
    ASSERT_EQ(redupe_gf_pow(2, 131), 92);
}

TEST(GfPow, Test140)
{
    ASSERT_EQ(redupe_gf_pow(2, 132), 184);
}

TEST(GfPow, Test141)
{
    ASSERT_EQ(redupe_gf_pow(2, 133), 109);
}

TEST(GfPow, Test142)
{
    ASSERT_EQ(redupe_gf_pow(2, 134), 218);
}

TEST(GfPow, Test143)
{
    ASSERT_EQ(redupe_gf_pow(2, 135), 169);
}

TEST(GfPow, Test144)
{
    ASSERT_EQ(redupe_gf_pow(2, 136), 79);
}

TEST(GfPow, Test145)
{
    ASSERT_EQ(redupe_gf_pow(2, 137), 158);
}

TEST(GfPow, Test146)
{
    ASSERT_EQ(redupe_gf_pow(2, 138), 33);
}

TEST(GfPow, Test147)
{
    ASSERT_EQ(redupe_gf_pow(2, 139), 66);
}

TEST(GfPow, Test148)
{
    ASSERT_EQ(redupe_gf_pow(2, 140), 132);
}

TEST(GfPow, Test149)
{
    ASSERT_EQ(redupe_gf_pow(2, 141), 21);
}

TEST(GfPow, Test150)
{
    ASSERT_EQ(redupe_gf_pow(2, 142), 42);
}

TEST(GfPow, Test151)
{
    ASSERT_EQ(redupe_gf_pow(2, 143), 84);
}

TEST(GfPow, Test152)
{
    ASSERT_EQ(redupe_gf_pow(2, 144), 168);
}

TEST(GfPow, Test153)
{
    ASSERT_EQ(redupe_gf_pow(2, 145), 77);
}

TEST(GfPow, Test154)
{
    ASSERT_EQ(redupe_gf_pow(2, 146), 154);
}

TEST(GfPow, Test155)
{
    ASSERT_EQ(redupe_gf_pow(2, 147), 41);
}

TEST(GfPow, Test156)
{
    ASSERT_EQ(redupe_gf_pow(2, 148), 82);
}

TEST(GfPow, Test157)
{
    ASSERT_EQ(redupe_gf_pow(2, 149), 164);
}

TEST(GfPow, Test158)
{
    ASSERT_EQ(redupe_gf_pow(2, 150), 85);
}

TEST(GfPow, Test159)
{
    ASSERT_EQ(redupe_gf_pow(2, 151), 170);
}

TEST(GfPow, Test160)
{
    ASSERT_EQ(redupe_gf_pow(2, 152), 73);
}

TEST(GfPow, Test161)
{
    ASSERT_EQ(redupe_gf_pow(2, 153), 146);
}

TEST(GfPow, Test162)
{
    ASSERT_EQ(redupe_gf_pow(2, 154), 57);
}

TEST(GfPow, Test163)
{
    ASSERT_EQ(redupe_gf_pow(2, 155), 114);
}

TEST(GfPow, Test164)
{
    ASSERT_EQ(redupe_gf_pow(2, 156), 228);
}

TEST(GfPow, Test165)
{
    ASSERT_EQ(redupe_gf_pow(2, -202), 40);
}

TEST(GfPow, Test166)
{
    ASSERT_EQ(redupe_gf_pow(40, 1), 40);
}

TEST(GfPow, Test167)
{
    ASSERT_EQ(redupe_gf_pow(2, -227), 24);
}

TEST(GfPow, Test168)
{
    ASSERT_EQ(redupe_gf_pow(24, 1), 24);
}

TEST(GfPow, Test169)
{
    ASSERT_EQ(redupe_gf_pow(2, -166), 225);
}

TEST(GfPow, Test170)
{
    ASSERT_EQ(redupe_gf_pow(225, 1), 225);
}

TEST(GfPow, Test171)
{
    ASSERT_EQ(redupe_gf_pow(2, -116), 66);
}

TEST(GfPow, Test172)
{
    ASSERT_EQ(redupe_gf_pow(66, 1), 66);
}

TEST(GfPow, Test173)
{
    ASSERT_EQ(redupe_gf_pow(2, -253), 4);
}

TEST(GfPow, Test174)
{
    ASSERT_EQ(redupe_gf_pow(4, 1), 4);
}

TEST(GfPow, Test175)
{
    ASSERT_EQ(redupe_gf_pow(2, -252), 8);
}

TEST(GfPow, Test176)
{
    ASSERT_EQ(redupe_gf_pow(8, 1), 8);
}

TEST(GfPow, Test177)
{
    ASSERT_EQ(redupe_gf_pow(2, -209), 159);
}

TEST(GfPow, Test178)
{
    ASSERT_EQ(redupe_gf_pow(159, 1), 159);
}

TEST(GfPow, Test179)
{
    ASSERT_EQ(redupe_gf_pow(2, -189), 97);
}

TEST(GfPow, Test180)
{
    ASSERT_EQ(redupe_gf_pow(97, 1), 97);
}

TEST(GfPow, Test181)
{
    ASSERT_EQ(redupe_gf_pow(2, -208), 35);
}

TEST(GfPow, Test182)
{
    ASSERT_EQ(redupe_gf_pow(35, 1), 35);
}

TEST(GfPow, Test183)
{
    ASSERT_EQ(redupe_gf_pow(2, -203), 20);
}

TEST(GfPow, Test184)
{
    ASSERT_EQ(redupe_gf_pow(20, 1), 20);
}

TEST(GfPow, Test185)
{
    ASSERT_EQ(redupe_gf_pow(2, -232), 201);
}

TEST(GfPow, Test186)
{
    ASSERT_EQ(redupe_gf_pow(201, 1), 201);
}

TEST(GfPow, Test187)
{
    ASSERT_EQ(redupe_gf_pow(2, -182), 202);
}

TEST(GfPow, Test188)
{
    ASSERT_EQ(redupe_gf_pow(202, 1), 202);
}

TEST(GfPow, Test189)
{
    ASSERT_EQ(redupe_gf_pow(2, -201), 80);
}

TEST(GfPow, Test190)
{
    ASSERT_EQ(redupe_gf_pow(80, 1), 80);
}

TEST(GfPow, Test191)
{
    ASSERT_EQ(redupe_gf_pow(2, -157), 67);
}

TEST(GfPow, Test192)
{
    ASSERT_EQ(redupe_gf_pow(67, 1), 67);
}

TEST(GfPow, Test193)
{
    ASSERT_EQ(redupe_gf_pow(2, -139), 248);
}

TEST(GfPow, Test194)
{
    ASSERT_EQ(redupe_gf_pow(248, 1), 248);
}

TEST(GfPow, Test195)
{
    ASSERT_EQ(redupe_gf_pow(2, -164), 163);
}

TEST(GfPow, Test196)
{
    ASSERT_EQ(redupe_gf_pow(163, 1), 163);
}

TEST(GfPow, Test197)
{
    ASSERT_EQ(redupe_gf_pow(2, -159), 217);
}

TEST(GfPow, Test198)
{
    ASSERT_EQ(redupe_gf_pow(217, 1), 217);
}

TEST(GfPow, Test199)
{
    ASSERT_EQ(redupe_gf_pow(2, -195), 185);
}

TEST(GfPow, Test200)
{
    ASSERT_EQ(redupe_gf_pow(185, 1), 185);
}

TEST(GfPow, Test201)
{
    ASSERT_EQ(redupe_gf_pow(2, -124), 92);
}

TEST(GfPow, Test202)
{
    ASSERT_EQ(redupe_gf_pow(92, 1), 92);
}

TEST(GfPow, Test203)
{
    ASSERT_EQ(redupe_gf_pow(2, -206), 140);
}

TEST(GfPow, Test204)
{
    ASSERT_EQ(redupe_gf_pow(140, 1), 140);
}

TEST(GfPow, Test205)
{
    ASSERT_EQ(redupe_gf_pow(2, -172), 187);
}

TEST(GfPow, Test206)
{
    ASSERT_EQ(redupe_gf_pow(187, 1), 187);
}

TEST(GfPow, Test207)
{
    ASSERT_EQ(redupe_gf_pow(2, 157), 213);
}

TEST(GfPow, Test208)
{
    ASSERT_EQ(redupe_gf_pow(2, 158), 183);
}

TEST(GfPow, Test209)
{
    ASSERT_EQ(redupe_gf_pow(2, 159), 115);
}

TEST(GfPow, Test210)
{
    ASSERT_EQ(redupe_gf_pow(2, 160), 230);
}

TEST(GfPow, Test211)
{
    ASSERT_EQ(redupe_gf_pow(2, 161), 209);
}

TEST(GfPow, Test212)
{
    ASSERT_EQ(redupe_gf_pow(2, 162), 191);
}

TEST(GfPow, Test213)
{
    ASSERT_EQ(redupe_gf_pow(2, 163), 99);
}

TEST(GfPow, Test214)
{
    ASSERT_EQ(redupe_gf_pow(2, 164), 198);
}

TEST(GfPow, Test215)
{
    ASSERT_EQ(redupe_gf_pow(2, 165), 145);
}

TEST(GfPow, Test216)
{
    ASSERT_EQ(redupe_gf_pow(2, 166), 63);
}

TEST(GfPow, Test217)
{
    ASSERT_EQ(redupe_gf_pow(2, 167), 126);
}

TEST(GfPow, Test218)
{
    ASSERT_EQ(redupe_gf_pow(2, 168), 252);
}

TEST(GfPow, Test219)
{
    ASSERT_EQ(redupe_gf_pow(2, 169), 229);
}

TEST(GfPow, Test220)
{
    ASSERT_EQ(redupe_gf_pow(2, 170), 215);
}

TEST(GfPow, Test221)
{
    ASSERT_EQ(redupe_gf_pow(2, 171), 179);
}

TEST(GfPow, Test222)
{
    ASSERT_EQ(redupe_gf_pow(2, 172), 123);
}

TEST(GfPow, Test223)
{
    ASSERT_EQ(redupe_gf_pow(2, 173), 246);
}

TEST(GfPow, Test224)
{
    ASSERT_EQ(redupe_gf_pow(2, 174), 241);
}

TEST(GfPow, Test225)
{
    ASSERT_EQ(redupe_gf_pow(2, 175), 255);
}

TEST(GfPow, Test226)
{
    ASSERT_EQ(redupe_gf_pow(2, 176), 227);
}

TEST(GfPow, Test227)
{
    ASSERT_EQ(redupe_gf_pow(2, 177), 219);
}

TEST(GfPow, Test228)
{
    ASSERT_EQ(redupe_gf_pow(2, 178), 171);
}

TEST(GfPow, Test229)
{
    ASSERT_EQ(redupe_gf_pow(2, 179), 75);
}

TEST(GfPow, Test230)
{
    ASSERT_EQ(redupe_gf_pow(2, 180), 150);
}

TEST(GfPow, Test231)
{
    ASSERT_EQ(redupe_gf_pow(2, 181), 49);
}

TEST(GfPow, Test232)
{
    ASSERT_EQ(redupe_gf_pow(2, 182), 98);
}

TEST(GfPow, Test233)
{
    ASSERT_EQ(redupe_gf_pow(2, 183), 196);
}

TEST(GfPow, Test234)
{
    ASSERT_EQ(redupe_gf_pow(2, 184), 149);
}

TEST(GfPow, Test235)
{
    ASSERT_EQ(redupe_gf_pow(2, 185), 55);
}

TEST(GfPow, Test236)
{
    ASSERT_EQ(redupe_gf_pow(2, 186), 110);
}

TEST(GfPow, Test237)
{
    ASSERT_EQ(redupe_gf_pow(2, 187), 220);
}

TEST(GfPow, Test238)
{
    ASSERT_EQ(redupe_gf_pow(2, 188), 165);
}

TEST(GfPow, Test239)
{
    ASSERT_EQ(redupe_gf_pow(2, 189), 87);
}

TEST(GfPow, Test240)
{
    ASSERT_EQ(redupe_gf_pow(2, 190), 174);
}

TEST(GfPow, Test241)
{
    ASSERT_EQ(redupe_gf_pow(2, 191), 65);
}

TEST(GfPow, Test242)
{
    ASSERT_EQ(redupe_gf_pow(2, 192), 130);
}

TEST(GfPow, Test243)
{
    ASSERT_EQ(redupe_gf_pow(2, 193), 25);
}

TEST(GfPow, Test244)
{
    ASSERT_EQ(redupe_gf_pow(2, 194), 50);
}

TEST(GfPow, Test245)
{
    ASSERT_EQ(redupe_gf_pow(2, 195), 100);
}

TEST(GfPow, Test246)
{
    ASSERT_EQ(redupe_gf_pow(2, 196), 200);
}

TEST(GfPow, Test247)
{
    ASSERT_EQ(redupe_gf_pow(2, 197), 141);
}

TEST(GfPow, Test248)
{
    ASSERT_EQ(redupe_gf_pow(2, 198), 7);
}

TEST(GfPow, Test249)
{
    ASSERT_EQ(redupe_gf_pow(2, 199), 14);
}

TEST(GfPow, Test250)
{
    ASSERT_EQ(redupe_gf_pow(2, 200), 28);
}

TEST(GfPow, Test251)
{
    ASSERT_EQ(redupe_gf_pow(2, 201), 56);
}

TEST(GfPow, Test252)
{
    ASSERT_EQ(redupe_gf_pow(2, 202), 112);
}

TEST(GfPow, Test253)
{
    ASSERT_EQ(redupe_gf_pow(2, 203), 224);
}

TEST(GfPow, Test254)
{
    ASSERT_EQ(redupe_gf_pow(2, 204), 221);
}

TEST(GfPow, Test255)
{
    ASSERT_EQ(redupe_gf_pow(2, 205), 167);
}

TEST(GfPow, Test256)
{
    ASSERT_EQ(redupe_gf_pow(2, 206), 83);
}

TEST(GfPow, Test257)
{
    ASSERT_EQ(redupe_gf_pow(2, 207), 166);
}

TEST(GfPow, Test258)
{
    ASSERT_EQ(redupe_gf_pow(2, 208), 81);
}

TEST(GfPow, Test259)
{
    ASSERT_EQ(redupe_gf_pow(2, 209), 162);
}

TEST(GfPow, Test260)
{
    ASSERT_EQ(redupe_gf_pow(2, 210), 89);
}

TEST(GfPow, Test261)
{
    ASSERT_EQ(redupe_gf_pow(2, 211), 178);
}

TEST(GfPow, Test262)
{
    ASSERT_EQ(redupe_gf_pow(2, 212), 121);
}

TEST(GfPow, Test263)
{
    ASSERT_EQ(redupe_gf_pow(2, 213), 242);
}

TEST(GfPow, Test264)
{
    ASSERT_EQ(redupe_gf_pow(2, 214), 249);
}

TEST(GfPow, Test265)
{
    ASSERT_EQ(redupe_gf_pow(2, 215), 239);
}

TEST(GfPow, Test266)
{
    ASSERT_EQ(redupe_gf_pow(2, 216), 195);
}

TEST(GfPow, Test267)
{
    ASSERT_EQ(redupe_gf_pow(2, 217), 155);
}

TEST(GfPow, Test268)
{
    ASSERT_EQ(redupe_gf_pow(2, 218), 43);
}

TEST(GfPow, Test269)
{
    ASSERT_EQ(redupe_gf_pow(2, -132), 197);
}

TEST(GfPow, Test270)
{
    ASSERT_EQ(redupe_gf_pow(197, 1), 197);
}

TEST(GfPow, Test271)
{
    ASSERT_EQ(redupe_gf_pow(2, -134), 118);
}

TEST(GfPow, Test272)
{
    ASSERT_EQ(redupe_gf_pow(118, 1), 118);
}

TEST(GfPow, Test273)
{
    ASSERT_EQ(redupe_gf_pow(2, -112), 84);
}

TEST(GfPow, Test274)
{
    ASSERT_EQ(redupe_gf_pow(84, 1), 84);
}

TEST(GfPow, Test275)
{
    ASSERT_EQ(redupe_gf_pow(2, -90), 145);
}

TEST(GfPow, Test276)
{
    ASSERT_EQ(redupe_gf_pow(145, 1), 145);
}

TEST(GfPow, Test277)
{
    ASSERT_EQ(redupe_gf_pow(2, -88), 126);
}

TEST(GfPow, Test278)
{
    ASSERT_EQ(redupe_gf_pow(126, 1), 126);
}

TEST(GfPow, Test279)
{
    ASSERT_EQ(redupe_gf_pow(2, -93), 191);
}

TEST(GfPow, Test280)
{
    ASSERT_EQ(redupe_gf_pow(191, 1), 191);
}

TEST(GfPow, Test281)
{
    ASSERT_EQ(redupe_gf_pow(2, -70), 55);
}

TEST(GfPow, Test282)
{
    ASSERT_EQ(redupe_gf_pow(55, 1), 55);
}

TEST(GfPow, Test283)
{
    ASSERT_EQ(redupe_gf_pow(2, -98), 213);
}

TEST(GfPow, Test284)
{
    ASSERT_EQ(redupe_gf_pow(213, 1), 213);
}

TEST(GfPow, Test285)
{
    ASSERT_EQ(redupe_gf_pow(2, -74), 49);
}

TEST(GfPow, Test286)
{
    ASSERT_EQ(redupe_gf_pow(49, 1), 49);
}

TEST(GfPow, Test287)
{
    ASSERT_EQ(redupe_gf_pow(2, -39), 195);
}

TEST(GfPow, Test288)
{
    ASSERT_EQ(redupe_gf_pow(195, 1), 195);
}

TEST(GfPow, Test289)
{
    ASSERT_EQ(redupe_gf_pow(2, -96), 115);
}

TEST(GfPow, Test290)
{
    ASSERT_EQ(redupe_gf_pow(115, 1), 115);
}

TEST(GfPow, Test291)
{
    ASSERT_EQ(redupe_gf_pow(2, -91), 198);
}

TEST(GfPow, Test292)
{
    ASSERT_EQ(redupe_gf_pow(198, 1), 198);
}

TEST(GfPow, Test293)
{
    ASSERT_EQ(redupe_gf_pow(2, -234), 117);
}

TEST(GfPow, Test294)
{
    ASSERT_EQ(redupe_gf_pow(117, 1), 117);
}

TEST(GfPow, Test295)
{
    ASSERT_EQ(redupe_gf_pow(2, -113), 42);
}

TEST(GfPow, Test296)
{
    ASSERT_EQ(redupe_gf_pow(42, 1), 42);
}

TEST(GfPow, Test297)
{
    ASSERT_EQ(redupe_gf_pow(2, -244), 232);
}

TEST(GfPow, Test298)
{
    ASSERT_EQ(redupe_gf_pow(232, 1), 232);
}

TEST(GfPow, Test299)
{
    ASSERT_EQ(redupe_gf_pow(2, -115), 132);
}

TEST(GfPow, Test300)
{
    ASSERT_EQ(redupe_gf_pow(132, 1), 132);
}

TEST(GfPow, Test301)
{
    ASSERT_EQ(redupe_gf_pow(2, -135), 59);
}

TEST(GfPow, Test302)
{
    ASSERT_EQ(redupe_gf_pow(59, 1), 59);
}

TEST(GfPow, Test303)
{
    ASSERT_EQ(redupe_gf_pow(2, -207), 70);
}

TEST(GfPow, Test304)
{
    ASSERT_EQ(redupe_gf_pow(70, 1), 70);
}

TEST(GfPow, Test305)
{
    ASSERT_EQ(redupe_gf_pow(2, -126), 23);
}

TEST(GfPow, Test306)
{
    ASSERT_EQ(redupe_gf_pow(23, 1), 23);
}

TEST(GfPow, Test307)
{
    ASSERT_EQ(redupe_gf_pow(2, -111), 168);
}

TEST(GfPow, Test308)
{
    ASSERT_EQ(redupe_gf_pow(168, 1), 168);
}

TEST(GfPow, Test309)
{
    ASSERT_EQ(redupe_gf_pow(2, -254), 2);
}

TEST(GfPow, Test310)
{
    ASSERT_EQ(redupe_gf_pow(2, -204), 10);
}

TEST(GfPow, Test311)
{
    ASSERT_EQ(redupe_gf_pow(10, 1), 10);
}

TEST(GfPow, Test312)
{
    ASSERT_EQ(redupe_gf_pow(2, -121), 218);
}

TEST(GfPow, Test313)
{
    ASSERT_EQ(redupe_gf_pow(218, 1), 218);
}

TEST(GfPow, Test314)
{
    ASSERT_EQ(redupe_gf_pow(2, -181), 137);
}

TEST(GfPow, Test315)
{
    ASSERT_EQ(redupe_gf_pow(137, 1), 137);
}

TEST(GfPow, Test316)
{
    ASSERT_EQ(redupe_gf_pow(2, -179), 30);
}

TEST(GfPow, Test317)
{
    ASSERT_EQ(redupe_gf_pow(30, 1), 30);
}
