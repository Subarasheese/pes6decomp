/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


f32 func_0011D020(s32, f32);                        /* extern */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24], gap at: 0x8. */
s32 func_00D11D40(void *arg0) {
    f32 temp_f1;
    f32 temp_f20;
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v1;

    if (arg0 == NULL) {
        return 2;
    }
    temp_v0 = M2C_FIELD(arg0, s32 *, 0xDA0);
    if (temp_v0 >= 2) {
        temp_a0 = M2C_FIELD(arg0, s32 *, 0xD94);
        temp_f20 = (2.0f * (M2C_FIELD(arg0, f32 *, 0xD98) + (f32) (temp_a0 - M2C_FIELD(arg0, s32 *, 0xD9C)))) / (f32) (temp_v0 + 1);
        temp_v1 = (s32) func_0011D020(temp_a0, temp_f20) - 1;
        M2C_FIELD(arg0, s32 *, 0xD94) = (s32) (M2C_FIELD(arg0, s32 *, 0xD94) - temp_v1);
        temp_f1 = M2C_FIELD(arg0, f32 *, 0xD98) - (temp_f20 - (f32) temp_v1);
        M2C_FIELD(arg0, f32 *, 0xD98) = temp_f1;
        if (temp_f1 < 0.0f) {
            M2C_FIELD(arg0, f32 *, 0xD98) = (f32) (temp_f1 + 1.0f);
            M2C_FIELD(arg0, s32 *, 0xD94) = (s32) (M2C_FIELD(arg0, s32 *, 0xD94) - 1);
        }
        M2C_FIELD(arg0, s32 *, 0xDA0) = (s32) (M2C_FIELD(arg0, s32 *, 0xDA0) - 1);
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0xD94) = (s32) M2C_FIELD(arg0, s32 *, 0xD9C);
    M2C_FIELD(arg0, s32 *, 0xDA0) = 0;
    M2C_FIELD(arg0, f32 *, 0xD98) = 0.0f;
    return 0;
}
