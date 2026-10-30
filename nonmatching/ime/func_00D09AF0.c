/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00D09AF0(void *arg0, s64 arg1) {
    if (arg0 != NULL) {
        if (((s64) (arg1 << 0x38) >> 0x38) != 1) {
            M2C_FIELD(arg0, s8 *, 0xC0) = 0;
        } else {
            M2C_FIELD(arg0, s8 *, 0xC0) = 1;
        }
        if (M2C_FIELD(arg0, s8 *, 0xC0) != M2C_FIELD(arg0, s8 *, 0xC1)) {
            M2C_FIELD(arg0, s8 *, 0xC2) = 1;
        }
        return 1;
    }
    return 0;
}
