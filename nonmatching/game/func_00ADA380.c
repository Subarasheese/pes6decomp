/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00ADA380(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x16) != 4) {
        return 0;
    }
    if ((M2C_FIELD(arg0, s32 *, 0xB0) & 0xA00) == 0xA00) {
        M2C_FIELD(arg0, u8 *, 0x16) = 1U;
        M2C_FIELD(arg0, s16 *, 0x18) = 0;
        return 1;
    }
    return 0;
}
