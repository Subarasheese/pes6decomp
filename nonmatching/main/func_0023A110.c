/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008FF810(u8);                              /* extern */
extern u8 D_003E9A2C;

s32 func_0023A110(void) {
    s32 var_v0;

    var_v0 = 0;
    if ((s32) D_003E9A2C < 8) {
        return 0;
    }
    if (D_003E9A2C != 8) {
        if ((s32) D_003E9A2C >= 9) {
            var_v0 = 1;
        }
        return var_v0;
    }
    return func_008FF810(D_003E9A2C) & 0xFF;
}
