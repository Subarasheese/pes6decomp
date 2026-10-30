/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009EECE0(s32 arg0, s32 *arg1, s32 arg2) {
    s32 temp_a3;
    s32 temp_v1;
    s32 var_a0;
    s32 var_v0;
    s32 var_v1;

    temp_a3 = *arg1;
    var_v1 = 1;
    var_v0 = 0;
    if (arg0 == 1) {
        var_v1 = -1;
    }
    var_a0 = temp_a3 + var_v1;
    if (var_a0 >= 0) {
        temp_v1 = arg2 - 1;
        if (temp_v1 < var_a0) {
            var_a0 = temp_v1;
        }
    } else {
        var_a0 = 0;
    }
    if (var_a0 != temp_a3) {
        *arg1 = var_a0;
        var_v0 = 1;
    }
    return var_v0;
}
