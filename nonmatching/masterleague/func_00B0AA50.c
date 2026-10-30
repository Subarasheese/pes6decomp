/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B15370(void);
M2C_UNK func_00973BF0(s32, s32 *, M2C_UNK, f32);    /* extern */
M2C_UNK func_0097FA10(s32, s16, f32);               /* extern */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24], gap at: 0x8. */
void func_00B0AA50(void) {
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    f32 temp_f20;
    s16 temp_a1;
    u32 temp_v0;

    temp_v0 = func_00B15370();
    if (temp_v0 != 0) {
        sp30 = 0;
        sp34 = 0;
        sp38 = 0;
        sp3C = 0;
        temp_f20 = (f32) (M2C_FIELD(temp_v0, s16 *, 0xBF6) * M2C_FIELD(temp_v0, u8 *, 0xBFE)) * -1.0f;
        func_00973BF0(M2C_FIELD(temp_v0, s32 *, 0xBDC), &sp30, 0, temp_f20);
        func_00973BF0(M2C_FIELD(temp_v0, s32 *, 0xBE0), &sp30, 0, temp_f20);
        temp_a1 = M2C_FIELD(temp_v0, s16 *, 0xBF6);
        func_0097FA10(M2C_FIELD(temp_v0, s32 *, 0xBEC), temp_a1, (f32) ((M2C_FIELD(temp_v0, u8 *, 0xBFE) * temp_a1) - M2C_FIELD(temp_v0, s16 *, 0xBFA)) / (12.0f * (f32) temp_a1));
    }
}
