/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003E7E28;

s32 func_00CE8980(void) {
    if (D_003E7E28 == NULL) {
        return 0;
    }
    return M2C_FIELD(D_003E7E28, s32 *, 0x1D0);
}
