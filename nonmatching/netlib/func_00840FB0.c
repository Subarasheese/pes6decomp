/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00D0BAF0();                                /* extern */

u16 func_00840FB0(s32 arg0) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = func_00D0BAF0();
    if (temp_v0 != 0) {
        var_v1 = temp_v0 + 0xF8A4;
    } else {
        var_v1 = 0;
    }
    if (var_v1 == 0) {
        return 0xFFFFU;
    }
    if (arg0 < 0) {
        return 0xFFFFU;
    }
    if (arg0 < 2) {
        return M2C_FIELD(((arg0 * 2) + var_v1), u16 *, 0x8F0);
    }
    return 0xFFFFU;
}
