/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0016A948(s8 *, s32, u8 *, s32);        /* extern */
M2C_UNK func_001C4730(u8 *, s8 *, s32);             /* extern */
s32 func_001C80F0(s8 *, s8 *, u8 *, s32);           /* extern */

void func_0016AE20(s8 *arg0, u8 *arg1, s8 *arg2, u8 *arg3) {
    s32 var_a1_2;
    s32 var_a4;
    s32 var_a4_2;
    s8 *var_a1;
    s8 *var_v1;
    s8 temp_v1;
    s8 var_v0;
    u8 *temp_v1_2;
    u8 *var_a3;
    u8 temp_v0;
    u8 var_a0;

    var_a3 = arg3;
    if (arg2 != NULL) {
        temp_v1 = *arg2;
        var_a4 = 0;
        if (temp_v1 != 0x3A) {
            var_a1 = arg2;
            if (temp_v1 != 0) {
                var_a3 = (u8 *)0x3A;
                var_a0 = (u8) *var_a1;
loop_4:
                temp_v1_2 = arg0 + var_a4;
                var_a4 += 1;
                var_a1 = arg2 + var_a4;
                *temp_v1_2 = var_a0;
                if (var_a4 < 0x129) {
                    var_v0 = *var_a1;
                    if (var_v0 != 0x3A) {
                        if (var_v0 != 0) {
                            var_a0 = (u8) *var_a1;
                            goto loop_4;
                        }
                    }
                } else {
                    goto block_12;
                }
                goto block_13;
            }
            goto block_14;
        }
        var_a1 = arg2;
block_12:
        var_v0 = *var_a1;
block_13:
        if (var_v0 == 0) {
block_14:
            arg0[var_a4] = 0;
            func_001C4730(arg1, arg0, func_001C80F0(arg0, var_a1, var_a3, var_a4) + 1);
            *arg0 = 0;
            return;
        }
        var_a4_2 = var_a4 + 1;
        *(arg0 + var_a4) = 0;
        if (var_a4_2 == 2) {
            *arg0 = 0;
            var_a4_2 = 0;
        }
        var_a1_2 = var_a4_2;
        if (var_a4_2 < 0x129) {
            var_v1 = arg2 + var_a4_2;
            var_a3 = arg1;
            if (*var_v1 != 0) {
loop_19:
                temp_v0 = *var_v1;
                var_a1_2 += 1;
                var_v1 = arg2 + var_a1_2;
                *var_a3 = temp_v0;
                var_a3 += 1;
                if (var_a1_2 < 0x129) {
                    if (*var_v1 != 0) {
                        goto loop_19;
                    }
                }
            }
        }
        *(arg1 + (var_a1_2 - var_a4_2)) = 0;
        func_0016A948(arg0, var_a1_2, var_a3, var_a4_2);
    }
}
