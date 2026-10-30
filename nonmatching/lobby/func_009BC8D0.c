/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009BC8D0(void *arg0, s8 arg1) {
    if (arg0 == NULL) {
        return 1;
    }
    if (arg1 < 0) {
        return 1;
    }
    if (arg1 < 0x3C) {
        if (M2C_FIELD(arg0, s8 *, 0x1E1) != arg1) {
            M2C_FIELD(arg0, s8 *, 0x1E8) = 1;
        }
        M2C_FIELD(arg0, s8 *, 0x1E1) = arg1;
        return 0;
    }
    return 1;
}
