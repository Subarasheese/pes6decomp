/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

void *func_00994C60(s32, s32);                      /* extern */
s32 func_0099B570(M2C_UNK);                         /* extern */
s32 func_0099B6E0(M2C_UNK, s32);                    /* extern */
s32 func_00B54300();                                /* extern */

s32 func_00B57130(void) {
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s2;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    u64 temp_a0;
    u8 temp_a1;
    void *temp_v0;

    temp_s1 = func_00B54300() & 0xFF;
    var_s0 = 0;
    if (func_0099B6E0(4, temp_s1) != 1) {
        temp_s2 = temp_s1 & 0xFF;
        if (temp_s2 > 0) {
            temp_s1_2 = func_00B54300() & 0xFF;
            if (((temp_s1_2 & 0xFF) < (func_0099B570(0) & 0xFF)) && (func_0099B6E0(4, (temp_s2 - 1) & 0xFF) == 1)) {
                goto block_7;
            }
        }
    } else {
block_7:
        var_s0 = 1;
    }
    if (var_s0 == 1) {
        var_s2 = 0;
loop_10:
        var_s1 = 0;
loop_11:
        temp_v0 = func_00994C60(var_s2 & 0xFF, var_s1 & 0xFF);
        if ((temp_v0 != NULL) && (M2C_FIELD(temp_v0, u16 *, 4) != 0)) {
            temp_a1 = M2C_FIELD(temp_v0, u8 *, 1);
            if (((u64) ((s64) temp_a1 << 0x39) >> 0x3C) == 2) {
                if ((M2C_FIELD(temp_v0, u8 *, 0) & 1) != 1) {
                    if (((u64) ((s64) temp_a1 << 0x38) >> 0x3F) != 0) {
                        goto block_17;
                    }
                    goto block_21;
                }
block_17:
                temp_a0 = (u64) ((s64) M2C_FIELD(temp_v0, u8 *, 0) << 0x39) >> 0x3A;
                if ((temp_a0 != 8) && (temp_a0 != 6) && ((s32) M2C_FIELD(temp_v0, u16 *, 8) >= 0x3E8)) {
                    return 1;
                }
                goto block_21;
            }
        }
block_21:
        var_s1 += 1;
        if (var_s1 >= 0x25) {
            var_s2 += 1;
            if (var_s2 >= 0x48) {
                goto block_24;
            }
            goto loop_10;
        }
        goto loop_11;
    }
block_24:
    return 0;
}
