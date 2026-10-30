/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00341120(void *arg0) {
    u8 temp_v1;

    if (arg0 != NULL) {
        if (M2C_FIELD(arg0, s32 *, 0) == 1) {
            temp_v1 = M2C_FIELD(arg0, u8 *, 0x21);
            if ((temp_v1 != 0xD) && (temp_v1 != 0xB) && (temp_v1 != 0xC) && (temp_v1 != 6) && (temp_v1 != 0x10)) {
                return 0;
            }
            return 1;
        }
        return 0;
    }
    return 0;
}
