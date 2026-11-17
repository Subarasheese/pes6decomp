/* compiler: mwcc-3.0.1b210-O2 */
#include "pes6/m2c.h"

f32 func_00C10D60(u8 *arg0, u32 arg1, u32 arg2) {
    f32 var_f0;

    var_f0 = 0.0f;
    if ((arg0 != NULL) && (arg1 < 8U) && (arg2 < 6U)) {
        var_f0 = *(f32 *)(arg0 + (arg1 * 0x18) + (arg2 * 4));
    }
    return var_f0;
}
