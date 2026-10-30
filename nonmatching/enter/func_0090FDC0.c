/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001CD6B0(s32, s32);                        /* extern */

s32 func_0090FDC0(void *arg0, f32 fparg0, f32 fparg1) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = func_001CD6B0(-(s32) (fparg1 - M2C_FIELD(arg0, f32 *, 0xE8)), (s32) (fparg0 - M2C_FIELD(arg0, f32 *, 0xE0))) & 0xFFFF;
    }
    return var_v0;
}
