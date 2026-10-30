/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
extern s32 D_003E77AC;

u16 func_00225720(void) {
    s32 temp_v1;
    u16 *var_s0;
    u8 var_s0_3;
    void *var_s0_2;

    if (func_00231240() != 1) {
        if (D_003E77AC == 0) {
            var_s0_2 = NULL;
        } else {
            var_s0_2 = D_003E77AC + 0x42A50;
        }
    } else {
        var_s0_2 = NULL;
    }
    if (func_00231240() == 1) {
        goto block_13;
    }
    if (var_s0_2 != NULL) {
        var_s0_3 = M2C_FIELD(var_s0_2, u8 *, 1);
    } else {
block_13:
        var_s0_3 = 0xFF;
    }
    if (func_00231240() != 1) {
        if ((D_003E77AC != 0) && (temp_v1 = var_s0_3 & 0xFF, ((temp_v1 < 0x50) != 0))) {
            var_s0 = D_003E77AC + (temp_v1 * 0x4D4) + 0x44328;
        } else {
            goto block_21;
        }
    } else {
block_21:
        var_s0 = NULL;
    }
    if (func_00231240() == 1) {
        goto block_28;
    }
    if (var_s0 != NULL) {
        return *var_s0;
    }
block_28:
    return 0xFFFF & 0xFFFF;
}
