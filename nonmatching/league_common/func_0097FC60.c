/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003EA970;

u8 func_0097FC60(void) {
    if (D_003EA970 != NULL) {
        return M2C_FIELD(D_003EA970, u8 *, 0x1006);
    }
    return 0U;
}
