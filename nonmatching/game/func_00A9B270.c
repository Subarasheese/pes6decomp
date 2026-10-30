/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00288670(u32, u32);
s32 func_009B30B0(u16, u16);                        /* extern */
s32 func_00A07FC0(void *);                          /* extern */
s32 func_00A13E50(s32, s32);                        /* extern */
s32 func_00A1B4A0(void *);                          /* extern */
s32 func_00A1FE80(s32, s32);                        /* extern */
M2C_UNK func_00C01A40(void *, void *, M2C_UNK, M2C_UNK); /* extern */
extern void *Pes6Ball_Current;
extern char Pes6MatchPlayers[];
extern char D_00591DC4[];
extern char D_00591E4C[];
extern char D_005926D8[];
extern char D_005926E4[];
extern char D_005926F4[];
extern char D_005926FC[];
extern char Pes6MatchSquads[];

s32 func_00A9B270(void *arg0, s32 arg1) {
    f32 var_f0;
    f32 var_f0_2;
    s32 temp_a0_2;
    s32 temp_s4;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1_3;
    s32 var_a0;
    s32 var_s1;
    s32 var_s3;
    s32 var_v0;
    s32 var_v0_2;
    u16 temp_v1_2;
    u16 temp_v1_4;
    u32 temp_s3;
    u32 temp_v0;
    u8 temp_v1;
    u8 var_v0_3;
    void *temp_a0;
    void *temp_s0;

    var_s1 = arg1;
    temp_v1 = M2C_FIELD((((M2C_FIELD(arg0, u8 *, 0x13) ^ 1) * 0xB) + arg0), u8 *, 0x1B4);
    temp_s4 = var_s1;
    if (temp_v1 != 0xFF) {
        var_a0 = (s32) temp_v1 % 23;
    } else {
        var_a0 = 1;
    }
    temp_s0 = ((void *)Pes6MatchPlayers) + (var_a0 * 0x240);
    if (((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x28), M2C_FIELD(((M2C_FIELD(temp_s0, u8 *, 0) * 2) + arg0), u16 *, 0x128)) & 0xFFFF) < 0x11) && ((u32) M2C_FIELD(((M2C_FIELD(temp_s0, u8 *, 0) * 4) + arg0), u32 *, 0x158) < 0x9C40U) && (M2C_FIELD(temp_s0, s32 *, 0x1C) >= 0x1701) && ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x28), M2C_FIELD(temp_s0, u16 *, 0x28)) & 0xFFFF) < 0x21)) {
        var_s1 = func_00A13E50(var_s1, M2C_FIELD(temp_s0, s32 *, 0x1C) - 0x400);
    }
    if ((u32) M2C_FIELD(((M2C_FIELD(temp_s0, u8 *, 0) * 4) + arg0), u32 *, 0x158) < 0x7901U) {
        temp_s3 = func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x6C) & 0x7F, 0x32U);
        var_s3 = temp_s3 - func_00288670(M2C_FIELD(((M2C_FIELD(temp_s0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(temp_s0, u8 *, 0x12) * 0x6900))), u8 *, 0x6C) & 0x7F, 0x32U);
        if (M2C_FIELD(arg0, u8 *, 0) == (*(u8 *)D_00591E4C)) {
            temp_v0 = func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x72) & 0x7F, 0x28U);
            var_s3 -= ((0x63 - temp_v0) / 5) + ((u32) (0x63 - temp_v0) >> 0x1F);
        }
        if (M2C_FIELD(arg0, u8 *, 0) != (*(u8 *)D_00591E4C)) {
            goto block_16;
        }
        if ((s32) (*(u8 *)D_005926FC) >= 0) {
            var_f0 = (f32) (*(u8 *)D_005926FC);
        } else {
            var_f0 = 2.0f * (f32) (((u8) (*(u8 *)D_005926FC) >> 1) | ((*(u8 *)D_005926FC) & 1));
        }
        if ((*(f32 *)D_005926D8) <= var_f0) {
            var_v0 = func_00A1FE80(var_s3, 0xA);
            goto block_23;
        }
block_16:
        if (M2C_FIELD(temp_s0, u8 *, 0) == (*(u8 *)D_00591E4C)) {
            if ((s32) (*(u8 *)D_005926F4) >= 0) {
                var_f0_2 = (f32) (*(u8 *)D_005926F4);
            } else {
                var_f0_2 = 2.0f * (f32) (((u8) (*(u8 *)D_005926F4) >> 1) | ((*(u8 *)D_005926F4) & 1));
            }
            if (((*(f32 *)D_005926D8) <= var_f0_2) && ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x10C), M2C_FIELD(Pes6Ball_Current, u16 *, 0x58)) & 0xFFFF) >= 0x30)) {
                var_v0 = func_00A13E50(var_s3, -0xA);
block_23:
                var_s3 = var_v0;
            }
        }
        temp_a0 = M2C_FIELD(arg0, void **, 4);
        if ((M2C_FIELD(temp_a0, u16 *, 0x30) == 0x22E) && !(M2C_FIELD(temp_a0, f32 *, 0x38) < 16.0f)) {
            if ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x28), M2C_FIELD(((M2C_FIELD(temp_s0, u8 *, 0) * 2) + arg0), u16 *, 0x128)) & 0xFFFF) < 0x68) {
                var_s3 = 0;
                goto block_35;
            }
            if (var_s3 <= 0) {
                var_s1 = ((var_s1 * 0x62) / 100) + ((u32) (var_s1 * 0x62) >> 0x1F);
            }
            return var_s1;
        }
