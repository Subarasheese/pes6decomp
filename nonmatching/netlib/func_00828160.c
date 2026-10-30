/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_008A4398;

s32 func_00828160(void) {
    if (D_008A4398 != NULL) {
        return M2C_FIELD(D_008A4398, s32 *, 0x49E8);
    }
    return 0;
}
