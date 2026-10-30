/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_003084C0(s32);
extern void *D_003EA358;

s32 func_0085EC20(void) {
    if (D_003EA358 != NULL) {
        if (M2C_FIELD(D_003EA358, s8 *, 5) == 0) {
            M2C_FIELD(D_003EA358, s8 *, 5) = 1;
        }
        func_003084C0(0);
        M2C_FIELD(D_003EA358, s8 *, 4) = 1;
        return M2C_FIELD(D_003EA358, s32 *, 0);
    }
    return -1;
}
