/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00288670(u32, u32);
extern f32 *D_003E74CC;
extern char Pes6MatchSquads[];

f32 func_00AB4270(void *arg0) {
    s32 temp_v0;

    temp_v0 = (M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x71) & 0x7F) + func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x72) & 0x7F, 0x28U);
    if (temp_v0 >= 0x79) {
        return (*D_003E74CC * (f32) (temp_v0 + 0x400)) / 1024.0f;
    }
    return *D_003E74CC;
}
