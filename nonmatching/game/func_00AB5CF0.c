/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00AFBA70(s32);
extern s32 func_009B30B0(s32, s32);
extern s32 func_009B3070(s32, s32);
extern s32 func_009B3480(void *, f32, f32);
extern s32 func_009B33A0(void *, s32, s32);
f32 func_001CD9E0(f32);                             /* extern */
s32 func_00BBB990(s32, s32);                        /* extern */
s32 func_00BBB9C0(s32, s32);                        /* extern */
extern void *Pes6Ball_Current;
extern char Pes6MatchPlayers[];
extern char D_00591E4C[];

s32 func_00AB5CF0(void *arg0, s32 arg1, s32 arg2) {
    f32 var_f12;
    s32 temp_f0;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s2;
    s32 temp_v0;
    s32 var_a0;
    s32 var_a1;
    s32 var_s0_2;
    s32 var_s1;
    u8 *temp_a0_2;
    u8 *var_s0;
    u8 temp_a0;
    u8 temp_v1;
    u8 temp_v1_2;
    u8 temp_v1_3;

    temp_a0 = M2C_FIELD(arg0, u8 *, 0);
    var_s1 = arg2;
    if (temp_a0 == (*(u8 *)D_00591E4C)) {
        if (M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30) == 0x22E) {
            return 0;
        }
        temp_v1 = M2C_FIELD((((M2C_FIELD(arg0, u8 *, 0x13) ^ 1) * 0xB) + arg0), u8 *, 0x1B4);
        if (temp_v1 == 0xFF) {
            var_a1 = 1;
        } else {
            var_a1 = (s32) temp_v1 % 23;
        }
        var_s0 = ((void *)Pes6MatchPlayers) + (var_a1 * 0x240);
        if ((func_00AFBA70((s32) temp_a0) & 0xFF) == 0xFF) {
            var_a0 = 1;
        } else {
            var_a0 = (s32) (func_00AFBA70((s32) M2C_FIELD(arg0, u8 *, 0)) & 0xFF) % 23;
        }
        temp_a0_2 = ((void *)Pes6MatchPlayers) + (var_a0 * 0x240);
        if ((u32) M2C_FIELD(((*temp_a0_2 * 4) + arg0), u32 *, 0x158) < (u32) M2C_FIELD(((*var_s0 * 4) + arg0), u32 *, 0x158)) {
            var_s0 = temp_a0_2;
        }
        if ((func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x10C), (s32) M2C_FIELD(((M2C_FIELD(var_s0, u8 *, 0) * 2) + arg0), u16 *, 0x128)) & 0xFFFF) < 0x19) {
            if ((M2C_FIELD(var_s0, s32 *, 0x1C) < M2C_FIELD(arg0, s32 *, 0x1C)) && ((u32) M2C_FIELD(var_s0, u32 *, 0x114) < (u32) M2C_FIELD(arg0, u32 *, 0x114))) {
                temp_v1_2 = M2C_FIELD(var_s0, u8 *, 0);
                if ((u32) M2C_FIELD(((temp_v1_2 * 4) + arg0), u32 *, 0x158) < 0x14401U) {
                    temp_s0 = ((((M2C_FIELD(arg0, u16 *, 0x28) - M2C_FIELD(((temp_v1_2 * 2) + arg0), u16 *, 0x128)) + 0x10000) & 0xFFFF) < 0x8001) ? -1 : 1;
                    temp_s0_2 = ((func_009B3480(arg0, M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454), M2C_FIELD(Pes6Ball_Current, f32 *, 0x145C)) & 0xFFFF) - (temp_s0 << 0xD)) & 0xFFFF;
                    temp_v0 = func_009B33A0(arg0, (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454), (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x145C));
                    if (temp_v0 < 0) {
                        var_f12 = 2.0f * (f32) (((u32) temp_v0 >> 1) | (temp_v0 & 1));
                    } else {
                        var_f12 = (f32) temp_v0;
                    }
                    temp_f0 = (s32) func_001CD9E0(var_f12);
                    M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454) = (f32) (M2C_FIELD(arg0, f32 *, 0xE0) + (f32) func_00BBB990(temp_s0_2, temp_f0));
                    M2C_FIELD(Pes6Ball_Current, f32 *, 0x145C) = (f32) (M2C_FIELD(arg0, f32 *, 0xE8) + (f32) func_00BBB9C0(temp_s0_2, temp_f0));
                    return 1;
                }
            }
            goto block_23;
        }
block_23:
        temp_v1_3 = M2C_FIELD(var_s0, u8 *, 0);
        if ((u32) M2C_FIELD(((temp_v1_3 * 4) + arg0), u32 *, 0x158) >= 0x24001U) {
            var_s0_2 = 0x20;
        } else {
            var_s0_2 = 0x34;
            var_s1 = (((M2C_FIELD(arg0, u16 *, 0x28) - M2C_FIELD(((temp_v1_3 * 2) + arg0), u16 *, 0x128)) + 0x10000) & 0xFFFF) < 0x8001;
        }
        if ((func_009B3070((s32) M2C_FIELD(arg0, u16 *, 0x28), arg1) & 0xFFFF) >= 0x600) {
            return 0;
        }
        temp_s2 = (arg1 + ((((var_s1 != 0) ? -1 : 1) << 0xE) & 0xFFFF)) & 0xFFFF;
        M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454) = (f32) (M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454) + (f32) func_00BBB990(temp_s2, var_s0_2));
        M2C_FIELD(Pes6Ball_Current, f32 *, 0x145C) = (f32) (M2C_FIELD(Pes6Ball_Current, f32 *, 0x145C) + (f32) func_00BBB9C0(temp_s2, var_s0_2));
        if (var_s0_2 >= 0x34) {
            return 1;
        }
        return 0;
    }
    return 0;
}
