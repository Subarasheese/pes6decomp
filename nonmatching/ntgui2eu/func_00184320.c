/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00164898(s32, s32, void *, s32, s32, s32, s32); /* extern */
f32 func_00165208(s32);                             /* extern */
f32 func_00165280(s32);                             /* extern */

void func_00184320(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 temp_a0;
    s32 temp_a6;
    s32 temp_lo;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s3;
    s32 temp_s3_2;
    s32 temp_s4;
    s32 temp_v1;
    s32 var_s3;
    s32 var_s6;
    s32 var_s7;
    s32 var_v1;
    void *temp_s5;

    sp0 = arg4;
    sp4 = arg5;
    switch (arg1) {                                 /* irregular */
    case 1:
        var_s6 = -1;
        sp8 = 1;
        var_v1 = (M2C_FIELD(arg0, s32 *, 0x5EE0) != 0) ? 0 : sp8;
        break;
    case 3:
        var_s6 = 1;
        sp8 = 1;
        var_v1 = (M2C_FIELD(arg0, s32 *, 0x5EE0) != 0) ? 0 : 1;
        break;
    case 2:
        var_s6 = 1;
        sp8 = -1;
        var_v1 = (M2C_FIELD(arg0, s32 *, 0x5EDC) != 0) ? 0 : 1;
        break;
    default:
        sp8 = -1;
        var_s6 = -1;
        var_v1 = M2C_FIELD(arg0, s32 *, 0x5EDC) == 0;
        break;
    }
    if (var_v1 != 0) {
        temp_a0 = M2C_FIELD(arg0, s32 *, 0x5ED0);
        var_v1 = (s32) ((temp_a0 > -1) ? temp_a0 : (temp_a0 + 3)) >> 2;
    }
    temp_s5 = arg0 + 0x5C0;
    temp_v1 = sp0 + var_v1;
    temp_s3 = arg6 + 0x20;
    spC = temp_v1;
    var_s7 = 0;
    temp_s0 = (sp8 * temp_v1) + arg2;
    func_00164898(M2C_FIELD(arg0, s32 *, 0x5AC), M2C_FIELD(arg0, s32 *, 0x5B0), temp_s5, M2C_FIELD(arg0, s32 *, 0x618), temp_s0, (var_s6 * sp4) + arg3, arg6);
    temp_s3_2 = temp_s3 + 0x20;
    func_00164898(M2C_FIELD(arg0, s32 *, 0x5AC), M2C_FIELD(arg0, s32 *, 0x5B0), temp_s5, M2C_FIELD(arg0, s32 *, 0x618), temp_s0, arg3, temp_s3);
    var_s3 = temp_s3_2 + 0x20;
    func_00164898(M2C_FIELD(arg0, s32 *, 0x5AC), M2C_FIELD(arg0, s32 *, 0x5B0), temp_s5, M2C_FIELD(arg0, s32 *, 0x618), arg2, arg3, temp_s3_2);
    temp_s4 = (var_s6 * (sp4 * 2)) + arg3;
    do {
        temp_lo = (s32) (var_s7 << 0xE) / 7;
        var_s7 += 1;
        temp_s0_2 = temp_lo - 0x4000;
        temp_s0_3 = (sp8 * (s32) ((f32) sp0 * func_00165280(temp_s0_2))) + arg2;
        temp_a6 = var_s3;
        var_s3 += 0x20;
        func_00164898(M2C_FIELD(arg0, s32 *, 0x5AC), M2C_FIELD(arg0, s32 *, 0x5B0), temp_s5, M2C_FIELD(arg0, s32 *, 0x618), temp_s0_3, (var_s6 * (s32) ((f32) sp4 * func_00165208(temp_s0_2))) + temp_s4, temp_a6);
    } while (var_s7 < 8);
    func_00164898(M2C_FIELD(arg0, s32 *, 0x5AC), M2C_FIELD(arg0, s32 *, 0x5B0), temp_s5, M2C_FIELD(arg0, s32 *, 0x618), (sp8 * spC) + arg2, temp_s4, var_s3);
}
