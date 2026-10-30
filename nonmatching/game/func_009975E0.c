/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009975E0(void *arg0) {
    u8 temp_v1;

    if (M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x2C) != 0) {
        temp_v1 = M2C_FIELD(arg0, u8 *, 0x16);
        if ((temp_v1 != 0xFF) && (temp_v1 != 0x4F) && (temp_v1 != 0x46) && (temp_v1 != 0x14) && (temp_v1 != 0x11)) {
            return 1;
        }
        return 0;
    }
    return 0;
}
