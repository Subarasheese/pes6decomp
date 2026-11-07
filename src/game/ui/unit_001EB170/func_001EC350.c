/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_001EC350(s32 arg0) {
    s32 var_v0;

    var_v0 = 2;
    if (arg0 >= 0) {
loop_1:
        if (var_v0 < arg0) {
            var_v0 *= 2;
            goto loop_1;
        }
    } else {
        var_v0 = 0;
    }
    return var_v0;
}
