/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
extern s32 D_003E77AC;

s32 func_00225E10(void) {
    s32 temp_v1;
    s32 var_a0;
    s32 var_s0_3;
    s32 var_s1;
    u8 var_s0_2;
    void *var_s0;

    var_s1 = 0;
    if (func_00231240() != 1) {
        if (D_003E77AC == 0) {
            var_s0 = NULL;
        } else {
            var_s0 = D_003E77AC + 0x42A50;
        }
    } else {
        var_s0 = NULL;
    }
    if (func_00231240() == 1) {
        goto block_13;
    }
    if (var_s0 != NULL) {
        var_s0_2 = M2C_FIELD(var_s0, u8 *, 1);
    } else {
block_13:
        var_s0_2 = 0xFF;
    }
    if (func_00231240() != 1) {
        if ((D_003E77AC != 0) && (temp_v1 = var_s0_2 & 0xFF, ((temp_v1 < 0x50) != 0))) {
            var_s0_3 = D_003E77AC + (temp_v1 * 0x4D4) + 0x44328;
        } else {
            goto block_21;
        }
    } else {
block_21:
        var_s0_3 = 0;
    }
    if (func_00231240() == 1) {
        return 0;
    }
    if (var_s0_3 != 0) {
        var_a0 = 0;
        do {
            if (M2C_FIELD((var_s0_3 + ((var_a0 & 0xFF) * 0x16)), u16 *, 0x1E4) != 0) {
                var_s1 = (var_s1 + 1) & 0xFF;
            }
            var_a0 = (var_a0 + 1) & 0xFF;
        } while (var_a0 < 0x20);
        return var_s1;
    }
    return 0;
}
