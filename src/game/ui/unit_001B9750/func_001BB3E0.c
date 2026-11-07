/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_001BB3E0(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if ((arg0 != NULL) && (M2C_FIELD(arg0, s32 *, 0xC) != 0)) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0);
    }
    return var_v0;
}
