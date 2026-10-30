/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BFC8E0(s32 arg0, s32 arg1) {
    if ((arg0 != 3) && (arg0 != 2)) {
        goto block_5;
    }
    if (arg1 == 6) {
        return 1;
    }
block_5:
    return 0;
}
