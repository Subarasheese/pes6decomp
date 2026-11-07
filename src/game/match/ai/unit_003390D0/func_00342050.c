/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_0030F140();                                /* extern */
s32 func_0030F190();                                /* extern */

s32 func_00342050(void) {
    s32 var_v0;

    var_v0 = func_0030F190() != 0;
    if (var_v0 == 0) {
        var_v0 = func_0030F140() != 0;
    }
    return var_v0 ^ 1;
}
