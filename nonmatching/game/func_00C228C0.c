/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003EA764;

s8 func_00C228C0(s32 arg0) {
    if (D_003EA764 == 0) {
        return -1;
    }
    return M2C_FIELD((((arg0 == 0) ? 0 : 1) + D_003EA764), s8 *, 6);
}
