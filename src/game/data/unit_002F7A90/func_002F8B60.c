/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_002F8B60(s32 arg0) {
    s32 temp_a0;
    s32 var_v0;

    temp_a0 = arg0 & 0xFFFF;
    var_v0 = -1;
    if ((temp_a0 >= 0x40) && (temp_a0 < 0xCC)) {
        var_v0 = temp_a0 - 0x40;
    }
    return var_v0;
}
