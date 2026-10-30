/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_009B30B0(s32, s32);
extern void *Pes6Ball_Current;
extern char D_00591E19[];
extern char D_00591E4C[];
extern char D_005926D8[];
extern char D_005926F4[];
extern char Pes6MatchSquads[];

s32 func_00C41920(void *arg0, s32 arg1) {
    f32 var_f0;
    s32 temp_a1;
    u8 temp_a0;

    temp_a1 = ((u64) ((s64) M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x8C) << 0x38) >> 0x3A) + 0x94;
    if ((M2C_FIELD(arg0, s32 *, 0x98) >= (((temp_a1 * -0x1DC) / 180) + ((u32) (temp_a1 * -0x1DC) >> 0x1F))) || (arg1 >= 0x10000) || (((func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x26), (s32) M2C_FIELD(arg0, u16 *, 0x28)) & 0xFFFF) < 0x11) && ((0x1700 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC)) < M2C_FIELD(arg0, s32 *, 0x1C)))) {
        if ((M2C_FIELD(Pes6Ball_Current, s32 *, 0x50) >= 0x2001) && ((func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x2C), (s32) M2C_FIELD(Pes6Ball_Current, u16 *, 0x58)) & 0xFFFF) < 0x61)) {
            return 0;
        }
        if ((func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x2C), (s32) M2C_FIELD(arg0, u16 *, 0x28)) & 0xFFFF) < 0x11) {
            if ((func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x2C), (s32) M2C_FIELD(arg0, u16 *, 0x26)) & 0xFFFF) < 0x11) {
                temp_a0 = M2C_FIELD(arg0, u8 *, 0);
                if (temp_a0 != (*(u8 *)D_00591E4C)) {
                    if ((s32) (*(u8 *)D_005926F4) >= 0) {
                        var_f0 = (f32) (*(u8 *)D_005926F4);
                    } else {
                        var_f0 = 2.0f * (f32) (((u8) (*(u8 *)D_005926F4) >> 1) | ((*(u8 *)D_005926F4) & 1));
                    }
                    if (!((*(f32 *)D_005926D8) <= var_f0) || (temp_a0 == (*(u8 *)D_00591E19))) {
                        goto block_19;
                    }
                    goto block_11;
                }
block_19:
                if (((arg1 >= 0x7901) && (M2C_FIELD(arg0, s32 *, 0x1C) >= 0xF01)) || (M2C_FIELD(arg0, s32 *, 0x1C) >= 0x1701)) {
                    return 1;
                }
                goto block_11;
            }
            goto block_11;
        }
block_11:
        return 0;
    }
    return 0;
}
