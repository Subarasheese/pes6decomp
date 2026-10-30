/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00376A98[];

f32 func_00151CF0(f32 fparg0) {
    f32 var_f0;
    f32 var_f0_2;
    s32 temp_a0_2;
    u32 temp_a0;

    var_f0 = 0.0f;
    if (fparg0 != 0.0f) {
        temp_a0 = (*(s32 *)D_00376A98) ^ ((*(s32 *)D_00376A98) << 0x11);
        temp_a0_2 = temp_a0 ^ (temp_a0 >> 0xF);
        (*(s32 *)D_00376A98) = temp_a0_2;
        if (temp_a0_2 >= 0) {
            var_f0_2 = (f32) temp_a0_2;
        } else {
            var_f0_2 = 2.0f * (f32) (((u32) temp_a0_2 >> 1) | (temp_a0_2 & 1));
        }
        var_f0 = fparg0 * (2.3283064e-10f * var_f0_2);
        if (!(var_f0 <= fparg0)) {
            var_f0 = fparg0;
        }
    }
    return var_f0;
}
