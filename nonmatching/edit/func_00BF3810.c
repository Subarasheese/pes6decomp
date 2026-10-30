/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00246550(s32);                             /* extern */

s32 func_00BF3810(void) {
    s32 var_s0;

    var_s0 = 0;
loop_1:
    if (func_00246550(var_s0 + 0xB1) == 0) {
        var_s0 += 1;
        if (var_s0 >= 0xB) {
            return 0;
        }
        goto loop_1;
    }
    return 1;
}
