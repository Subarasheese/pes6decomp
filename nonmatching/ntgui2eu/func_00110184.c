/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001B0444(void *);                          /* extern */
extern char D_0044AA50[];
extern void *D_0060245C;

u32 func_00110184(f32 fparg0, f32 fparg1) {
    s32 temp_s3;
    s32 temp_v0;
    s32 var_s0;
    s32 var_s0_2;
    u32 var_s2;
    u32 var_s4;
    u8 temp_v1;
    void *temp_a0;
    void *temp_s7;
    void *temp_v0_2;
    void *temp_v0_3;
    void *var_s1;

    temp_s7 = ((void *)D_0044AA50) + 0x31A4;
    temp_s3 = M2C_FIELD(((void *)D_0044AA50), s32 *, 0x309C);
    temp_v0 = func_001B0444(temp_s7);
    var_s1 = temp_v0 + (((void *)D_0044AA50) + 0x31A5);
    if (temp_s3 > 0) {
        var_s0 = temp_s3;
        do {
            var_s0 -= 1;
            var_s1 = var_s1 + func_001B0444(var_s1) + 2;
        } while (var_s0 != 0);
    }
    var_s4 = 0;
    var_s0_2 = 0;
    if (temp_s3 < M2C_FIELD((((void *)D_0044AA50) - 0x55B0), s32 *, 0x3098)) {
        temp_v0_2 = D_0060245C;
loop_5:
        var_s2 = M2C_FIELD(temp_v0_2, u32 (**)(void *, f32), 0x8C)(var_s1, fparg0);
        temp_v0_3 = var_s1 + func_001B0444(var_s1);
        temp_v1 = M2C_FIELD(temp_v0_3, u8 *, 1);
        temp_a0 = temp_s7 + temp_v1;
        var_s1 = temp_v0_3 + 2;
        if ((s32) temp_v1 < temp_v0) {
            var_s2 += M2C_FIELD(D_0060245C, s32 (**)(void *, f32), 0x8C)(temp_a0, fparg1);
        }
        var_s0_2 += 1;
        var_s4 = (var_s4 < var_s2) ? var_s2 : var_s4;
        if ((var_s0_2 < 0xA) && ((temp_s3 + var_s0_2) < M2C_FIELD((((void *)D_0044AA50) - 0x55B0), s32 *, 0x3098))) {
            goto loop_5;
        }
    }
    return var_s4;
}
