/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

void *func_00223E00(s32);                           /* extern */
s32 func_00224BC0(s32, s32);                        /* extern */
s32 func_00226D60();                                /* extern */
s32 func_00226E70();                                /* extern */
s32 func_0096E890(s32);                             /* extern */
void *func_00970870(s32);                           /* extern */
M2C_UNK func_00AF3400();                            /* extern */
M2C_UNK func_00AFFEB0();                            /* extern */
M2C_UNK func_00B005F0(M2C_UNK);                     /* extern */
M2C_UNK func_00B01880();                            /* extern */
M2C_UNK func_00B01980();                            /* extern */
s32 func_00B04A90(s32);                             /* extern */
s32 func_00B04D40(s32);                             /* extern */
s32 func_00B04DF0(s32);                             /* extern */
M2C_UNK func_00B2B450();                            /* extern */
M2C_UNK func_00B2B7B0();                            /* extern */

void func_00AF9860(void) {
    s32 temp_a0;
    s32 temp_v1;
    s32 var_s0;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s2;
    u8 temp_a0_2;
    u8 temp_v1_2;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s1;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;

    var_s1 = 0;
    do {
        var_s0 = 0;
loop_2:
        temp_v0 = func_00223E00(func_00224BC0(var_s1 & 0xFF, var_s0 & 0xFF) & 0xFFFF);
        if (temp_v0 != NULL) {
            M2C_FIELD(temp_v0, u8 *, 5) = (u8) ((M2C_FIELD(temp_v0, u8 *, 5) & ~0xFC) | ((0 & 0x3F) * 4));
            M2C_FIELD(temp_v0, s8 *, 7) = 0;
            M2C_FIELD(temp_v0, s8 *, 0xE) = 0xFF;
        }
        var_s0 += 1;
        if (var_s0 < 0x20) {
            goto loop_2;
        }
        var_s1 += 1;
    } while (var_s1 < 0x48);
    if (func_00226E70() != 0) {
        var_s2 = 1;
        do {
            temp_s1 = func_00970870(var_s2);
            temp_s0 = func_00223E00(var_s2);
            if ((temp_s1 != NULL) && (temp_s0 != NULL)) {
                temp_v1 = var_s2 & 0xFFFF;
                if ((temp_v1 >= 0x11F5) && (temp_v1 < 0x12A6)) {
                    if ((M2C_FIELD(temp_s0, u8 *, 6) & 0x3F) > 0) {
                        goto block_14;
                    }
                } else {
block_14:
                    if (func_00226D60() != 0) {
                        if ((func_00B04DF0(var_s2) != 1) || (func_00B04D40(var_s2) == 1)) {
                            if ((func_0096E890(var_s2) == 1) && (func_00B04A90(var_s2) != 1)) {

                            } else {
                                goto block_25;
                            }
                        }
                    } else if ((func_00B04DF0(var_s2) == 1) || (func_0096E890(var_s2) == 1)) {
                        temp_v0_2 = func_00223E00(var_s2);
                        if ((temp_v0_2 != NULL) && ((M2C_FIELD(temp_v0_2, u8 *, 6) & 0x3F) == 8)) {
                            goto block_25;
                        }
                    } else {
block_25:
                        if ((M2C_FIELD(temp_s0, u8 *, 6) & 0x3F) == 3) {
                            M2C_FIELD(temp_s1, u8 *, 0x3D) = (u8) ((M2C_FIELD(temp_s1, u8 *, 0x3D) & ~0x3E) | 4);
                            M2C_FIELD(temp_s0, u8 *, 6) = (u8) ((M2C_FIELD(temp_s0, u8 *, 6) & ~0x3F) | 4);
                            M2C_FIELD(temp_s0, u8 *, 6) = (u8) ((M2C_FIELD(temp_s0, u8 *, 6) & ~0x40) | 0x40);
                        } else {
                            temp_v1_2 = M2C_FIELD(temp_s1, u8 *, 0x3D);
                            M2C_FIELD(temp_s1, u8 *, 0x3D) = (u8) ((temp_v1_2 & ~0x3E) | (((((u64) ((s64) temp_v1_2 << 0x3A) >> 0x3B) + 1) & 0x1F) * 2));
                            M2C_FIELD(temp_s0, s8 *, 0xC) = (s8) (M2C_FIELD(temp_s0, s8 *, 0xC) + 1);
                        }
                    }
                }
            }
            var_s2 = (var_s2 + 1) & 0xFFFF;
        } while (var_s2 < 0x12B0);
        var_s1_2 = 0x7000;
        do {
            temp_s0_2 = func_00970870(var_s1_2);
            temp_v0_3 = func_00223E00(var_s1_2);
            if ((temp_s0_2 != NULL) && (temp_v0_3 != NULL)) {
                temp_a0 = M2C_FIELD(temp_v0_3, u8 *, 6) & 0x3F;
                if (temp_a0 != 0) {
                    if (temp_a0 == 3) {
                        M2C_FIELD(temp_s0_2, u8 *, 0x3D) = (u8) ((M2C_FIELD(temp_s0_2, u8 *, 0x3D) & ~0x3E) | 4);
                        M2C_FIELD(temp_v0_3, u8 *, 6) = (u8) ((M2C_FIELD(temp_v0_3, u8 *, 6) & ~0x3F) | 4);
                        M2C_FIELD(temp_v0_3, u8 *, 6) = (u8) ((M2C_FIELD(temp_v0_3, u8 *, 6) & ~0x40) | 0x40);
                    } else {
                        temp_a0_2 = M2C_FIELD(temp_s0_2, u8 *, 0x3D);
                        M2C_FIELD(temp_s0_2, u8 *, 0x3D) = (u8) ((temp_a0_2 & ~0x3E) | (((((u64) ((s64) temp_a0_2 << 0x3A) >> 0x3B) + 1) & 0x1F) * 2));
                        M2C_FIELD(temp_v0_3, s8 *, 0xC) = (s8) (M2C_FIELD(temp_v0_3, s8 *, 0xC) + 1);
                    }
                }
            }
            var_s1_2 = (var_s1_2 + 1) & 0xFFFF;
        } while (var_s1_2 < 0x7020);
    }
    func_00AF3400();
    func_00B2B7B0();
    func_00B2B450();
    func_00B01980();
    func_00B01880();
    func_00B005F0(0);
    func_00AFFEB0();
}
