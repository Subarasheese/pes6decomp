/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00277B20(s32);                             /* extern */
s32 func_00827450(s32);                             /* extern */
M2C_UNK func_0082B4C0(s32);                         /* extern */
s32 func_00862110(s32, s32);                        /* extern */
s32 func_008763A0(s32, s8, s64, s64, s64, s32, M2C_UNK, s32); /* extern */
s32 func_00D0BAF0();                                /* extern */
extern char D_008A5CB0[];

s32 func_0083A3B0(s32 arg0, s32 arg1, s64 arg2, s64 arg3, s64 arg4, s64 arg5, s64 arg6, s64 arg7) {
    s8 spA0;
    M2C_UNK *var_a0;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    s64 var_s3;
    s64 var_v0_3;

    temp_s0 = func_00D0BAF0();
    func_0082B4C0(arg1);
    if (arg0 == 0) {
        return 2;
    }
    if (func_00D0BAF0() == 0) {
        var_v0_3 = 0;
    } else {
        if (func_00D0BAF0() == 0) {
            var_a0 = NULL;
        } else {
            var_a0 = ((void *)D_008A5CB0);
        }
        if (var_a0 != NULL) {
            temp_v1 = M2C_FIELD(var_a0, s32 *, 0x230);
            if (temp_v1 < 0) {
                var_v1 = 0;
            } else if (temp_v1 < 4) {
                if (temp_v1 != M2C_FIELD(var_a0, s32 *, 0x22C)) {
                    var_v1 = 0;
                } else {
                    var_v1 = 1;
                }
            } else {
                var_v1 = 0;
            }
        } else {
            var_v1 = 0;
        }
        if (var_v1 != 1) {
            var_v0_3 = 0;
        } else {
            var_v0_3 = (s64) (1 << 0x38) >> 0x38;
        }
    }
    if (((s64) (var_v0_3 << 0x38) >> 0x38) != 1) {
        if (((s64) (arg2 << 0x38) >> 0x38) == 0) {
            return 4;
        }
        goto block_33;
    }
    if (((s64) (arg2 << 0x38) >> 0x38) == 1) {
        return 4;
    }
block_33:
    if (temp_s0 == 0) {
        return 2;
    }
    if (arg1 < 0) {
        return 2;
    }
    if (arg1 < 9) {
        spA0 = (s8) ((s64) (arg3 << 0x38) >> 0x38);
        if (arg7 >= 0x20) {
            var_s3 = 0x1F;
        } else if (arg7 >= 0) {
            var_s3 = (s64) (arg7 << 0x38) >> 0x38;
        } else {
            var_s3 = 0;
        }
        temp_s1 = func_00277B20(arg0) & 0xFFFF;
        if (func_00862110(temp_s0, arg1) != 1) {
            if (func_00827450(arg1) != 1) {
                return 2;
            }
            return 3;
        }
        if (func_008763A0(temp_s0 + (arg1 * 0x24), spA0, (s64) ((((s64) ((((s64) (arg4 << 0x38) >> 0x38) * 8) << 0x38) >> 0x38) | ((s64) (arg5 << 0x38) >> 0x38)) << 0x38) >> 0x38, var_s3, (s64) (arg6 << 0x38) >> 0x38, temp_s1, 7, arg0) != 0) {
            if (func_00827450(arg1) != 1) {
                var_v0_2 = 2;
            } else {
                var_v0_2 = 3;
            }
            return var_v0_2;
        }
        if (func_00827450(arg1) != 1) {
            var_v0 = 4;
        } else {
            var_v0 = 3;
        }
        return var_v0;
    }
    return 2;
}
