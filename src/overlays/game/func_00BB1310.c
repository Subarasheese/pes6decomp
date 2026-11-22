/* compiler: mwcc-3.0.1b151-merged-sections */
#include "pes6/match_id_pairs.h"
#include "types.h"

extern s32 func_001A5F20(s32 index);
extern s32 func_00208210(s32 id);
extern u16 func_00BB4220(s32 id);
extern u16 func_00BB4310(s32 id);
extern u16 func_00BB4400(s32 id);
extern u16 func_00BB44F0(s32 id);
extern u16 func_00BB45E0(s32 id);
extern u16 func_00BB4690(s32 id);
extern u16 func_00BB4740(s32 id);
extern u16 func_00BB47F0(s32 id);
extern u16 func_00BB48A0(s32 id);
extern u16 func_00BB4990(s32 id);
extern u16 func_00BB4A40(s32 id);
extern u16 func_00BB4AF0(s32 id);
extern u16 func_00BB4BA0(s32 id);
extern u16 func_00BB4C50(s32 id);
extern u16 func_00BB4D00(s32 id);
extern u16 func_00BB4DB0(s32 id);
extern u16 func_00BB4EA0(s32 id);
extern u16 func_00BB4F90(s32 id);
extern u16 func_00BB5080(s32 id);
extern u16 func_00BB5170(s32 id);
extern u16 func_00BB5260(s32 id);
extern u16 func_00BB5310(s32 id);
extern u16 func_00BB5400(s32 id);
extern u16 func_00BB54C0(s32 id);
extern u16 func_00BB55E0(s32 id);
extern u16 func_00BB5710(s32 id);
extern u16 func_00BB57E0(s32 id);
extern u16 func_00BB5920(s32 id);
extern u16 func_00BB59F0(s32 id);
extern u16 func_00BB5B40(s32 id);
extern u16 func_00BB5C00(s32 id);
extern u16 func_00BB5CC0(s32 id);
extern u16 func_00BB5D80(s32 id);
extern u16 func_00BB5E40(s32 id);
extern u16 func_00BB5F00(s32 id);
extern u16 func_00BB5FB0(s32 id);
extern u16 func_00BB6050(s32 id);

#define ID_CASE(entry, id) case id: return entry;
#define DEFINE_GROUP_LOOKUP(group) \
    static inline u16 group_##group(s32 id) { \
        switch (id) { \
            PES6_MATCH_ID_PAIRS_##group(ID_CASE) \
            default: return 0xFFFF; \
        } \
    }

DEFINE_GROUP_LOOKUP(198)
DEFINE_GROUP_LOOKUP(196)
DEFINE_GROUP_LOOKUP(197)
DEFINE_GROUP_LOOKUP(192)
DEFINE_GROUP_LOOKUP(193)
DEFINE_GROUP_LOOKUP(190)
DEFINE_GROUP_LOOKUP(191)
DEFINE_GROUP_LOOKUP(204)
DEFINE_GROUP_LOOKUP(202)
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
DEFINE_GROUP_LOOKUP(57)
DEFINE_GROUP_LOOKUP(58)
DEFINE_GROUP_LOOKUP(60)
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

