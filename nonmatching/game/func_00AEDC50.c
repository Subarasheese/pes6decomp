/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002AE670(s32);
extern s32 func_009B3070(s32, s32);
extern s32 func_009B33A0(void *, s32, s32);
extern s32 func_009B3480(void *, f32, f32);
extern s32 func_009B30B0(s32, s32);
M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
M2C_UNK func_00209A00(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00AADDF0(void *);                      /* extern */
s32 func_00AB3590(void *, M2C_UNK);                 /* extern */
s32 func_00B0B6B0(void *, M2C_UNK, s16, s32, s8, M2C_UNK, s32, s32, f32, s64); /* extern */
extern f32 *D_003E74CC;
extern void *Pes6Ball_Current;
extern char Pes6MatchPlayers[];
extern char D_005926D8[];
extern char D_005926FC[];
extern char Pes6MatchSquads[];

s32 func_00AEDC50(void *arg0, void *arg1) {
    f32 var_f0;
    s16 temp_s2_2;
    s32 temp_a2;
    s32 temp_f0;
    s32 temp_f1;
    s32 temp_s2;
    s32 temp_v0;
    s32 var_a0;
    s8 temp_s1;
    u16 temp_s5;
    u8 *temp_s0;
    u8 temp_v1;
    void *temp_v0_2;

    if (M2C_FIELD(arg0, s32 *, 0x1C) < 0x1B01) {
        if (M2C_FIELD(Pes6Ball_Current, s32 *, 0x50) < 0x400) {
            return 0;
        }
        if ((s32) (*(u8 *)D_005926FC) >= 0) {
            var_f0 = (f32) (*(u8 *)D_005926FC);
        } else {
            var_f0 = 2.0f * (f32) (((u8) (*(u8 *)D_005926FC) >> 1) | ((*(u8 *)D_005926FC) & 1));
        }
        if (!((*(f32 *)D_005926D8) <= var_f0)) {
            temp_v0 = func_002AE670(0xA);
            temp_a2 = ((u64) ((s64) M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x8C) << 0x38) >> 0x3A) + 0x94;
            temp_v0_2 = (temp_v0 * 4) + Pes6Ball_Current;
            if (M2C_FIELD(temp_v0_2, f32 *, 0x7FC) < (f32) (((temp_a2 * -0x90) / 183) + ((u32) (temp_a2 * -0x90) >> 0x1F))) {
                return 0;
            }
            temp_v1 = M2C_FIELD(arg1, u8 *, 1);
            temp_f1 = (s32) M2C_FIELD(temp_v0_2, f32 *, 0x47C);
            temp_f0 = (s32) M2C_FIELD(temp_v0_2, f32 *, 0xB7C);
            if (temp_v1 == 0xFF) {
                var_a0 = 1;
            } else {
                var_a0 = (s32) temp_v1 % 23;
            }
            temp_s0 = ((void *)Pes6MatchPlayers) + (var_a0 * 0x240);
            temp_s5 = M2C_FIELD(arg0, u16 *, 0x10C);
            if (func_009B33A0(temp_s0, temp_f1, temp_f0) < 0x19000) {
                return 0;
            }
            if ((func_009B30B0((s32) temp_s5, (s32) M2C_FIELD(Pes6Ball_Current, u16 *, 0x58)) & 0xFFFF) >= 0x50) {
                if ((func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x28), (s32) M2C_FIELD(Pes6Ball_Current, u16 *, 0x58)) & 0xFFFF) >= 0x60) {
                    temp_s2 = func_00AB3590(arg0, 0x314) & 0xFFFF;
                    temp_s1 = ((((func_009B3480(arg0, (f32) temp_f1, (f32) temp_f0) & 0xFFFF) - M2C_FIELD(((*temp_s0 * 2) + arg0), u16 *, 0x128)) + 0x10000) & 0xFFFF) < 0x8001;
                    temp_s2_2 = (temp_s5 - (((temp_s2 & 0xFFFF) * ((temp_s1 != 0) ? -1 : 1)) & 0xFFFF)) & 0xFFFF;
                    if (func_00B0B6B0(arg0, 0x314, temp_s2_2, M2C_FIELD(arg0, s32 *, 0x1C), temp_s1, 0, temp_v0, temp_v0, *D_003E74CC, 0) != 0) {
                        M2C_FIELD(arg0, s16 *, 0x1A) = 0xFF;
                        M2C_FIELD(arg0, s8 *, 0x66) = 0;
                        M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x2D) = temp_s1;
                        M2C_FIELD(arg0, s16 *, 0x2C) = temp_s2_2;
                        func_00209A00(M2C_FIELD(arg0, void **, 4), 0x314, 0);
                        func_00207390(M2C_FIELD(arg0, void **, 4), 4);
                        func_00AADDF0(arg0);
                        M2C_FIELD(arg0, s8 *, 0x66) = 0;
                        M2C_FIELD(arg0, s32 *, 0x94) = 1;
                        M2C_FIELD(arg0, s16 *, 0x36) = (s16) *temp_s0;
                        M2C_FIELD(arg0, s32 *, 0x9C) = 0;
                        M2C_FIELD(arg0, s8 *, 0x4A) = 0;
                        M2C_FIELD(arg0, s16 *, 0x38) = (s16) ((s32) (func_009B3070((s32) M2C_FIELD(arg0, u16 *, 0x26), (s32) temp_s2_2) & 0xFFFF) / temp_v0);
                        M2C_FIELD(arg0, s8 *, 0x16) = 0xC;
                        M2C_FIELD(arg0, s16 *, 0x18) = 0x28;
                        return 1;
                    }
                    return 0;
                }
                return 0;
            }
            return 0;
        }
        return 0;
    }
    return 0;
}
