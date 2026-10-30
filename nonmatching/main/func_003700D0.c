/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_003700D0(void *arg0) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 4);
    if ((temp_v1 != 3) && (temp_v1 != 2)) {
        goto block_5;
    }
    if (M2C_FIELD(arg0, s32 *, 0) < 6) {
        return 1;
    }
block_5:
    return 0;
}
