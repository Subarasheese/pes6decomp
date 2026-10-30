/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00835BA0(s32, s32);                        /* extern */

s32 func_009489F0(void *arg0) {
    s32 temp_s2;
    s32 var_s0;
    s32 var_s1;

    if (arg0 == NULL) {
        return 0;
    }
    temp_s2 = M2C_FIELD(arg0, s32 *, 0x10);
    var_s0 = 0;
    var_s1 = 0;
    do {
        if (func_00835BA0(temp_s2, var_s1) == 1) {
            var_s0 += 1;
        }
        var_s1 += 1;
    } while (var_s1 < 0xE);
    return var_s0;
}
