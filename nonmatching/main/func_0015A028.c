/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0015A028(u16 *arg0, s32 arg1, s16 *arg2) {
    s16 var_a3;
    s16 var_a4;
    s32 temp_a1;

    temp_a1 = arg1 - 1;
    var_a4 = 0x7FFFFFFF;
    if (temp_a1 > 0) {
        if (*arg0 != 0x80) {
            var_a3 = 2;
loop_6:
            if (var_a3 < temp_a1) {
                if (*(arg0 + var_a3) != 0x80) {
                    var_a3 += 2;
                    goto loop_6;
                }
                var_a4 = (var_a3 < 0x7FFFFFFF) ? var_a3 : 0x7FFFFFFF;
            }
        } else {
            var_a4 = 0;
        }
    }
    if (var_a4 == 0x7FFFFFFF) {
        *arg2 = 0;
        return -1;
    }
    *arg2 = var_a4;
    return 0;
}
