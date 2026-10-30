/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
extern s32 D_003E77AC;

s32 func_0022B0A0(void) {
    s32 temp_v1;
    s32 var_s0;
    u8 temp_s1;
    void *var_v0;
    void *var_v0_2;

    if (func_00231240() == 1) {
        return 0;
    }
    if (func_00231240() != 1) {
        if (D_003E77AC == 0) {
            var_v0_2 = NULL;
        } else {
            var_v0_2 = D_003E77AC + 0xDEDC;
        }
    } else {
        var_v0_2 = NULL;
    }
    if (var_v0_2 != NULL) {
        temp_s1 = M2C_FIELD(var_v0_2, u8 *, 1);
        if (func_00231240() != 1) {
            if (D_003E77AC == 0) {
                var_s0 = 0;
            } else {
                var_s0 = D_003E77AC + 0xDEDC;
            }
        } else {
            var_s0 = 0;
        }
        if (func_00231240() != 1) {
            temp_v1 = temp_s1 & 0xFF;
            if (temp_v1 >= 7) {
                var_v0 = NULL;
            } else if (var_s0 != 0) {
                var_v0 = var_s0 + (temp_v1 * 0xC) + 0xA3E;
            } else {
                var_v0 = NULL;
            }
        } else {
            var_v0 = NULL;
        }
        if (var_v0 != NULL) {
            return M2C_FIELD(var_v0, u8 *, 3) == 0;
        }
        return 0;
    }
    return 0;
}
