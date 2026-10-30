/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B30B0(s32, u16);                        /* extern */
u32 func_009B33A0(void *, s32, s32);                /* extern */
s32 func_009B3480(void *, f32, f32);                /* extern */
extern s32 Pes6Ball_Current;
extern char Pes6MatchPlayers[];
extern char D_00591E00[];

s32 func_009B6C40(void *arg0, s32 arg1) {
    s32 temp_s1;
    s32 var_a0;
    s32 var_s2;
    u8 *temp_v0;
    u8 temp_s0;
    u8 temp_v1;
    void *temp_v0_2;
    void *temp_v0_3;

    temp_s1 = arg1 * 4;
    if (!(M2C_FIELD((temp_s1 + Pes6Ball_Current), f32 *, 0x7FC) < -384.0f)) {
        var_s2 = 0;
loop_2:
        temp_v1 = M2C_FIELD((((void *)D_00591E00) + (M2C_FIELD(arg0, u8 *, 0x13) * 2) + var_s2), u8 *, 0x4F);
        if (temp_v1 == 0xFF) {
            var_a0 = 1;
        } else {
            var_a0 = (s32) temp_v1 % 23;
        }
        temp_v0 = ((void *)Pes6MatchPlayers) + (var_a0 * 0x240);
        if (arg0 != temp_v0) {
            temp_s0 = *temp_v0;
            temp_v0_2 = temp_s1 + Pes6Ball_Current;
            if (func_009B33A0(arg0, (s32) M2C_FIELD(temp_v0_2, f32 *, 0x47C), (s32) M2C_FIELD(temp_v0_2, f32 *, 0xB7C)) >= (u32) M2C_FIELD((arg0 + (temp_s0 * 4)), u32 *, 0x158)) {
                temp_v0_3 = temp_s1 + Pes6Ball_Current;
                if ((func_009B30B0(func_009B3480(arg0, M2C_FIELD(temp_v0_3, f32 *, 0x47C), M2C_FIELD(temp_v0_3, f32 *, 0xB7C)), M2C_FIELD((arg0 + (temp_s0 * 2)), u16 *, 0x128)) & 0xFFFF) < 0x20) {
                    return 1;
                }
            }
        }
        var_s2 += 1;
        if (var_s2 >= 2) {
            goto block_12;
        }
        goto loop_2;
    }
block_12:
    return 0;
}
