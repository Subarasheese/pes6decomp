/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00936B90();                                /* extern */

s32 func_009523D0(s32 arg0) {
    s32 temp_s1;
    s32 temp_s4;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_s0;
    s32 var_s2;
    s32 var_v0_6;
    u16 *var_v0;
    u16 *var_v0_4;
    u16 var_v0_2;
    u16 var_v0_5;
    void *var_v0_3;

    temp_v0 = func_00936B90();
    if (temp_v0 != 0) {
        var_v0 = temp_v0 + 0x4F0;
    } else {
        var_v0 = NULL;
    }
    if (var_v0 != NULL) {
        var_v0_2 = *var_v0;
    } else {
        var_v0_2 = 0;
    }
    temp_s1 = var_v0_2 & 0xFFFF;
    if (temp_s1 == 0) {
        goto block_47;
    }
    if (arg0 != 0) {
        var_s2 = 0;
loop_46:
        temp_s4 = var_s2 & 0xFFFF;
        if (temp_s4 >= temp_s1) {
            goto block_47;
        }
        temp_v0_2 = func_00936B90();
        if (temp_v0_2 != 0) {
            var_s0 = temp_v0_2 + 0x4F0;
        } else {
            var_s0 = 0;
        }
        if (var_s0 != 0) {
            if (temp_s4 >= 0x64) {
                var_v0_3 = NULL;
            } else {
                temp_v0_3 = func_00936B90();
                if (temp_v0_3 != 0) {
                    var_v0_4 = temp_v0_3 + 0x4F0;
                } else {
                    var_v0_4 = NULL;
                }
                if (var_v0_4 != NULL) {
                    var_v0_5 = *var_v0_4;
                } else {
                    var_v0_5 = 0;
                }
                if (temp_s4 < (var_v0_5 & 0xFFFF)) {
                    var_v0_3 = var_s0 + ((var_s2 & 0xFFFF) * 0x84) + 4;
                } else {
                    var_v0_3 = NULL;
                }
            }
        } else {
            var_v0_3 = NULL;
        }
        if (var_v0_3 != NULL) {
            var_v0_6 = M2C_FIELD(var_v0_3, s32 *, 0x34);
        } else {
            var_v0_6 = 0;
        }
        if (arg0 != var_v0_6) {
            var_s2 = (var_s2 + 1) & 0xFFFF;
            goto loop_46;
        }
        return var_s2;
    }
block_47:
    return 0x64;
}
