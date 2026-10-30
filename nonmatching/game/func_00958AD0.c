/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


f32 func_001CD9E0(s32, f32);                        /* extern */
M2C_UNK func_00967760(u8 *);                        /* extern */
s32 func_009B3070(u16, u16);                        /* extern */
s32 func_00AFBAB0(u8);                              /* extern */
s32 func_00BDB8B0(u8 *);                            /* extern */
extern char Pes6MatchPlayers[];

u8 func_00958AD0(u8 *arg0, s32 arg1) {
    f32 var_f12;
    s32 temp_a0;
    s32 temp_f0;
    s32 temp_s2;
    s32 temp_v0;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_s3;
    s32 var_v0;
    u32 temp_v1;
    u8 *temp_s1;
    u8 *var_s4;
    u8 temp_a0_2;
    u8 temp_a1;
    u8 var_s6;

    temp_s2 = arg1 & 0xFF;
    if ((temp_s2 != 0) && (temp_s2 < 0x17)) {
        if (temp_s2 == 0xFF) {
            var_a0 = 1;
        } else {
            var_a0 = temp_s2 % 23;
        }
        temp_s1 = ((void *)Pes6MatchPlayers) + (var_a0 * 0x240);
        func_00967760(arg0);
        if (((func_00AFBAB0(*arg0) & 0xFF) + 1) == 0xFF) {
            var_a0_2 = 1;
        } else {
            var_a0_2 = (func_00AFBAB0(*arg0) & 0xFF) + 1;
        }
        temp_a0 = var_a0_2 * 0x240;
        temp_v0 = M2C_FIELD(((*temp_s1 * 4) + arg0), s32 *, 0x158);
        var_s4 = ((void *)Pes6MatchPlayers) + temp_a0;
        if (temp_v0 >= 0) {
            var_f12 = (f32) temp_v0;
        } else {
            var_f12 = 2.0f * (f32) (((u32) temp_v0 >> 1) | (temp_v0 & 1));
        }
        temp_f0 = (s32) func_001CD9E0(temp_a0, var_f12);
        var_a0_3 = 0xC00;
        if (temp_f0 < 0x1000) {
            if (temp_f0 < 0x800) {
                var_v0 = 0x2000;
            } else {
                var_v0 = (0x2000 - ((temp_f0 - 0x800) * 4)) & 0xFFFF;
            }
            var_a0_3 = (var_v0 + 0xC00) & 0xFFFF;
        }
        var_s6 = 0;
        var_s3 = 0;
        do {
            if ((func_00BDB8B0(var_s4) != 0) && (arg0 != var_s4)) {
                temp_a1 = *var_s4;
                if (temp_a1 != temp_s2) {
                    temp_a0_2 = *temp_s1;
                    temp_v1 = M2C_FIELD((arg0 + (temp_a0_2 * 4)), u32 *, 0x158);
                    if ((temp_v1 >= 0x190000U) && ((u32) M2C_FIELD((arg0 + (temp_a1 * 4)), u32 *, 0x158) < temp_v1) && ((func_009B3070(M2C_FIELD((arg0 + (temp_a0_2 * 2)), u16 *, 0x128), M2C_FIELD((arg0 + (temp_a1 * 2)), u16 *, 0x128)) & 0xFFFF) < (var_a0_3 & 0xFFFF))) {
                        var_s6 = *var_s4;
                    }
                }
            }
            var_s3 += 1;
            var_s4 += 0x240;
        } while (var_s3 < 0xA);
        if (var_s6 == 0) {
            var_s6 = 0;
        }
        return var_s6;
    }
    return 0U;
}
