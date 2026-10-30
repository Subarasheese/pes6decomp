/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char Pes6MatchSquads[];

u64 func_0030D710(s32 arg0, s32 arg1) {
    s32 temp_a2;
    s32 temp_v1;

    temp_a2 = arg0 & 0xFF;
    if (temp_a2 >= 2) {
        return 0U;
    }
    temp_v1 = arg1 & 0xFF;
    if (temp_v1 < 0x20) {
        return (u64) ((s64) M2C_FIELD(((temp_v1 * 0x348) + (((void *)Pes6MatchSquads) + (temp_a2 * 0x6900))), u8 *, 0xCF) << 0x3D) >> 0x3F;
    }
    return 0U;
}
