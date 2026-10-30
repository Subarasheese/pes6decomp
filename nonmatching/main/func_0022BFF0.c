/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
extern s32 D_003E77AC;

s32 func_0022BFF0(s32 arg0, s32 arg1) {
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s0;
    s32 var_s1;
    void *var_v0;

    if (func_00231240() != 1) {
        if (D_003E77AC == 0) {
            var_s1 = 0;
        } else {
            var_s1 = D_003E77AC + 0xDEDC;
        }
    } else {
        var_s1 = 0;
    }
    if (func_00231240() == 1) {
        return 0;
    }
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
        temp_v1_2 = arg0 & 0xFF;
        if (temp_v1_2 >= 7) {
            var_v0 = NULL;
        } else if (var_s0 != 0) {
            var_v0 = var_s0 + (temp_v1_2 * 0xC) + 0xA3E;
        } else {
            var_v0 = NULL;
        }
    } else {
        var_v0 = NULL;
    }
    if (var_s1 == 0) {
        return 0;
    }
    if (var_v0 != NULL) {
        temp_v1 = (M2C_FIELD(var_v0, u8 *, 4) + (arg1 & 0xFF)) & 0xFF;
        if (temp_v1 < 0x61) {
            return var_s1 + (temp_v1 * 0x18) + 0x126;
        }
        return 0;
    }
    return 0;
}
