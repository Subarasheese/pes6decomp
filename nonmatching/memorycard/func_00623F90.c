/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_0065C0F0;

u8 func_00623F90(s32 arg0) {
    if (D_0065C0F0 == NULL) {
        return 0U;
    }
    if (arg0 != 0) {
        return M2C_FIELD(D_0065C0F0, u8 *, 5);
    }
    return M2C_FIELD(D_0065C0F0, u8 *, 4);
}
