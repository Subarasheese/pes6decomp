/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0082C2A0();                                /* extern */
s32 func_00936B90();                                /* extern */

s32 func_0093EF70(s32 arg0) {
    s32 *var_a0;
    s32 temp_s0;
    s32 temp_v0;
    void *var_v0;

    temp_s0 = func_0082C2A0();
    temp_v0 = func_00936B90();
    if (temp_v0 == 0) {
        var_a0 = NULL;
    } else if (temp_s0 != 0) {
        var_a0 = temp_v0 + 0x33258;
    } else {
        var_a0 = NULL;
    }
    if (var_a0 == NULL) {
        var_v0 = NULL;
    } else if (arg0 < 0) {
        var_v0 = NULL;
    } else if (arg0 < 0x1E) {
        if (arg0 < *var_a0) {
            var_v0 = var_a0 + (arg0 * 0x4D8) + 4;
        } else {
            goto block_16;
        }
    } else {
block_16:
        var_v0 = NULL;
    }
    if (var_v0 != NULL) {
        return M2C_FIELD(var_v0, s8 *, 0x4B3) == 1;
    }
    return 0;
}
