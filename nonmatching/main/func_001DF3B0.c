/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_001DF3B0(void *arg0, f32 fparg0) {
    f32 var_f1;

    if (arg0 != NULL) {
        var_f1 = 1.0f;
        if (!(fparg0 <= 1.0f)) {

        } else {
            var_f1 = 0.0f;
            if (!(fparg0 < 0.0f)) {
                var_f1 = fparg0;
            }
        }
        if (M2C_FIELD(arg0, f32 *, 0x4C) != var_f1) {
            M2C_FIELD(arg0, f32 *, 0x4C) = var_f1;
            M2C_FIELD(arg0, u8 *, 0x74) = (u8) (M2C_FIELD(arg0, u8 *, 0x74) | 4);
        }
    }
}
