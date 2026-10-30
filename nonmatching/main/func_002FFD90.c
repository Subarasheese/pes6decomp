/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00255E70(u32);
f32 func_001CD9E0(f32);                             /* extern */
s32 func_009B3350(s32, s32, M2C_UNK);               /* extern */
extern s32 Pes6Ball_Current;

s32 func_002FFD90(void *arg0) {
    f32 var_f12;
    s32 temp_f0;
    s32 temp_v0;
    s32 var_s1;
    s32 var_v0;
    s32 var_v0_2;

    if (M2C_FIELD(arg0, u8 *, 0x13) == 0) {
        var_v0_2 = 1;
    } else {
        var_v0_2 = -1;
    }
    temp_v0 = func_009B3350(Pes6Ball_Current, (s32) (13465.0f * (f32) var_v0_2), 0);
    if (temp_v0 < 0) {
        var_f12 = 2.0f * (f32) (((u32) temp_v0 >> 1) | (temp_v0 & 1));
    } else {
        var_f12 = (f32) temp_v0;
    }
    temp_f0 = (s32) func_001CD9E0(var_f12);
    var_s1 = temp_f0 >> 8;
    if (temp_f0 < 0) {
        var_s1 = (s32) (temp_f0 + 0xFF) >> 8;
    }
    if (func_00255E70((u32) M2C_FIELD(arg0, u8 *, 0x12)) == 0) {
        if (var_s1 >= 0x28) {
            return 2;
        }
        return 1;
    }
    if (var_s1 >= 0x28) {
        if (var_s1 >= 0x32) {
            var_v0 = 0xFF;
        } else {
            var_v0 = 0;
        }
        return var_v0;
    }
    return 4;
}
