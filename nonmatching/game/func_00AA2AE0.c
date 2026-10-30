/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BBB8C0(s32);                             /* extern */

s32 func_00AA2AE0(s32 arg0) {
    s32 temp_s0;
    s32 var_v0;

    var_v0 = arg0 >> 1;
    if (arg0 < 0) {
        var_v0 = (s32) (arg0 + 1) >> 1;
    }
    temp_s0 = ((var_v0 * 8) / 10) + ((u32) (var_v0 * 8) >> 0x1F);
    return temp_s0 + func_00BBB8C0(temp_s0);
}
