/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s64 func_00C22890();                                /* extern */
s32 func_00C7EF80(M2C_UNK);                         /* extern */

s32 func_00311EF0(s8 *arg0) {
    s64 var_v0;

    var_v0 = (s64) (func_00C22890() << 0x38) >> 0x38;
    if (var_v0 < 0) {
        if (func_00C7EF80(0) == 0) {
            var_v0 = 1;
        } else {
            var_v0 = 0;
        }
    }
    *arg0 = (s8) var_v0;
    return 1;
}
