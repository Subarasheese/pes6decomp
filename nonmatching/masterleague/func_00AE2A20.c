/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00995400(M2C_UNK, s32);                    /* extern */
extern s32 D_003EADA4;

s32 func_00AE2A20(s32 arg0) {
    s32 var_s0;
    s32 var_s1;

    var_s0 = 0;
    if (D_003EADA4 == 0) {
        return 0;
    }
    var_s1 = arg0;
    if (arg0 >= 0) {
        do {
            if ((func_00995400(2, var_s1 & 0xFF) & 0xFF) != 0xFF) {
                var_s0 += 1;
            }
            var_s1 -= 1;
        } while (var_s1 >= 0);
    }
    if (var_s0 >= 7) {
        var_s0 = 7;
    }
    return var_s0;
}
