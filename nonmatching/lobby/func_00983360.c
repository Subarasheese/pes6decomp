/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002DEBC0(void);
s32 func_0023C230();                                /* extern */
extern s32 D_003EACD4;

s32 func_00983360(void) {
    s32 var_s0;

    var_s0 = 0;
    if (D_003EACD4 == 1) {
        if (func_002DEBC0() == 3) {
            var_s0 = 1;
        }
    } else if (func_0023C230() == 1) {
        var_s0 = 1;
    }
    return var_s0;
}
