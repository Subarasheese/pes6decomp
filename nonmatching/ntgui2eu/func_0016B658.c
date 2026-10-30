/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 (*D_011F6C3C)();

s32 func_0016B658(void) {
    s32 var_v1;

    var_v1 = 0;
    if (D_011F6C3C != NULL) {
        var_v1 = D_011F6C3C();
    }
    return var_v1;
}
