/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

M2C_UNK func_00207390(char *, M2C_UNK);
M2C_UNK func_00209A00(char *, M2C_UNK, M2C_UNK);
M2C_UNK func_0027D0B0(char *, M2C_UNK);
M2C_UNK func_00987BF0(s32, char *, M2C_UNK);
s32 func_009B30B0(u16, u16);
s32 func_009B33F0(char *, char *);
s32 func_009E1C90(M2C_UNK);
s32 func_00A07B40();
s32 func_00A1B4A0(char *);
extern char Pes6MatchPlayers[];
extern char D_00591E53[];
extern char D_00591E70[];

s32 func_00AD9D40(char *arg0, s32 arg1) {
    s32 temp_f0;
    s32 temp_f1;
    s32 temp_s1;
    s32 var_a0;
    s32 var_a1;
    u16 temp_s0;
    u16 temp_v0;
    u16 temp_v1;
    u16 temp_v1_3;
    u8 temp_v1_2;
    char *temp_a0;
    char *temp_a1;
    char *temp_v1_5;

    if ((func_009E1C90(1) & 0xFF) == 5) {
        return 0;
    }
    if (func_00A1B4A0(arg0) != 0) {
        return 0;
    }
    temp_v1 = M2C_FIELD(M2C_FIELD(arg0, char **, 4), u16 *, 0x30);
    if (temp_v1 == 0x2DD || temp_v1 == 0x307 || temp_v1 == 0x306) {
        return 0;
    }
    if (arg1 == 0) {
        if (func_00A07B40() == 0) {
            return 0;
        }
    }
    func_0027D0B0(arg0, 0xC);
    if ((*(f32 *)D_00591E70) < -64.0f) {
        func_0027D0B0(arg0, 0xD);
        if ((*(f32 *)D_00591E70) < -64.0f) {
            return 0;
        }
    }
    func_00987BF0((M2C_FIELD(arg0, u8 *, 0x13) ^ 1) & 0xFF, arg0, 1);
    temp_v1_2 = *(((char *)D_00591E53) + ((M2C_FIELD(arg0, u8 *, 0x13) ^ 1) * 2));
    if (temp_v1_2 == 0xFF) {
        var_a0 = 1;
    } else {
        var_a0 = (s32) temp_v1_2 % 23;
    }
    temp_a1 = ((char *)Pes6MatchPlayers) + (var_a0 * 0x240);
    temp_v0 = M2C_FIELD(M2C_FIELD(temp_a1, char **, 4), u16 *, 0x30);
    if (!(temp_v0 == 0xEC || temp_v0 == 0xCA || temp_v0 == 0xF9 || temp_v0 == 0xEE ||
          temp_v0 == 0x2D7 || temp_v0 == 0x2DB || temp_v0 == 0x2D8 || temp_v0 == 0x2DD)) {
        return 0;
    }
    temp_f1 = (s32) (M2C_FIELD(arg0, f32 *, 0xE0) - M2C_FIELD(temp_a1, f32 *, 0xE0));
    temp_f0 = (s32) (M2C_FIELD(arg0, f32 *, 0xE8) - M2C_FIELD(temp_a1, f32 *, 0xE8));
    temp_s1 = (temp_f1 * temp_f1) + (temp_f0 * temp_f0);
    temp_s0 = func_009B33F0(arg0, temp_a1) & 0xFFFF;
    temp_v1_3 = func_009B30B0(M2C_FIELD(arg0, u16 *, 0x26), temp_s0) & 0xFFFF;
    if (!((temp_s1 < 0x10000 && temp_v1_3 < 0x30) || (temp_s1 < 0xC400 && temp_v1_3 < 0x49))) {
        return 0;
    }
    temp_a0 = M2C_FIELD(arg0, char **, 4);
    var_a1 = func_009B30B0(M2C_FIELD(arg0, u16 *, 0x26), M2C_FIELD(arg0, u16 *, 0x28)) & 0xFFFF;
    if (M2C_FIELD(temp_a0, u16 *, 0x30) == 0xF8 || M2C_FIELD(temp_a0, u16 *, 0x30) == 0xD5) {
        var_a1 = 0x50;
    }
    if (var_a1 >= 0x29) {
        func_00209A00(temp_a0, 0x1FA, 0);
        M2C_FIELD(M2C_FIELD(arg0, char **, 4), u8 *, 0x2D) = (u8) ((((M2C_FIELD(arg0, u16 *, 0x26) - M2C_FIELD(arg0, u16 *, 0x28)) + 0x10000) & 0xFFFF) < 0x8001);
        M2C_FIELD(arg0, s8 *, 0x16) = 0x12;
        M2C_FIELD(arg0, s16 *, 0x18) = 5;
    } else {
        M2C_FIELD(arg0, s16 *, 0x2C) = (s16) ((temp_s0 & 0xFFFF) + 0x7FFF + 1);
        temp_v1_5 = M2C_FIELD(arg0, char **, 4);
        M2C_FIELD(temp_v1_5, u8 *, 0x2D) = (u8) (M2C_FIELD(temp_v1_5, u8 *, 0x2D) ^ 1);
        func_00209A00(M2C_FIELD(arg0, char **, 4), 0x10A, 0);
        M2C_FIELD(arg0, s8 *, 0x16) = 0x12;
        M2C_FIELD(arg0, s16 *, 0x18) = 1;
    }
    func_00207390(M2C_FIELD(arg0, char **, 4), 8);
    return 1;
}
