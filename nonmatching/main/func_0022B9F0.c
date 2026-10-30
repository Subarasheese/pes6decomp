/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
extern s32 D_003E77AC;

void func_0022B9F0(s32 arg0, s8 arg1) {
    s32 temp_v1;
    s32 var_s0;
    void *var_s0_2;

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
        temp_v1 = arg0 & 0xFF;
        if (temp_v1 >= 7) {
            var_s0_2 = NULL;
        } else if (var_s0 != 0) {
            var_s0_2 = var_s0 + (temp_v1 * 0xC) + 0xA3E;
        } else {
            var_s0_2 = NULL;
        }
    } else {
        var_s0_2 = NULL;
    }
    if ((func_00231240() != 1) && (var_s0_2 != NULL)) {
        M2C_FIELD(var_s0_2, s8 *, 9) = arg1;
    }
}
