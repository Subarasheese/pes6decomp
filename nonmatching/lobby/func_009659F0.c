/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00840560();                                /* extern */

s32 func_009659F0(void) {
    s32 var_v0;

    var_v0 = func_00840560() & 0xFF;
    if (var_v0 < 0) {
        var_v0 = -1;
    }
    if (var_v0 >= 4) {
        var_v0 = -1;
    }
    return var_v0;
}
