/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00341280(void *arg0) {
    if (arg0 != NULL) {
        if (M2C_FIELD(arg0, s32 *, 0) == 3) {
            if (M2C_FIELD(arg0, u8 *, 0x25) & 1) {
                return 1;
            }
            goto block_10;
        }
        goto block_10;
    }
block_10:
    return 0;
}
