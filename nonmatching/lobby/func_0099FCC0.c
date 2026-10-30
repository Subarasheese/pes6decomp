/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0099FCC0(void *arg0, s8 arg1) {
    if (arg0 == NULL) {
        return 1;
    }
    if (arg1 < 0) {
        return 1;
    }
    if (arg1 < 0x3C) {
        if (M2C_FIELD(arg0, s8 *, 0xFC) != arg1) {
            M2C_FIELD(arg0, s8 *, 0x100) = 1;
        }
        M2C_FIELD(arg0, s8 *, 0xFC) = arg1;
        return 0;
    }
    return 1;
}
