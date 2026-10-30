/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern f32 func_002EF2A0(void *);
extern f32 func_002EF2C0(void *);
extern s32 func_002EF280(void *);
/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24], gap at: 0x8. */
s32 func_002F5A50(void *arg0) {
    f32 temp_f1;
    f32 temp_f20;

    if (arg0 == NULL) {
        goto block_11;
    }
    if (func_002EF280(arg0 + 0x10) != 0) {
        M2C_FIELD(arg0, f32 *, 0xC) = (f32) (M2C_FIELD(arg0, f32 *, 0xC) + 22.0f);
        temp_f20 = func_002EF2A0(arg0 + 0x10);
        temp_f1 = temp_f20 - func_002EF2C0(arg0 + 0x10);
        if (temp_f1 < M2C_FIELD(arg0, f32 *, 0xC)) {
            M2C_FIELD(arg0, f32 *, 0xC) = temp_f1;
        }
        if (M2C_FIELD(arg0, f32 *, 0xC) != M2C_FIELD(arg0, f32 *, 8)) {
            return 1;
        }
        goto block_11;
    }
block_11:
    return 0;
}
