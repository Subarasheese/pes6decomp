/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00A97C30(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_a0;

    var_a0 = arg0;
    if (arg2 < arg1) {
        var_a0 = var_a0 / (s32) (arg1 - arg2);
    }
    return var_a0;
}
