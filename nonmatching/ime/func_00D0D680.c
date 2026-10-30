/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00D0D680(u32 arg0) {
    s32 var_v0;

    var_v0 = 1;
    if ((arg0 < 0x30U) || (arg0 == 0x12) || (arg0 == 0x10) || (arg0 == 0xD) || (arg0 == 0x1B) || ((arg0 >= 0x70U) && (arg0 < 0x88U)) || (arg0 == 0x5C) || (arg0 == 0x5B) || (arg0 == 0x5D) || (arg0 == 0x90) || (arg0 == 0x91) || (arg0 == 0xA0) || (arg0 == 0xA2) || (arg0 == 0xA4) || (arg0 == 0xA1) || (arg0 == 0xA3) || (arg0 == 0xA5) || (arg0 == 0xE5) || (arg0 == 0x1C) || (arg0 == 0x1D) || (arg0 == 0xF2)) {
        var_v0 = 0;
    }
    return var_v0;
}
