/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001C73D8();                                /* extern */

s32 func_001C7448(void *arg0, u32 arg1, s32 arg2) {
    s32 *temp_v1;
    s32 var_v0;
    s32 var_v1;

    if (arg1 >= 0x20U) {
        M2C_FIELD(arg0, s32 *, 0) = 0x16;
        return -1;
    }
    var_v1 = arg1 * 4;
    if (M2C_FIELD(arg0, s32 *, 0x1D4) == 0) {
        var_v0 = -1;
        if (func_001C73D8() == 0) {
            var_v1 = arg1 * 4;
            goto block_5;
        }
    } else {
block_5:
        temp_v1 = var_v1 + M2C_FIELD(arg0, s32 *, 0x1D4);
        var_v0 = *temp_v1;
        *temp_v1 = arg2;
    }
    return var_v0;
}
