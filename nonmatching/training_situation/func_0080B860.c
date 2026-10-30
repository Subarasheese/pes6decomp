/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0080B860(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if ((M2C_FIELD(arg0, f32 *, 0x4C) != 0.0f) || (M2C_FIELD(arg0, f32 *, 0x50) != 0.0f) || (M2C_FIELD(arg0, f32 *, 0x54) != 0.0f)) {
        var_v0 = 1;
    }
    return var_v0;
}
