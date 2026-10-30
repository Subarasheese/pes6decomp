/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00936B90();                                /* extern */

void *func_00951330(u32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0;
    u32 *var_v0;
    u32 var_v0_2;
    void *var_v1;

    temp_v0 = func_00936B90();
    if (temp_v0 != 0) {
        var_s0 = temp_v0 + 0x3884;
    } else {
        var_s0 = 0;
    }
    if (var_s0 != 0) {
        if (arg0 >= 0x64U) {
            var_v1 = NULL;
        } else {
            temp_v0_2 = func_00936B90();
            if (temp_v0_2 != 0) {
                var_v0 = temp_v0_2 + 0x3884;
            } else {
                var_v0 = NULL;
            }
            if (var_v0 != NULL) {
                var_v0_2 = *var_v0;
            } else {
                var_v0_2 = 0;
            }
            if (arg0 < var_v0_2) {
                var_v1 = var_s0 + (arg0 * 0x2F0) + 8;
            } else {
                var_v1 = NULL;
            }
        }
    } else {
        var_v1 = NULL;
    }
    if (var_v1 != NULL) {
        if (M2C_FIELD(var_v1, s8 *, 0x26C) != 0) {
            return var_v1 + 0x26C;
        }
        return NULL;
    }
    return NULL;
}
