/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s64 func_008FF860();                                /* extern */
s64 func_008FFA10();                                /* extern */

s32 func_00370B90(void) {
    s32 var_v0;

    var_v0 = ((s64) (func_008FF860() << 0x38) >> 0x38) == 1;
    if (var_v0 != 0) {
        var_v0 = ((s64) (func_008FFA10() << 0x38) >> 0x38) == 1;
    }
    return var_v0;
}
