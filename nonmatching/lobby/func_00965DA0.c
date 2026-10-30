/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00840560(s32);                             /* extern */
s32 func_00840D50();                                /* extern */

s32 func_00965DA0(void) {
    s32 temp_s0;
    s32 temp_v0;
    s32 var_s1;
    s32 var_s2;

    temp_s0 = func_00840D50();
    var_s2 = 0;
    var_s1 = 0;
loop_5:
    if (var_s1 < temp_s0) {
        temp_v0 = func_00840560(var_s1) & 0xFF;
        if ((temp_v0 >= 0) && (temp_v0 < 4)) {
            var_s2 += 1;
        }
        var_s1 += 1;
        goto loop_5;
    }
    return var_s2;
}
