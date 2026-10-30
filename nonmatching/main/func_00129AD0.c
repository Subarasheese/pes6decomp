/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


f32 func_00129AD0(f32 fparg0, f32 fparg1, f32 fparg2) {
    f32 var_f13;
    f32 var_f14;

    var_f13 = fparg1;
    var_f14 = fparg2;
    if (fparg0 < var_f13) {

    } else {
        if (fparg0 <= var_f14) {
            var_f14 = fparg0;
        }
        var_f13 = var_f14;
    }
    return var_f13;
}
