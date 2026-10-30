/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern f32 *D_003E74CC;

s32 func_00207D10(void *arg0) {
    if (M2C_FIELD(arg0, s16 *, 0x34) == 0x7FFF) {
        return 1;
    }
    if ((M2C_FIELD(arg0, u8 *, 0x4C) == 0) && (M2C_FIELD(arg0, u8 *, 0x51) == 0) && (M2C_FIELD(arg0, f32 *, 0x38) < (M2C_FIELD(arg0, f32 *, 0x28) / *D_003E74CC)) && (M2C_FIELD(arg0, u8 *, 0x50) == 0)) {
        return 1;
    }
    return 0;
}
