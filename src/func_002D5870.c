/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_002D5870(void *arg0) {
    s32 var_v0;

    var_v0 = arg0 != NULL;
    if (var_v0 != 0) {
        var_v0 = M2C_FIELD(arg0, s16 *, 2) != M2C_FIELD(arg0, s16 *, 0);
    }
    return var_v0;
}
