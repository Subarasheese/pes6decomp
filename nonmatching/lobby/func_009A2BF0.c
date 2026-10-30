/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001C02F0(s32);                             /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_002DBC20(s32, s32, s32);               /* extern */
s32 func_009A8EF0(s32, s32);                        /* extern */

s32 func_009A2BF0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s16 temp_v1;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s6;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 var_s1;
    s32 var_s2;
    s32 var_s7;

    var_s7 = 0;
    temp_s0 = arg3 & 0xFFFF;
    var_s2 = temp_s0 - 3;
    var_s1 = 0;
    if (var_s2 < 0) {
        var_s2 = 0;
    }
    temp_s6 = M2C_FIELD(arg0, s32 *, 0x2FC) + arg1;
    func_002DBC20(M2C_FIELD(arg0, s32 *, 8), temp_s6, arg2);
    if (temp_s6 < 0) {
        return 0;
    }
    temp_s0_2 = temp_s0 - 1;
    if (temp_s0_2 >= temp_s6) {
        temp_v0 = (func_009A8EF0(M2C_FIELD(arg0, s32 *, 0x2FC), M2C_FIELD(arg0, s32 *, 0x300)) & 0xFF) + arg1;
        if ((arg4 != 0) && (temp_v0 > 0)) {
            if (temp_v0 < 4) {
                temp_v0_2 = M2C_FIELD(arg0, s32 *, 0x2FC) + arg1;
                M2C_FIELD(arg0, s32 *, 0x2FC) = temp_v0_2;
                if (temp_v0_2 < 0) {
                    M2C_FIELD(arg0, s32 *, 0x2FC) = 0;
                }
                if (temp_s0_2 < M2C_FIELD(arg0, s32 *, 0x2FC)) {
                    M2C_FIELD(arg0, s32 *, 0x2FC) = temp_s0_2;
                }
                if (arg4 == 1) {
                    var_s7 = 3;
                }
            } else {
                goto block_14;
            }
        } else {
block_14:
            temp_v0_3 = M2C_FIELD(arg0, s32 *, 0x300) + arg1;
            M2C_FIELD(arg0, s32 *, 0x300) = temp_v0_3;
            if (temp_v0_3 < 0) {
                M2C_FIELD(arg0, s32 *, 0x300) = 0;
            }
            if (var_s2 < M2C_FIELD(arg0, s32 *, 0x300)) {
                M2C_FIELD(arg0, s32 *, 0x300) = var_s2;
            }
            if (arg1 < 0) {
                var_s1 = func_001C02F0(arg1);
            } else if (arg1 > 0) {
                var_s1 = -func_001C02F0(arg1);
            }
            if ((arg4 == 0) || (var_s1 != 0)) {
                temp_v0_4 = M2C_FIELD(arg0, s32 *, 0x2FC) + arg1;
                M2C_FIELD(arg0, s32 *, 0x2FC) = temp_v0_4;
                if (temp_v0_4 < 0) {
                    M2C_FIELD(arg0, s32 *, 0x2FC) = 0;
                }
                if (temp_s0_2 < M2C_FIELD(arg0, s32 *, 0x2FC)) {
                    M2C_FIELD(arg0, s32 *, 0x2FC) = temp_s0_2;
                }
                if (arg4 == 1) {
                    temp_v1 = M2C_FIELD(arg0, s16 *, 0x304);
                    M2C_FIELD(arg0, s16 *, 0x30C) = temp_v1;
                    temp_v0_5 = -(temp_v1 / arg2);
                    M2C_FIELD(arg0, s16 *, 0x30E) = (s16) temp_v0_5;
                    if (((s64) ((s64) temp_v0_5 << 0x30) >> 0x30) == 0) {
                        M2C_FIELD(arg0, s16 *, 0x30E) = -1;
                    }
                    M2C_FIELD(arg0, s32 *, 0x308) = var_s1;
                    var_s7 = 0;
                    M2C_FIELD(arg0, s32 *, 0x310) = 0;
                }
            }
        }
        func_0026E840(0x8400F802);
        return var_s7;
    }
    return 0;
}
