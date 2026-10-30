/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00D0BAF0();                                /* extern */

u8 func_00840F00(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = func_00D0BAF0();
    if (temp_v0 != 0) {
        var_v1 = temp_v0 + 0xF8A4;
    } else {
        var_v1 = 0;
    }
    if (var_v1 == 0) {
        return 0U;
    }
    if (arg0 < 0) {
        return 0U;
    }
    if (arg0 >= 2) {
        return 0U;
    }
    if (arg1 < 0) {
        return 0U;
    }
    if (arg1 < 5) {
        return M2C_FIELD((arg1 + ((arg0 * 5) + var_v1)), u8 *, 0x8F4);
    }
    return 0U;
}
