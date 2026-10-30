/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00167780(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_a3;
    s32 temp_a4;
    s32 var_v0;

    if (M2C_FIELD(arg0, s32 *, 0x5FC) == 0) {
        temp_a3 = arg3 - arg1;
        temp_a4 = arg4 - arg2;
        var_v0 = 0;
        if ((temp_a3 >= M2C_FIELD(arg0, s32 *, 0xB8)) && (temp_a3 < M2C_FIELD(arg0, s32 *, 0xC0)) && (temp_a4 >= M2C_FIELD(arg0, s32 *, 0xBC))) {
            var_v0 = temp_a4 < M2C_FIELD(arg0, s32 *, 0xC4);
        }
        return var_v0;
    }
    return 1;
}
