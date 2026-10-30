/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00D0BAF0();                                /* extern */

s8 func_0083D130(void) {
    s32 temp_v0;
    s32 var_v0_2;
    void *var_v0;

    temp_v0 = func_00D0BAF0();
    if (temp_v0 != 0) {
        var_v0_2 = temp_v0 + 0xF8A4;
    } else {
        var_v0_2 = 0;
    }
    if (var_v0_2 != 0) {
        var_v0 = var_v0_2 + 0x874;
    } else {
        var_v0 = NULL;
    }
    if (var_v0 != NULL) {
        return M2C_FIELD(var_v0, s8 *, 0xF);
    }
    return 0;
}
