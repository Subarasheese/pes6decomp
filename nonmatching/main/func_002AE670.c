/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

extern f32 *D_003E74CC;

s32 func_002AE670(s32 arg0) {
    f32 temp_f2;
    s32 var_a0;

    var_a0 = arg0;
    temp_f2 = *D_003E74CC;
    if (temp_f2 != 1.0f) {
        var_a0 = (s32) (((f32) var_a0 + (temp_f2 / 2.0f)) / temp_f2);
    }
    return var_a0;
}
