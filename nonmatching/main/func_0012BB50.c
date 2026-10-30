/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00103DF0(void *, s32, f32);            /* extern */
f32 func_0011D138(f32);                             /* extern */
f32 func_0011D468(f32);                             /* extern */
M2C_UNK func_0012BF20(void *, void *);              /* extern */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34], gap at: 0x8. */
void func_0012BB50(void *arg0, s32 arg1, f32 fparg0) {
    f32 temp_f20;
    f32 temp_f20_2;

    temp_f20 = fparg0 / 2.0f;
    temp_f20_2 = func_0011D138(temp_f20);
    func_00103DF0(arg0, arg1, func_0011D468(temp_f20));
    M2C_FIELD(arg0, f32 *, 0xC) = temp_f20_2;
    func_0012BF20(arg0, arg0);
}
