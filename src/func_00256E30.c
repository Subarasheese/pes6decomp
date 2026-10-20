/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001BB080(s32);                         /* extern */
s32 func_001BB4D0(s32);                             /* extern */
M2C_UNK func_001BB5F0(s32, s32);                    /* extern */

s32 func_00256E30(void *arg0) {
    s32 var_s0;

    var_s0 = 0;
    if (arg0 != NULL) {
        var_s0 = func_001BB4D0(M2C_FIELD(arg0, s32 *, 4));
        func_001BB080(var_s0);
    }
    if (var_s0 != 0) {
        func_001BB5F0(M2C_FIELD(arg0, s32 *, 0), var_s0);
    }
    return var_s0;
}
