/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_001BC760(void *arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 4);
        M2C_FIELD(arg0, s32 *, 4) = (s32) (arg1 == 1);
    }
    return var_v0;
}
