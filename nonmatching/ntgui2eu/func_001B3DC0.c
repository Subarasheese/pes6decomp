/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s64 func_001B9418(s32, s16, s32, s32);              /* extern */

s64 func_001B3DC0(void *arg0, s32 arg1, s32 arg2) {
    s64 temp_a0;

    temp_a0 = (s64) (func_001B9418(M2C_FIELD(arg0, s32 *, 0x54), M2C_FIELD(arg0, s16 *, 0xE), arg1, arg2) << 0x20) >> 0x20;
    if (temp_a0 >= 0) {
        M2C_FIELD(arg0, s32 *, 0x50) = (s32) (M2C_FIELD(arg0, s32 *, 0x50) + temp_a0);
        return temp_a0;
    }
    M2C_FIELD(arg0, u16 *, 0xC) = (u16) (M2C_FIELD(arg0, u16 *, 0xC) & 0xEFFF);
    return temp_a0;
}
