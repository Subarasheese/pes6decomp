/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00936B90();                                /* extern */
M2C_UNK func_009505F0(u32, s32);                    /* extern */

void func_009504B0(u32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0;
    s32 var_s2;
    s32 var_v1;
    u32 *var_v0;
    u32 var_v0_2;
    u8 var_v0_4;
    void *var_v0_3;

    var_s2 = 0;
loop_42:
    if (var_s2 >= 8) {
        var_s2 = 8;
    } else {
        temp_v0 = func_00936B90();
        if (temp_v0 != 0) {
            var_s0 = temp_v0 + 0x3884;
        } else {
            var_s0 = 0;
        }
        if (var_s0 != 0) {
            if (arg0 >= 0x64U) {
                var_v1 = 0;
            } else {
                temp_v0_2 = func_00936B90();
                if (temp_v0_2 != 0) {
                    var_v0 = temp_v0_2 + 0x3884;
                } else {
                    var_v0 = NULL;
                }
                if (var_v0 != NULL) {
                    var_v0_2 = *var_v0;
                } else {
                    var_v0_2 = 0;
                }
                if (arg0 < var_v0_2) {
                    var_v1 = var_s0 + (arg0 * 0x2F0) + 8;
                } else {
                    var_v1 = 0;
                }
            }
        } else {
            var_v1 = 0;
        }
        if (var_v1 == 0) {
            var_v0_3 = NULL;
        } else if (var_s2 < 0) {
            var_v0_3 = NULL;
        } else if (var_s2 < 8) {
            var_v0_3 = var_v1 + (var_s2 * 0xC) + 0x4C;
        } else {
            var_v0_3 = NULL;
        }
        if (var_v0_3 != NULL) {
            var_v0_4 = M2C_FIELD(var_v0_3, u8 *, 4);
        } else {
            var_v0_4 = 0;
        }
        if ((var_v0_4 & 0xFF) != 1) {
            var_s2 += 1;
            goto loop_42;
        }
    }
    func_009505F0(arg0, var_s2);
}
