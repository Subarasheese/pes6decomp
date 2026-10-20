/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_0030E690(s32 arg0) {
    s32 temp_a0;
    s32 var_v0;

    temp_a0 = arg0 & 0xFF;
    var_v0 = 1;
    if ((temp_a0 != 1) && (temp_a0 != 0xC)) {
        var_v0 = 0;
    }
    return var_v0;
}
