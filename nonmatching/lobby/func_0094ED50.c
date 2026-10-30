/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001C7E10();                                /* extern */

s32 func_0094ED50(s32 arg0, s32 arg1) {
    s32 var_v0;

    if ((arg0 == 0) || (arg1 == 0)) {
        return 0;
    }
    var_v0 = func_001C7E10();
    if (var_v0 == 0) {
        return 0;
    }
    if (var_v0 < 0) {
        return -1;
    }
    if (var_v0 > 0) {
        var_v0 = 1;
    }
    return var_v0;
}
