/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009BEA50(s32 arg0, s32 arg1) {
    if ((arg0 != 0) && (arg1 >= 0)) {
        if (arg1 < 2) {
            return 0;
        }
        goto block_5;
    }
block_5:
    return 4;
}
