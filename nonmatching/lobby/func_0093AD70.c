/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00949CA0(M2C_UNK);                         /* extern */

s32 func_0093AD70(M2C_UNK arg0, s32 arg1) {
    s32 var_s0;
    s32 var_v0;

    var_s0 = 0;
    if (arg1 == 0) {
        var_v0 = func_00949CA0(1);
    } else {
        var_v0 = func_00949CA0(0);
    }
    switch (var_v0) {                               /* irregular */
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
