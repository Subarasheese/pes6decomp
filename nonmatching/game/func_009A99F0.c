/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


f32 func_009A9B30(s32, s32, s32, s32);              /* extern */

s32 func_009A99F0(void *arg0, s32 arg1) {
    s32 var_v0;

    if (func_009A9B30(*M2C_FIELD(arg0, s32 **, 0), *M2C_FIELD(arg0, s32 **, 4), *M2C_FIELD(arg0, s32 **, 8), arg1) < 0.0f) {
        var_v0 = 1;
        if (func_009A9B30(*M2C_FIELD(arg0, s32 **, 8), *M2C_FIELD(arg0, s32 **, 4), *M2C_FIELD(arg0, s32 **, 0xC), arg1) < 0.0f) {
            var_v0 = 0;
        }
        return var_v0;
    }
    return 1;
}
