/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00D0BAF0();                                /* extern */

u8 func_00840560(s32 arg0) {
    s32 temp_v0;
    s32 var_v1;
    void *var_v0;

    temp_v0 = func_00D0BAF0();
    if (temp_v0 != 0) {
        var_v1 = temp_v0 + 0xF8A4;
    } else {
        var_v1 = 0;
    }
    if (var_v1 == 0) {
        var_v0 = NULL;
    } else if (arg0 < 0) {
        var_v0 = NULL;
    } else if (arg0 < 8) {
        var_v0 = var_v1 + (arg0 * 0xB8);
    } else {
        var_v0 = NULL;
    }
    if (var_v0 != NULL) {
        return M2C_FIELD(var_v0, u8 *, 0x49);
    }
    return 0xFFU;
}
