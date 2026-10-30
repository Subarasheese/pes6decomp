/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00828160();                                /* extern */
s32 func_00840680(s32);                             /* extern */
s32 func_00840A10(s32);                             /* extern */

s32 func_00966560(void) {
    s32 temp_v0;
    s32 var_s1;

    temp_v0 = func_00828160();
    if (temp_v0 != 0) {
        var_s1 = 0;
loop_8:
        if (var_s1 >= 8) {
            goto block_9;
        }
        if (temp_v0 != func_00840A10(var_s1)) {
            var_s1 += 1;
            goto loop_8;
        }
        return (func_00840680(var_s1) & 0xFF) != 0;
    }
block_9:
    return 0;
}
