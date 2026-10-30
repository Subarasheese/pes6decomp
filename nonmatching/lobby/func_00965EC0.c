/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00828160();                                /* extern */
s32 func_00840710(s32);                             /* extern */
s32 func_00840A10(s32);                             /* extern */
s32 func_00841060();                                /* extern */

s32 func_00965EC0(void) {
    s32 temp_v0;
    s32 var_s1;
    s32 var_v0;

    temp_v0 = func_00828160();
    if (temp_v0 != 0) {
        var_s1 = 0;
loop_11:
        if (var_s1 >= 8) {
            goto block_12;
        }
        if (temp_v0 != func_00840A10(var_s1)) {
            var_s1 += 1;
            goto loop_11;
        }
        if (func_00840710(var_s1) & 0xFF) {
            var_v0 = 1;
        } else {
            goto block_12;
        }
    } else {
block_12:
        var_v0 = 0;
    }
    if (var_v0 == 0) {
        return 0;
    }
    return func_00841060();
}
