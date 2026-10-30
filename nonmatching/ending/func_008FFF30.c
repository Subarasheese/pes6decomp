/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003EA6A8;

s32 func_008FFF30(void) {
    s32 var_v0;

    var_v0 = 0;
    if (D_003EA6A8 != NULL) {
        var_v0 = M2C_FIELD(D_003EA6A8, s32 *, 4);
    }
    return var_v0;
}
