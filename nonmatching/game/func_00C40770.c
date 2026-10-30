/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_0027D2F0(int);
extern u32 func_00288670(u32, u32);
extern s32 func_002AE670(s32);
s32 func_009B9BA0(void *);                          /* extern */
extern void *Pes6Ball_Current;
extern char D_00591E19[];
extern char D_00591E4C[];
extern char D_005926D8[];
extern char D_005926E0[];
extern char D_005926F0[];
extern char Pes6MatchSquads[];

s32 func_00C40770(void *arg0) {
    f32 var_f0;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 temp_a0_7;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s1_3;
    s32 temp_s1_4;
    s32 temp_s1_5;
    s32 temp_s1_6;
    s32 temp_v0;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_6;
    s32 temp_v1_7;
    s32 temp_v1_8;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v0_6;
    s32 var_v0_7;
    void *temp_v1;
    void *temp_v1_5;

    if (M2C_FIELD(arg0, u8 *, 0) == (*(u8 *)D_00591E19)) {
        if ((s32) (*(u8 *)D_005926F0) >= 0) {
            var_f0 = (f32) (*(u8 *)D_005926F0);
        } else {
            var_f0 = 2.0f * (f32) (((u8) (*(u8 *)D_005926F0) >> 1) | ((*(u8 *)D_005926F0) & 1));
        }
        if (!((*(f32 *)D_005926D8) < var_f0)) {
            return 1;
        }
        goto block_6;
    }
block_6:
    if ((*(u8 *)D_00591E4C) == 0) {
        temp_s1 = M2C_FIELD(((func_002AE670(0xC) * 4) + Pes6Ball_Current), s32 *, 0xFC);
        temp_a0 = (func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x83) & 0x7F, 0x14U) << 5) + 0x5000;
        if (temp_s1 >= (((temp_a0 * 7) / 10) + ((u32) (temp_a0 * 7) >> 0x1F))) {
            temp_v0 = M2C_FIELD(arg0, s32 *, 0xA4);
            switch (temp_v0) {                      /* irregular */
            case 0x3B8:
            case 0x3BA:
            case 0x3BC:
            case 0x3B6:
            case 0x3B4:
            case 0x3B9:
            case 0x3BB:
            case 0x3B5:
                temp_v1 = (M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900));
                if ((M2C_FIELD(temp_v1, u8 *, 0xAF) & 0x7F) < 0x62) {
                    temp_s1_2 = M2C_FIELD(Pes6Ball_Current, s32 *, 0x50);
                    if (((func_00288670(M2C_FIELD(temp_v1, u8 *, 0x83) & 0x7F, 0x14U) * 0x28) + 0x4800) < temp_s1_2) {
                        temp_a0_2 = func_009B9BA0(arg0) + 0x14;
                        temp_v1_2 = M2C_FIELD(Pes6Ball_Current, s32 *, 0x50);
                        var_v0_2 = temp_v1_2 >> 0xC;
                        if (temp_v1_2 < 0) {
                            var_v0_2 = (s32) (temp_v1_2 + 0xFFF) >> 0xC;
                        }
                        if ((*(f32 *)D_005926D8) <= (f32) func_002AE670(var_v0_2 + temp_a0_2)) {
                            goto block_120;
                        }
                        goto block_96;
                    }
                }
block_96:
                if (!((*(f32 *)D_005926D8) < (f32) func_002AE670(func_009B9BA0(arg0) + 0xE))) {
                    temp_s1_3 = M2C_FIELD(Pes6Ball_Current, s32 *, 0x50);
                    if (((func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x83) & 0x7F, 0x14U) << 5) + 0x6800) < temp_s1_3) {
                        temp_a0_3 = func_009B9BA0(arg0) + 0x14;
                        temp_v1_3 = M2C_FIELD(Pes6Ball_Current, s32 *, 0x50);
                        var_v0_3 = temp_v1_3 >> 0xC;
                        if (temp_v1_3 < 0) {
                            var_v0_3 = (s32) (temp_v1_3 + 0xFFF) >> 0xC;
                        }
                        if ((*(f32 *)D_005926D8) < (f32) func_002AE670(var_v0_3 + temp_a0_3)) {
                            goto block_120;
                        }
                        goto block_95;
                    }
block_95:
                    return 1;
                }
