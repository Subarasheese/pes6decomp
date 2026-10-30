/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00C132C0(void *);
extern u8 func_00C132B0(void *);
s32 func_002C18C0(s32, M2C_UNK);                    /* extern */
void *func_00C13280(void *);                        /* extern */
u32 func_00C13390(s32);                             /* extern */

s32 func_00C5CB00(u32 arg0, s32 arg1, s32 arg2, s32 (*arg3)(f32 *)) {
    f32 sp7C;
    f32 var_f0;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v0;
    s32 var_s3;
    u32 var_s2;
    u8 temp_v0_2;

    temp_s1 = arg2 & 0xFF;
    temp_s0 = (temp_s1 >> 5) & 1;
    var_s3 = 0;
    if ((arg0 == -1U) || (arg1 == -1) || (temp_v0 = func_002C18C0(temp_s0, 6), (temp_v0 == -1)) || (var_s2 = func_00C13390(temp_v0), (var_s2 == -1U)) || (arg0 >= var_s2) || ((func_00C132C0((void *) var_s2) & 0xFF) != 0xB) || ((temp_s0 & 0xFF) != (((s32) (func_00C132B0((void *) var_s2) & 0xFF) >> 5) & 1))) {
        var_s2 = -1U;
    }
    if ((var_s2 != -1U) && (temp_s1 == (func_00C132B0((void *) var_s2) & 0xFF))) {
        temp_v0_2 = M2C_FIELD(func_00C13280((void *) var_s2), u8 *, 7);
        if ((s32) temp_v0_2 < 0) {
            var_f0 = 2.0f * (f32) ((temp_v0_2 >> 1) | (temp_v0_2 & 1));
        } else {
            var_f0 = (f32) temp_v0_2;
        }
        sp7C = var_f0;
        var_s3 = arg3(&sp7C);
    }
    return var_s3;
}
