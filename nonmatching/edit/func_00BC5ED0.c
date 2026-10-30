/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BC5ED0(s32 arg0) {
    s32 temp_v1;
    s32 var_v0;

    temp_v1 = arg0 & 0xFFFF;
    if ((temp_v1 >= 0x40) && (temp_v1 < 0xCC)) {
        var_v0 = 3;
    } else if (temp_v1 != 0x126) {
        if ((temp_v1 >= 0xDD) && (temp_v1 < 0xFE)) {
            var_v0 = 3;
        } else {
            var_v0 = 0;
        }
    } else {
        var_v0 = 3;
    }
    return var_v0 == 3;
}
