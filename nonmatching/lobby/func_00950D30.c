/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00936B90();                                /* extern */

u32 func_00950D30(s32 arg0) {
    s32 *var_v0_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_s0;
    s32 var_v0_5;
    u32 var_s1;
    u32 var_s2;
    u32 var_v0_4;
    void *var_v0;
    void *var_v0_3;

    if (arg0 == 0) {
        goto block_43;
    }
    temp_v0 = func_00936B90();
    if (temp_v0 != 0) {
        var_v0 = temp_v0 + 0x3884;
    } else {
        var_v0 = NULL;
    }
    if (var_v0 != NULL) {
        var_s1 = M2C_FIELD(var_v0, u32 *, 4);
    } else {
        var_s1 = 0;
    }
    var_s2 = 0;
loop_42:
    if (var_s2 >= var_s1) {
block_43:
        return 0x64U;
    }
    temp_v0_2 = func_00936B90();
    if (temp_v0_2 != 0) {
        var_s0 = temp_v0_2 + 0x3884;
    } else {
        var_s0 = 0;
    }
    if (var_s0 != 0) {
        if (var_s2 >= 0x64U) {
            var_v0_2 = NULL;
        } else {
            temp_v0_3 = func_00936B90();
            if (temp_v0_3 != 0) {
                var_v0_3 = temp_v0_3 + 0x3884;
            } else {
                var_v0_3 = NULL;
            }
            if (var_v0_3 != NULL) {
                var_v0_4 = M2C_FIELD(var_v0_3, u32 *, 4);
            } else {
                var_v0_4 = 0;
            }
            if (var_s2 < var_v0_4) {
                var_v0_2 = var_s0 + (var_s2 * 0x2F0) + 8;
            } else {
                var_v0_2 = NULL;
            }
        }
    } else {
        var_v0_2 = NULL;
    }
    if (var_v0_2 != NULL) {
        var_v0_5 = *var_v0_2;
    } else {
        var_v0_5 = 0;
    }
    if (arg0 != var_v0_5) {
        var_s2 += 1;
        goto loop_42;
    }
    return var_s2;
}
