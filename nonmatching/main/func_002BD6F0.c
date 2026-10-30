/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s16 func_002C2100(s32, s32, s32, M2C_UNK);          /* extern */
s32 func_00C12150(s32, s32);                        /* extern */
s32 func_00C18DA0(s32);                             /* extern */
s32 func_00C222B0(s32, s32);                        /* extern */

void func_002BD6F0(s16 *arg0, s32 arg1) {
    f32 var_f0;
    s16 *var_s0;
    s16 temp_v1_2;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s6;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_s3;

    temp_v1 = arg1 & 0xFF;
    var_s3 = 0;
    M2C_FIELD(arg0, s16 *, 8) = 0;
    temp_s6 = temp_v1 & 0x1F;
    temp_s1 = (temp_v1 >> 5) & 1;
    var_s0 = arg0;
    do {
        temp_s2 = func_00C18DA0(var_s3 & 0xFF) & 0xFF;
        *var_s0 = func_002C2100(temp_s2, func_00C18DA0(((var_s3 & 0xFF) + 1) & 0xFF) & 0xFF, arg1, 0);
        var_s3 += 1;
        temp_v1_2 = *var_s0;
        var_s0 += 2;
        M2C_FIELD(arg0, s16 *, 8) = (s16) (M2C_FIELD(arg0, s16 *, 8) + temp_v1_2);
    } while (var_s3 < 4);
    M2C_FIELD(arg0, s16 *, 0xA) = func_002C2100(0, 0xFF, arg1, 1);
    M2C_FIELD(arg0, s16 *, 0xC) = func_002C2100(0, 0xFF, arg1, 0x12);
    M2C_FIELD(arg0, s16 *, 0xE) = func_002C2100(0, 0xFF, arg1, 4);
    M2C_FIELD(arg0, s16 *, 0x10) = func_002C2100(0, 0xFF, arg1, 0xC);
    M2C_FIELD(arg0, s16 *, 0x12) = func_002C2100(0, 0xFF, arg1, 0xA);
    M2C_FIELD(arg0, s16 *, 0x14) = func_002C2100(0, 0xFF, arg1, 0xE);
    M2C_FIELD(arg0, s8 *, 0x1C) = func_002C2100(0, 0xFF, arg1, 0x10);
    M2C_FIELD(arg0, s8 *, 0x1D) = func_002C2100(0, 0xFF, arg1, 0x11);
    M2C_FIELD(arg0, s32 *, 0x20) = func_00C12150(temp_s1, temp_s6);
    temp_v0 = func_00C222B0(temp_s1, temp_s6);
    if (temp_v0 < 0) {
        var_f0 = 2.0f * (f32) (((u32) temp_v0 >> 1) | (temp_v0 & 1));
    } else {
        var_f0 = (f32) temp_v0;
    }
    M2C_FIELD(arg0, f32 *, 0x24) = var_f0;
}
