/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00835BA0(s32, s32);                        /* extern */

s32 func_00948A70(s32 arg0) {
    s32 var_s0;
    s32 var_s1;

    var_s1 = 0;
    var_s0 = 0;
    do {
        if (func_00835BA0(arg0, var_s1) == 1) {
            var_s0 += 1;
        }
        var_s1 += 1;
    } while (var_s1 < 0xE);
    return var_s0;
}
