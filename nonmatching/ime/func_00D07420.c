/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00D07420(void *arg0) {
    if (arg0 == NULL) {
        return 0;
    }
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x30) = 0;
        M2C_FIELD(arg0, s8 *, 0x3F) = 2;
        M2C_FIELD(arg0, s8 *, 0x3B) = 1;
    }
    return 1;
}
