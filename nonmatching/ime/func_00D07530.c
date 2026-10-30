/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00D07530(void *arg0, s64 arg1) {
    s64 temp_v1;

    if (arg0 != NULL) {
        temp_v1 = (s64) (arg1 << 0x38) >> 0x38;
        if (temp_v1 < 0) {
            return 0;
        }
        if (temp_v1 < 3) {
            if (temp_v1 != 1) {
                M2C_FIELD(arg0, s32 *, 0x30) = 0;
            }
            M2C_FIELD(arg0, s8 *, 0x3F) = (s8) arg1;
            M2C_FIELD(arg0, s8 *, 0x3B) = 1;
            return 1;
        }
        return 0;
    }
    return 0;
}
