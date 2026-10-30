/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

void *func_00223E00(s32);                           /* extern */
s32 func_00224D90(s32, s32);                        /* extern */
void *func_00224E20(s32, s32);                      /* extern */
s32 func_00226D60();                                /* extern */
s32 func_0096E890(s32);                             /* extern */
M2C_UNK func_00970380(s32, s32);                    /* extern */
void *func_00994C60(s32, s32);                      /* extern */
M2C_UNK func_00AFA850(s32, s32);                    /* extern */
s32 func_00B04DF0(s32);                             /* extern */

void func_00B1CF90(s32 arg0) {
    s32 temp_a0;
    s32 temp_s3_2;
    s32 var_s0;
    s32 var_s1;
    s32 var_s4;
    s32 var_s4_2;
    s32 var_s5;
    u16 temp_s3;
    u8 temp_a0_2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;

    var_s1 = 0;
    do {
        var_s0 = 0;
loop_2:
        temp_v0 = func_00224E20(var_s1 & 0xFF, var_s0 & 0xFF);
        if (temp_v0 != NULL) {
            temp_s3 = M2C_FIELD(temp_v0, u16 *, 0);
            if ((temp_s3 != 0) && ((s32) ((u64) ((s64) M2C_FIELD(temp_v0, u8 *, 0x11) << 0x38) >> 0x3A) <= 0)) {
                temp_a0 = M2C_FIELD(temp_v0, u8 *, 0x10) & 0xF;
                if ((temp_a0 != 4) && (temp_a0 != 3) && (temp_a0 != 2)) {

                } else {
                    var_s4 = 0;
                    var_s5 = 0;
loop_10:
                    temp_v0_2 = func_00994C60(var_s1, var_s5);
                    if ((temp_v0_2 != NULL) && (M2C_FIELD(temp_v0_2, u16 *, 4) == temp_s3) && (((u64) ((s64) M2C_FIELD(temp_v0_2, u8 *, 0) << 0x39) >> 0x3A) == 6)) {
                        var_s4 = 1;
                    } else {
                        var_s5 += 1;
                        if (var_s5 < 0x25) {
                            goto loop_10;
                        }
                    }
                    if (!(var_s4 & 0xFF)) {
                        temp_s3_2 = func_00224D90(var_s1 & 0xFF, var_s0 & 0xFF) & 0xFFFF;
                        if (arg0 == 1) {
                            if ((func_0096E890(temp_s3_2) == 1) || (func_00B04DF0(temp_s3_2) == 1)) {
                                temp_v0_3 = func_00223E00(temp_s3_2);
                                if (temp_v0_3 != NULL) {
                                    if (func_00226D60() == 0) {
                                        temp_a0_2 = M2C_FIELD(temp_v0_3, u8 *, 6);
                                        if ((temp_a0_2 & 0x3F) == 8) {
                                            M2C_FIELD(temp_v0_3, u8 *, 6) = (u8) ((temp_a0_2 & ~0x3F) | (0 & 0x3F));
                                        }
                                    }
                                    goto block_23;
                                }
                            } else {
block_23:
                                func_00970380(var_s1 & 0xFF, var_s0 & 0xFF);
                            }
                        } else {
                            var_s4_2 = 0;
                            do {
                                temp_v0_4 = func_00994C60(var_s1, var_s4_2);
                                if ((temp_v0_4 != NULL) && (M2C_FIELD(temp_v0_4, u16 *, 4) == (temp_s3_2 & 0xFFFF))) {
                                    func_00AFA850(var_s1 & 0xFF, var_s4_2 & 0xFF);
                                }
                                var_s4_2 += 1;
                            } while (var_s4_2 < 0x25);
                        }
                    }
                }
            }
        }
        var_s0 += 1;
        if (var_s0 < 0x20) {
            goto loop_2;
        }
        var_s1 += 1;
    } while (var_s1 < 0x48);
}
