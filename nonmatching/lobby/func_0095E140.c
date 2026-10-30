/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00936B90();                                /* extern */

s32 func_0095E140(s32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_s0;
    s64 temp_v1_2;
    s8 var_v0_4;
    u16 *var_v0_2;
    u16 var_v0_3;
    void *var_v0;

    temp_v0 = func_00936B90();
    if (temp_v0 != 0) {
        var_s0 = temp_v0 + 0x3DFD0;
    } else {
        var_s0 = 0;
    }
    if (var_s0 == 0) {
        var_v0 = NULL;
    } else {
        temp_v0_2 = func_00936B90();
        if (temp_v0_2 != 0) {
            var_v0_2 = temp_v0_2 + 0x3DFD0;
        } else {
            var_v0_2 = NULL;
        }
        if (var_v0_2 != NULL) {
            var_v0_3 = *var_v0_2;
        } else {
            var_v0_3 = 0;
        }
        temp_v1 = arg0 & 0xFFFF;
        if (temp_v1 < (var_v0_3 & 0xFFFF)) {
            var_v0 = var_s0 + (temp_v1 * 0xE4) + 4;
        } else {
            var_v0 = NULL;
        }
    }
    if (var_v0 == NULL) {
        var_v0 = NULL;
    }
    if (var_v0 != NULL) {
        var_v0_4 = M2C_FIELD(var_v0, s8 *, 0x5B);
    } else {
        var_v0_4 = 3;
    }
    temp_v1_2 = (s64) ((s64) var_v0_4 << 0x38) >> 0x38;
    switch (temp_v1_2) {                            /* irregular */
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
