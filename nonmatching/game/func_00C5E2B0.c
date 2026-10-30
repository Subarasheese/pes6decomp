/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_002C4B50(s32, s32);                        /* extern */
s32 func_00C13110(M2C_UNK *);                       /* extern */
void *func_00C13280(s32);                           /* extern */
s32 func_00C136E0(s32, M2C_UNK);                    /* extern */
extern M2C_UNK func_00C12860;

s32 func_00C5E2B0(s32 arg0, s32 arg1, s32 arg2, s32 (*arg3)(f32 *, u32, u16)) {
    f32 sp60;
    s32 sp64;
    f32 sp68;
    f32 temp_f3;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s1;
    s32 var_s2;
    u16 temp_a2;
    u32 temp_a1;
    void *temp_v0_2;

    var_s2 = 0;
    var_s1 = -1;
    if ((arg0 != -1) && (arg1 != -1)) {
        temp_v0 = func_00C13110(&func_00C12860);
        if ((temp_v0 != -1) && ((temp_v1 = M2C_FIELD(func_00C13280(temp_v0), u8 *, 5) & 3, (temp_v1 == 3)) || (temp_v1 == 1))) {
            var_s1 = func_00C136E0(temp_v0, 7);
        }
        if (var_s1 != -1) {
            temp_v0_2 = func_00C13280(var_s1);
            temp_v1_2 = arg2 & 0xFF;
            if (M2C_FIELD(temp_v0_2, u8 *, 4) == temp_v1_2) {
                temp_a2 = M2C_FIELD(temp_v0_2, u16 *, 2);
                temp_f3 = (f32) func_002C4B50(var_s1, (temp_v1_2 >> 5) & 1);
                sp64 = 0;
                sp60 = temp_f3 * ((86.59164f * (f32) ((s32) temp_a2 % 312)) - 13465.0f);
                temp_a1 = temp_a2 >> 0x1F;
                sp68 = temp_f3 * ((83.5311f * (f32) ((M2C_FIELD(temp_v0_2, u16 *, 2) / 312) + temp_a1)) - 8729.0f);
                if (arg3(&sp60, temp_a1, temp_a2) != 0) {
                    var_s2 = 1;
                }
            }
        }
    }
    return var_s2;
}
