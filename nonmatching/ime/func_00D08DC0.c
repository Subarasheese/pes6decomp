/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00D08DC0(void *arg0, s64 arg1) {
    s64 temp_v0;

    if (arg0 != NULL) {
        temp_v0 = (s64) (arg1 << 0x38) >> 0x38;
        if (temp_v0 < 0) {
            return 0;
        }
        if (temp_v0 < 0x11) {
            M2C_FIELD(arg0, s8 *, 0x525) = 1;
            M2C_FIELD(arg0, s8 *, 0x534) = 1;
            M2C_FIELD(arg0, s8 *, 0x52C) = (s8) arg1;
            M2C_FIELD(arg0, s8 *, 0x52D) = 0x11;
            return 1;
        }
        return 0;
    }
    return 0;
}
