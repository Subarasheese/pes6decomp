/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009BEEB0(void *arg0, s32 arg1) {
    if (arg0 != NULL) {
        if (M2C_FIELD(arg0, s32 *, 0x2C) != arg1) {
            M2C_FIELD(arg0, s32 *, 0x2C) = arg1;
            M2C_FIELD(arg0, s8 *, 0x33) = 1;
        }
        return 0;
    }
    return 4;
}
