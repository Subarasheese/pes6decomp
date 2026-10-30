/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001C73D8(s32);                             /* extern */

s32 func_001C75A0(void *arg0, u32 arg1) {
    M2C_UNK (**temp_a0)(u32, M2C_UNK);
    M2C_UNK (*temp_a1_2)(u32, M2C_UNK);
    s32 temp_a1;
    s32 var_v0;
    s32 var_v1;

    var_v0 = -1;
    if (arg1 < 0x20U) {
        temp_a1 = M2C_FIELD(arg0, s32 *, 0x1D4);
        var_v1 = arg1 * 4;
        if (temp_a1 == 0) {
            if (func_001C73D8(temp_a1) == 0) {
                var_v1 = arg1 * 4;
                goto block_7;
            }
            return -1;
        }
block_7:
        temp_a0 = var_v1 + M2C_FIELD(arg0, s32 *, 0x1D4);
        temp_a1_2 = *temp_a0;
        var_v0 = 1;
        if (temp_a1_2 != NULL) {
            var_v0 = 2;
            if (temp_a1_2 != (M2C_UNK (*)(u32, M2C_UNK))-1) {
                var_v0 = 3;
                if (temp_a1_2 != (M2C_UNK (*)(u32, M2C_UNK))1) {
                    *temp_a0 = NULL;
                    temp_a1_2(arg1, temp_a1_2);
                    var_v0 = 0;
                }
            }
        }
        /* Duplicate return node #11. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
