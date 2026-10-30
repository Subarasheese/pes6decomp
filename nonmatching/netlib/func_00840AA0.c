/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00D0BAF0();                                /* extern */

s32 func_00840AA0(s32 arg0) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = func_00D0BAF0();
    if (temp_v0 != 0) {
        var_v1 = temp_v0 + 0xF8A4;
    } else {
        var_v1 = 0;
    }
    if (var_v1 == 0) {
        return 0;
    }
    if (arg0 < 0) {
        return 0;
    }
    if (arg0 < 8) {
        return var_v1 + (arg0 * 0xB8);
    }
    return 0;
}
