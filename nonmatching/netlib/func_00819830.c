/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00819830(void *arg0, s32 arg1) {
    if (arg0 == NULL) {
        return 0;
    }
    if (arg1 >= 0) {
        if (arg1 < 0x3C) {
            M2C_FIELD(arg0, s32 *, 0x18) = arg1;
        } else {
            M2C_FIELD(arg0, s32 *, 0x18) = 0x3B;
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
    }
    return 1;
}
