/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00CEC220(s32);                             /* extern */

s32 func_00CEC490(s32 *arg0, s32 *arg1) {
    s32 *var_s0;
    s32 *var_s1;
    s32 var_s2;

    var_s2 = 0;
    if (*arg0 != 0) {
        var_s1 = arg0;
        var_s0 = arg1;
        do {
            *var_s0 = func_00CEC220(*var_s1);
            var_s1 += 4;
            var_s0 += 4;
            var_s2 += 1;
        } while (*var_s1 != 0);
    }
    return var_s2;
}
