/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


f32 func_001CD9E0(f32);                             /* extern */
s32 func_00952420(void *, u16, M2C_UNK, M2C_UNK);   /* extern */
s32 func_00952A50(u16);                             /* extern */
M2C_UNK func_0096D0A0(void *, u16, M2C_UNK);        /* extern */
s32 func_009B3070(u16, u16);                        /* extern */
s32 func_009B33A0(void *, s16, s16);                /* extern */
extern char Pes6MatchPlayers[];

s32 func_00C0CFA0(void *arg0, void *arg1) {
    f32 var_f12;
    f32 var_f12_2;
    s32 temp_s7;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_s4;
    s32 var_s4_2;
    s32 var_s5;
    u16 temp_s4;
    u16 temp_s6;
    u16 temp_v0;
    u16 var_s0;
    u8 temp_v1;
    u8 temp_v1_2;
    u8 temp_v1_3;
    u8 temp_v1_4;
    u8 var_v0;
    void *var_s1;

    temp_v1 = M2C_FIELD(arg1, u8 *, 0x30);
    var_s0 = M2C_FIELD(arg1, u16 *, 0x28);
    if (temp_v1 != 0xFF) {
        var_a0 = (s32) temp_v1 % 23;
    } else {
        var_a0 = 1;
    }
    var_s1 = ((void *)Pes6MatchPlayers) + (var_a0 * 0x240);
    if (M2C_FIELD(arg1, u8 *, 0x2B) != 0) {

    } else {
        M2C_FIELD(arg1, u8 *, 0x30) = (u8) M2C_FIELD((((M2C_FIELD(arg0, u8 *, 0x13) ^ 1) * 0xB) + arg0), u8 *, 0x1B4);
        temp_v1_2 = M2C_FIELD(arg1, u8 *, 0x30);
        if (temp_v1_2 == 0xFF) {
            var_a0_2 = 1;
        } else {
            var_a0_2 = (s32) temp_v1_2 % 23;
        }
        var_s1 = ((void *)Pes6MatchPlayers) + (var_a0_2 * 0x240);
        if ((u32) M2C_FIELD(arg0, u32 *, 0x124) < (u32) M2C_FIELD(var_s1, u32 *, 0x11C)) {
            M2C_FIELD(arg1, u8 *, 0x30) = (u8) M2C_FIELD((((M2C_FIELD(arg0, u8 *, 0x13) ^ 1) * 0xB) + arg0), u8 *, 0x1B5);
            temp_v1_3 = M2C_FIELD(arg1, u8 *, 0x30);
            if (temp_v1_3 == 0xFF) {
                var_a0_3 = 1;
            } else {
                var_a0_3 = (s32) temp_v1_3 % 23;
            }
            var_s1 = ((void *)Pes6MatchPlayers) + (var_a0_3 * 0x240);
        }
        temp_s7 = func_009B3070(M2C_FIELD(arg0, u16 *, 0x2A), M2C_FIELD(var_s1, u16 *, 0x26)) & 0xFFFF;
        M2C_FIELD(arg1, u8 *, 0x2B) = 3U;
        temp_v0 = M2C_FIELD(arg0, u16 *, 0x2A);
        temp_s4 = (temp_v0 - 0x2000) & 0xFFFF;
        temp_s6 = (temp_v0 + 0x2000) & 0xFFFF;
        var_s5 = func_00952A50(temp_s4) & 0xFF;
        var_s4 = func_00952A50(temp_s6) & 0xFF;
        if ((func_009B3070(temp_s4, M2C_FIELD(arg0, u16 *, 0x26)) & 0xFFFF) < 0x1000) {
            var_s5 += 0xA;
        }
        if ((func_009B3070(temp_s6, M2C_FIELD(arg0, u16 *, 0x26)) & 0xFFFF) < 0x1000) {
            var_s4 += 0xA;
        }
        if (var_s5 >= var_s4) {
            var_v0 = 2;
        } else {
            var_v0 = 1;
        }
        M2C_FIELD(arg1, u8 *, 0x2B) = var_v0;
        if (((temp_s7 & 0xFFFF) < 0x2000) && ((u32) M2C_FIELD(((M2C_FIELD(var_s1, u8 *, 0) * 4) + arg0), u32 *, 0x158) >= 0x100001U)) {
            M2C_FIELD(arg1, u8 *, 0x2B) = 3U;
        }
        temp_v0_2 = func_009B33A0(arg0, M2C_FIELD(arg1, s16 *, 4), M2C_FIELD(arg1, s16 *, 6));
        if (temp_v0_2 < 0) {
            var_f12 = 2.0f * (f32) (((u32) temp_v0_2 >> 1) | (temp_v0_2 & 1));
        } else {
            var_f12 = (f32) temp_v0_2;
        }
        M2C_FIELD(arg1, s32 *, 0x2C) = (s32) func_001CD9E0(var_f12);
    }
    temp_v0_3 = func_009B33A0(arg0, M2C_FIELD(arg1, s16 *, 4), M2C_FIELD(arg1, s16 *, 6));
    if (temp_v0_3 < 0) {
        var_f12_2 = 2.0f * (f32) (((u32) temp_v0_3 >> 1) | (temp_v0_3 & 1));
    } else {
        var_f12_2 = (f32) temp_v0_3;
    }
    var_s4_2 = M2C_FIELD(arg1, s32 *, 0x2C) - (s32) func_001CD9E0(var_f12_2);
    if (var_s4_2 <= 0) {
        var_s4_2 = -var_s4_2;
    }
    temp_v1_4 = M2C_FIELD(arg1, u8 *, 0x2B);
    switch (temp_v1_4) {                            /* irregular */
    case 3:
        var_s0 = M2C_FIELD(arg0, u16 *, 0x2A);
        if (((func_009B3070(M2C_FIELD(arg0, u16 *, 0x26), var_s0) & 0xFFFF) < 0x800) && (func_00952420(arg0, M2C_FIELD(arg0, u16 *, 0x2A), 0x2000, 0x240000) == 0) && (var_s4_2 >= 0x101)) {
            M2C_FIELD(arg1, u8 *, 0x2B) = 0U;
        }
        break;
    case 2:
        var_s0 = (M2C_FIELD(arg0, u16 *, 0x2A) + 0x2000) & 0xFFFF;
        if (((func_009B3070(M2C_FIELD(arg0, u16 *, 0x26), var_s0) & 0xFFFF) < 0x800) && (func_00952420(arg0, M2C_FIELD(arg0, u16 *, 0x2A), 0x2000, 0x240000) != 0) && (var_s4_2 >= 0x101)) {
            M2C_FIELD(arg1, u8 *, 0x2B) = 3U;
        }
        break;
    case 1:
        var_s0 = (M2C_FIELD(arg0, u16 *, 0x2A) - 0x2000) & 0xFFFF;
        if (((func_009B3070(M2C_FIELD(arg0, u16 *, 0x26), var_s0) & 0xFFFF) < 0x800) && (func_00952420(arg0, M2C_FIELD(arg0, u16 *, 0x2A), 0x2000, 0x240000) != 0) && (var_s4_2 >= 0x101)) {
            M2C_FIELD(arg1, u8 *, 0x2B) = 3U;
        }
        break;
    }
    func_0096D0A0(arg0, var_s0, 0);
    if ((func_00952A50(var_s0) & 0xFF) < 0x63) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x124) >= (u32) M2C_FIELD(var_s1, u32 *, 0x11C)) {
            return 3;
        }
        return 1;
    }
    return 1;
}
