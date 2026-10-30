/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B33A0(void *, s32, s32);                /* extern */
s32 func_00AA3210(void *, f32, f32);                /* extern */
s32 func_00BBB990(s32, s32);                        /* extern */
s32 func_00BBB9C0(s32, s32);                        /* extern */
extern void *Pes6Ball_Current;
extern char Pes6MatchPlayers[];

s32 func_00AB9F40(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    f32 temp_f20;
    f32 temp_f21;
    f32 temp_f22;
    f32 temp_f23;
    s32 temp_s1;
    s32 temp_v0;
    s32 temp_v1_2;
    s32 var_a0;
    u8 temp_v1;
    void *temp_s5;

    temp_v1 = M2C_FIELD((((M2C_FIELD(arg0, u8 *, 0x13) ^ 1) * 0xB) + arg0), u8 *, 0x1B4);
    if (temp_v1 != 0xFF) {
        var_a0 = (s32) temp_v1 % 23;
    } else {
        var_a0 = 1;
    }
    temp_s5 = ((void *)Pes6MatchPlayers) + (var_a0 * 0x240);
    temp_f20 = M2C_FIELD(Pes6Ball_Current, f32 *, 0x47C) + (f32) func_00BBB990(arg1, arg2);
    temp_f23 = M2C_FIELD(Pes6Ball_Current, f32 *, 0xB7C) + (f32) func_00BBB9C0(arg1, arg2);
    temp_f22 = M2C_FIELD(Pes6Ball_Current, f32 *, 0x47C) + (f32) func_00BBB990(arg1, arg3);
    temp_f21 = M2C_FIELD(Pes6Ball_Current, f32 *, 0xB7C) + (f32) func_00BBB9C0(arg1, arg3);
    temp_v1_2 = arg4 - 0x80;
    if (func_00AA3210(arg0, temp_f22, temp_f21) >= (temp_v1_2 * temp_v1_2)) {
        temp_s1 = func_009B33A0(temp_s5, (s32) temp_f20, (s32) temp_f23);
        temp_v0 = func_009B33A0(temp_s5, (s32) temp_f22, (s32) temp_f21);
        if ((temp_s1 < (arg4 * arg4)) && (temp_s1 < temp_v0)) {
            return 1;
        }
        goto block_10;
    }
block_10:
    return 0;
}
