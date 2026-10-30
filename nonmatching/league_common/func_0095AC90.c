/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


f32 func_002C7390(s32, s32);                        /* extern */
s32 func_00970870();                                /* extern */

f32 func_0095AC90(M2C_UNK arg0, s32 arg1) {
    f32 temp_f0;
    f32 var_f0;
    f32 var_f1;

    temp_f0 = func_002C7390(func_00970870(), arg1);
    var_f0 = 0.0001f * (temp_f0 * temp_f0);
    var_f1 = 0.0f;
    if (!(var_f0 < 0.0f)) {
        var_f1 = 1.0f;
        if (!(var_f0 <= 1.0f)) {
            goto block_5;
        }
    } else {
block_5:
        var_f0 = var_f1;
    }
    return var_f0;
}
