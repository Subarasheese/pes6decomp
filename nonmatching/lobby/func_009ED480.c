/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009ED480(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_a5;
    s32 var_a1;
    s32 var_a4;
    s32 var_v1;

    var_a1 = arg1;
    temp_a5 = var_a1;
    if (arg3 >= 3) {
loop_2:
        var_a1 += arg2;
        if (var_a1 < 0) {
            var_a1 += arg3;
        }
        if (var_a1 >= arg3) {
            var_a1 -= arg3;
        }
        if (var_a1 != temp_a5) {
            var_a4 = 1;
            if (((M2C_FIELD(arg0, u8 *, 0x10) & 1) == 1) && (var_a1 == M2C_FIELD(arg0, s32 *, 0xC))) {
                var_a4 = 0;
            }
            if (var_a4 == 1) {

            } else {
                goto loop_2;
            }
        }
    } else {
loop_12:
        var_a1 += arg2;
        if (var_a1 >= 0) {
            if (var_a1 < arg3) {
                var_v1 = 1;
                if (((M2C_FIELD(arg0, u8 *, 0x10) & 1) == 1) && (var_a1 == M2C_FIELD(arg0, s32 *, 0xC))) {
                    var_v1 = 0;
                }
                if (var_v1 == 1) {

                } else {
                    goto loop_12;
                }
            } else {
                goto block_16;
            }
        } else {
block_16:
            var_a1 = temp_a5;
        }
    }
    return var_a1;
}
