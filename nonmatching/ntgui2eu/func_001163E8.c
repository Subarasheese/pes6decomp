/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_006024A8;

void func_001163E8(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 temp_s4;
    s32 temp_s5;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a2;
    s32 var_a3;
    s32 var_a4;
    s32 var_a5;
    s32 var_a6;
    void *temp_a2;
    void *temp_a2_2;
    void *temp_a2_3;
    void *temp_a2_4;
    void *var_a1;

    temp_s5 = M2C_FIELD(D_006024A8, s32 (**)(s32), 0xE8)(0x10);
    temp_s4 = M2C_FIELD(D_006024A8, s32 (**)(s32), 0xE4)(0x10);
    sp0 = M2C_FIELD(D_006024A8, s32 (**)(s32), 0xE8)(M2C_FIELD(arg1, s32 *, 0) + arg2);
    sp4 = M2C_FIELD(D_006024A8, s32 (**)(s32), 0xE4)(M2C_FIELD(arg1, s32 *, 4) + arg3);
    sp8 = M2C_FIELD(D_006024A8, s32 (**)(s32), 0xE8)(M2C_FIELD(arg1, s32 *, 8));
    var_a6 = 0;
    spC = M2C_FIELD(D_006024A8, s32 (**)(s32), 0xE4)(M2C_FIELD(arg1, s32 *, 0xC));
    var_a5 = 0;
    var_a4 = 0;
    do {
        var_a3 = 0;
        var_a1 = (var_a4 * 0x10) + arg0;
        var_a2 = 0;
loop_2:
        var_a3 += 1;
        M2C_FIELD(var_a1, s32 *, 8) = 0;
        temp_v1 = sp4 + var_a2;
        var_a2 += temp_s4;
        M2C_FIELD(var_a1, s32 *, 0) = (s32) (sp0 + var_a5);
        M2C_FIELD(var_a1, s32 *, 4) = temp_v1;
        M2C_FIELD(var_a1, s16 *, 0xC) = (s16) temp_s5;
        M2C_FIELD(var_a1, s16 *, 0xE) = (s16) temp_s4;
        var_a1 += 0x10;
        if (var_a3 < 3) {
            goto loop_2;
        }
        var_a6 += 1;
        var_a5 += temp_s5;
        var_a4 += 3;
    } while (var_a6 < 3);
    temp_a2 = arg0 + 0x10;
    M2C_FIELD(temp_a2, u16 *, 0xE) = (u16) spC;
    temp_a2_2 = arg0 + 0x40;
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (spC + M2C_FIELD(temp_a2, s32 *, 4));
    M2C_FIELD(arg0, u16 *, 0x3C) = (u16) sp8;
    M2C_FIELD(temp_a2_2, u16 *, 0xE) = (u16) spC;
    M2C_FIELD(temp_a2_2, u16 *, 0xC) = (u16) sp8;
    temp_a2_3 = arg0 + 0x50;
    M2C_FIELD(temp_a2_3, u16 *, 0xC) = (u16) sp8;
    M2C_FIELD(temp_a2_3, s32 *, 4) = (s32) (spC + M2C_FIELD(temp_a2_2, s32 *, 4));
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x50) + M2C_FIELD(temp_a2_3, u16 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0x60) = temp_v0;
    temp_a2_4 = arg0 + 0x70;
    M2C_FIELD(arg0, s32 *, 0x70) = temp_v0;
    M2C_FIELD(temp_a2_4, u16 *, 0xE) = (u16) spC;
    M2C_FIELD((arg0 + 0x80), s32 *, 4) = (s32) (((u16) spC & 0xFFFF) + M2C_FIELD(temp_a2_4, s32 *, 4));
    M2C_FIELD(arg0, s32 *, 0x80) = (s32) M2C_FIELD(arg0, s32 *, 0x70);
}
