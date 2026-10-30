/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


u32 func_00C13110(u32 arg0, u32 arg1, s32 (*arg2)(u32)) {
    u32 var_s2;

    if ((arg2 != NULL) && (arg0 != -1U) && (arg1 != -1U)) {
        var_s2 = arg0;
        if (arg0 < arg1) {
loop_4:
            if (arg2(var_s2) == 0) {
                var_s2 += 4;
                if (var_s2 >= arg1) {
                    goto block_10;
                }
                goto loop_4;
            }
            return var_s2;
        }
    }
block_10:
    return -1U;
}
