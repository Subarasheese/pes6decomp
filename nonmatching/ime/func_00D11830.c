/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00D11830(void *arg0) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0xDA8) = 1;
        M2C_FIELD(arg0, s8 *, 0xD8C) = 1;
        return 0;
    }
    return 2;
}
