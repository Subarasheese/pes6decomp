/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00AE8A50(s32 arg0) {
    s32 var_v0;

    switch (arg0) {                                 /* irregular */
    case -20:
        return -8;
    case -19:
        return -3;
    case -18:
        return -4;
    case -15:
        return -2;
    case -14:
        return -3;
    case -1:
        return -3;
    case -11:
        return -3;
    case -9:
        return -3;
    case -8:
        return -3;
    case -6:
        return -4;
    default:
        var_v0 = -4;
        if ((arg0 != -4) && (arg0 != -3)) {
            return -4;
        }
        return var_v0;
    case -21:
        var_v0 = -5;
        /* Duplicate return node #45. Try simplifying control flow for better match */
        return var_v0;
    }
}
