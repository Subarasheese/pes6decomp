/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00180B50(s32 arg0) {
    s32 var_v0;

    var_v0 = 2;
    switch (arg0) {                                 /* irregular */
    case 2:
    case 0:
        return 0;
    case 3:
    case 1:
        var_v0 = 1;
        /* fallthrough */
    case 4:
        return var_v0;
    default:
        return 2;
    }
}
