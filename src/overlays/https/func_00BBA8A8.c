/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

s32 func_00BBA8A8(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0xC);
    }
    return var_v0;
}
