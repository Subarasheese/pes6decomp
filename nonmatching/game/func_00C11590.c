/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00C11590(s32 arg0, s32 arg1) {
    s32 temp_a0;
    s32 var_v0;

    temp_a0 = arg0 & 0xFF;
    var_v0 = (arg1 & 0xFF) + ((temp_a0 >> 4) & 0xFF);
    if (var_v0 >= 0xF) {
        var_v0 = 0xF;
    }
    return ((temp_a0 & 0xF) | ((var_v0 & 0xFF & 0xF) * 0x10)) & 0xFF;
}
