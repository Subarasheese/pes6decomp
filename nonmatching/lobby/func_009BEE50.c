/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009BEE50(void *arg0) {
    if (arg0 == NULL) {
        return 4;
    }
    if (arg0 != NULL) {
        if (M2C_FIELD(arg0, s32 *, 0) != 1) {
            M2C_FIELD(arg0, s8 *, 0x33) = 1;
        }
        M2C_FIELD(arg0, s32 *, 0) = 1;
    }
    if (arg0 != NULL) {
        if (M2C_FIELD(arg0, s32 *, 0x18) != 0) {
            M2C_FIELD(arg0, s8 *, 0x33) = 1;
        }
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
    }
    return 0;
}
