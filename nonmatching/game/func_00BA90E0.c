/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_009B3070(s32, s32);
/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34], gap at: 0x8. */
void func_00BA90E0(void **arg0, s32 arg1, f32 fparg0) {
    f32 temp_f1;
    f32 var_f20;
    s32 temp_s1;
    s32 var_a0;
    void *temp_a0;

    var_f20 = fparg0;
    if (var_f20 == 0.0f) {
        var_f20 = 1.0f;
    }
    temp_a0 = *arg0;
    temp_s1 = (M2C_FIELD(M2C_FIELD(temp_a0, void **, 4), u8 *, 0x2D) != 0) ? -1 : 1;
    temp_f1 = (f32) (temp_s1 * (func_009B3070((s32) M2C_FIELD(temp_a0, u16 *, 0x26), arg1) & 0xFFFF)) / var_f20;
    if (temp_f1 >= 2.1474836e9f) {
        var_a0 = (s32) (temp_f1 - 2.1474836e9f) | 0x80000000;
    } else {
        var_a0 = (s32) temp_f1;
    }
    M2C_FIELD(*arg0, s16 *, 0x38) = (s16) (var_a0 & 0xFFFF);
}
