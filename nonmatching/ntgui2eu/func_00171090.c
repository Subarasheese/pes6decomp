/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00173A60(void *);                          /* extern */
M2C_UNK func_00174470(void *);                      /* extern */

s32 func_00171090(void *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        if (M2C_FIELD(arg0, s32 *, 0xD10) == 0) {
            func_00174470(arg0);
        }
        var_v0 = func_00173A60(arg0);
    }
    return var_v0;
}
