/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F3D10(s32, u8);
extern void func_001D7D60(void *, s8);
extern u32 func_009B7F90(void);
M2C_UNK func_00973B80(void *, M2C_UNK, f32);        /* extern */
M2C_UNK func_0097FA10(s32, s16, f32);               /* extern */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44], gap at: 0x8. */
void func_009B3210(void) {
    f32 temp_f20;
    f32 var_f2;
    s16 temp_a1;
    s32 var_s2;
    u32 temp_v0;
    u32 var_s0;
    u8 temp_v0_2;
    u8 temp_v1;
    void *temp_a0;

    temp_v0 = func_009B7F90();
    if (temp_v0 != 0) {
        var_s2 = 0;
        var_s0 = temp_v0;
        temp_f20 = (f32) M2C_FIELD(temp_v0, s16 *, 0x3F4);
        do {
            temp_a0 = M2C_FIELD(var_s0, void **, 0x60);
            if (temp_a0 != NULL) {
                func_00973B80(temp_a0, 0, temp_f20);
                temp_v1 = M2C_FIELD(temp_v0, u8 *, 0x3F2);
                if ((var_s2 + 1) >= (s32) temp_v1) {
                    if ((temp_v1 + 0xB) < var_s2) {
                        goto block_6;
                    }
                    if (var_s2 < (s32) M2C_FIELD(temp_v0, u8 *, 0x40F)) {
                        if (M2C_FIELD(temp_v0, s32 *, 0x400) == 0) {
                            func_001D7D60(M2C_FIELD(var_s0, void **, 0x60), 0);
                        } else {
                            func_001D7D60(M2C_FIELD(var_s0, void **, 0x60), 1);
                        }
                    } else {
                        func_001D7D60(M2C_FIELD(var_s0, void **, 0x60), 0);
                    }
                } else {
block_6:
                    func_001D7D60(M2C_FIELD(var_s0, void **, 0x60), 0);
                }
            }
            var_s2 += 1;
            var_s0 += 4;
        } while (var_s2 < 0x20);
        temp_a1 = M2C_FIELD(temp_v0, s16 *, 0x3EC);
        temp_v0_2 = M2C_FIELD(temp_v0, u8 *, 0x40F);
        if ((s32) temp_v0_2 >= 0) {
            var_f2 = (f32) temp_v0_2;
        } else {
            var_f2 = 2.0f * (f32) ((temp_v0_2 >> 1) | (temp_v0_2 & 1));
        }
        func_0097FA10(M2C_FIELD(temp_v0, s32 *, 0x3E8), temp_a1, (f32) ((M2C_FIELD(temp_v0, u8 *, 0x3F2) * temp_a1) - M2C_FIELD(temp_v0, s16 *, 0x3F0)) / ((var_f2 - 11.0f) * (f32) temp_a1));
        if (M2C_FIELD(temp_v0, s32 *, 0x400) != 0) {
            if ((s32) M2C_FIELD(temp_v0, u8 *, 0x40F) >= 0xC) {
                func_001F3D10(M2C_FIELD(temp_v0, s32 *, 0x3E8), 1U);
            } else {
                func_001F3D10(M2C_FIELD(temp_v0, s32 *, 0x3E8), 0U);
            }
        } else {
            func_001F3D10(M2C_FIELD(temp_v0, s32 *, 0x3E8), 0U);
        }
    }
}
