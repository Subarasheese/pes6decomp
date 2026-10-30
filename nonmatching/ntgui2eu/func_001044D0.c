/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_006025BC;

s32 func_001044D0(void) {
    s32 var_v0;

    if ((D_006025BC == 0) || (var_v0 = 0, (D_006025BC == 4))) {
        var_v0 = 1;
    }
    return var_v0;
}
