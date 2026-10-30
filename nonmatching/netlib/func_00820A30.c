/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00820A30(void *arg0, f32 fparg0) {
    f32 var_f0;

    if (arg0 == NULL) {
        return 1;
    }
    var_f0 = 0.0f;
    if (!(fparg0 < 0.0f)) {
        var_f0 = 1.0f;
        if (!(fparg0 >= 1.0f)) {
            M2C_FIELD(arg0, f32 *, 0x1C) = fparg0;
        } else {
            goto block_9;
        }
    } else {
block_9:
        M2C_FIELD(arg0, f32 *, 0x1C) = var_f0;
    }
    M2C_FIELD(arg0, s32 *, 0x2C) = 1;
    return 0;
}
