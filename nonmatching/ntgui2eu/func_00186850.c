/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00186A98(void *, M2C_UNK, s32, s32, s32, s32, void *); /* extern */

void func_00186850(void *arg0) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
    s32 temp_a0;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_a3_2;
    s32 temp_a4;
    s32 temp_a4_2;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_s3;
    s32 temp_v1;
    s32 var_fp;
    s32 var_s1;
    s32 var_s4;
    s32 var_s5;
    void *temp_s7;

    temp_s7 = arg0 + 0x910;
    temp_a4 = M2C_FIELD(arg0, s32 *, 0x5AC);
    sp8 = M2C_FIELD(arg0, s32 *, 0x5B0);
    spC = M2C_FIELD(temp_s7, s32 *, 0x55C0);
    var_s4 = M2C_FIELD(temp_s7, s32 *, 0x55A0);
    var_s1 = M2C_FIELD(temp_s7, s32 *, 0x55A4);
    temp_a0 = M2C_FIELD(arg0, s32 *, 0x5D4);
    temp_s2 = (var_s4 + var_s1) * 2;
    sp0 = M2C_FIELD(arg0, s32 *, 0x5A0) + temp_a0;
    var_s5 = M2C_FIELD(temp_s7, s32 *, 0x55A8);
    sp4 = M2C_FIELD(arg0, s32 *, 0x5A4) + temp_a0;
    var_fp = M2C_FIELD(temp_s7, s32 *, 0x55AC);
    if (temp_a4 < temp_s2) {
        temp_lo = (s32) (var_s1 * temp_a4) / (s32) ((var_s4 + var_s1) * 2);
        var_s4 = (s32) (var_s4 * temp_a4) / temp_s2;
        var_s1 = temp_lo;
    }
    temp_a3 = (var_s5 + var_fp) * 2;
    if (sp8 < temp_a3) {
        temp_lo_2 = (s32) (var_fp * sp8) / (s32) ((var_s5 + var_fp) * 2);
        var_s5 = (s32) (var_s5 * sp8) / temp_a3;
        var_fp = temp_lo_2;
    }
    temp_s2_2 = var_s4 * 2;
    temp_a4_2 = sp0 + temp_a4;
    temp_a2 = var_s1 * 2;
    temp_s0 = (temp_a4 - temp_s2_2) - temp_a2;
    sp10 = temp_a4_2;
    temp_v1 = sp4 + sp8;
    sp14 = temp_v1;
    func_00186A98(arg0, 0, temp_a4_2 - temp_a2, sp4 + var_s5, temp_s0, spC, (M2C_FIELD(arg0, s32 *, 0x4EC) * 0x140) + temp_s7 + 0x4BB0);
    temp_s3 = var_fp * 2;
    func_00186A98(arg0, 1, sp0 + temp_s2_2, temp_v1 - var_fp, temp_s0, spC, (M2C_FIELD(arg0, s32 *, 0x4EC) * 0x140) + temp_s7 + 0x4E30);
    temp_a3_2 = var_s5 * 2;
    temp_s0_2 = (sp8 - temp_a3_2) - temp_s3;
    func_00186A98(arg0, 2, sp0 + var_s4, sp4 + temp_a3_2, temp_s0_2, spC, (M2C_FIELD(arg0, s32 *, 0x4EC) * 0x140) + temp_s7 + 0x50B0);
    func_00186A98(arg0, 3, sp10 - var_s1, temp_v1 - temp_s3, temp_s0_2, spC, (M2C_FIELD(arg0, s32 *, 0x4EC) * 0x140) + temp_s7 + 0x5330);
}
