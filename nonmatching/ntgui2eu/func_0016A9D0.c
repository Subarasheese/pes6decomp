/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0016A9D0(u16 *arg0) {
    s32 var_v0;
    u16 temp_a0;

    temp_a0 = *arg0;
    var_v0 = 0;
    if ((s32) temp_a0 < 5) {
        var_v0 = (s32) temp_a0 >= 2;
    }
    return var_v0;
}
