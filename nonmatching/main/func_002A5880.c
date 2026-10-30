/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_002A5880(void *arg0, s32 arg1, s32 arg2) {
    s32 var_v1;

    var_v1 = 1;
    if (!(M2C_FIELD(arg0, f32 *, 4) < M2C_FIELD(((arg2 * 0xC) + arg1), f32 *, 4))) {
        var_v1 = 0;
    }
    return var_v1 & 0xFF;
}
