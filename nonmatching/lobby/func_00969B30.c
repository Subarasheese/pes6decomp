/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0093B9E0();                                /* extern */
s32 func_0093C2B0();                                /* extern */
s32 func_0093D4B0();                                /* extern */

s32 func_00969B30(void) {
    s32 var_s0;

    var_s0 = 0;
    if ((func_0093D4B0() == 0) && (func_0093B9E0() == 0) && (func_0093C2B0() != 0)) {
        var_s0 = 1;
    }
    return var_s0;
}
