/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0019E738(void *);
s32 func_0019E768(void *arg0, s32 arg1) {
    if (arg1 >= 0) {
        if (arg1 < M2C_FIELD(arg0, s32 *, 0x20)) {
            return M2C_FIELD(arg0, s32 *, 0x1C) + (arg1 << 6);
        }
        goto block_4;
    }
block_4:
    return func_0019E738(arg0);
}
