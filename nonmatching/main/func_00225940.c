/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
extern s32 D_003E77AC;

u8 func_00225940(s32 arg0) {
    s32 temp_v1;
    void *var_s0;

    if (func_00231240() != 1) {
        if ((D_003E77AC != 0) && (temp_v1 = arg0 & 0xFF, ((temp_v1 < 0x50) != 0))) {
            var_s0 = D_003E77AC + (temp_v1 * 0x4D4) + 0x44328;
        } else {
            goto block_7;
        }
    } else {
block_7:
        var_s0 = NULL;
    }
    if (func_00231240() == 1) {
        return 0U;
    }
    if (var_s0 != NULL) {
        return M2C_FIELD(var_s0, u8 *, 2);
    }
    return 0U;
}
