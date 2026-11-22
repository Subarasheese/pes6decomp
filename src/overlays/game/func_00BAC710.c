/* compiler: mwcc-3.0.1b151-merged-sections */
#include "pes6/match_id_pairs.h"
#include "types.h"

extern s32 func_001A5F20(s32 index);
extern s32 func_00208210(s32 id);
extern s32 func_00BB0000(u16 entry);
extern s32 func_00BB00D0(u16 entry);
extern s32 func_00BB01A0(u16 entry);
extern s32 func_00BB0270(u16 entry);
extern s32 func_00BB0340(u16 entry);
extern s32 func_00BB0410(u16 entry);
extern s32 func_00BB04E0(u16 entry);
extern s32 func_00BB05B0(u16 entry);
extern s32 func_00BB0680(u16 entry);
extern s32 func_00BB0750(u16 entry);
extern s32 func_00BB0820(u16 entry);
extern s32 func_00BB08F0(u16 entry);
extern s32 func_00BB09B0(u16 entry);
extern s32 func_00BB0AB0(u16 entry);
extern s32 func_00BB0BB0(u16 entry);
extern s32 func_00BB0C70(u16 entry);
extern s32 func_00BB0DB0(u16 entry);
extern s32 func_00BB0E70(u16 entry);
extern s32 func_00BB0F90(u16 entry);
extern s32 func_00BB1040(u16 entry);
extern s32 func_00BB1100(u16 entry);
extern s32 func_00BB11B0(u16 entry);
extern s32 func_00BB1260(u16 entry);

#define ID_CASE(entry, id) case entry: return id;
#define DEFINE_GROUP_LOOKUP(group) \
    static inline s32 group_##group(u16 entry) { \
        switch (entry) { \
            PES6_MATCH_ID_PAIRS_##group(ID_CASE) \
            default: return 0xFFFF; \
        } \
    }

