/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002AE670(s32);
f32 func_001CD9E0(f32);                             /* extern */
s32 func_009B30B0(u16, u16);                        /* extern */
s32 func_009B33A0(void *, s32, s32);                /* extern */
s32 func_00AA3540(void *);                          /* extern */
s32 func_00AFBA70(u8);                              /* extern */
extern void *Pes6Ball_Current;
extern char Pes6MatchPlayers[];
extern char D_00591E4C[];

s32 func_00AD0E50(void *arg0) {
    f32 var_f12;
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v0_2;
    s32 var_a0;
    s32 var_s0;
    s32 var_v0;
    s32 var_v0_2;
    void *temp_s1;
    void *temp_s2;
    void *temp_v0;

    if (M2C_FIELD(arg0, u8 *, 0x16) != 0xFB) {
        if ((*(u8 *)D_00591E4C) == 0) {
            return 1;
        }
        if ((M2C_FIELD(arg0, u8 *, 0) == (*(u8 *)D_00591E4C)) && !(M2C_FIELD(Pes6Ball_Current, f32 *, 0x7FC) <= -160.0f)) {
            var_v0 = (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x30);
            if (var_v0 <= 0) {
                var_v0 = -var_v0;
            }
            if ((var_v0 < 0xEB0) && ((u32) M2C_FIELD(arg0, u32 *, 0x110) < 0x14400U)) {
                goto block_35;
            }
            goto block_11;
        }
block_11:
        if (func_00AA3540(arg0) >= 0x64001) {
            temp_s0 = func_002AE670(0xA);
            if ((func_00AFBA70(M2C_FIELD(arg0, u8 *, 0)) & 0xFF) == 0xFF) {
                var_a0 = 1;
            } else {
                var_a0 = (s32) (func_00AFBA70(M2C_FIELD(arg0, u8 *, 0)) & 0xFF) % 23;
            }
            temp_s1 = ((void *)Pes6MatchPlayers) + (var_a0 * 0x240);
            temp_v0 = (temp_s0 * 4) + Pes6Ball_Current;
            temp_v0_2 = func_009B33A0(arg0, (s32) M2C_FIELD(temp_v0, f32 *, 0x47C), (s32) M2C_FIELD(temp_v0, f32 *, 0xB7C));
            if (temp_v0_2 < 0) {
                var_f12 = 2.0f * (f32) (((u32) temp_v0_2 >> 1) | (temp_v0_2 & 1));
            } else {
                var_f12 = (f32) temp_v0_2;
            }
            var_s0 = (s32) func_001CD9E0(var_f12);
            if ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x28), M2C_FIELD(temp_s1, u16 *, 0x28)) & 0xFFFF) >= 0x60) {
                temp_a1 = M2C_FIELD(temp_s1, s32 *, 0x1C);
                if ((0x1500 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC)) < temp_a1) {
                    var_v0_2 = temp_a1 >> 5;
                    if (temp_a1 < 0) {
                        var_v0_2 = (s32) (temp_a1 + 0x1F) >> 5;
                    }
                    var_s0 -= var_v0_2;
                }
            }
            if (var_s0 >= 0x281) {
                temp_s2 = Pes6Ball_Current;
                temp_s0_2 = func_009B33A0(arg0, (s32) M2C_FIELD(temp_s2, f32 *, 0x47C), (s32) M2C_FIELD(temp_s2, f32 *, 0xB7C));
                if ((u32) temp_s0_2 < func_009B33A0(temp_s1, (s32) M2C_FIELD(temp_s2, f32 *, 0x47C), (s32) M2C_FIELD(temp_s2, f32 *, 0xB7C))) {
                    goto block_35;
                }
                goto block_33;
            }
block_33:
            return 1;
        }
        return 1;
    }
block_35:
    return 0;
}
