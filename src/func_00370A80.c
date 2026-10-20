/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s64 func_008FF890();                                /* extern */
s64 func_008FFA70();                                /* extern */

s32 func_00370A80(void) {
    s32 var_v0;

    var_v0 = ((s64) (func_008FF890() << 0x38) >> 0x38) == 1;
    if (var_v0 != 0) {
        var_v0 = ((s64) (func_008FFA70() << 0x38) >> 0x38) == 1;
    }
    return var_v0;
}
