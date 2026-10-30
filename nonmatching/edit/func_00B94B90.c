/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CE35B0[];

s32 func_00B94B90(s32 arg0) {
    s32 temp_a0;
    s32 var_v0;

    temp_a0 = arg0 & 0xFFFF;
    var_v0 = 0;
    if ((temp_a0 >= 0x40) && (temp_a0 < 0xCC)) {
        var_v0 = (*(s32 *)D_00CE35B0) + (((temp_a0 - 0x40) & 0xFFFF) * 0x58) + 0xB6364;
    }
    return var_v0;
}
