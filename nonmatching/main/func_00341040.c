/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00341040(void *arg0) {
    s32 var_v0;

    if (arg0 == NULL) {
        goto block_5;
    }
    var_v0 = 1;
    if (M2C_FIELD(arg0, s32 *, 0) != 1) {
        goto block_5;
    }
    if (M2C_FIELD(arg0, u8 *, 0x21) != 8) {
block_5:
        var_v0 = 0;
    }
    return var_v0;
}
