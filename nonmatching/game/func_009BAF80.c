/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_009F42B0(void *, s32);
extern s32 func_00BBB8C0(s32);
extern s32 func_009B30B0(s32, s32);
extern s32 func_00BBB780(s64);
extern s32 func_002AE670(s32);
extern s32 func_009B3070(s32, s32);
extern s32 func_009B3480(void *, f32, f32);
extern u32 func_00288670(u32, u32);
extern s32 func_009B33A0(void *, s32, s32);
f32 func_001CD9E0(f32);                             /* extern */
s32 func_00BBB990(s32, s32);                        /* extern */
extern void *Pes6Ball_Current;
extern char D_00591BBC[];
extern char D_00591E19[];
extern char D_005926D8[];
extern char D_005926DD[];
extern char D_005926DE[];
extern char D_005926E0[];
extern char Pes6MatchSquads[];

s32 func_009BAF80(void *arg0) {
    f32 var_f0;
    f32 var_f12;
    s32 temp_a0;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_5;
    s32 temp_v0_7;
    s32 var_s2;
    s32 var_s3;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_4;
    s32 var_v1;
    s32 var_v1_2;
    u8 var_v0_3;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_6;

    if ((s32) (*(u8 *)D_005926DD) >= 0) {
        var_f0 = (f32) (*(u8 *)D_005926DD);
    } else {
        var_f0 = 2.0f * (f32) (((u8) (*(u8 *)D_005926DD) >> 1) | ((*(u8 *)D_005926DD) & 1));
    }
    if ((*(f32 *)D_005926D8) <= var_f0) {
        return 0;
    }
    if (M2C_FIELD(arg0, u8 *, 0x62) != 0) {
        temp_v0 = func_002AE670(0xA);
        if (M2C_FIELD(arg0, u8 *, 0x24) != 1) {
            goto block_11;
        }
        if ((s32) (*(u8 *)D_00591BBC) < 2) {
            temp_s1 = func_002AE670(func_00BBB8C0(3) + 5);
            if ((func_009B30B0((s32) M2C_FIELD(Pes6Ball_Current, u16 *, 0x58), (s32) M2C_FIELD(arg0, u16 *, 0x10C)) & 0xFFFF) >= 0x41) {
                temp_v0_2 = func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x83) & 0x7F, 0x14U);
                if (temp_v0_2 < 0x33) {
                    var_v0 = 5;
                } else if (temp_v0_2 >= 0x60) {
                    var_v0 = -1;
                } else if (temp_v0_2 >= 0x5B) {
                    var_v0 = 0;
                } else if (temp_v0_2 < 0x51) {
                    var_v0 = 2;
                } else {
                    var_v0 = 1;
                }
                if (((*(f32 *)D_005926D8) < (f32) (temp_s1 + func_002AE670((var_v0 + 0xC) - ((u64) ((s64) M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x86) << 0x38) >> 0x3F)))) && (M2C_FIELD(arg0, u8 *, 0) != (*(u8 *)D_00591E19))) {
                    return 0;
                }
                goto block_83;
            }
            goto block_83;
        }
block_11:
        temp_s1_2 = temp_v0 * 4;
        temp_v0_3 = temp_s1_2 + Pes6Ball_Current;
        temp_s2 = (M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x2D) != 0) ? -1 : 1;
        temp_s2_2 = func_009B3070((M2C_FIELD(arg0, u16 *, 0x2C) - (temp_s2 << 0xE)) & 0xFFFF, func_009B3480(arg0, M2C_FIELD(temp_v0_3, f32 *, 0x47C), M2C_FIELD(temp_v0_3, f32 *, 0xB7C))) & 0xFFFF;
        temp_v0_4 = temp_s1_2 + Pes6Ball_Current;
        temp_v0_5 = func_009B33A0(arg0, (s32) M2C_FIELD(temp_v0_4, f32 *, 0x47C), (s32) M2C_FIELD(temp_v0_4, f32 *, 0xB7C));
        if (temp_v0_5 < 0) {
            var_f12 = 2.0f * (f32) (((u32) temp_v0_5 >> 1) | (temp_v0_5 & 1));
        } else {
            var_f12 = (f32) temp_v0_5;
        }
        var_v0_2 = func_00BBB990(temp_s2_2, (s32) func_001CD9E0(var_f12));
        if (var_v0_2 <= 0) {
            var_v0_2 = -var_v0_2;
        }
        var_s2 = var_v0_2;
        if (var_v0_2 >= 0x101) {
            var_s2 = 0x100;
        }
        if (!(M2C_FIELD((temp_s1_2 + Pes6Ball_Current), f32 *, 0x7FC) < (f32) func_009F42B0(arg0, -0x180))) {
            var_s3 = (var_s2 / 96) + ((u32) var_s2 >> 0x1F);
        } else {
            var_v1 = var_s2 >> 6;
            if (var_s2 < 0) {
                var_v1 = (s32) (var_s2 + 0x3F) >> 6;
            }
            var_s3 = (*(u8 *)D_005926DE) + var_v1;
        }
        if (func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x83) & 0x7F, 0x14U) >= 0x56) {
            if ((var_s2 < 0xA0) && ((func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x70) & 0x7F, 0x32U) >= 0x5F) || (func_00BBB780((s64) ((func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x70) & 0x7F, 0x32U) - 0x50) << 0x30) >> 0x30) != 0))) {
                var_v0_3 = func_002AE670(0xA) - (*(u8 *)D_005926DE);
            } else {
                goto block_30;
            }
        } else {
block_30:
            if ((M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0xAF) & 0x7F) >= 0x33) {
                var_v0_3 = func_002AE670(0xA) - (*(u8 *)D_005926E0);
            } else {
                var_v0_3 = (*(u8 *)D_005926DE);
            }
        }
        temp_v0_6 = (var_v0_3 * 4) + Pes6Ball_Current;
        temp_a0 = func_009B30B0((s32) M2C_FIELD(Pes6Ball_Current, u16 *, 0x58), func_009B3480(arg0, M2C_FIELD(temp_v0_6, f32 *, 0x47C), M2C_FIELD(temp_v0_6, f32 *, 0xB7C))) & 0xFFFF;
        var_v1_2 = var_s2 >> 4;
        if (var_s2 < 0) {
            var_v1_2 = (s32) (var_s2 + 0xF) >> 4;
        }
        if ((0x30 - var_v1_2) < temp_a0) {
            temp_v0_7 = func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x83) & 0x7F, 0x14U);
            if (temp_v0_7 < 0x33) {
                var_v0_4 = 5;
            } else if (temp_v0_7 >= 0x60) {
                var_v0_4 = -1;
            } else if (temp_v0_7 >= 0x5B) {
                var_v0_4 = 0;
            } else if (temp_v0_7 < 0x51) {
                var_v0_4 = 2;
            } else {
                var_v0_4 = 1;
            }
            if (((*(f32 *)D_005926D8) < (f32) (var_s3 + func_002AE670((var_v0_4 + 0xC) - ((u64) ((s64) M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x86) << 0x38) >> 0x3F)))) && (M2C_FIELD(arg0, u8 *, 0) != (*(u8 *)D_00591E19))) {
                return 0;
            }
            goto block_83;
        }
        goto block_83;
    }
block_83:
    return 1;
}
