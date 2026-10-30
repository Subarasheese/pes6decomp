/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00BBB780(s64);
extern char Pes6MatchSquads[];

s32 func_00A0AF40(void *arg0) {
    s32 temp_v1;
    void *temp_a0;

    temp_a0 = (M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900));
    if (((u64) ((s64) M2C_FIELD(temp_a0, u8 *, 0x8B) << 0x3D) >> 0x3F) != 0) {
        return 1;
    }
    temp_v1 = M2C_FIELD(temp_a0, u8 *, 0xAC) & 0x7F;
    if (temp_v1 >= 0x5A) {
        return 1;
    }
    if ((M2C_FIELD(temp_a0, u8 *, 0x9E) & 0x7F) < 0x5A) {
        if (func_00BBB780((s64) ((temp_v1 - 0x28) << 0x30) >> 0x30) == 0) {
            return func_00BBB780((s64) (((M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x9E) & 0x7F) - 0x28) << 0x30) >> 0x30) != 0;
        }
        return 1;
    }
    return 1;
}
