/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00226A50(void);
s32 func_00151EA0(M2C_UNK);                         /* extern */
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
void *func_00223E00(u16);                           /* extern */
s32 func_00937F90(u16);                             /* extern */
void *func_00970870(u16);                           /* extern */
s32 func_009847F0(s32);                             /* extern */
s32 func_00B02A20(u16);                             /* extern */
s32 func_00B05280(u16);                             /* extern */
s32 func_00B2B2C0(s32);                             /* extern */
M2C_UNK func_00B2B5D0(u16);                         /* extern */
s32 func_00B2C4E0(s32, M2C_UNK, M2C_UNK);           /* extern */

void func_00B1FF50(s32 arg0, void *arg1) {
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f2;
    f32 var_f2_2;
    s32 temp_s0;
    s32 var_s0;
    s32 var_s2;
    s32 var_s3;
    u16 temp_v0;
    u16 temp_v1;
    void *temp_s1;
    void *temp_s6;

    temp_s1 = func_00223E00(M2C_FIELD(arg1, u16 *, 4));
    temp_s6 = func_00970870(M2C_FIELD(arg1, u16 *, 4));
    if ((temp_s1 != NULL) && (temp_s6 != NULL)) {
        var_s2 = 0;
        temp_s0 = func_00B05280(M2C_FIELD(arg1, u16 *, 4)) & 0xFFFF;
        var_s3 = func_009847F0(arg0) & 0xFF;
        if (var_s3 == 0) {
            var_s3 = 2;
        }
        temp_v1 = M2C_FIELD(arg1, u16 *, 8);
        if ((s32) temp_v1 < 0) {
            var_f2 = 2.0f * (f32) ((temp_v1 >> 1) | (temp_v1 & 1));
        } else {
            var_f2 = (f32) temp_v1;
        }
        if (temp_s0 < 0) {
            var_f0 = 2.0f * (f32) (((u32) temp_s0 >> 1) | (temp_s0 & 1));
        } else {
            var_f0 = (f32) temp_s0;
        }
        if (var_f2 < (1.1f * var_f0)) {
            if ((func_00B2B2C0(arg0) == 1) && ((s32) ((u64) ((s64) M2C_FIELD(temp_s1, u8 *, 5) << 0x38) >> 0x3A) < (s32) ((u32) (var_s3 & 0xFFFF) >> 1))) {
                if (func_00226A50() != 0) {
                    if ((((u64) ((s64) M2C_FIELD(temp_s6, u8 *, 1) << 0x38) >> 0x3C) == 0) && ((func_00B2C4E0(arg0, 0, 0) & 0xFF) < 3)) {
                        goto block_44;
                    }
                    if (((func_00937F90(M2C_FIELD(arg1, u16 *, 4)) & 0xFF) >= 0x55) && ((func_00B02A20(M2C_FIELD(arg1, u16 *, 4)) & 0xFF) < 0x21)) {
                        goto block_44;
                    }
                    temp_v0 = M2C_FIELD(arg1, u16 *, 8);
                    if ((s32) temp_v0 < 0) {
                        var_f2_2 = 2.0f * (f32) ((temp_v0 >> 1) | (temp_v0 & 1));
                    } else {
                        var_f2_2 = (f32) temp_v0;
                    }
                    if (temp_s0 < 0) {
                        var_f0_2 = 2.0f * (f32) (((u32) temp_s0 >> 1) | (temp_s0 & 1));
                    } else {
                        var_f0_2 = (f32) temp_s0;
                    }
                    if (var_f2_2 <= (0.9f * var_f0_2)) {
                        var_s0 = 0x46;
                    } else {
                        var_s0 = 0x5F;
                    }
                    if (func_00226A50() == 2) {
                        var_s0 = (var_s0 - 0x14) & 0xFF;
                    }
                    if ((var_s0 & 0xFF) >= (func_00151EA0(0x64) & 0xFFFF)) {
                        goto block_44;
                    }
                } else {
                    goto block_20;
                }
            } else {
block_20:
                var_s2 = 1;
            }
        } else {
block_44:
            var_s2 = 1;
        }
        if ((var_s2 & 0xFF) == 1) {
            M2C_FIELD(arg1, u8 *, 1) = (u8) ((M2C_FIELD(arg1, u8 *, 1) & ~0x78) | 0x10);
            M2C_FIELD(arg1, u16 *, 0) = (u16) ((M2C_FIELD(arg1, u16 *, 0) & ~0x780) | 0x200);
            M2C_FIELD(arg1, u8 *, 1) = (u8) ((M2C_FIELD(arg1, u8 *, 1) & ~0x80) | ((0 & 1) << 7));
        } else {
            M2C_FIELD(arg1, u16 *, 0) = (s8) (((u8) M2C_FIELD(arg1, u16 *, 0) & ~0x7E) | 0x10);
            func_00B2B5D0(M2C_FIELD(arg1, u16 *, 4));
            func_001C48E8(arg1, 0, 0x10);
        }
    }
}
