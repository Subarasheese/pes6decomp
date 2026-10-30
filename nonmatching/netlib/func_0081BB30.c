/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0081BB30(void *arg0, s32 arg1) {
    if (arg0 == NULL) {
        return 0;
    }
    if (arg1 >= 0) {
        if (arg1 < 5) {
            M2C_FIELD(arg0, s32 *, 0x2DC) = arg1;
        } else {
            M2C_FIELD(arg0, s32 *, 0x2DC) = 4;
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0x2DC) = 0;
    }
    return 1;
}
