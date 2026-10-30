/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003E77B0;

s32 func_00984740(s32 arg0) {
    s32 temp_v1;

    temp_v1 = arg0 & 0xFFFF;
    if (temp_v1 < 0x39) {
        return 1;
    }
    if (temp_v1 < 0x40) {
        return (M2C_FIELD(D_003E77B0, s32 *, 0x30) & (1 << ((temp_v1 - 0x39) & 0xFFFF))) != 0;
    }
    return 1;
}
