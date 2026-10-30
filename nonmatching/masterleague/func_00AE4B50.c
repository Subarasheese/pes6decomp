/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern u32 func_00AE3240(void);
M2C_UNK func_00973C70(void *, void *);              /* extern */
M2C_UNK func_0097F970(s32, M2C_UNK, f32);           /* extern */
M2C_UNK func_0097FA10(s32, M2C_UNK);                /* extern */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44], gap at: 0x8. */
void func_00AE4B50(void) {
    f32 temp_f20;
    f32 var_f1;
    s32 temp_a0;
    s32 temp_v0_2;
    s32 var_s2;
    u32 temp_v0;
    u8 temp_v0_4;
    void *temp_v0_3;
    void *temp_v1;

    temp_v0 = func_00AE3240();
    if (temp_v0 != 0) {
        var_s2 = 0;
        temp_f20 = (f32) (M2C_FIELD(temp_v0, s16 *, 0xF6E) * M2C_FIELD(temp_v0, u8 *, 0xF6C));
        do {
            temp_v0_2 = var_s2 & 0xFF;
            temp_v1 = temp_v0 + (temp_v0_2 * 0x10);
            temp_v0_3 = temp_v0 + (temp_v0_2 * 4);
            M2C_FIELD(temp_v1, f32 *, 0xB98) = (f32) (M2C_FIELD(temp_v1, f32 *, 0xB98) + 0.0f);
            M2C_FIELD(temp_v1, f32 *, 0xB9C) = (f32) (M2C_FIELD(temp_v1, f32 *, 0xB9C) + temp_f20);
            func_00973C70(M2C_FIELD(temp_v0_3, void **, 0xB14), temp_v1 + 0xB98);
            temp_a0 = var_s2 & 0xFF;
            if ((temp_a0 >= 0) && (temp_a0 < 0xB)) {
                if (temp_a0 >= (s32) M2C_FIELD((temp_v0 + (M2C_FIELD(temp_v0, s32 *, 0x3DBC) * 0x314)), u8 *, 0x1118)) {
                    goto block_6;
                }
                func_001D7D60(M2C_FIELD(temp_v0_3, void **, 0xB14), 1);
            } else {
block_6:
                func_001D7D60(M2C_FIELD(temp_v0_3, void **, 0xB14), 0);
            }
            var_s2 = (var_s2 + 1) & 0xFF;
        } while (var_s2 < 0x20);
        temp_v0_4 = M2C_FIELD(((M2C_FIELD(temp_v0, s32 *, 0x3DBC) * 0x314) + temp_v0), u8 *, 0x1118);
        if ((s32) temp_v0_4 < 0) {
            var_f1 = 2.0f * (f32) ((temp_v0_4 >> 1) | (temp_v0_4 & 1));
        } else {
            var_f1 = (f32) temp_v0_4;
        }
        func_0097F970(M2C_FIELD(temp_v0, s32 *, 0xF68), 0, 11.0f / var_f1);
        func_0097FA10(M2C_FIELD(temp_v0, s32 *, 0xF68), 0);
    }
}
