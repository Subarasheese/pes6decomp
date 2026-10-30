/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001745A0(void *arg0, s32 arg1) {
    s32 temp_v1;
    s32 var_v0;
    s32 var_v0_2;

    if (arg1 >= M2C_FIELD(arg0, s32 *, 0xBF0)) {
        var_v0_2 = M2C_FIELD(arg0, s32 *, 0xB98);
    } else {
        var_v0_2 = M2C_FIELD(((arg1 * 0x24) + M2C_FIELD(arg0, s32 *, 0xB80)), s32 *, 0x1C);
    }
    temp_v1 = M2C_FIELD(arg0, s32 *, 0xBF4) + var_v0_2;
    var_v0 = -1;
    if (temp_v1 >= 0) {
        var_v0 = (M2C_FIELD(arg0, s32 *, 0x5AC) - ((M2C_FIELD(arg0, s32 *, 0xCF0) + M2C_FIELD(arg0, s32 *, 0x8D4)) * 2)) < temp_v1;
    }
    return var_v0;
}
