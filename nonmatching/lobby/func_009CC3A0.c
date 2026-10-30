/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00A7DDA8;

s32 func_009CC3A0(void) {
    if (D_00A7DDA8 != NULL) {
        return M2C_FIELD(D_00A7DDA8, s32 *, 8);
    }
    return 0xE;
}
