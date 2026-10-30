/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BBB990(s32, s32);                        /* extern */
s32 func_00BBB9C0(s32, s32);                        /* extern */

s32 func_00B07750(void *arg0, s32 arg1, s32 arg2, f32 fparg0, f32 fparg1) {
    s32 var_v0;

    if (((f32) M2C_FIELD(arg0, s16 *, 0x14) * (fparg0 + (f32) func_00BBB990(arg1, arg2))) <= -13465.0f) {
        var_v0 = (s32) (fparg1 + (f32) func_00BBB9C0(arg1, arg2));
        if (var_v0 <= 0) {
            var_v0 = -var_v0;
        }
        if (!((f32) var_v0 < 939.0f)) {
            return 0;
        }
        return 1;
    }
    return 0;
}
