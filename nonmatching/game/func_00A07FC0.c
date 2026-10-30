/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00A07FC0(void *arg0) {
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 0x16);
    if ((temp_v1 != 0x45) && (temp_v1 != 0x11) && (temp_v1 != 0x14) && (temp_v1 != 0x10) && (temp_v1 != 0x18)) {
        return 1;
    }
    return 0;
}