block_35:
        temp_v1_2 = M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), u16 *, 0x30);
        if ((temp_v1_2 != 0x29) && (temp_v1_2 != 0x28) && (temp_v1_2 != 0x27) && (temp_v1_2 != 0x2A) && (temp_v1_2 != 0x22E)) {

        } else {
            if (var_s3 >= 0) {
                var_v0_2 = func_00A13E50(var_s1, M2C_FIELD(temp_s0, s32 *, 0x1C) + 0x200 + (var_s3 * 0x10));
            } else {
                var_v0_2 = func_00A13E50(var_s1, M2C_FIELD(temp_s0, s32 *, 0x1C) + 0x80);
            }
            var_s1 = func_00A13E50(func_00A1FE80(func_00A1FE80(var_v0_2, temp_s4 - 0x800), 0x1300), temp_s4);
        }
        if (M2C_FIELD(arg0, u8 *, 0x16) == 0x10) {
            if (func_00A07FC0(temp_s0) != 0) {
                var_s3 = func_00A13E50(var_s3, -0x14);
            }
        }
        if (var_s3 <= 0) {
            temp_v0_2 = func_00A13E50(-var_s3, 0x32) * 0x10;
            if (temp_v0_2 >= var_s1) {
                var_s1 = 0;
            } else {
                var_s1 -= temp_v0_2;
            }
            if (((u32) (*(u32 *)D_00591DC4) % (u8) (*(u8 *)D_005926E4)) == 0) {
                if (M2C_FIELD(temp_s0, u8 *, 0x61) == 0) {
                    M2C_FIELD(temp_s0, u8 *, 0x61) = 0U;
                } else {
                    var_v0_3 = M2C_FIELD(temp_s0, u8 *, 0x61) - 1;
                    goto block_61;
                }
            }
        } else {
            temp_v0_3 = func_00A13E50(var_s3, 0x32);
            temp_a0_2 = temp_v0_3 * 4;
            if ((temp_a0_2 < 0x50) && (temp_a0_2 < M2C_FIELD(arg0, s32 *, 0x1C))) {
                var_s1 -= temp_a0_2;
            }
            if (((u32) (*(u32 *)D_00591DC4) % (u8) (*(u8 *)D_005926E4)) == 0) {
                temp_v1_3 = ((temp_v0_3 * 4) / 10) + ((u32) temp_a0_2 >> 0x1F);
                if (temp_v1_3 >= (s32) M2C_FIELD(temp_s0, u8 *, 0x61)) {
                    M2C_FIELD(temp_s0, u8 *, 0x61) = 0U;
                } else {
                    var_v0_3 = M2C_FIELD(temp_s0, u8 *, 0x61) - (temp_v1_3 & 0xFF);
block_61:
                    M2C_FIELD(temp_s0, u8 *, 0x61) = var_v0_3;
                }
            }
        }
        if (M2C_FIELD(arg0, u8 *, 0x16) == 0xC) {
            return var_s1;
        }
        temp_v1_4 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30);
        if ((temp_v1_4 == 0x29) || (temp_v1_4 == 0x28) || (temp_v1_4 == 0x27) || (temp_v1_4 == 0x2A) || (temp_v1_4 == 0x22E)) {
            if (func_00A1B4A0(temp_s0) == 0) {
                if ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x28), M2C_FIELD(temp_s0, u16 *, 0x28)) & 0xFFFF) < 0x21) {
                    if ((func_009B30B0(M2C_FIELD(((M2C_FIELD(temp_s0, u8 *, 0) * 2) + arg0), u16 *, 0x128), M2C_FIELD(arg0, u16 *, 0x10C)) & 0xFFFF) >= 0x21) {
                        if ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x28), M2C_FIELD(temp_s0, u16 *, 0x26)) & 0xFFFF) < 0x21) {
                            if ((func_009B30B0(M2C_FIELD(temp_s0, u16 *, 0x26), M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0) * 2) + temp_s0), u16 *, 0x128)) & 0xFFFF) < 0x60) {
                                goto block_92;
                            }
                        } else {
                            goto block_92;
                        }
                    }
                } else {
block_92:
                    if (M2C_FIELD(temp_s0, u8 *, 0x61) == 0) {
                        func_00C01A40(arg0, temp_s0, 0, 1);
                    }
                }
            }
        }
        return var_s1;
    }
    return var_s1;
}
