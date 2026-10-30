/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0090FE20(s32 arg0) {
    u32 var_a1;

    var_a1 = arg0 & ~0x80;
    if (arg0 & 0x80) {
        var_a1 -= 0xE;
    }
    return (var_a1 / 15) + (var_a1 >> 0x1F);
}
