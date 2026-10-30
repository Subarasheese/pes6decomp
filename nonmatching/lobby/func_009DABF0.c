/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00A7DEB0;

s32 func_009DABF0(s32 arg0) {
    if (D_00A7DEB0 == NULL) {
        return 0;
    }
    if (arg0 == 0) {
        if (M2C_FIELD(D_00A7DEB0, u8 *, 0x296) != 2) {
            M2C_FIELD(D_00A7DEB0, u8 *, 0x296) = 1U;
        }
    } else if (M2C_FIELD(D_00A7DEB0, u8 *, 0x296) != 0) {
        M2C_FIELD(D_00A7DEB0, u8 *, 0x296) = 3U;
    }
    return 1;
}
