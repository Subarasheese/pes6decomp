/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_002C7060(void *arg0, s32 *arg1) {
    s32 temp_a2;
    s32 temp_v1;

    temp_a2 = (M2C_FIELD(arg0, u8 *, 4) & 0x7F) + ((M2C_FIELD(arg0, u8 *, 9) & 0x7F) + ((M2C_FIELD(arg0, u8 *, 0x18) & 0x7F) + 5 + (M2C_FIELD(arg0, u8 *, 0xA) & 0x7F)));
    temp_v1 = M2C_FIELD(arg0, u8 *, 2) & 0x7F;
    *arg1 += 0x73;
    return ((temp_v1 + temp_a2) / 5) + ((u32) (temp_v1 + temp_a2) >> 0x1F) + ((((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x23) << 0x3D) >> 0x3F) * 5) + (((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x11) << 0x38) >> 0x3F) * 0xA));
}
