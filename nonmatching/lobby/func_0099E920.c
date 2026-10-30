/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0099E920(void *arg0) {
    if (arg0 == NULL) {
        return 5;
    }
    if (arg0 != NULL) {
        if (M2C_FIELD(arg0, s32 *, 0) != 1) {
            M2C_FIELD(arg0, s8 *, 0x97) = 1;
        }
        M2C_FIELD(arg0, s32 *, 0) = 1;
    }
    return 0;
}
