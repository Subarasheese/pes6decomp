/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00936B90();                                /* extern */

s32 func_0095D580(void) {
    s32 temp_v0;
    s64 temp_v1;
    s8 var_v0_2;
    void *var_v0;

    temp_v0 = func_00936B90();
    if (temp_v0 != 0) {
        var_v0 = temp_v0 + 0x3F1A4;
    } else {
        var_v0 = NULL;
    }
    if (var_v0 == NULL) {
        var_v0 = NULL;
    }
    if (var_v0 != NULL) {
        var_v0_2 = M2C_FIELD(var_v0, s8 *, 0x18D);
    } else {
        var_v0_2 = 3;
    }
    temp_v1 = (s64) ((s64) var_v0_2 << 0x38) >> 0x38;
    switch (temp_v1) {                              /* irregular */
    case 2:
        return 1;
    case 1:
        return 1;
    case 3:
    case 0:
        /* fallthrough */
    default:
        return 0;
    }
}
