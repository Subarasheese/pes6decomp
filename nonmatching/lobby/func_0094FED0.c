/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00936B90();                                /* extern */

s32 func_0094FED0(u32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a0;
    s32 var_a1;
    s32 var_s0;
    s32 var_s1;
    u32 *var_v0;
    u32 var_v0_2;
    u8 temp_v0_3;
    void *temp_v1;

    var_s1 = 0;
    temp_v0 = func_00936B90();
    if (temp_v0 != 0) {
        var_s0 = temp_v0 + 0x15E4C;
    } else {
        var_s0 = 0;
    }
    if (var_s0 == 0) {
        var_a0 = 0;
    } else {
        temp_v0_2 = func_00936B90();
        if (temp_v0_2 != 0) {
            var_v0 = temp_v0_2 + 0x15E4C;
        } else {
            var_v0 = NULL;
        }
        if (var_v0 != NULL) {
            var_v0_2 = *var_v0;
        } else {
            var_v0_2 = 0;
        }
        if (arg0 < var_v0_2) {
            var_a0 = var_s0 + (arg0 * 0x2F0) + 8;
        } else {
            var_a0 = 0;
        }
    }
    if (var_a0 == 0) {
        return 0;
    }
    if (arg1 < 0) {
        return 0;
    }
    if (arg1 < 2) {
        var_a1 = 0;
        do {
            temp_v1 = var_a0 + (var_a1 * 0xC);
            temp_v0_3 = M2C_FIELD(temp_v1, u8 *, 0x55);
            if (((s32) temp_v0_3 >= 0) && ((s32) temp_v0_3 < 4) && (M2C_FIELD(temp_v1, s8 *, 0x53) == 0) && (M2C_FIELD(temp_v1, s8 *, 0x52) == arg1)) {
                var_s1 += 1;
            }
            var_a1 += 1;
        } while (var_a1 < 8);
        return var_s1;
    }
    return 0;
}
