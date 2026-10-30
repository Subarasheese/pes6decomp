/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00C85FE0(void *arg0) {
    s32 var_v0;
    u16 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u16 *, 0xE);
    var_v0 = 0;
    if ((temp_v1 != 0) && (temp_v1 != 2)) {
        var_v0 = 1;
    }
    return var_v0;
}
