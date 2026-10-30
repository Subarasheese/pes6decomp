/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00288670(u32, u32);
extern char Pes6MatchSquads[];

s32 func_009B9BA0(void *arg0) {
    s32 temp_v0;

    temp_v0 = func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x83) & 0x7F, 0x14U);
    if (temp_v0 < 0x33) {
        return 5;
    }
    if (temp_v0 >= 0x60) {
        return -1;
    }
    if (temp_v0 >= 0x5B) {
        return 0;
    }
    if (temp_v0 < 0x51) {
        return 2;
    }
    return 1;
}
