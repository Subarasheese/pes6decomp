/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00AEDB00(f32 *arg0, f32 *arg1, f32 fparg0, f32 fparg1) {
    f32 temp_f1;
    f32 temp_f2;
    s32 var_v1;

    var_v1 = 0;
    temp_f2 = (*arg0 - fparg0) / 2.0f;
    temp_f1 = (*arg1 - fparg1) / 2.0f;
    if (!(temp_f2 <= -1.0f) && (temp_f2 < 1.0f)) {
        *arg0 = fparg0;
        var_v1 = 1;
    } else {
        *arg0 -= temp_f2;
    }
    if (!(temp_f1 <= -1.0f) && (temp_f1 < 1.0f)) {
        *arg1 = fparg1;
        var_v1 += 1;
    } else {
        *arg1 -= temp_f1;
    }
    return var_v1 == 2;
}
