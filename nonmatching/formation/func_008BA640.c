/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008BA6A0(s32, s32, s32);                   /* extern */

s32 func_008BA640(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_a1;
    s32 var_s0;

    var_a1 = arg1;
    var_s0 = 0;
    if (var_a1 != 0) {
        do {
            var_a1 = func_008BA6A0(arg0, var_a1, arg2);
            var_s0 += 1;
        } while (var_a1 != 0);
    }
    return var_s0;
}
