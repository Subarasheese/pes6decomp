/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00288670(u32, u32);
extern char Pes6MatchSquads[];

s32 func_00A349D0(void *arg0) {
    u32 temp_ret;

    temp_ret = func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x70) & 0x7F, 0x32U);
    return (temp_ret / 10) + (temp_ret >> 0x1F);
}
