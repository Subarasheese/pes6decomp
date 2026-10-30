/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009BC800(void *arg0, s32 arg1) {
    if (arg0 == NULL) {
        return 1;
    }
    if (arg1 >= 0) {
        M2C_FIELD(arg0, s32 *, 0x30) = arg1;
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    return 1;
}
