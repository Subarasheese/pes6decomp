/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


u8 func_00AB38D0(void *arg0) {
    u16 temp_v1;
    u8 temp_v0;

    temp_v0 = M2C_FIELD(arg0, u8 *, 0x16);
    if ((temp_v0 != 0x41) && (temp_v0 != 0xA) && (temp_v0 != 9) && (temp_v0 != 8) && (temp_v0 != 4) && (temp_v0 != 6) && (temp_v0 != 5)) {
        temp_v1 = M2C_FIELD(arg0, u16 *, 0x1A);
        if ((temp_v1 != 0x41) && (temp_v1 != 0xA) && (temp_v1 != 9) && (temp_v1 != 8) && (temp_v1 != 4) && (temp_v1 != 6) && (temp_v1 != 5)) {
            return temp_v0;
        }
        return temp_v1 & 0xFFFF;
    }
    return temp_v0 & 0xFF;
}
