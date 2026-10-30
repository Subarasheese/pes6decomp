/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0021FB90(s32 arg0) {
    s32 var_a0;

    var_a0 = arg0;
    if (var_a0 >= 0x73) {
        if (var_a0 != 0xFFFF) {
            var_a0 = 0x1CA;
        } else {
            var_a0 = 0x69;
        }
    }
    return var_a0;
}
