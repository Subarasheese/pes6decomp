/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


u32 func_0011A2D8(s32 arg0) {
    s32 temp_a1;
    u32 var_v0;

    var_v0 = arg0 - 0x30;
    temp_a1 = arg0 | 0x20;
    if (var_v0 >= 0xAU) {
        var_v0 = ((((u32) (temp_a1 - 0x61) < 6U) ^ 0) == 0) ? 0U : (temp_a1 - 0x57);
    }
    return var_v0;
}
