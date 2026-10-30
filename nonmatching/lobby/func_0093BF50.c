/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0094B450();                                /* extern */

s32 func_0093BF50(void) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0;
    temp_v0 = func_0094B450();
    switch (temp_v0) {                              /* irregular */
    case 0:
        break;
    case 4:
        var_s0 = 1;
        break;
    default:
    case 1:
        var_s0 = -1;
        break;
    }
    return var_s0;
}
