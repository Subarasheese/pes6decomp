/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002F82B0(s32, s32);
s32 func_001C4698(void *, s32, M2C_UNK);            /* extern */
void *func_00C1A790();                              /* extern */

s32 func_00C15C70(void) {
    s32 temp_a1;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2_2;
    s32 var_s2_3;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    u16 temp_s3;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_v0;
    void *var_s2;
    void *var_s2_4;
    void *var_s3;
    void *var_s3_2;

    temp_v0 = func_00C1A790();
    var_s0 = 0;
    temp_s3 = M2C_FIELD(temp_v0, u16 *, 0x2E0);
    var_s2 = temp_v0 + 0xA8;
    if (0 < 4) {
loop_1:
        if (func_001C4698(var_s2, func_002F82B0((s32) temp_s3, var_s0), 0x3E) == 0) {
            var_s0 += 1;
            var_s2 += 0x3E;
            if (var_s0 >= 4) {
                goto block_7;
            }
            goto loop_1;
        }
        var_v0 = 1;
    } else {
block_7:
        var_v0 = 0;
    }
    if (var_v0 == 0) {
        var_s3 = temp_v0 + 0x1A0;
        var_s2_2 = 0;
        temp_s0 = func_00C1A790();
        if (0 < 2) {
loop_13:
            if (func_001C4698(var_s3, M2C_FIELD((temp_s0 + (var_s2_2 * 4)), s32 *, 0x14), 4) == 0) {
                var_s2_2 += 1;
                var_s3 += 4;
                if (var_s2_2 >= 2) {
                    goto block_18;
                }
                goto loop_13;
            }
            var_v0_2 = 1;
        } else {
block_18:
            var_v0_2 = 0;
        }
        if (var_v0_2 == 0) {
            var_s3_2 = temp_v0 + 0x1A8;
            var_s2_3 = 0;
            temp_s0_2 = func_00C1A790();
            if (0 < 4) {
loop_24:
                if (func_001C4698(var_s3_2, M2C_FIELD((temp_s0_2 + (var_s2_3 * 4)), s32 *, 4), 0x18) == 0) {
                    var_s2_3 += 1;
                    var_s3_2 += 0x18;
                    if (var_s2_3 >= 4) {
                        goto block_29;
                    }
                    goto loop_24;
                }
                var_v0_3 = 1;
            } else {
block_29:
                var_v0_3 = 0;
            }
            if (var_v0_3 == 0) {
                var_s2_4 = temp_v0 + 0x208;
                var_s1 = 0;
                temp_s0_3 = func_00C1A790();
                if (0 < 4) {
loop_35:
                    temp_a1 = M2C_FIELD((temp_s0_3 + (var_s1 * 4)), s32 *, 0x1C);
                    if ((temp_a1 != 0) && (func_001C4698(var_s2_4, temp_a1, 0x30) != 0)) {
                        var_v0_4 = 1;
                    } else {
                        var_s1 += 1;
                        var_s2_4 += 0x30;
                        if (var_s1 >= 4) {
                            goto block_40;
                        }
                        goto loop_35;
                    }
                } else {
block_40:
                    var_v0_4 = 0;
                }
                if (var_v0_4 == 0) {
                    return 0;
                }
                goto block_44;
            }
            goto block_44;
        }
        goto block_44;
    }
block_44:
    return 1;
}
