/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_002F8B90(s32 arg0) {
    s32 temp_a0;
    s32 var_v0;

    temp_a0 = arg0 & 0xFFFF;
    var_v0 = -1;
    if ((temp_a0 >= 0) && (temp_a0 < 0x39)) {
        goto block_5;
    }
    if ((temp_a0 >= 0x39) && (temp_a0 < 0x40)) {
block_5:
        var_v0 = temp_a0;
    }
    return var_v0;
}
