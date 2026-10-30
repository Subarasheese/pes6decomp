/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001AD7F0(u8 *, s32);                   /* extern */
s32 func_001AFFDC(s8 *, M2C_UNK);                   /* extern */
s32 func_001B0730(s8 *, M2C_UNK, M2C_UNK);          /* extern */

s32 func_001A7420(s8 *arg0, u8 *arg1, s32 arg2) {
    s32 temp_s2;
    s32 temp_v0;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s4;
    s32 var_v0;
    s8 *temp_a1;
    s8 *var_a0;
    s8 *var_a1;
    s8 *var_v0_3;
    s8 temp_v1;
    s8 temp_v1_2;
    u8 *temp_v1_3;
    u8 *var_v0_2;
    u8 *var_v1;

    var_s4 = 0;
    var_s0 = 0;
    func_001AD7F0(arg1, arg2);
    var_v0 = -0x65;
    if (arg0 != NULL) {
        if (arg1 == NULL) {
            return -0x65;
        }
        temp_s2 = arg2 - 1;
        if (func_001B0730(arg0, 0x600868, 7) == 0) {
            var_a1 = arg0;
loop_7:
            temp_v0 = func_001AFFDC(var_a1, 0x2E);
            var_a1 = temp_v0 + 1;
            if (temp_v0 != 0) {
                var_s0 += 1;
                goto loop_7;
            }
            var_s4 = var_s0 == 5;
        }
        if (var_s4 != 0) {
            var_s0_2 = 0;
            temp_a1 = func_001AFFDC(func_001AFFDC(arg0, 0x2E) + 1, 0x2E) + 1;
            if ((temp_s2 > 0) && (temp_v1 = *temp_a1, (temp_v1 != 0))) {
                var_v0_2 = arg1;
                if (temp_v1 != 0x2E) {
                    var_a0 = temp_a1;
                    var_v1 = arg1;
loop_14:
                    var_s0_2 += 1;
                    *var_v1 = *var_a0;
                    if (var_s0_2 < temp_s2) {
                        var_a0 = temp_a1 + var_s0_2;
                        temp_v1_2 = *var_a0;
                        if (temp_v1_2 != 0) {
                            var_v1 = &arg1[var_s0_2];
                            if (temp_v1_2 == 0x2E) {

                            } else {
                                goto loop_14;
                            }
                        }
                    }
                    goto block_22;
                }
            } else {
                goto block_22;
            }
        } else {
            var_s0_2 = 0;
            if (temp_s2 > 0) {
                var_v0_3 = arg0;
                if (*arg0 != 0) {
loop_20:
                    temp_v1_3 = &arg1[var_s0_2];
                    var_s0_2 += 1;
                    *temp_v1_3 = (u8) *var_v0_3;
                    if (var_s0_2 < temp_s2) {
                        var_v0_3 = &arg0[var_s0_2];
                        if (*var_v0_3 != 0) {
                            goto loop_20;
                        }
                    }
                }
            }
block_22:
            var_v0_2 = &arg1[var_s0_2];
        }
        *var_v0_2 = 0;
        var_v0 = 0;
        /* Duplicate return node #24. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
