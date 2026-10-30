/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00873EB0(void *arg0) {
    s32 var_v0;

    var_v0 = M2C_FIELD(arg0, s32 *, 0x454);
    if (var_v0 >= M2C_FIELD(arg0, s32 *, 4)) {
        return -1;
    }
    if (var_v0 == 0) {
        var_v0 = 0;
    }
    return var_v0;
}
