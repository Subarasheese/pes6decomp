/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


u32 func_00C12FD0(u32 arg0, u32 arg1, s32 (*arg2)(u32), u32 arg3) {
    u32 var_s0;
    u32 var_s1;

    var_s0 = 0;
    if ((arg2 != NULL) && (arg0 != -1U) && (arg1 != -1U)) {
        var_s1 = arg0;
        if (arg0 < arg1) {
loop_4:
            if (arg2(var_s1) != 0) {
                var_s0 += 1;
                if (var_s0 >= arg3) {
                    return var_s1;
                }
                goto block_7;
            }
block_7:
            var_s1 += 4;
            if (var_s1 >= arg1) {
                goto block_8;
            }
            goto loop_4;
        }
    }
block_8:
    return -1U;
}
