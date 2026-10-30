/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_002C6D00(void *arg0, s32 *arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    u8 temp_a5;

    temp_a5 = M2C_FIELD(arg0, u8 *, 0x12);
    temp_v0 = M2C_FIELD(arg0, u8 *, 9) & 0x7F;
    temp_v0_2 = M2C_FIELD(arg0, u8 *, 0xA) & 0x7F;
    *arg1 += 0x172;
    return ((((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x16) << 0x38) >> 0x3F) + ((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x13) << 0x38) >> 0x3F) + ((u64) ((s64) temp_a5 << 0x38) >> 0x3F)) * 5) + (M2C_FIELD(arg0, u8 *, 0x10) & 0x7F) + 3 + (M2C_FIELD(arg0, u8 *, 0x11) & 0x7F) + (temp_a5 & 0x7F) + (((temp_v0 + 1) / 5) + ((u32) (temp_v0 + 1) >> 0x1F)) + (((temp_v0_2 + 1) / 5) + ((u32) (temp_v0_2 + 1) >> 0x1F)) + (((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x17) << 0x38) >> 0x3F) * 0xF);
}
