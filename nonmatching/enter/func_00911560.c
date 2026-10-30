/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

f32 func_0011D138(void *, s32, f32);                /* extern */
f32 func_0011D468(f32);                             /* extern */
s32 func_00BBB990(u16, s32);                        /* extern */
s32 func_00BBB9C0(u16, s32);                        /* extern */
extern char Pes6MatchPlayers[];
extern char D_00591BEC[];
extern char D_0092F0D0[];

void func_00911560(void) {
    M2C_UNK *var_s1;
    f32 var_f0;
    f32 var_f1;
    f32 var_f1_2;
    s32 temp_a1;
    s32 var_s0;
    u16 temp_v0;
    u16 temp_v0_2;
    void *temp_a0;
    void *temp_v1;

    var_s1 = ((void *)Pes6MatchPlayers);
    var_s0 = 0;
    do {
        temp_a0 = M2C_FIELD(var_s1, void **, 4);
        if ((M2C_FIELD(temp_a0, u8 *, 0x2C) != 0) || ((*(s32 *)D_0092F0D0) & 0x10)) {
            temp_a1 = M2C_FIELD(var_s1, s32 *, 0x1C);
            if (temp_a1 == 0) {
                M2C_FIELD(var_s1, f32 *, 0xF0) = 0.0f;
                M2C_FIELD(var_s1, f32 *, 0xF8) = 0.0f;
            } else {
                temp_v1 = M2C_FIELD(temp_a0, void **, 4);
                if ((M2C_FIELD(temp_v1, u16 *, 0x1A) != 0) && (M2C_FIELD(temp_v1, u8 *, 0xD) & 1)) {
                    temp_v0 = M2C_FIELD(var_s1, u16 *, 0x28);
                    if ((s32) temp_v0 < 0) {
                        var_f1 = 2.0f * (f32) ((temp_v0 >> 1) | (temp_v0 & 1));
                    } else {
                        var_f1 = (f32) temp_v0;
                    }
                    M2C_FIELD(var_s1, f32 *, 0xF0) = (f32) (((f32) M2C_FIELD(var_s1, s32 *, 0x1C) * func_0011D138(temp_a0, temp_a1, (3.1415927f * var_f1) / 32768.0f)) / (*(f32 *)D_00591BEC));
                    temp_v0_2 = M2C_FIELD(var_s1, u16 *, 0x28);
                    if ((s32) temp_v0_2 < 0) {
                        var_f1_2 = 2.0f * (f32) ((temp_v0_2 >> 1) | (temp_v0_2 & 1));
                    } else {
                        var_f1_2 = (f32) temp_v0_2;
                    }
                    var_f0 = -(((f32) M2C_FIELD(var_s1, s32 *, 0x1C) * func_0011D468((3.1415927f * var_f1_2) / 32768.0f)) / (*(f32 *)D_00591BEC));
                } else {
                    M2C_FIELD(var_s1, f32 *, 0xF0) = (f32) ((f32) func_00BBB990(M2C_FIELD(var_s1, u16 *, 0x28), temp_a1) / (*(f32 *)D_00591BEC));
                    var_f0 = (f32) func_00BBB9C0(M2C_FIELD(var_s1, u16 *, 0x28), M2C_FIELD(var_s1, s32 *, 0x1C)) / (*(f32 *)D_00591BEC);
                }
                M2C_FIELD(var_s1, f32 *, 0xF8) = var_f0;
                M2C_FIELD(var_s1, f32 *, 0xE0) = (f32) (M2C_FIELD(var_s1, f32 *, 0xE0) + M2C_FIELD(var_s1, f32 *, 0xF0));
                M2C_FIELD(var_s1, f32 *, 0xE8) = (f32) (M2C_FIELD(var_s1, f32 *, 0xE8) + M2C_FIELD(var_s1, f32 *, 0xF8));
            }
        }
        var_s0 = (var_s0 + 1) & 0xFF;
        var_s1 += 0x240;
    } while (var_s0 < 0x17);
}
