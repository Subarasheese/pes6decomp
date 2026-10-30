/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003E99F8;

s32 func_00210DF0(void) {
    if ((D_003E99F8 != 2) && (D_003E99F8 != 1)) {
        return 0;
    }
    return D_003E99F8;
}
