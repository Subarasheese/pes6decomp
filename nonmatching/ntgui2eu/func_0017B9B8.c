/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


f32 func_00165208(s32, s16, void *, void *, s32, s32); /* extern */
f32 func_00165280(s32);                             /* extern */

void func_0017B9B8(void *arg0) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
    f32 temp_f0;
    f32 temp_f20;
    s32 temp_a4;
    s32 temp_a4_2;
    s32 temp_fp;
    s32 temp_lo;
    s32 temp_s0;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_s3_2;
    s32 temp_s4;
    s32 temp_s4_2;
    s32 temp_s5;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_a1;
    s32 var_a2;
    s32 var_a3;
    s32 var_a5;
    s64 temp_v0_3;
    s64 temp_v0_4;
    void *temp_a0;
    void *var_s1;
    void *var_s6;
    void *var_s7;

    sp14 = 0;
    sp0 = (s32) M2C_FIELD(arg0, s32 *, 0x5AC) >> 1;
    temp_fp = (s32) M2C_FIELD(arg0, s32 *, 0x5B0) >> 1;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x920);
    temp_s4 = temp_fp - temp_v0;
    temp_s3 = sp0 - temp_v0;
    temp_s3_2 = (temp_s3 <= -1) ? 0 : temp_s3;
    temp_s4_2 = (temp_s4 <= -1) ? 0 : temp_s4;
    var_a3 = sp0 - temp_s3_2;
    temp_a4 = temp_fp - temp_s4_2;
    temp_v0_2 = var_a3 * 3;
    temp_v1 = temp_a4 * 3;
    temp_s0 = M2C_FIELD(arg0, s32 *, 0x5D4);
    var_a1 = sp0;
    var_a5 = temp_s3_2 + ((s32) ((temp_v0_2 > -1) ? temp_v0_2 : (temp_v0_2 + 3)) >> 2);
    var_a2 = temp_s4_2 + ((s32) ((temp_v1 > -1) ? temp_v1 : (temp_v1 + 3)) >> 2);
    temp_a0 = arg0 + ((M2C_FIELD(arg0, s32 *, 0x4EC) * 0x1C60) + 0x970);
    sp4 = temp_s3_2 + ((s32) ((var_a3 > -1) ? var_a3 : (var_a3 + 3)) >> 2);
    spC = temp_s4_2 + ((s32) ((temp_a4 > -1) ? temp_a4 : (temp_a4 + 3)) >> 2);
    temp_s5 = M2C_FIELD(arg0, s32 *, 0x5A0) + temp_s0 + var_a1 + M2C_FIELD(arg0, s32 *, 0x4DC);
    sp8 = var_a5;
    temp_s2 = M2C_FIELD(arg0, s32 *, 0x5A4) + temp_s0 + temp_fp + M2C_FIELD(arg0, s32 *, 0x4E0);
    sp10 = var_a2;
    var_s1 = temp_a0 + 0x1330;
    var_s7 = temp_a0 + 0x70;
    var_s6 = temp_a0 + 0x9C0;
    do {
        temp_lo = (s32) (sp14 << 0x10) / 36;
        temp_a4_2 = sp14 + 1;
        sp14 = temp_a4_2;
        temp_f20 = func_00165208(temp_lo, (s16) var_a1, (void *) var_a2, (void *) var_a3, temp_a4_2, var_a5);
        temp_f0 = func_00165280(temp_lo);
        var_a2 = (s32) (var_s7 + 0x20);
        var_a5 = sp14 < 0x25;
        var_a3 = (s32) (var_s6 + 0x20);
        M2C_FIELD(var_a2, s16 *, -0x10) = (s16) (temp_s5 + (s32) ((f32) temp_s3_2 * temp_f0));
        M2C_FIELD(var_a2, s16 *, -0xE) = (s16) (temp_s2 + (s32) ((f32) temp_s4_2 * temp_f20));
        M2C_FIELD(var_a2, s16 *, 0x10) = (s16) (temp_s5 + (s32) ((f32) sp4 * temp_f0));
        M2C_FIELD(var_a2, s16 *, 0x12) = (s16) (temp_s2 + (s32) ((f32) spC * temp_f20));
        temp_v0_3 = M2C_FIELD(var_s7, s64 *, 0x20);
        var_s7 += 0x40;
        M2C_FIELD(var_a3, s64 *, -0x20) = temp_v0_3;
        M2C_FIELD(var_a3, s64 *, -0x18) = (s64) M2C_FIELD(var_a2, s64 *, 8);
        M2C_FIELD(var_a3, s64 *, -0x10) = (s64) M2C_FIELD(var_a2, s16 *, 0x10);
        var_a1 = temp_s5 + (s32) ((f32) sp0 * temp_f0);
        M2C_FIELD(var_a3, s16 *, 0x10) = (s16) (temp_s5 + (s32) ((f32) sp8 * temp_f0));
        M2C_FIELD(var_a3, s16 *, 0x12) = (s16) (temp_s2 + (s32) ((f32) sp10 * temp_f20));
        M2C_FIELD(var_a3, s64 *, -8) = (s64) M2C_FIELD(var_a2, s64 *, 0x18);
        temp_v0_4 = M2C_FIELD(var_s6, s64 *, 0x20);
        var_s6 += 0x40;
        M2C_FIELD(var_s1, s64 *, -0x20) = temp_v0_4;
        M2C_FIELD(var_s1, s64 *, -0x18) = (s64) M2C_FIELD(var_a3, s64 *, 8);
        M2C_FIELD(var_s1, s64 *, -0x10) = (s64) M2C_FIELD(var_a3, s16 *, 0x10);
        M2C_FIELD(var_s1, s16 *, 0x10) = (s16) var_a1;
        M2C_FIELD(var_s1, s64 *, -8) = (s64) M2C_FIELD(var_a3, s64 *, 0x18);
        M2C_FIELD(var_s1, s16 *, 0x12) = (s16) (temp_s2 + (s32) ((f32) temp_fp * temp_f20));
        var_s1 += 0x40;
    } while (var_a5 != 0);
}
