/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00208310(s32);
extern f32 *D_003E74CC;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14], gap at: 0x8. */
s32 func_009F4C40(s32 arg0, f32 fparg0) {
    f32 temp_f2;
    f32 var_f3;
    s32 temp_v1;
    s32 var_v0;

    temp_f2 = *D_003E74CC;
    temp_v1 = M2C_FIELD(func_00208310(arg0 & 0xFFFF), u16 *, 8) * 2;
    if (fparg0 != temp_f2) {
        var_v0 = 1;
        var_f3 = 0.0f;
loop_2:
        var_f3 += fparg0;
        if (var_f3 <= ((f32) temp_v1 - (temp_f2 / 2.0f))) {
            var_v0 += 1;
            if (var_v0 >= 0xFF) {

            } else {
                goto loop_2;
            }
        }
    } else {
        var_v0 = (s32) (((f32) temp_v1 + (temp_f2 / 2.0f)) / temp_f2);
    }
    return var_v0;
}
