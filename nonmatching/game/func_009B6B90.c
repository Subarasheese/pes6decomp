/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B2870();                                /* extern */
s32 func_00B985A0();                                /* extern */
s32 func_00BC2630();                                /* extern */
s32 func_00BC54E0();                                /* extern */

s32 func_009B6B90(void) {
    s32 var_s0;

    var_s0 = 1;
    if (func_00BC54E0() == 0) {
        if ((func_00B985A0() == 0) && (func_00BC2630() == 0) && (func_009B2870() <= 0)) {
            var_s0 = 0;
        }
    }
    return var_s0;
}
