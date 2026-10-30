/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00A07960(void *arg0) {
    u16 temp_v1;

    temp_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30);
    if ((temp_v1 != 0xD1) && (temp_v1 != 0x244) && (temp_v1 != 0xF6) && (temp_v1 != 0xF4) && (temp_v1 != 0xD6) && (temp_v1 != 0x255) && (temp_v1 != 0xD5) && (temp_v1 != 0xD7) && (temp_v1 != 0x3A7) && (temp_v1 != 0x3A1)) {
        return 0;
    }
    return 1;
}
