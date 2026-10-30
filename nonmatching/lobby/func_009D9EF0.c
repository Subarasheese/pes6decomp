/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00A7DEB0;

s32 func_009D9EF0(void) {
    if (D_00A7DEB0 != NULL) {
        return M2C_FIELD(D_00A7DEB0, u8 *, 0x296) == 3;
    }
    return 0;
}
