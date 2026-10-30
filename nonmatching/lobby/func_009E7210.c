/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009E7250();                                /* extern */

s32 func_009E7210(M2C_UNK arg0, s32 arg1) {
    s32 var_s0;

    var_s0 = 1;
    if ((arg1 == -3) && (func_009E7250() == 0)) {
        var_s0 = 2;
    }
    return var_s0;
}
