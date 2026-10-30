/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00D0B290(void *arg0, s8 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s8 *, 0xD7C) = arg1;
        M2C_FIELD(arg0, s8 *, 0xD7A) = 1;
        return 0;
    }
    return 1;
}
