/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00D0BAF0();                                /* extern */

s32 func_0083CFC0(s8 arg0) {
    s32 temp_v0;
    s32 var_v0;
    void *var_v0_2;

    temp_v0 = func_00D0BAF0();
    if (temp_v0 != 0) {
        var_v0 = temp_v0 + 0xF8A4;
    } else {
        var_v0 = 0;
    }
    if (var_v0 != 0) {
        var_v0_2 = var_v0 + 0x874;
    } else {
        var_v0_2 = NULL;
    }
    if (var_v0_2 != NULL) {
        M2C_FIELD(var_v0_2, s8 *, 6) = arg0;
        return 1;
    }
    return 0;
}
