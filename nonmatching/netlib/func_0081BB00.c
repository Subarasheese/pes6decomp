/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0081BB00(void *arg0, s32 arg1) {
    if (arg0 != NULL) {
        if (arg1 != 1) {
            M2C_FIELD(arg0, s32 *, 0x2E0) = 0;
        } else {
            M2C_FIELD(arg0, s32 *, 0x2E0) = 1;
        }
        return 1;
    }
    return 0;
}
