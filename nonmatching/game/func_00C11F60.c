/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00C11F60(f32 fparg0) {
    s32 var_v0;

    var_v0 = (s32) (6.0f * ((8729.0f + fparg0) / 17458.0f));
    if (var_v0 <= 0) {
        var_v0 = 0;
    }
    if (var_v0 >= 5) {
        var_v0 = 5;
    }
    return var_v0;
}
