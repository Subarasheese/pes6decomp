/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001AD720(s32 arg0, s32 arg1, u32 arg2, s32 arg3, s32 (*arg4)(s32, s32)) {
    s32 temp_s0;
    s32 temp_v0;
    s32 var_v0;
    u32 temp_s1;
    u32 var_s2;
    u32 var_s4;
    u32 var_v0_2;

    var_s2 = arg2;
    var_s4 = 0;
    if (var_s2 != 0) {
        var_v0 = 0;
        if (arg3 != 0) {
            if (var_s2 != 0) {
                var_v0_2 = var_s2;
loop_4:
                temp_s1 = var_v0_2 >> 1;
                temp_s0 = (temp_s1 * arg3) + arg1;
                temp_v0 = arg4(arg0, temp_s0);
                var_v0 = temp_s0;
                if (temp_v0 < 0) {
                    var_s2 = temp_s1;
                    goto block_8;
                }
                var_s4 = temp_s1 + 1;
                if (temp_v0 > 0) {
block_8:
                    var_v0_2 = var_s4 + var_s2;
                    if (var_s4 >= var_s2) {
                        goto block_9;
                    }
                    goto loop_4;
                }
            }
        }
    } else {
block_9:
        var_v0 = 0;
    }
    return var_v0;
}
