/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00936B90();                                /* extern */

u32 func_00950FD0(s32 arg0) {
    s32 *var_v0_4;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_s0;
    s32 var_v0_5;
    s32 var_v1;
    u32 *var_v0;
    u32 *var_v0_2;
    u32 var_s2;
    u32 var_s3;
    u32 var_s4;
    u32 var_v0_3;

    if (arg0 == 0) {
        goto block_58;
    }
    temp_v0 = func_00936B90();
    if (temp_v0 != 0) {
        var_v0 = temp_v0 + 0x3884;
    } else {
        var_v0 = NULL;
    }
    if (var_v0 != NULL) {
        var_s2 = *var_v0;
    } else {
        var_s2 = 0;
    }
    var_s4 = 0;
loop_55:
    if (var_s4 < var_s2) {
        var_s3 = 0;
loop_53:
        if (var_s3 >= 8U) {
            var_s4 += 1;
            goto loop_55;
        }
        temp_v0_2 = func_00936B90();
        if (temp_v0_2 != 0) {
            var_s0 = temp_v0_2 + 0x3884;
        } else {
            var_s0 = 0;
        }
        if (var_s0 != 0) {
            if (var_s4 >= 0x64U) {
                var_v1 = 0;
            } else {
                temp_v0_3 = func_00936B90();
                if (temp_v0_3 != 0) {
                    var_v0_2 = temp_v0_3 + 0x3884;
                } else {
                    var_v0_2 = NULL;
                }
                if (var_v0_2 != NULL) {
                    var_v0_3 = *var_v0_2;
                } else {
                    var_v0_3 = 0;
                }
                if (var_s4 < var_v0_3) {
                    var_v1 = var_s0 + (var_s4 * 0x2F0) + 8;
                } else {
                    var_v1 = 0;
                }
            }
        } else {
            var_v1 = 0;
        }
        if (var_v1 == 0) {
            var_v0_4 = NULL;
        } else if ((s32) var_s3 < 0) {
            var_v0_4 = NULL;
        } else if ((s32) var_s3 < 8) {
            var_v0_4 = var_v1 + (var_s3 * 0xC) + 0x4C;
        } else {
            var_v0_4 = NULL;
        }
        if (var_v0_4 != NULL) {
            var_v0_5 = *var_v0_4;
        } else {
            var_v0_5 = 0;
        }
        if (arg0 != var_v0_5) {
            var_s3 += 1;
            goto loop_53;
        }
        return var_s4;
    }
block_58:
    return 0x64U;
}
