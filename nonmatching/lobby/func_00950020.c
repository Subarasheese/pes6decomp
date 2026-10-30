/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00936B90();                                /* extern */

s8 func_00950020(u32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0;
    u32 *var_v0_2;
    u32 var_v0_3;
    void *var_v0;

    temp_v0 = func_00936B90();
    if (temp_v0 != 0) {
        var_s0 = temp_v0 + 0x15E4C;
    } else {
        var_s0 = 0;
    }
    if (var_s0 == 0) {
        var_v0 = NULL;
    } else {
        temp_v0_2 = func_00936B90();
        if (temp_v0_2 != 0) {
            var_v0_2 = temp_v0_2 + 0x15E4C;
        } else {
            var_v0_2 = NULL;
        }
        if (var_v0_2 != NULL) {
            var_v0_3 = *var_v0_2;
        } else {
            var_v0_3 = 0;
        }
        if (arg0 < var_v0_3) {
            var_v0 = var_s0 + (arg0 * 0x2F0) + 8;
        } else {
            var_v0 = NULL;
        }
    }
    if (var_v0 != NULL) {
        return M2C_FIELD(var_v0, s8 *, 0xBA);
    }
    return 0;
}
