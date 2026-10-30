/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


f32 func_00165208(s32, M2C_UNK, s32);               /* extern */
f32 func_00165280(s32, s32, s32);                   /* extern */

void func_0017A260(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, void *arg7, void *arg_sp0, s32 arg_sp8) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp24;
    s32 temp_a0;
    s32 temp_a2;
    s32 temp_lo;
    s32 temp_s2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a1;
    void *temp_s0;
    void *temp_s1;
    void *var_s3;
    void *var_s5;
    void *var_s6;

    var_s6 = arg7;
    sp0 = arg2;
    sp4 = arg3;
    var_s5 = arg_sp0;
    sp8 = 0x4000;
    if (arg1 != 0) {
        sp8 = ((arg1 ^ 1) == 0) ? -0x4000 : sp8;
    }
    temp_v0 = (s32) ((arg6 > -1) ? arg6 : (arg6 + 3)) >> 2;
    temp_a0 = (s32) (arg6 + ((u32) arg6 >> 0x1F)) >> 1;
    temp_v0_2 = arg6 - temp_v0;
    sp1C = arg5 - temp_v0;
    var_a1 = arg5 + temp_v0_2;
    sp18 = arg4 + temp_v0_2;
    sp10 = arg4 - temp_v0;
    sp20 = arg5 + temp_a0;
    var_s3 = arg_sp8 + 0x20;
    sp24 = var_a1;
    sp14 = arg4 + temp_a0;
    spC = 0;
    do {
        temp_s1 = var_s6 + 0x20;
        temp_lo = (s32) (spC << 0xF) / 11;
        temp_a2 = spC + 1;
        spC = temp_a2;
        temp_s2 = sp8 + temp_lo;
        M2C_FIELD(temp_s1, s16 *, -0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x4DC) + (sp0 + (s32) ((f32) sp10 * func_00165280(temp_s2, var_a1, temp_a2))));
        M2C_FIELD(temp_s1, s16 *, -0xE) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + (sp4 + (s32) ((f32) sp1C * func_00165208(temp_s2, 0xB, sp0))));
        M2C_FIELD(temp_s1, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x4DC) + (sp0 + (s32) ((f32) arg4 * func_00165280(temp_s2, 0xB, sp4))));
        temp_s0 = var_s5 + 0x20;
        M2C_FIELD(temp_s1, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + (sp4 + (s32) ((f32) arg5 * func_00165208(temp_s2, 0xB, sp0))));
        M2C_FIELD(temp_s0, s64 *, -0x20) = (s64) M2C_FIELD(var_s6, s64 *, 0x20);
        M2C_FIELD(temp_s0, s64 *, -0x18) = (s64) M2C_FIELD(temp_s1, s64 *, 8);
        M2C_FIELD(temp_s0, s64 *, -0x10) = (s64) M2C_FIELD(temp_s1, s16 *, 0x10);
        M2C_FIELD(temp_s0, s64 *, -8) = (s64) M2C_FIELD(temp_s1, s64 *, 0x18);
        var_s6 += 0x40;
        M2C_FIELD(temp_s0, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x4DC) + (sp0 + (s32) ((f32) sp14 * func_00165280(temp_s2, 0xB, sp4))));
        M2C_FIELD(temp_s0, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + (sp4 + (s32) ((f32) sp20 * func_00165208(temp_s2, 0xB, sp0))));
        M2C_FIELD(var_s3, s64 *, -0x20) = (s64) M2C_FIELD(var_s5, s64 *, 0x20);
        M2C_FIELD(var_s3, s64 *, -0x18) = (s64) M2C_FIELD(temp_s0, s64 *, 8);
        M2C_FIELD(var_s3, s64 *, -0x10) = (s64) M2C_FIELD(temp_s0, s16 *, 0x10);
        M2C_FIELD(var_s3, s64 *, -8) = (s64) M2C_FIELD(temp_s0, s64 *, 0x18);
        var_s5 += 0x40;
        M2C_FIELD(var_s3, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x4DC) + (sp0 + (s32) ((f32) sp18 * func_00165280(temp_s2, 0xB, sp4))));
        var_a1 = sp4;
        M2C_FIELD(var_s3, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + (var_a1 + (s32) ((f32) sp24 * func_00165208(temp_s2, 0xB, sp0))));
        var_s3 += 0x40;
    } while (spC < 0xC);
}
