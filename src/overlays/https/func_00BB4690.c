/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

s32 func_00BB4690(void *arg0) {
    s32 var_v0;

    var_v0 = M2C_FIELD(arg0, s32 *, 0x80);
    if (var_v0 == 0) {
        var_v0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 8);
    }
    return var_v0;
}
