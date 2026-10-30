/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003EA6AC;

s32 func_00900370(void) {
    if (D_003EA6AC == NULL) {
        return 0;
    }
    return M2C_FIELD(D_003EA6AC, s32 *, 4);
}
