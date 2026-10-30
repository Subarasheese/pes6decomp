/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0011E0D8(s32 arg0, void *arg1) {
    s32 temp_v0;
    s32 var_s2;

    var_s2 = -1;
loop_6:
    temp_v0 = M2C_FIELD(arg1, s32 (**)(s32), 0)(arg0);
    if (temp_v0 > 0) {
        if (M2C_FIELD(arg1, s32 (**)(s32, s32), 8)(arg0, temp_v0) != -1) {
            var_s2 = 1;
            goto loop_6;
        }
        M2C_FIELD(arg1, M2C_UNK (**)(s32), 4)(arg0);
        return var_s2;
    }
    return 0;
}
