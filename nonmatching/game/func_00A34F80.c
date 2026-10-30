/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


f32 func_001CD9E0(f32);                             /* extern */
s32 func_009B30B0(u16, u16);                        /* extern */
extern void *Pes6Ball_Current;
extern char Pes6MatchPlayers[];
extern char D_00591E4C[];

s32 func_00A34F80(void *arg0, u16 arg1, u16 arg2, s32 arg3, s32 arg4) {
    s32 temp_fp;
    s32 temp_s0;
    s32 var_a0;
    s32 var_v0;
    u16 temp_s5;
    u8 temp_v1;
    u8 temp_v1_2;
    void *temp_s1;

    if (M2C_FIELD(arg0, u8 *, 0) != (*(u8 *)D_00591E4C)) {
        temp_v1 = M2C_FIELD((((M2C_FIELD(arg0, u8 *, 0x13) ^ 1) * 0xB) + arg0), u8 *, 0x1B4);
        if (temp_v1 == 0xFF) {
            var_a0 = 1;
        } else {
            var_a0 = (s32) temp_v1 % 23;
        }
        temp_s1 = ((void *)Pes6MatchPlayers) + (var_a0 * 0x240);
        temp_v1_2 = M2C_FIELD(temp_s1, u8 *, 0);
        temp_s5 = M2C_FIELD(((temp_v1_2 * 2) + arg0), u16 *, 0x128);
        temp_s0 = M2C_FIELD(((temp_v1_2 * 4) + arg0), s32 *, 0x158);
        if (M2C_FIELD(temp_s1, s32 *, 0x1C) >= 0x1100) {
            goto block_6;
        }
        if (((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x10C), temp_s5) & 0xFFFF) < 0x29) && ((func_009B30B0(arg1, temp_s5) & 0xFFFF) < 0x29) && ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x10C), M2C_FIELD(Pes6Ball_Current, u16 *, 0x58)) & 0xFFFF) >= 0x71) && ((u32) temp_s0 < (u32) M2C_FIELD(arg0, u32 *, 0x110)) && (temp_s0 < 0x24000)) {
            temp_fp = M2C_FIELD(arg0, s32 *, 0x1C);
            if ((M2C_FIELD(temp_s1, s32 *, 0x1C) + ((s32) func_001CD9E0((f32) temp_s0) * 6)) < temp_fp) {
                return 1;
            }
        }
block_6:
        if (arg4 < 0x1101) {
            if (temp_s0 < 0x10001) {
                return 1;
            }
            goto block_9;
        }
block_9:
        if ((arg4 < 0x1301) && (M2C_FIELD(arg0, u16 *, 0x3A) == 5) && (temp_s0 < 0x14401)) {
            return 1;
        }
        if (((func_009B30B0(arg1, M2C_FIELD(arg0, u16 *, 0x10C)) & 0xFFFF) < 0x21) && ((u32) M2C_FIELD(arg0, u32 *, 0x114) < (u32) M2C_FIELD(temp_s1, u32 *, 0x114))) {
            if (!(M2C_FIELD(Pes6Ball_Current, f32 *, 0x7FC) <= -384.0f) && (fabsf(M2C_FIELD(Pes6Ball_Current, f32 *, 0x30)) < 6016.0f)) {
                goto block_27;
            }
            if (arg4 < 0x1501) {
                goto block_29;
            }
block_27:
            goto block_65;
        }
block_29:
        if ((func_009B30B0(arg1, M2C_FIELD(Pes6Ball_Current, u16 *, 0x58)) & 0xFFFF) < 0x41) {
            if (((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x26), arg1) & 0xFFFF) < 0x21) && ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x26), arg2) & 0xFFFF) >= 0x40)) {
                goto block_65;
            }
            goto block_32;
        }
block_32:
        if ((arg3 >= 0x201) && ((func_009B30B0(arg1, temp_s5) & 0xFFFF) >= 0x10)) {
            goto block_65;
        }
        if (((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x26), M2C_FIELD(temp_s1, u16 *, 0x26)) & 0xFFFF) < 0x21) && ((0x1700 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC)) < M2C_FIELD(temp_s1, s32 *, 0x1C))) {
            goto block_65;
        }
        if (((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x26), M2C_FIELD(arg0, u16 *, 0x28)) & 0xFFFF) < 0x21) && (((0x1700 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC)) < M2C_FIELD(arg0, s32 *, 0x1C)) || (arg3 >= 0x201))) {
            goto block_65;
        }
        if ((temp_s0 >= 0x10000) && ((func_009B30B0(arg1, temp_s5) & 0xFFFF) >= 0x20) && (arg3 >= 0x201)) {
            goto block_65;
        }
        if (((func_009B30B0(M2C_FIELD(Pes6Ball_Current, u16 *, 0x58), M2C_FIELD(arg0, u16 *, 0x10C)) & 0xFFFF) < 0x41) && ((func_009B30B0(M2C_FIELD(Pes6Ball_Current, u16 *, 0x58), arg1) & 0xFFFF) < 0x41)) {
            if ((arg3 < 0x181) && (M2C_FIELD(Pes6Ball_Current, s32 *, 0x50) < 0x1001)) {
                if (!(M2C_FIELD(Pes6Ball_Current, f32 *, 0x7FC) <= -160.0f)) {
                    var_v0 = (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x30);
                    if (var_v0 <= 0) {
                        var_v0 = -var_v0;
                    }
                    if (var_v0 < 0xEB0) {
                        goto block_65;
                    }
                    goto block_58;
                }
                goto block_58;
            }
            goto block_65;
        }
block_58:
        if (M2C_FIELD(temp_s1, u8 *, 0) == (*(u8 *)D_00591E4C)) {
            if ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x26), M2C_FIELD(temp_s1, u16 *, 0x26)) & 0xFFFF) >= 0x20) {
                goto block_65;
            }
            goto block_61;
        }
block_61:
        if (temp_s0 < 0x24001) {
            return 1;
        }
        goto block_65;
    }
block_65:
    return 0;
}
