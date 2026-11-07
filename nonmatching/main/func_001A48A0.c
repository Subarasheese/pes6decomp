/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


f32 func_0011D238(f32);                             /* extern */
extern s32 D_003E9890;
extern char D_005205D8[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14], gap at: 0x8. */
void func_001A48A0(f32 fparg0) {
    f32 temp_f20;
    f32 var_f12;
    f32 var_f20;

    var_f12 = fparg0;
    if ((var_f12 < -3.1415927f) || !(var_f12 <= 3.1415927f)) {
        temp_f20 = 0.15915494f * var_f12;
        var_f20 = temp_f20 - func_0011D238(temp_f20);
        if (!(var_f20 <= 0.5f)) {
            var_f20 -= 1.0f;
        }
        var_f12 = 3.1415927f * (2.0f * var_f20);
    }
    (*(f32 *)D_005205D8) = var_f12;
    D_003E9890 &= ~8;
}
