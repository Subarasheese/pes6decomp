/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009AB5D0(s32 arg0) {
    s32 temp_a0;
    s32 var_v0;

    temp_a0 = arg0 & 0xFF;
    var_v0 = 0;
    switch (temp_a0) {                              /* irregular */
    case 4:
        return 0x20;
    case 3:
    case 2:
    case 1:
    case 0:
        var_v0 = 0x1C;
        /* fallthrough */
    case 13:
        return var_v0;
    default:
        return 0;
    }
}
