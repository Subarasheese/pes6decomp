/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003E77AC;

s32 func_0094C770(void) {
    if (D_003E77AC == NULL) {
        return 0;
    }
    return M2C_FIELD(D_003E77AC, s32 *, 4);
}
