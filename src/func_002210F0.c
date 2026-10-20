/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_00223BB0();                                /* extern */

s32 func_002210F0(s32 arg0) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = func_00223BB0();
    var_v1 = 0;
    if (arg0 < 0x24) {
        var_v1 = temp_v0 + (arg0 * 0x3D);
    }
    return var_v1;
}
