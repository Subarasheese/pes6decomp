/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00C11FC0(f32 fparg0) {
    s32 var_v0;

    var_v0 = (s32) (8.0f * ((13465.0f + fparg0) / 26930.0f));
    if (var_v0 <= 0) {
        var_v0 = 0;
    }
    if (var_v0 >= 7) {
        var_v0 = 7;
    }
    return var_v0;
}
