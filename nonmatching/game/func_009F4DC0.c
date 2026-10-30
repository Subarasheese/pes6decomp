/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern f32 *D_003E74CC;

s32 func_009F4DC0(s32 arg0, f32 fparg0) {
    f32 temp_f2;
    f32 var_f3;
    s32 var_v0;

    temp_f2 = *D_003E74CC;
    if (fparg0 == temp_f2) {
        return (s32) (((f32) arg0 + (temp_f2 / 2.0f)) / temp_f2);
    }
    var_f3 = 0.0f;
    var_v0 = 1;
loop_4:
    var_f3 += fparg0;
    if (var_f3 <= ((f32) arg0 - (temp_f2 / 2.0f))) {
        var_v0 += 1;
        if (var_v0 < 0xFF) {
            goto loop_4;
        }
    }
    return var_v0;
}