block_120:
                return 0;
            case 0x3BF:
            case 0x3BE:
            case 0x161:
            case 0x3B7:
                if (!((*(f32 *)D_005926D8) < (f32) func_002AE670(func_009B9BA0(arg0) + 0x18))) {
                    if (func_0027D2F0(M2C_FIELD(((func_002AE670(0xC) * 4) + Pes6Ball_Current), s32 *, 0xFC)) < 0x5B) {
                        if (((*(f32 *)D_005926D8) <= (f32) func_002AE670(0x30)) && (func_0027D2F0(M2C_FIELD(((func_002AE670(0xC) * 4) + Pes6Ball_Current), s32 *, 0xFC)) >= 0x47)) {
                            goto block_120;
                        }
                        temp_a0_4 = func_009B9BA0(arg0) + 0x14;
                        temp_v1_4 = M2C_FIELD(Pes6Ball_Current, s32 *, 0x50);
                        var_v0_4 = temp_v1_4 >> 0xC;
                        if (temp_v1_4 < 0) {
                            var_v0_4 = (s32) (temp_v1_4 + 0xFFF) >> 0xC;
                        }
                        temp_s1_4 = func_002AE670(var_v0_4 + temp_a0_4);
                        temp_s1_5 = temp_s1_4 + func_002AE670(0xC);
                        if ((*(f32 *)D_005926D8) < (f32) ((func_002AE670(0xA) + temp_s1_5) - (*(u8 *)D_005926E0))) {
                            temp_s0 = M2C_FIELD(((func_002AE670(0xC) * 4) + Pes6Ball_Current), s32 *, 0xFC);
                            if (((func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x83) & 0x7F, 0x14U) << 5) + 0x4800) < temp_s0) {
                                goto block_120;
                            }
                        }
                        goto block_95;
                    }
                    goto block_120;
                }
                goto block_120;
            case 0x3C0:
            case 0x3C1:
            case 0x3C2:
            case 0x3BD:
                temp_v1_5 = (M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900));
                if ((M2C_FIELD(temp_v1_5, u8 *, 0xAF) & 0x7F) < 0x62) {
                    temp_s1_6 = M2C_FIELD(Pes6Ball_Current, s32 *, 0x50);
                    if (((func_00288670(M2C_FIELD(temp_v1_5, u8 *, 0x83) & 0x7F, 0x14U) * 0x28) + 0x4800) < temp_s1_6) {
                        temp_a0_5 = func_009B9BA0(arg0) + 0x18;
                        temp_v1_6 = M2C_FIELD(Pes6Ball_Current, s32 *, 0x50);
                        var_v0_5 = temp_v1_6 >> 0xC;
                        if (temp_v1_6 < 0) {
                            var_v0_5 = (s32) (temp_v1_6 + 0xFFF) >> 0xC;
                        }
                        if ((*(f32 *)D_005926D8) <= (f32) func_002AE670(var_v0_5 + temp_a0_5)) {
                            goto block_120;
                        }
                        goto block_117;
                    }
                }
block_117:
                temp_a0_6 = func_009B9BA0(arg0) + 0x18;
                temp_v1_7 = M2C_FIELD(Pes6Ball_Current, s32 *, 0x50);
                var_v0_6 = temp_v1_7 >> 0xC;
                if (temp_v1_7 < 0) {
                    var_v0_6 = (s32) (temp_v1_7 + 0xFFF) >> 0xC;
                }
                if ((*(f32 *)D_005926D8) <= (f32) func_002AE670(var_v0_6 + temp_a0_6)) {
                    goto block_120;
                }
                goto block_95;
            case 0x3CE:
            case 0x3CD:
            case 0x3D1:
            case 0x3C7:
            case 0x3C8:
            case 0x271:
            case 0x270:
            case 0x273:
            case 0x26C:
            case 0x26D:
            case 0x3CA:
            case 0x3CC:
            case 0x3D0:
            case 0x3C6:
            case 0x3C4:
                if ((*(f32 *)D_005926D8) < (f32) func_002AE670(func_009B9BA0(arg0) + 0xE)) {
                    goto block_120;
                }
                goto block_95;
            case 0x19E:
            case 0x191:
            case 0x17B:
            case 0x1A:
            case 0x1DD:
            case 0xB:
                if ((*(f32 *)D_005926D8) < (f32) func_002AE670(func_009B9BA0(arg0) + 0x10)) {
                    goto block_120;
                }
                goto block_95;
            default:
                temp_a0_7 = func_009B9BA0(arg0) + 0x14;
                temp_v1_8 = M2C_FIELD(Pes6Ball_Current, s32 *, 0x50);
                var_v0_7 = temp_v1_8 >> 0xC;
                if (temp_v1_8 < 0) {
                    var_v0_7 = (s32) (temp_v1_8 + 0xFFF) >> 0xC;
                }
                if ((*(f32 *)D_005926D8) < (f32) func_002AE670(var_v0_7 + temp_a0_7)) {
                    goto block_120;
                }
                goto block_95;
            }
        } else {
            var_v0 = 1;
            if (!((*(f32 *)D_005926D8) < (f32) func_002AE670(func_009B9BA0(arg0) + 0x10))) {
                var_v0 = 0;
            }
            return var_v0 ^ 1;
        }
    } else {
        return 1;
    }
}
