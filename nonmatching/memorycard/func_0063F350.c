/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0063F350(s32 arg0) {
    s32 temp_v1;

    temp_v1 = arg0 & 0xFF;
    if (!(temp_v1 & 1) && !(temp_v1 & 2)) {
        if (!(temp_v1 & 4)) {
            return 1;
        }
        goto block_5;
    }
block_5:
    return 0;
}
