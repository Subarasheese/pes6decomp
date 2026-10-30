/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00A7DEB0;

s32 func_009DAC50(s8 arg0) {
    if (D_00A7DEB0 != NULL) {
        M2C_FIELD(D_00A7DEB0, s8 *, 0x295) = arg0;
        return 1;
    }
    return 0;
}
