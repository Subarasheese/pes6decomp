/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00CE64D0;

u8 func_00BEC780(void) {
    if (D_00CE64D0 != NULL) {
        return M2C_FIELD(D_00CE64D0, u8 *, 0xEE);
    }
    return 5U;
}
