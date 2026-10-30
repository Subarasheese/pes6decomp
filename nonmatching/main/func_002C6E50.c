/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_002C6E50(void *arg0, s32 *arg1) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 9) & 0x7F;
    *arg1 += 0xDC;
    return ((temp_v1 + 1) / 5) + ((u32) (temp_v1 + 1) >> 0x1F) + ((M2C_FIELD(arg0, u8 *, 0xE) & 0x7F) + 2 + (M2C_FIELD(arg0, u8 *, 0xF) & 0x7F));
}
