/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003E7B0C;

u8 func_0094C730(void) {
    if (D_003E7B0C == NULL) {
        return 0U;
    }
    return M2C_FIELD(D_003E7B0C, u8 *, 1);
}