DEFINE_GROUP_LOOKUP(198)
DEFINE_GROUP_LOOKUP(196)
DEFINE_GROUP_LOOKUP(197)
DEFINE_GROUP_LOOKUP(195)
DEFINE_GROUP_LOOKUP(194)
DEFINE_GROUP_LOOKUP(192)
DEFINE_GROUP_LOOKUP(193)
DEFINE_GROUP_LOOKUP(190)
DEFINE_GROUP_LOOKUP(191)
DEFINE_GROUP_LOOKUP(204)
DEFINE_GROUP_LOOKUP(202)
DEFINE_GROUP_LOOKUP(200)
DEFINE_GROUP_LOOKUP(203)
DEFINE_GROUP_LOOKUP(201)
DEFINE_GROUP_LOOKUP(188)
DEFINE_GROUP_LOOKUP(184)
DEFINE_GROUP_LOOKUP(182)
DEFINE_GROUP_LOOKUP(180)
DEFINE_GROUP_LOOKUP(179)
DEFINE_GROUP_LOOKUP(178)
DEFINE_GROUP_LOOKUP(177)
DEFINE_GROUP_LOOKUP(176)
DEFINE_GROUP_LOOKUP(175)
DEFINE_GROUP_LOOKUP(174)
DEFINE_GROUP_LOOKUP(173)
DEFINE_GROUP_LOOKUP(172)
DEFINE_GROUP_LOOKUP(171)
DEFINE_GROUP_LOOKUP(170)
DEFINE_GROUP_LOOKUP(167)
DEFINE_GROUP_LOOKUP(168)
DEFINE_GROUP_LOOKUP(169)
DEFINE_GROUP_LOOKUP(166)
DEFINE_GROUP_LOOKUP(165)
DEFINE_GROUP_LOOKUP(164)
DEFINE_GROUP_LOOKUP(163)
DEFINE_GROUP_LOOKUP(162)
DEFINE_GROUP_LOOKUP(161)
DEFINE_GROUP_LOOKUP(160)
DEFINE_GROUP_LOOKUP(159)
DEFINE_GROUP_LOOKUP(158)
DEFINE_GROUP_LOOKUP(157)
DEFINE_GROUP_LOOKUP(156)
DEFINE_GROUP_LOOKUP(155)
DEFINE_GROUP_LOOKUP(154)
DEFINE_GROUP_LOOKUP(153)
DEFINE_GROUP_LOOKUP(152)
DEFINE_GROUP_LOOKUP(151)
DEFINE_GROUP_LOOKUP(150)
DEFINE_GROUP_LOOKUP(149)
DEFINE_GROUP_LOOKUP(148)
DEFINE_GROUP_LOOKUP(147)
DEFINE_GROUP_LOOKUP(146)
DEFINE_GROUP_LOOKUP(145)
DEFINE_GROUP_LOOKUP(144)
DEFINE_GROUP_LOOKUP(143)
DEFINE_GROUP_LOOKUP(142)
DEFINE_GROUP_LOOKUP(141)
DEFINE_GROUP_LOOKUP(140)
DEFINE_GROUP_LOOKUP(139)
DEFINE_GROUP_LOOKUP(138)
DEFINE_GROUP_LOOKUP(137)
DEFINE_GROUP_LOOKUP(136)
DEFINE_GROUP_LOOKUP(135)
DEFINE_GROUP_LOOKUP(134)
DEFINE_GROUP_LOOKUP(133)
DEFINE_GROUP_LOOKUP(131)
DEFINE_GROUP_LOOKUP(102)
DEFINE_GROUP_LOOKUP(101)
DEFINE_GROUP_LOOKUP(100)
DEFINE_GROUP_LOOKUP(99)
DEFINE_GROUP_LOOKUP(106)
DEFINE_GROUP_LOOKUP(105)
DEFINE_GROUP_LOOKUP(104)
DEFINE_GROUP_LOOKUP(97)
DEFINE_GROUP_LOOKUP(94)
DEFINE_GROUP_LOOKUP(93)
DEFINE_GROUP_LOOKUP(63)
DEFINE_GROUP_LOOKUP(37)
DEFINE_GROUP_LOOKUP(45)
DEFINE_GROUP_LOOKUP(44)
DEFINE_GROUP_LOOKUP(43)
DEFINE_GROUP_LOOKUP(42)
DEFINE_GROUP_LOOKUP(41)
DEFINE_GROUP_LOOKUP(40)
DEFINE_GROUP_LOOKUP(36)
DEFINE_GROUP_LOOKUP(39)
DEFINE_GROUP_LOOKUP(31)
DEFINE_GROUP_LOOKUP(24)
DEFINE_GROUP_LOOKUP(33)
DEFINE_GROUP_LOOKUP(29)
DEFINE_GROUP_LOOKUP(32)
DEFINE_GROUP_LOOKUP(25)
DEFINE_GROUP_LOOKUP(30)
DEFINE_GROUP_LOOKUP(22)
DEFINE_GROUP_LOOKUP(28)
DEFINE_GROUP_LOOKUP(27)
DEFINE_GROUP_LOOKUP(23)
DEFINE_GROUP_LOOKUP(59)
DEFINE_GROUP_LOOKUP(62)
DEFINE_GROUP_LOOKUP(18)
DEFINE_GROUP_LOOKUP(21)
DEFINE_GROUP_LOOKUP(20)
DEFINE_GROUP_LOOKUP(26)
DEFINE_GROUP_LOOKUP(19)
DEFINE_GROUP_LOOKUP(17)
DEFINE_GROUP_LOOKUP(34)
DEFINE_GROUP_LOOKUP(35)
DEFINE_GROUP_LOOKUP(57)
DEFINE_GROUP_LOOKUP(58)
DEFINE_GROUP_LOOKUP(60)
DEFINE_GROUP_LOOKUP(38)
DEFINE_GROUP_LOOKUP(61)
DEFINE_GROUP_LOOKUP(64)
DEFINE_GROUP_LOOKUP(14)
DEFINE_GROUP_LOOKUP(15)
DEFINE_GROUP_LOOKUP(16)
DEFINE_GROUP_LOOKUP(13)
DEFINE_GROUP_LOOKUP(11)
DEFINE_GROUP_LOOKUP(10)
DEFINE_GROUP_LOOKUP(9)
DEFINE_GROUP_LOOKUP(8)
DEFINE_GROUP_LOOKUP(7)
DEFINE_GROUP_LOOKUP(12)
DEFINE_GROUP_LOOKUP(5)
DEFINE_GROUP_LOOKUP(6)
DEFINE_GROUP_LOOKUP(4)
DEFINE_GROUP_LOOKUP(3)
DEFINE_GROUP_LOOKUP(1)
DEFINE_GROUP_LOOKUP(2)
DEFINE_GROUP_LOOKUP(0)

#undef DEFINE_GROUP_LOOKUP
#undef ID_CASE

