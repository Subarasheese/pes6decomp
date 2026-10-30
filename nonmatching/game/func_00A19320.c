/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *Pes6Ball_Current;
extern char Pes6MatchSquads[];

s32 func_00A19320(void *arg0) {
    s32 temp_a1;

    temp_a1 = ((u64) ((s64) M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x8C) << 0x38) >> 0x3A) + 0x94;
    if (!(M2C_FIELD(Pes6Ball_Current, f32 *, 0x14) <= (f32) (((temp_a1 * -0x1A4) / 183) + ((u32) (temp_a1 * -0x1A4) >> 0x1F))) && (fabsf(M2C_FIELD(Pes6Ball_Current, f32 *, 0x30)) < 4512.0f)) {
        return 0;
    }
    return 1;
}
