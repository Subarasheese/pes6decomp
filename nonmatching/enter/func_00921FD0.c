/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0035A260(void);
s32 func_00922220();                                /* extern */

s32 func_00921FD0(void) {
    s32 var_s0;

    var_s0 = 0;
    if ((func_00922220() == 1) || (func_0035A260() != 0)) {
        var_s0 = 1;
    }
    return var_s0;
}
