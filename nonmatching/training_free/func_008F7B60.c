/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008F79E0();                                /* extern */
s32 func_009A3650(s32);                             /* extern */
s32 func_009A6D40();                                /* extern */

s32 func_008F7B60(void) {
    s32 var_s0;

    var_s0 = func_008F79E0();
    if (var_s0 != 0) {
        var_s0 &= func_009A3650(func_009A6D40() + 8);
    }
    return var_s0;
}
