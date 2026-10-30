/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00825610();                                /* extern */
s32 func_00827450(s32);                             /* extern */
M2C_UNK func_0082B4C0(s32);                         /* extern */
M2C_UNK func_0082C840(M2C_UNK);                     /* extern */
s32 func_00862110(s32, s32);                        /* extern */
s32 func_00869D90(s32, s32);                        /* extern */
s32 func_0086CEE0(s32, s32);                        /* extern */
s32 func_00D0BAF0();                                /* extern */
extern char D_008A5CB0[];

s32 func_0083B9C0(s32 arg0, s32 arg1) {
    M2C_UNK *var_a0;
    s32 temp_s0;
    s32 temp_v1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_4;
    s32 var_v1;
    s64 var_v0_3;

    temp_s0 = func_00D0BAF0();
    func_0082B4C0(arg0);
    if (temp_s0 == 0) {
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
        return 4;
    }
    if (arg0 < 0) {
        return 2;
    }
    if (arg0 < 9) {
        if (func_00862110(temp_s0, arg0) != 1) {
            if (func_00827450(arg0) != 1) {
                return 2;
            }
            return 3;
        }
        if (func_00825610() != 5) {
            var_v0_4 = func_0086CEE0(temp_s0 + (arg0 * 0x24), arg1);
        } else {
            var_v0_4 = func_00869D90(temp_s0 + (arg0 * 0x24), arg1);
        }
        if (var_v0_4 != 0) {
            func_0082C840(0x4A);
            if (func_00827450(arg0) != 1) {
                var_v0_2 = 2;
            } else {
                var_v0_2 = 3;
            }
            return var_v0_2;
        }
        func_0082C840(0x4A);
        if (func_00827450(arg0) != 1) {
            var_v0 = 4;
        } else {
            var_v0 = 3;
        }
        return var_v0;
    }
    return 2;
}
