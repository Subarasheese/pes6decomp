/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s64 func_008FF950();                                /* extern */
s64 func_008FF980();                                /* extern */

s32 func_00370C40(void) {
    s32 var_v0;

    var_v0 = ((s64) (func_008FF950() << 0x38) >> 0x38) != 1;
    if (var_v0 != 0) {
        var_v0 = ((s64) (func_008FF980() << 0x38) >> 0x38) == 1;
    }
    return var_v0;
}
