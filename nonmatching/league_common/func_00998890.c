/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00210DF0(u8);                              /* extern */
void *func_00223C10(s32, s32);                      /* extern */
u16 *func_00224E20(s32, s32);                       /* extern */
void *func_00994C60(s32, s32);                      /* extern */
s32 func_00B029E0(u16);                             /* extern */
M2C_UNK func_00B1B4F0(M2C_UNK, s32, u16, M2C_UNK);  /* extern */

void func_00998890(void) {
    s32 temp_a0;
    s32 temp_a0_3;
    s32 temp_v0_2;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    s32 var_s5;
    s32 var_s6;
    u16 *temp_v0;
    u16 temp_s1;
    u8 temp_a0_2;
    u8 temp_a0_4;
    void *temp_s0;
    void *temp_v0_3;

    var_s6 = 0;
    do {
        var_s5 = 0;
loop_2:
        temp_s0 = func_00223C10(var_s6 & 0xFF, var_s5 & 0xFF);
        temp_v0 = func_00224E20(var_s6 & 0xFF, var_s5 & 0xFF);
        if ((temp_s0 != NULL) && (temp_v0 != NULL)) {
            temp_s1 = *temp_v0;
            if (temp_s1 != 0) {
                temp_a0 = M2C_FIELD(temp_s0, u8 *, 0) & 0xF;
                if ((temp_a0 != 0xA) && (temp_a0 != 9) && (temp_a0 != 8) && (temp_a0 != 4) && (temp_a0 != 3) && (temp_a0 != 2)) {

                } else {
                    temp_a0_2 = M2C_FIELD(temp_s0, u8 *, 1);
                    temp_v0_2 = ((u64) ((s64) temp_a0_2 << 0x38) >> 0x3A) & 0xFF;
                    if (temp_v0_2 > 0) {
                        M2C_FIELD(temp_s0, u8 *, 1) = (u8) ((temp_a0_2 & ~0xFC) | (((temp_v0_2 + 0xFF) & 0x3F) * 4));
                    }
                    var_s4 = 0;
                    var_s2 = 0;
loop_15:
                    var_s3 = 0;
loop_16:
                    temp_v0_3 = func_00994C60(var_s4, var_s3);
                    if (temp_v0_3 != NULL) {
                        if (temp_s1 != M2C_FIELD(temp_v0_3, u16 *, 0xA)) {
                            if (temp_s1 == M2C_FIELD(temp_v0_3, u16 *, 4)) {
                                goto block_20;
                            }
                            goto block_22;
                        }
block_20:
                        if (((u64) ((s64) M2C_FIELD(temp_v0_3, u8 *, 1) << 0x39) >> 0x3C) == 2) {
                            var_s2 = 1;
                        } else {
                            goto block_22;
                        }
                    } else {
block_22:
                        var_s3 += 1;
                        if (var_s3 < 0x25) {
                            goto loop_16;
                        }
                    }
                    temp_a0_3 = var_s2 & 0xFF;
                    if (temp_a0_3 != 1) {
                        var_s4 += 1;
                        if (var_s4 < 0x48) {
                            goto loop_15;
                        }
                    }
                    if (temp_a0_3 != 1) {
                        if ((((u64) ((s64) M2C_FIELD(temp_s0, u8 *, 1) << 0x38) >> 0x3A) == 0) && ((func_00B029E0(temp_s1) & 0xFF) != 1)) {
                            temp_a0_4 = M2C_FIELD(temp_s0, u8 *, 0);
                            M2C_FIELD(temp_s0, u8 *, 0) = (u8) ((temp_a0_4 & ~0xF) | 4);
                            if (func_00210DF0(temp_a0_4) == 2) {
                                func_00B1B4F0(3, var_s6 & 0xFF, temp_s1, 0);
                            }
                        } else {
                            M2C_FIELD(temp_s0, u16 *, 4) = (u16) M2C_FIELD(temp_s0, u16 *, 2);
                        }
                    }
                }
            }
        }
        var_s5 += 1;
        if (var_s5 < 0x20) {
            goto loop_2;
        }
        var_s6 += 1;
    } while (var_s6 < 0x48);
}
