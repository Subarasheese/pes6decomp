/* compiler: mwcc-3.0.1b210-O2 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

f32 func_00C10D60(s32 arg0, u32 arg1, u32 arg2) {
    f32 var_f0;
    s32 var_v0;

    var_v0 = arg0 != 0;
    var_f0 = 0.0f;
    if (var_v0 != 0) {
        var_v0 = arg1 < 8U;
    }
    if (var_v0 != 0) {
        var_v0 = arg2 < 6U;
    }
    if (var_v0 != 0) {
        var_f0 = *(u8 *)(arg0 + (arg1 * 0x18) + (arg2 * 4));
    }
    return var_f0;
}
