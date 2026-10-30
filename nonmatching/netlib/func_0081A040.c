/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0081A040(void *arg0, s32 arg1) {
    if (arg0 == NULL) {
        return 0;
    }
    if (arg1 >= 0) {
        if (arg1 < 0x3E8) {
            M2C_FIELD(arg0, s32 *, 0x10) = arg1;
        } else {
            M2C_FIELD(arg0, s32 *, 0x10) = 0x3E7;
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
    }
    M2C_FIELD(arg0, s8 *, 0x47) = 1;
    return 1;
}
