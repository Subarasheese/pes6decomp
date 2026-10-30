/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001AFAA0();                                /* extern */
s32 func_001AFD88(void *, s32, u32);                /* extern */
s32 func_001AFDE8(void *, M2C_UNK (*)(u32, M2C_UNK)); /* extern */

s32 func_001AFB90(void *arg0, u32 arg1) {
    M2C_UNK (**temp_a0)(u32, M2C_UNK);
    M2C_UNK (*temp_a1)(u32, M2C_UNK);
    s32 var_v0;
    s32 var_v0_2;

    if (arg1 >= 0x20U) {
        M2C_FIELD(arg0, s32 *, 0) = 0x16;
        return -1;
    }
    var_v0_2 = arg1 * 4;
    if (M2C_FIELD(arg0, s32 *, 0x1D4) == 0) {
        var_v0 = -1;
        if (func_001AFAA0() == 0) {
            var_v0_2 = arg1 * 4;
            goto block_5;
        }
        /* Duplicate return node #17. Try simplifying control flow for better match */
        return var_v0;
    }
block_5:
    temp_a0 = var_v0_2 + M2C_FIELD(arg0, s32 *, 0x1D4);
    temp_a1 = *temp_a0;
    if (temp_a1 != NULL) {
        var_v0 = 0;
        if (temp_a1 != (M2C_UNK (*)(u32, M2C_UNK))1) {
            if (temp_a1 != (M2C_UNK (*)(u32, M2C_UNK))-1) {
                *temp_a0 = NULL;
                temp_a1(arg1, temp_a1);
                var_v0 = 0;
                /* Duplicate return node #17. Try simplifying control flow for better match */
                return var_v0;
            }
            M2C_FIELD(arg0, s32 *, 0) = 0x16;
            return 1;
        }
        return var_v0;
    }
    return func_001AFD88(arg0, func_001AFDE8(arg0, (M2C_UNK (*)(u32, M2C_UNK)) temp_a1), arg1);
}
