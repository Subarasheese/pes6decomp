/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003EA344;

s32 func_00841D30(void) {
    s32 var_v0;

    var_v0 = 0;
    if (D_003EA344 != 0) {
        var_v0 = 1;
    }
    return var_v0;
}
