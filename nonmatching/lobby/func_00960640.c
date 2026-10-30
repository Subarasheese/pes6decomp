/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00936B90();                                /* extern */

s32 func_00960640(s32 arg0) {
    s32 temp_v0;
    s32 var_v0;
    s32 var_v1;

    temp_v0 = func_00936B90();
    if (temp_v0 != 0) {
        var_v1 = temp_v0 + 0x3F6C0;
    } else {
        var_v1 = 0;
    }
    if (var_v1 == 0) {
        var_v0 = 0;
    } else if (arg0 < 0) {
        var_v0 = 0;
    } else if (arg0 < 0xA) {
        var_v0 = var_v1 + (arg0 * 0x44) + 0xC;
    } else {
        var_v0 = 0;
    }
    if (var_v0 != 0) {
        return var_v0 + 0x10;
    }
    return 0;
}
