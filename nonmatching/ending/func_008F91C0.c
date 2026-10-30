/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00908CA4;

s32 func_008F91C0(void *arg0) {
    if (M2C_FIELD(M2C_FIELD(D_00908CA4, void **, 4), f32 *, 0x38) < 694.0f) {
        M2C_FIELD(arg0, s32 *, 0xE4) = 0x447A0000;
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x38) = 0;
    } else {
        M2C_FIELD(arg0, s32 *, 0xE4) = 0;
    }
    return 1;
}
