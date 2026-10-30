/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00936B90();                                /* extern */

s32 func_0095DB50(void) {
    s32 temp_v0;
    s32 var_v0;
    s64 temp_v1;
    s64 var_v0_3;
    void *var_v0_2;

    temp_v0 = func_00936B90();
    if (temp_v0 == 0) {
        var_v0_2 = NULL;
    } else {
        var_v0_2 = temp_v0 + 0x3F1A4;
    }
    if (var_v0_2 == NULL) {
        var_v0_2 = NULL;
    }
    if (var_v0_2 == NULL) {
        var_v0_3 = 0;
    } else {
        var_v0_3 = M2C_FIELD(var_v0_2, s8 *, 0x193) == 0;
    }
    temp_v1 = (s64) (var_v0_3 << 0x38) >> 0x38;
    var_v0 = 1;
    switch (temp_v1) {                              /* irregular */
    case 0:
        return 2;
    default:
        var_v0 = 0;
        /* fallthrough */
    case 1:
        return var_v0;
    }
}
