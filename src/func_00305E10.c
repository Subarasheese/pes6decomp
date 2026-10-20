/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_001BE450();                                /* extern */
s32 func_001FC7D0(M2C_UNK);                         /* extern */

s32 func_00305E10(void) {
    s32 var_v0;

    var_v0 = func_001FC7D0(6) == 0x11;
    if (var_v0 != 0) {
        var_v0 = func_001BE450() == 1;
    }
    return var_v0;
}
