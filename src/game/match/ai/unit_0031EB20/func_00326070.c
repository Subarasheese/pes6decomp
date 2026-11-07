/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_00326070(void *arg0) {
    s32 var_v0;

    var_v0 = M2C_FIELD(arg0, s32 *, 0x48) == 2;
    if (var_v0 == 0) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x4C) == 2;
    }
    return var_v0;
}
