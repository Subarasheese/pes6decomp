/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char Pes6MatchPlayers[];
extern char D_008B0F40[];

void func_0084A9C0(void) {
    M2C_UNK *var_a0;
    M2C_UNK *var_a2;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f11;
    f32 temp_f12;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f5;
    f32 temp_f6;
    f32 temp_f7;
    f32 temp_f8;
    f32 temp_f9;
    s32 var_a1;

    var_a2 = ((void *)D_008B0F40);
    var_a0 = ((void *)Pes6MatchPlayers);
    var_a1 = 0;
    do {
        temp_f2 = M2C_FIELD(var_a0, f32 *, 0xE0);
        var_a1 += 7;
        temp_f1 = M2C_FIELD(var_a0, f32 *, 0xE8);
        temp_f12 = M2C_FIELD(var_a0, f32 *, 0x320);
        temp_f11 = M2C_FIELD(var_a0, f32 *, 0x328);
        temp_f10 = M2C_FIELD(var_a0, f32 *, 0x560);
        temp_f9 = M2C_FIELD(var_a0, f32 *, 0x568);
        M2C_FIELD(var_a2, f32 *, 8) = (f32) (temp_f2 - M2C_FIELD(var_a2, f32 *, 0));
        temp_f8 = M2C_FIELD(var_a0, f32 *, 0x7A0);
        temp_f7 = M2C_FIELD(var_a0, f32 *, 0x7A8);
        temp_f6 = M2C_FIELD(var_a0, f32 *, 0x9E0);
        temp_f5 = M2C_FIELD(var_a0, f32 *, 0x9E8);
        temp_f4 = M2C_FIELD(var_a0, f32 *, 0xC20);
        M2C_FIELD(var_a2, f32 *, 0xC) = (f32) (temp_f1 - M2C_FIELD(var_a2, f32 *, 4));
        M2C_FIELD(var_a2, f32 *, 0) = temp_f2;
        M2C_FIELD(var_a2, f32 *, 4) = temp_f1;
        temp_f3 = M2C_FIELD(var_a0, f32 *, 0xC28);
        temp_f2_2 = M2C_FIELD(var_a0, f32 *, 0xE60);
        temp_f1_2 = M2C_FIELD(var_a0, f32 *, 0xE68);
        temp_f0 = temp_f12 - M2C_FIELD(var_a2, f32 *, 0x10);
        var_a0 += 0xFC0;
        M2C_FIELD(var_a2, f32 *, 0x18) = temp_f0;
        M2C_FIELD(var_a2, f32 *, 0x1C) = (f32) (temp_f11 - M2C_FIELD(var_a2, f32 *, 0x14));
        M2C_FIELD(var_a2, f32 *, 0x10) = temp_f12;
        M2C_FIELD(var_a2, f32 *, 0x14) = temp_f11;
        M2C_FIELD(var_a2, f32 *, 0x28) = (f32) (temp_f10 - M2C_FIELD(var_a2, f32 *, 0x20));
        M2C_FIELD(var_a2, f32 *, 0x2C) = (f32) (temp_f9 - M2C_FIELD(var_a2, f32 *, 0x24));
        M2C_FIELD(var_a2, f32 *, 0x20) = temp_f10;
        M2C_FIELD(var_a2, f32 *, 0x24) = temp_f9;
        M2C_FIELD(var_a2, f32 *, 0x38) = (f32) (temp_f8 - M2C_FIELD(var_a2, f32 *, 0x30));
        M2C_FIELD(var_a2, f32 *, 0x3C) = (f32) (temp_f7 - M2C_FIELD(var_a2, f32 *, 0x34));
        M2C_FIELD(var_a2, f32 *, 0x30) = temp_f8;
        M2C_FIELD(var_a2, f32 *, 0x34) = temp_f7;
        M2C_FIELD(var_a2, f32 *, 0x48) = (f32) (temp_f6 - M2C_FIELD(var_a2, f32 *, 0x40));
        M2C_FIELD(var_a2, f32 *, 0x4C) = (f32) (temp_f5 - M2C_FIELD(var_a2, f32 *, 0x44));
        M2C_FIELD(var_a2, f32 *, 0x40) = temp_f6;
        M2C_FIELD(var_a2, f32 *, 0x44) = temp_f5;
        M2C_FIELD(var_a2, f32 *, 0x58) = (f32) (temp_f4 - M2C_FIELD(var_a2, f32 *, 0x50));
        M2C_FIELD(var_a2, f32 *, 0x5C) = (f32) (temp_f3 - M2C_FIELD(var_a2, f32 *, 0x54));
        M2C_FIELD(var_a2, f32 *, 0x50) = temp_f4;
        M2C_FIELD(var_a2, f32 *, 0x54) = temp_f3;
        M2C_FIELD(var_a2, f32 *, 0x68) = (f32) (temp_f2_2 - M2C_FIELD(var_a2, f32 *, 0x60));
        M2C_FIELD(var_a2, f32 *, 0x6C) = (f32) (temp_f1_2 - M2C_FIELD(var_a2, f32 *, 0x64));
        M2C_FIELD(var_a2, f32 *, 0x60) = temp_f2_2;
        M2C_FIELD(var_a2, f32 *, 0x64) = temp_f1_2;
        var_a2 += 0x70;
    } while (var_a1 < 0x10);
    temp_f4_2 = M2C_FIELD(var_a0, f32 *, 0xE0);
    temp_f3_2 = M2C_FIELD(var_a0, f32 *, 0xE8);
    temp_f2_3 = M2C_FIELD(var_a0, f32 *, 0x320);
    temp_f1_3 = M2C_FIELD(var_a0, f32 *, 0x328);
    M2C_FIELD(var_a2, f32 *, 8) = (f32) (temp_f4_2 - M2C_FIELD(var_a2, f32 *, 0));
    M2C_FIELD(var_a2, f32 *, 0xC) = (f32) (temp_f3_2 - M2C_FIELD(var_a2, f32 *, 4));
    M2C_FIELD(var_a2, f32 *, 0) = temp_f4_2;
    M2C_FIELD(var_a2, f32 *, 4) = temp_f3_2;
    M2C_FIELD(var_a2, f32 *, 0x18) = (f32) (temp_f2_3 - M2C_FIELD(var_a2, f32 *, 0x10));
    M2C_FIELD(var_a2, f32 *, 0x1C) = (f32) (temp_f1_3 - M2C_FIELD(var_a2, f32 *, 0x14));
    M2C_FIELD(var_a2, f32 *, 0x10) = temp_f2_3;
    M2C_FIELD(var_a2, f32 *, 0x14) = temp_f1_3;
}
