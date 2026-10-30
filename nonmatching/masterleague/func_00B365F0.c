/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern u32 func_00B37A60(void);
M2C_UNK func_00956A80(s32, M2C_UNK);                /* extern */
M2C_UNK func_00973B80(void *, M2C_UNK, f32);        /* extern */
M2C_UNK func_0097FA10(s32, f32);                    /* extern */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44], gap at: 0x8. */
void func_00B365F0(void) {
    f32 temp_f20;
    f32 temp_f2;
    f32 var_f0;
    s16 temp_a0;
    s32 temp_a0_3;
    s32 temp_v0_2;
    s32 var_s2;
    u32 temp_v0;
    u32 var_s0;
    u8 temp_v0_3;
    u8 temp_v1;
    u8 temp_v1_2;
    void *temp_a0_2;

    temp_v0 = func_00B37A60();
    if (temp_v0 != 0) {
        temp_a0 = M2C_FIELD(temp_v0, s16 *, 0x296);
        var_s2 = 0;
        var_s0 = temp_v0;
        temp_v0_2 = M2C_FIELD(temp_v0, s16 *, 0x28A) * (M2C_FIELD(temp_v0, u8 *, 0x290) - temp_a0);
        M2C_FIELD(temp_v0, u8 *, 0x290) = (u8) temp_a0;
        temp_f20 = (f32) temp_v0_2;
        do {
            func_00973B80(M2C_FIELD(var_s0, void **, 8), 0, temp_f20);
            temp_v1 = M2C_FIELD(temp_v0, u8 *, 0x290);
            if (((var_s2 + 1) < (s32) temp_v1) || ((temp_v1 + 7) < var_s2)) {
                func_001D7D60(M2C_FIELD(var_s0, void **, 8), 0);
                func_00956A80(M2C_FIELD(var_s0, s32 *, 0x12C), 0);
            } else {
                func_001D7D60(M2C_FIELD(var_s0, void **, 8), 1);
                func_00956A80(M2C_FIELD(var_s0, s32 *, 0x12C), 1);
            }
            var_s2 += 1;
            var_s0 += 4;
        } while (var_s2 < 0x48);
        temp_a0_2 = M2C_FIELD(temp_v0, void **, 0x29C);
        if (temp_a0_2 != NULL) {
            func_00973B80(temp_a0_2, 0, temp_f20);
            temp_a0_3 = M2C_FIELD(temp_v0, s32 *, 0x27C);
            temp_v1_2 = M2C_FIELD(temp_v0, u8 *, 0x290);
            if ((temp_a0_3 + 1) >= (s32) temp_v1_2) {
                if ((temp_v1_2 + 7) >= temp_a0_3) {
                    func_001D7D60(M2C_FIELD(temp_v0, void **, 0x29C), 1);
                } else {
                    goto block_12;
                }
            } else {
block_12:
                func_001D7D60(M2C_FIELD(temp_v0, void **, 0x29C), 0);
            }
        }
        temp_v0_3 = M2C_FIELD(temp_v0, u8 *, 0x290);
        temp_f2 = (f32) M2C_FIELD(temp_v0, s16 *, 0x28A);
        if ((s32) temp_v0_3 >= 0) {
            var_f0 = (f32) temp_v0_3;
        } else {
            var_f0 = 2.0f * (f32) ((temp_v0_3 >> 1) | (temp_v0_3 & 1));
        }
        func_0097FA10(M2C_FIELD(temp_v0, s32 *, 0x24C), ((var_f0 * temp_f2) - (f32) M2C_FIELD(temp_v0, s16 *, 0x28E)) / (65.0f * temp_f2));
    }
}
