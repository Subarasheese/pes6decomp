/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00A09950(s32, u32, u32);                   /* extern */
extern void *Pes6Ball_Current;
extern char D_00591E4C[];
extern char D_005926EC[];
extern char Pes6MatchSquads[];

s32 func_00AEBB60(void *arg0, s32 arg1) {
    s32 temp_a1;
    s32 temp_a1_2;
    u16 temp_v1;
    u32 temp_a2;
    u32 temp_a3;

    if (arg1 >= 0x400001) {
        return 0;
    }
    temp_a1 = ((u64) ((s64) M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x8C) << 0x38) >> 0x3A) + 0x94;
    temp_a3 = temp_a1 * -0x90;
    temp_a2 = temp_a3 >> 0x1F;
    temp_a1_2 = ((temp_a1 * -0x90) / 183) + temp_a2;
    if (M2C_FIELD((((*(u8 *)D_005926EC) * 4) + Pes6Ball_Current), f32 *, 0x7FC) <= (f32) temp_a1_2) {
        return 0;
    }
    if ((*(u8 *)D_00591E4C) != 0) {
        if ((*(u8 *)D_00591E4C) == 0) {
            goto block_8;
        }
        if (func_00A09950(temp_a1_2, temp_a2, temp_a3) == 1) {
            goto block_10;
        }
block_8:
        return 0;
    }
block_10:
    temp_v1 = M2C_FIELD(Pes6Ball_Current, u16 *, 0x84);
    if ((temp_v1 != 0xB) && (temp_v1 != 0xF) && (temp_v1 != 0xA)) {
        goto block_16;
    }
    if (arg1 >= 0x100001) {
        return 0;
    }
block_16:
    return 1;
}
