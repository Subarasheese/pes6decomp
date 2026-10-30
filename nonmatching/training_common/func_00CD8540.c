/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00CD8540(f32 fparg0) {
    f32 temp_f1;
    f32 var_f12;
    s32 var_v0;

    var_f12 = fparg0;
    if (var_f12 < 0.0f) {
        var_f12 += 6.2831855f;
    }
    temp_f1 = (65535.0f * var_f12) / 6.2831855f;
    if (temp_f1 >= 2.1474836e9f) {
        var_v0 = (s32) (temp_f1 - 2.1474836e9f) | 0x80000000;
    } else {
        var_v0 = (s32) temp_f1;
    }
    return var_v0 & 0xFFFF;
}
