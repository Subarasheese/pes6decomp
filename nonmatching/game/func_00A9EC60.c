/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_009B33A0(void *, s32, s32);
extern s32 func_009B30B0(s32, s32);
s32 func_0099DFF0(void *);                          /* extern */
extern void *Pes6Ball_Current;
extern char D_00591E4C[];
extern char D_00591E7C[];
extern char D_005926E6[];
extern char Pes6MatchSquads[];

s32 func_00A9EC60(void *arg0) {
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_s1;
    void *temp_v0;

    if (((*(u8 *)D_00591E4C) != 0) && (M2C_FIELD(arg0, u8 *, 0) != ((*(u8 *)D_00591E4C) & 0xFF))) {
        return 0x80;
    }
    if (M2C_FIELD(arg0, u8 *, 0x41) != 0) {
        return 0x80;
    }
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30) == 0x39A) {
        return 0x80;
    }
    temp_v0 = ((*(u8 *)D_005926E6) * 4) + Pes6Ball_Current;
    temp_s0 = func_009B33A0(arg0, (s32) M2C_FIELD(temp_v0, f32 *, 0x47C), (s32) M2C_FIELD(temp_v0, f32 *, 0xB7C));
    temp_s1 = func_0099DFF0(arg0) & 0xFFFF;
    if ((M2C_FIELD(Pes6Ball_Current, s32 *, 0x50) < 0x1000) && ((u32) temp_s0 < 0x14401U)) {
        temp_a1 = ((u64) ((s64) M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x8C) << 0x38) >> 0x3A) + 0x94;
        if ((M2C_FIELD(Pes6Ball_Current, f32 *, 0x7FC) < (f32) (((temp_a1 * -0x60) / 183) + ((u32) (temp_a1 * -0x60) >> 0x1F))) && ((*(s32 *)D_00591E7C) != 0) && ((func_009B30B0(temp_s1, (s32) M2C_FIELD(arg0, u16 *, 0x26)) & 0xFFFF) >= 0x40)) {
            goto block_21;
        }
    }
    if ((u32) temp_s0 < 0x40001U) {
        if ((*(u8 *)D_00591E4C) == 0) {
            if ((func_009B30B0(temp_s1, (s32) M2C_FIELD(Pes6Ball_Current, u16 *, 0x58)) & 0xFFFF) < 0x31) {
                goto block_21;
            }
            goto block_19;
        }
block_19:
        return 0x80;
    }
block_21:
    return 0xFF;
}
