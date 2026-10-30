/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009F05D0(void *arg0, s32 *arg1, s32 *arg2) {
    s32 temp_a0;
    s32 temp_a3;
    s32 var_v0;

    temp_a3 = M2C_FIELD(arg0, s32 *, 0x18);
    temp_a0 = M2C_FIELD(arg0, s32 *, 0x1C);
    var_v0 = 0;
    if ((temp_a3 != *arg1) || (temp_a0 != *arg2)) {
        *arg1 = temp_a3;
        var_v0 = 1;
        *arg2 = temp_a0;
    }
    return var_v0;
}