s32 func_00BAC710(u16 entry) {
    switch (func_00208210(func_001A5F20(5))) {
    case 198:
        return group_198(entry);
    case 196:
        return group_196(entry);
    case 197:
        return group_197(entry);
    case 195:
        return group_195(entry);
    case 194:
        return group_194(entry);
    case 192:
        return group_192(entry);
    case 193:
        return group_193(entry);
    case 190:
        return group_190(entry);
    case 191:
        return group_191(entry);
    case 204:
        return group_204(entry);
    case 202:
        return group_202(entry);
    case 200:
        return group_200(entry);
    case 199:
        return func_00BB1260(entry);
    case 203:
        return group_203(entry);
    case 201:
        return group_201(entry);
    case 189:
        return func_00BB11B0(entry);
    case 188:
        return group_188(entry);
    case 187:
        return func_00BB1100(entry);
    case 186:
        return func_00BB1040(entry);
    case 185:
        return func_00BB0F90(entry);
    case 184:
        return group_184(entry);
    case 183:
        return func_00BB0E70(entry);
    case 181:
        return func_00BB0DB0(entry);
    case 182:
        return group_182(entry);
    case 180:
        return group_180(entry);
    case 179:
        return group_179(entry);
    case 178:
        return group_178(entry);
    case 177:
        return group_177(entry);
    case 176:
        return group_176(entry);
    case 175:
        return group_175(entry);
    case 174:
        return group_174(entry);
    case 173:
        return group_173(entry);
    case 172:
        return group_172(entry);
    case 171:
        return group_171(entry);
    case 170:
        return group_170(entry);
    case 167:
        return group_167(entry);
    case 168:
        return group_168(entry);
    case 169:
        return group_169(entry);
    case 166:
        return group_166(entry);
    case 165:
        return group_165(entry);
    case 164:
        return group_164(entry);
    case 163:
        return group_163(entry);
    case 162:
        return group_162(entry);
    case 161:
        return group_161(entry);
    case 160:
        return group_160(entry);
    case 159:
        return group_159(entry);
    case 158:
        return group_158(entry);
    case 157:
        return group_157(entry);
    case 156:
        return group_156(entry);
    case 155:
        return group_155(entry);
    case 154:
        return group_154(entry);
    case 153:
        return group_153(entry);
    case 152:
        return group_152(entry);
    case 151:
        return group_151(entry);
    case 150:
        return group_150(entry);
    case 149:
        return group_149(entry);
    case 148:
        return group_148(entry);
    case 147:
        return group_147(entry);
    case 146:
        return group_146(entry);
    case 145:
        return group_145(entry);
    case 144:
        return group_144(entry);
    case 143:
        return group_143(entry);
    case 142:
        return group_142(entry);
    case 141:
        return group_141(entry);
    case 140:
        return group_140(entry);
    case 139:
        return group_139(entry);
    case 138:
        return group_138(entry);
    case 137:
        return group_137(entry);
    case 136:
        return group_136(entry);
    case 135:
        return group_135(entry);
    case 134:
        return group_134(entry);
    case 133:
        return group_133(entry);
    case 132:
        return func_00BB0C70(entry);
    case 131:
        return group_131(entry);
    case 102:
        return group_102(entry);
    case 101:
        return group_101(entry);
    case 100:
        return group_100(entry);
    case 99:
        return group_99(entry);
    case 98:
        return func_00BB0BB0(entry);
    case 106:
        return group_106(entry);
    case 105:
        return group_105(entry);
    case 104:
        return group_104(entry);
    case 103:
        return func_00BB0AB0(entry);
    case 97:
        return group_97(entry);
    case 96:
        return func_00BB09B0(entry);
    case 95:
        return func_00BB08F0(entry);
    case 94:
        return group_94(entry);
    case 93:
        return group_93(entry);
    case 63:
        return group_63(entry);
    case 56:
        return func_00BB0820(entry);
    case 37:
        return group_37(entry);
    case 54:
        return func_00BB0750(entry);
    case 53:
        return func_00BB0680(entry);
    case 52:
        return func_00BB05B0(entry);
    case 51:
        return func_00BB04E0(entry);
    case 48:
        return func_00BB0410(entry);
    case 45:
        return group_45(entry);
    case 44:
        return group_44(entry);
    case 43:
        return group_43(entry);
    case 42:
        return group_42(entry);
    case 41:
        return group_41(entry);
    case 40:
        return group_40(entry);
    case 55:
        return func_00BB0340(entry);
    case 36:
        return group_36(entry);
    case 39:
        return group_39(entry);
    case 31:
        return group_31(entry);
    case 24:
        return group_24(entry);
    case 33:
        return group_33(entry);
    case 29:
        return group_29(entry);
    case 32:
        return group_32(entry);
    case 25:
        return group_25(entry);
    case 30:
        return group_30(entry);
    case 22:
        return group_22(entry);
    case 28:
        return group_28(entry);
    case 27:
        return group_27(entry);
    case 23:
        return group_23(entry);
    case 59:
        return group_59(entry);
    case 62:
        return group_62(entry);
    case 18:
        return group_18(entry);
    case 21:
        return group_21(entry);
    case 20:
        return group_20(entry);
    case 26:
        return group_26(entry);
    case 19:
        return group_19(entry);
    case 17:
        return group_17(entry);
    case 34:
        return group_34(entry);
    case 35:
        return group_35(entry);
    case 57:
        return group_57(entry);
    case 58:
        return group_58(entry);
    case 60:
        return group_60(entry);
    case 38:
        return group_38(entry);
    case 61:
        return group_61(entry);
    case 50:
        return func_00BB0270(entry);
    case 46:
        return func_00BB01A0(entry);
    case 47:
        return func_00BB00D0(entry);
    case 49:
        return func_00BB0000(entry);
    case 64:
        return group_64(entry);
    case 14:
        return group_14(entry);
    case 15:
        return group_15(entry);
    case 16:
        return group_16(entry);
    case 13:
        return group_13(entry);
    case 11:
        return group_11(entry);
    case 10:
        return group_10(entry);
    case 9:
        return group_9(entry);
    case 8:
        return group_8(entry);
    case 7:
        return group_7(entry);
    case 12:
        return group_12(entry);
    case 5:
        return group_5(entry);
    case 6:
        return group_6(entry);
    case 4:
        return group_4(entry);
    case 3:
        return group_3(entry);
    case 1:
        return group_1(entry);
    case 2:
        return group_2(entry);
    case 0:
        return group_0(entry);
    default:
        return 0xFFFF;
    }
}
