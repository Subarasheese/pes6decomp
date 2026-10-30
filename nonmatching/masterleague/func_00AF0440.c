/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0095C610();                                /* extern */
s32 func_0095C780(s32);                             /* extern */

s32 func_00AF0440(void) {
    s32 temp_s0;
    s32 var_s1;

    temp_s0 = func_0095C610();
    var_s1 = 0;
loop_1:
    if (temp_s0 != func_0095C780(var_s1)) {
        var_s1 = (var_s1 + 1) & 0xFF;
        if (var_s1 >= 0xA) {
            return 0;
        }
        goto loop_1;
    }
    return var_s1;
}
