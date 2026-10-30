/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005EFFA0[];
extern char D_005EFFA8[];
extern char D_005F0968[];
extern M2C_UNK *D_005F096C;

s32 func_0032EA30(void) {
    M2C_UNK *var_v1;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a5;
    s32 var_a5_2;
    s32 var_v0;

    (*(s32 *)D_005F0968) = 0x270;
    var_v1 = ((void *)D_005EFFA8);
    var_a5 = 0xE3;
    D_005F096C = ((void *)D_005EFFA8);
    if (0xE3 != 0) {
        do {
            temp_a0 = M2C_FIELD(var_v1, s32 *, 4);
            if (temp_a0 & 1) {
                var_a0 = 0x9908B0DF;
            } else {
                var_a0 = 0;
            }
            var_a5 -= 1;
            M2C_FIELD(var_v1, s32 *, 0) = (s32) (M2C_FIELD(var_v1, s32 *, 0x634) ^ (((u32) ((M2C_FIELD(var_v1, s32 *, 0) & 0x80000000) | ((u64) ((s64) temp_a0 << 0x21) >> 0x21)) >> 1) ^ var_a0));
            var_v1 += 4;
        } while (var_a5 != 0);
    }
    var_a5_2 = 0x18C;
    if (0x18C != 0) {
        do {
            temp_a0_2 = M2C_FIELD(var_v1, s32 *, 4);
            if (temp_a0_2 & 1) {
                var_a0_2 = 0x9908B0DF;
            } else {
                var_a0_2 = 0;
            }
            var_a5_2 -= 1;
            M2C_FIELD(var_v1, s32 *, 0) = (s32) (M2C_FIELD(var_v1, s32 *, -0x38C) ^ (((u32) ((M2C_FIELD(var_v1, s32 *, 0) & 0x80000000) | ((u64) ((s64) temp_a0_2 << 0x21) >> 0x21)) >> 1) ^ var_a0_2));
            var_v1 += 4;
        } while (var_a5_2 != 0);
    }
    if (M2C_FIELD(((void *)D_005EFFA0), s32 *, 8) & 1) {
        var_v0 = 0x9908B0DF;
    } else {
        var_v0 = 0;
    }
    M2C_FIELD(var_v1, s32 *, 0) = (s32) (M2C_FIELD(var_v1, s32 *, -0x38C) ^ (((u32) ((M2C_FIELD(var_v1, s32 *, 0) & 0x80000000) | ((u64) ((s64) M2C_FIELD(((void *)D_005EFFA0), s32 *, 8) << 0x21) >> 0x21)) >> 1) ^ var_v0));
    return 1;
}
