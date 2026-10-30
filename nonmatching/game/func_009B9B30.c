/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B3480(s16, f32, M2C_UNK);               /* extern */

s32 func_009B9B30(void *arg0, s32 arg1) {
    M2C_UNK var_f13;
    s16 temp_a1;

    temp_a1 = M2C_FIELD(arg0, s16 *, 0x14);
    if ((arg1 & 0xFFFF) < 0x8000) {
        var_f13 = 0xC466C000;
    } else {
        var_f13 = 0x446EC000;
    }
    return func_009B3480(temp_a1, -13401.0f * (f32) temp_a1, var_f13) & 0xFFFF;
}
