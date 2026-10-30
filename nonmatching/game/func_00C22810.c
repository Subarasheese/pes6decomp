/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003EA764;

u8 func_00C22810(void) {
    if (D_003EA764 != NULL) {
        return M2C_FIELD(D_003EA764, u8 *, 4);
    }
    return -1U;
}
