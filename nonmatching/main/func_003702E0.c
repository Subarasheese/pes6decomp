/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_003702E0(void *arg0) {
    if (!(M2C_FIELD(arg0, f32 *, 0) < 9241.0f)) {
        if (M2C_FIELD(arg0, s32 *, 0x1C) == 0) {
            return 0;
        }
        goto block_4;
    }
block_4:
    return 1;
}
