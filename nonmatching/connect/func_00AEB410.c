/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00AEB410(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_a3;
    s32 temp_a3_2;
    s32 temp_v0;
    s32 var_a1;
    s32 var_a5;
    s32 var_a6;
    s32 var_v1;

    var_a1 = arg1;
    var_a5 = 0;
    var_a6 = arg2 - 1;
loop_4:
    if (var_a6 >= 0) {
        if (M2C_FIELD((M2C_FIELD(arg0, s32 *, 0xC) + (var_a6 * 0xC)), u8 *, 8) == 1) {
            var_a5 += 1;
        }
        var_a6 -= 1;
        goto loop_4;
    }
    temp_v0 = M2C_FIELD(arg0, s32 *, 0xC);
    var_v1 = 0;
    if (M2C_FIELD(((var_a1 * 0xC) + temp_v0), u8 *, 8) == 0) {
        var_v1 = 1;
    }
    if (!(arg3 & 0x10)) {
        if (arg3 & 0x40) {
            var_v1 = 1;
        }
    } else {
        var_v1 = -1;
    }
    if (var_v1 != 0) {
        if (var_a5 != 2) {
            temp_a3 = var_a1;
loop_29:
            var_a1 = (s32) (arg2 + (var_a1 + var_v1)) % arg2;
            if (M2C_FIELD((temp_v0 + (var_a1 * 0xC)), u8 *, 8) == 0) {
                if (var_a1 != temp_a3) {
                    goto loop_29;
                }
            }
        } else {
            temp_a3_2 = var_a1;
loop_20:
            var_a1 += var_v1;
            if (var_a1 < 0) {
                var_a1 = temp_a3_2;
            } else if (var_a1 < arg2) {
                if (M2C_FIELD((temp_v0 + (var_a1 * 0xC)), u8 *, 8) != 0) {

                } else {
                    goto loop_20;
                }
            } else {
                var_a1 = temp_a3_2;
            }
        }
    }
    return var_a1;
}
