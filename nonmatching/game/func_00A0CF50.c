/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00A0CF50(void *arg0) {
    s32 var_v0;
    s32 var_v0_2;

    if (M2C_FIELD(arg0, u8 *, 0x13) != 0) {
        var_v0_2 = 1;
        if (M2C_FIELD(arg0, f32 *, 0xE0) < 0.0f) {
            var_v0_2 = 0;
        }
        return var_v0_2;
    }
    var_v0 = 1;
    if (M2C_FIELD(arg0, f32 *, 0xE0) < 0.0f) {
        var_v0 = 0;
    }
    return var_v0 ^ 1;
}
