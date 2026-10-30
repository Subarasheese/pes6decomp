/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00936B90();                                /* extern */

u8 func_009500E0(u32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0;
    s32 var_v1;
    u32 *var_v0;
    u32 var_v0_2;

    temp_v0 = func_00936B90();
    if (temp_v0 != 0) {
        var_s0 = temp_v0 + 0x15E4C;
    } else {
        var_s0 = 0;
    }
    if (var_s0 == 0) {
        var_v1 = 0;
    } else {
        temp_v0_2 = func_00936B90();
        if (temp_v0_2 != 0) {
            var_v0 = temp_v0_2 + 0x15E4C;
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
            var_v1 = 0;
        }
    }
    if (var_v1 == 0) {
        return 0U;
    }
    if (arg1 < 0) {
        return 0U;
    }
    if (arg1 >= 2) {
        return 0U;
    }
    if (arg2 < 0) {
        return 0U;
    }
    if (arg2 < 5) {
        return M2C_FIELD((arg2 + ((arg1 * 5) + var_v1)), u8 *, 0xB0);
    }
    return 0U;
}
