/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_001F2770(void *arg0, f32 fparg0) {
    f32 var_f0;

    if (arg0 != NULL) {
        var_f0 = 1.0f;
        if (!(fparg0 <= 1.0f)) {

        } else {
            var_f0 = 0.0f;
            if (!(fparg0 < 0.0f)) {
                var_f0 = fparg0;
            }
        }
        M2C_FIELD(arg0, f32 *, 0x4C) = var_f0;
        M2C_FIELD(arg0, u8 *, 1) = (u8) (M2C_FIELD(arg0, u8 *, 1) | 1);
    }
}
