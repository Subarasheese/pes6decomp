/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002DEBC0(void);
s32 func_0023BD80();                                /* extern */
extern s32 D_003EACD8;

s32 func_009834A0(void) {
    s32 var_s0;

    var_s0 = 0;
    if (D_003EACD8 == 1) {
        if (func_002DEBC0() == 3) {
            var_s0 = 1;
        }
    } else if (func_0023BD80() == 1) {
        var_s0 = 1;
    }
    return var_s0;
}
