/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern u32 func_00B31770(void);
M2C_UNK func_00973B80(void *, M2C_UNK, f32);        /* extern */
M2C_UNK func_0097FA10(s32, s32, s16, f32);          /* extern */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44], gap at: 0x8. */
void func_00B30CD0(void) {
    f32 temp_f20;
    s16 temp_a2;
    s32 temp_a1;
    s32 var_s2;
    u32 temp_v0;
    u32 var_s0;
    u8 temp_v1;

    temp_v0 = func_00B31770();
    if (temp_v0 != 0) {
        temp_f20 = (f32) M2C_FIELD(temp_v0, s16 *, 0xDC);
        func_00973B80(M2C_FIELD(temp_v0, void **, 8), 0, temp_f20);
        var_s2 = 0;
        var_s0 = temp_v0;
        do {
            func_00973B80(M2C_FIELD(var_s0, void **, 0x6C), 0, temp_f20);
            temp_v1 = M2C_FIELD(temp_v0, u8 *, 0xE0);
            if ((var_s2 + 1) >= (s32) temp_v1) {
                if ((temp_v1 + 0xF) < var_s2) {
                    goto block_5;
                }
                func_001D7D60(M2C_FIELD(var_s0, void **, 0x6C), 1);
            } else {
block_5:
                func_001D7D60(M2C_FIELD(var_s0, void **, 0x6C), 0);
            }
            var_s2 += 1;
            var_s0 += 4;
        } while (var_s2 < 0x17);
        temp_a2 = M2C_FIELD(temp_v0, s16 *, 0xDA);
        temp_a1 = M2C_FIELD(temp_v0, u8 *, 0xE0) * temp_a2;
        func_0097FA10(M2C_FIELD(temp_v0, s32 *, 0xD0), temp_a1, temp_a2, (f32) (temp_a1 - M2C_FIELD(temp_v0, s16 *, 0xDE)) / (f32) (temp_a2 * 8));
    }
}
