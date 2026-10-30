/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00AEF070(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 *var_v1;
    s32 var_a3;
    s32 var_a4;

    var_a3 = arg3;
    var_a4 = 0;
    if (arg1 > 0) {
        var_v1 = arg0;
loop_2:
        if (arg2 == *var_v1) {
            var_a3 = M2C_FIELD(((var_a4 * 8) + arg0), s32 *, 4);
        } else {
            var_a4 += 1;
            var_v1 += 8;
            if (var_a4 >= arg1) {

            } else {
                goto loop_2;
            }
        }
    }
    return var_a3;
}
