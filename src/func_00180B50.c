/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

s32 func_00180B50(s32 arg0) {
    s32 var_v0;

    var_v0 = 2;
    switch (arg0) {
    case 0:
    case 2:
        return 0;
    case 1:
    case 3:
        var_v0 = 1;
    case 4:
        return var_v0;
    default:
        return 2;
    }
}
