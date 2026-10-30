/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s8 D_003E9CD0;

s32 func_00295170(void *arg0, void *arg1, u8 *arg2) {
    f32 var_f0;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a2_3;
    s8 temp_v0;
    u8 temp_v0_2;

    temp_a2 = ((s32) (M2C_FIELD(arg1, u8 *, 5) * 3) % 255) & 0xFF;
    temp_a2_2 = (temp_a2 ^ (temp_a2 << 5)) & 0xFF;
    temp_a2_3 = (temp_a2_2 ^ (temp_a2_2 >> 3)) & 0xFF;
    temp_v0 = temp_a2_3 ^ (temp_a2_3 << 5);
    D_003E9CD0 = temp_v0;
    temp_v0_2 = M2C_FIELD(arg1, u8 *, 2);
    if ((s32) temp_v0_2 >= 0) {
        var_f0 = (f32) temp_v0_2;
    } else {
        var_f0 = 2.0f * (f32) ((temp_v0_2 >> 1) | (temp_v0_2 & 1));
    }
    if (!((255.0f * ((f32) ((temp_v0 & 0xFF) - 1) / 254.0f)) <= var_f0)) {
        M2C_FIELD(arg1, u8 *, 1) = 3U;
    }
    D_003E9CD0 = 0;
    M2C_FIELD(arg0, u8 *, 0) = (u8) M2C_FIELD(arg1, u8 *, 0);
    M2C_FIELD(arg0, u8 *, 1) = (u8) M2C_FIELD(arg1, u8 *, 1);
    M2C_FIELD(arg0, u8 *, 2) = (u8) M2C_FIELD(arg1, u8 *, 3);
    M2C_FIELD(arg0, s8 *, 3) = (s8) ((u8) M2C_FIELD(arg1, u8 *, 4) >> 1);
    M2C_FIELD(arg0, u8 *, 4) = (u8) M2C_FIELD(arg1, u8 *, 5);
    M2C_FIELD(arg0, u8 *, 5) = (u8) *arg2;
    M2C_FIELD(arg0, u8 *, 6) = (u8) M2C_FIELD(arg1, u8 *, 6);
    return 1;
}
