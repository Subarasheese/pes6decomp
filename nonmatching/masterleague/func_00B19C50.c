/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
s32 func_00151EA0(M2C_UNK);                         /* extern */
s32 func_00938040(u16, u8, M2C_UNK, u16);           /* extern */
s32 func_00970870(u16);                             /* extern */
void *func_00994C60(s32, s32);                      /* extern */
s32 func_00B02A20(u16);                             /* extern */
s32 func_00B04420(s32, u16);                        /* extern */
s32 func_00B044D0(s32, u16);                        /* extern */
u8 func_00B04FA0(s32, u16);                         /* extern */
s32 func_00B05280(u16);                             /* extern */

s32 func_00B19C50(s32 arg0, s32 arg1, u16 arg2) {
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f0_3;
    f32 var_f1;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s2;
    s32 temp_s5;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    u16 temp_a3;
    u16 temp_v1;
    u8 temp_a1;
    u8 var_v0;
    u8 var_v0_2;
    void *temp_s1;

    temp_s2 = arg0 & 0xFF;
    temp_s1 = func_00994C60(temp_s2, arg1 & 0xFFFF);
    temp_v0 = func_00970870(arg2);
    if (temp_s1 != NULL) {
        temp_v1 = M2C_FIELD(temp_s1, u16 *, 4);
        if ((temp_v1 != 0) && (temp_v1 == 0)) {
            return 0;
        }
        if (temp_v0 != 0) {
            M2C_FIELD(temp_s1, u16 *, 4) = arg2;
            temp_a3 = M2C_FIELD(temp_s1, u16 *, 0);
            M2C_FIELD(temp_s1, u16 *, 0) = (u16) ((temp_a3 & ~0x780) | 0x100);
            temp_a1 = M2C_FIELD(temp_s1, u8 *, 1);
            M2C_FIELD(temp_s1, u8 *, 1) = (u8) ((temp_a1 & ~0x78) | 8);
            M2C_FIELD(temp_s1, s16 *, 6) = 0;
            temp_s5 = func_00938040(arg2, temp_a1, 0x100, temp_a3) & 0xFF;
            temp_s0 = func_00B05280(arg2) & 0xFFFF;
            if (((temp_s5 & 0xFF) == 3) && (func_00B044D0(arg0, arg2) == 1)) {
                if (temp_s0 < 0) {
                    var_f0 = 2.0f * (f32) (((u32) temp_s0 >> 1) | (temp_s0 & 1));
                } else {
                    var_f0 = (f32) temp_s0;
                }
                temp_f1 = 1.1f * var_f0;
                if (temp_f1 >= 2.1474836e9f) {
                    var_v1 = (s32) (temp_f1 - 2.1474836e9f) | 0x80000000;
                } else {
                    var_v1 = (s32) temp_f1;
                }
                M2C_FIELD(temp_s1, u16 *, 8) = (u16) (var_v1 & 0xFFFF);
                var_v0 = 5;
            } else if ((func_00B04420(arg0, arg2) & 0xFF) >= 2) {
                temp_v0_2 = func_00151EA0(0x1E);
                if (temp_v0_2 < 0) {
                    var_f1 = 2.0f * (f32) (((u32) temp_v0_2 >> 1) | (temp_v0_2 & 1));
                } else {
                    var_f1 = (f32) temp_v0_2;
                }
                if (temp_s0 >= 0) {
                    var_f0_2 = (f32) temp_s0;
                } else {
                    var_f0_2 = 2.0f * (f32) (((u32) temp_s0 >> 1) | (temp_s0 & 1));
                }
                temp_f1_2 = var_f0_2 * ((80.0f + var_f1) / 100.0f);
                if (temp_f1_2 >= 2.1474836e9f) {
                    var_v1_2 = (s32) (temp_f1_2 - 2.1474836e9f) | 0x80000000;
                } else {
                    var_v1_2 = (s32) temp_f1_2;
                }
                M2C_FIELD(temp_s1, u16 *, 8) = (u16) (var_v1_2 & 0xFFFF);
                var_v0 = (func_00151EA0(3) & 0xFFFF) + 1;
            } else {
                if (temp_s0 < 0) {
                    var_f0_3 = 2.0f * (f32) (((u32) temp_s0 >> 1) | (temp_s0 & 1));
                } else {
                    var_f0_3 = (f32) temp_s0;
                }
                temp_f1_3 = 1.1f * var_f0_3;
                if (temp_f1_3 >= 2.1474836e9f) {
                    var_v1_3 = (s32) (temp_f1_3 - 2.1474836e9f) | 0x80000000;
                } else {
                    var_v1_3 = (s32) temp_f1_3;
                }
                M2C_FIELD(temp_s1, u16 *, 8) = (u16) (var_v1_3 & 0xFFFF);
                var_v0 = (func_00151EA0(3) & 0xFFFF) + 2;
            }
            M2C_FIELD(temp_s1, u8 *, 0xE) = var_v0;
            if (M2C_FIELD(temp_s1, u16 *, 8) == 0) {
                M2C_FIELD(temp_s1, u16 *, 8) = 1U;
            }
            if ((s32) M2C_FIELD(temp_s1, u16 *, 8) >= 0x1389) {
                M2C_FIELD(temp_s1, u16 *, 8) = 0x1388U;
            }
            temp_s0_2 = func_00B02A20(arg2) & 0xFF;
            if (temp_s0_2 >= 0x23) {
                var_v0_2 = 1;
                goto block_64;
            }
            if (temp_s2 != (func_00225820() & 0xFF)) {
                if ((temp_s0_2 + M2C_FIELD(temp_s1, u8 *, 0xE)) >= 0x24) {
                    var_v0_2 = 0x24 - temp_s0_2;
                    goto block_64;
                }
            } else {
                var_v0_2 = func_00B04FA0(arg0, arg2);
block_64:
                M2C_FIELD(temp_s1, u8 *, 0xE) = var_v0_2;
            }
            M2C_FIELD(temp_s1, s16 *, 0xA) = 0;
            return 1;
        }
        return 0;
    }
    return 0;
}
