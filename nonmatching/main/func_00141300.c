/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00141300(void *arg0) {
    s32 temp_a3;
    s32 temp_a3_2;
    s32 temp_a5;

    temp_a3 = M2C_FIELD(arg0, s32 *, 0x40);
    temp_a5 = M2C_FIELD(arg0, s32 *, 0x38);
    temp_a3_2 = temp_a5 * 4;
    return ((((temp_a3 + 0x60 + temp_a3 + temp_a5 + 3) & ~3) + temp_a3_2 + temp_a3_2 + (M2C_FIELD(arg0, s32 *, 0x4C) * 4) + 0x3F) & ~0x3F) + (M2C_FIELD(arg0, s32 *, 0xC) << 6) + (temp_a5 << 6);
}
