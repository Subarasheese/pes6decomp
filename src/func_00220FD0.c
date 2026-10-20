/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_00223BA0();                                /* extern */

s32 func_00220FD0(s32 arg0) {
    s32 var_v0;

    var_v0 = func_00223BA0();
    if (arg0 < 0x1D) {
        var_v0 += arg0 * 0x54;
    }
    return var_v0;
}