u16 func_00BB1310(s32 id) {
    switch (func_00208210(func_001A5F20(5))) {
    case 198:
        return group_198(id);
    case 196:
        return group_196(id);
    case 197:
        return group_197(id);
    case 195:
        return func_00BB6050(id);
    case 194:
        return func_00BB5FB0(id);
    case 192:
        return group_192(id);
    case 193:
        return group_193(id);
    case 190:
        return group_190(id);
    case 191:
        return group_191(id);
    case 204:
        return group_204(id);
    case 202:
        return group_202(id);
    case 200:
        return func_00BB5F00(id);
    case 199:
        return func_00BB5E40(id);
    case 203:
        return group_203(id);
    case 201:
        return group_201(id);
    case 189:
        return func_00BB5D80(id);
    case 188:
        return group_188(id);
    case 187:
        return func_00BB5CC0(id);
    case 186:
        return func_00BB5C00(id);
    case 185:
        return func_00BB5B40(id);
    case 184:
        return group_184(id);
    case 183:
        return func_00BB59F0(id);
    case 181:
        return func_00BB5920(id);
    case 182:
        return group_182(id);
    case 180:
        return group_180(id);
    case 179:
        return group_179(id);
    case 178:
        return group_178(id);
    case 177:
        return group_177(id);
    case 176:
        return group_176(id);
    case 175:
        return group_175(id);
    case 174:
        return group_174(id);
    case 173:
        return group_173(id);
    case 172:
        return group_172(id);
    case 171:
        return group_171(id);
    case 170:
        return group_170(id);
    case 167:
        return group_167(id);
    case 168:
        return group_168(id);
    case 169:
        return group_169(id);
    case 166:
        return group_166(id);
    case 165:
        return group_165(id);
    case 164:
        return group_164(id);
    case 163:
        return group_163(id);
    case 162:
        return group_162(id);
    case 161:
        return group_161(id);
    case 160:
        return group_160(id);
    case 159:
        return group_159(id);
    case 158:
        return group_158(id);
    case 157:
        return group_157(id);
    case 156:
        return group_156(id);
    case 155:
        return group_155(id);
    case 154:
        return group_154(id);
    case 153:
        return group_153(id);
    case 152:
        return group_152(id);
    case 151:
        return group_151(id);
    case 150:
        return group_150(id);
    case 149:
        return group_149(id);
    case 148:
        return group_148(id);
    case 147:
        return group_147(id);
    case 146:
        return group_146(id);
    case 145:
        return group_145(id);
    case 144:
        return group_144(id);
    case 143:
        return group_143(id);
    case 142:
        return group_142(id);
    case 141:
        return group_141(id);
    case 140:
        return group_140(id);
    case 139:
        return group_139(id);
    case 138:
        return group_138(id);
    case 137:
        return group_137(id);
    case 136:
        return group_136(id);
    case 135:
        return group_135(id);
    case 134:
        return group_134(id);
    case 133:
        return group_133(id);
    case 132:
        return func_00BB57E0(id);
    case 131:
        return group_131(id);
    case 102:
        return group_102(id);
    case 101:
        return group_101(id);
    case 100:
        return group_100(id);
    case 99:
        return group_99(id);
    case 98:
        return func_00BB5710(id);
    case 106:
        return group_106(id);
    case 105:
        return group_105(id);
    case 104:
        return group_104(id);
    case 103:
        return func_00BB55E0(id);
    case 97:
        return group_97(id);
    case 96:
        return func_00BB54C0(id);
    case 95:
        return func_00BB5400(id);
    case 94:
        return group_94(id);
    case 93:
        return group_93(id);
    case 63:
        return group_63(id);
    case 56:
        return func_00BB5310(id);
    case 37:
        return func_00BB5260(id);
    case 54:
        return func_00BB5170(id);
    case 53:
        return func_00BB5080(id);
    case 52:
        return func_00BB4F90(id);
    case 51:
        return func_00BB4EA0(id);
    case 48:
        return func_00BB4DB0(id);
    case 45:
        return func_00BB4D00(id);
    case 44:
        return func_00BB4C50(id);
    case 43:
        return func_00BB4BA0(id);
    case 42:
        return func_00BB4AF0(id);
    case 41:
        return func_00BB4A40(id);
    case 40:
        return func_00BB4990(id);
    case 55:
        return func_00BB48A0(id);
    case 36:
        return func_00BB47F0(id);
    case 39:
        return func_00BB4740(id);
    case 31:
        return group_31(id);
    case 24:
        return group_24(id);
    case 33:
        return group_33(id);
    case 29:
        return group_29(id);
    case 32:
        return group_32(id);
    case 25:
        return group_25(id);
    case 30:
        return group_30(id);
    case 22:
        return group_22(id);
    case 28:
        return group_28(id);
    case 27:
        return group_27(id);
    case 23:
        return group_23(id);
    case 59:
        return group_59(id);
    case 62:
        return group_62(id);
    case 18:
        return group_18(id);
    case 21:
        return group_21(id);
    case 20:
        return group_20(id);
    case 26:
        return group_26(id);
    case 19:
        return group_19(id);
    case 17:
        return group_17(id);
    case 34:
        return group_34(id);
    case 35:
        return func_00BB4690(id);
    case 57:
        return group_57(id);
    case 58:
        return group_58(id);
    case 60:
        return group_60(id);
    case 38:
        return func_00BB45E0(id);
    case 61:
        return group_61(id);
    case 50:
        return func_00BB44F0(id);
    case 46:
        return func_00BB4400(id);
    case 47:
        return func_00BB4310(id);
    case 49:
        return func_00BB4220(id);
    case 64:
        return group_64(id);
    case 14:
        return group_14(id);
    case 15:
        return group_15(id);
    case 16:
        return group_16(id);
    case 13:
        return group_13(id);
    case 11:
        return group_11(id);
    case 10:
        return group_10(id);
    case 9:
        return group_9(id);
    case 8:
        return group_8(id);
    case 7:
        return group_7(id);
    case 12:
        return group_12(id);
    case 5:
        return group_5(id);
    case 6:
        return group_6(id);
    case 4:
        return group_4(id);
    case 3:
        return group_3(id);
    case 1:
        return group_1(id);
    case 2:
        return group_2(id);
    case 0:
        return group_0(id);
    default:
        return 0xFFFF;
    }
}
