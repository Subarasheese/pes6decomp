/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00BF6040(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32(**)(s32), 0)(M2C_FIELD(arg0, s32 *, 4)) != 0;
    }
    return var_v0;
}
