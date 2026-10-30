/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


f32 func_00CECD00(f32 *arg0, f32 fparg0, f32 fparg1) {
    f32 temp_f2;
    s32 var_v0;

    temp_f2 = *arg0 - fparg0;
    var_v0 = (s32) temp_f2;
    if (var_v0 <= 0) {
        var_v0 = -var_v0;
    }
    if ((f32) var_v0 <= (fparg1 - 1.0f)) {
        *arg0 = fparg0;
    } else {
        *arg0 -= temp_f2 / fparg1;
    }
    return *arg0;
}
