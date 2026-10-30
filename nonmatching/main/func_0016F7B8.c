/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0016EC10(void *);
M2C_UNK func_001C4730(void *, void *, s32);         /* extern */
extern char D_00387240[];

s32 func_0016F7B8(s32 arg0, s8 *arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 sp0;
    s32 sp4;
    s32 temp_s1;
    s32 var_a0;
    s32 var_s2;
    s32 var_s5;
    s32 var_v1;
    s8 *temp_s3;
    s8 *var_a1;
    s8 *var_v0_2;
    s8 *var_v1_2;
    s8 temp_v0;
    s8 temp_v0_2;
    s8 temp_v1;
    s8 var_v0;
    void *temp_a2;
    void *var_a1_2;
    void *var_s0;

    var_a1 = arg1;
    var_s2 = 0;
    temp_s3 = var_a1;
    var_s5 = 0;
    sp0 = arg0;
    var_a0 = 0;
    sp4 = arg2;
    if (*temp_s3 != 0) {
        var_s0 = (arg3 * 8) + sp0;
        var_v0 = *var_a1;
loop_2:
        if ((var_v0 == 0xA) || (var_v1 = var_s2 + 1, (var_v0 == 0))) {
            temp_v0 = M2C_FIELD(var_a1, s8 *, 1);
            if ((temp_v0 == 0xA) || (var_v1_2 = var_a1 - 1, (temp_v0 == 0))) {
                var_s2 += 1;
                var_a1 = temp_s3 + var_s2;
                var_v1_2 = var_a1 - 1;
            }
            temp_v0_2 = *var_v1_2;
            temp_s1 = var_s2 - var_a0;
            if ((temp_v0_2 == 0xA) || (var_v0_2 = var_a1 - 2, (temp_v0_2 == 0xD))) {
                *var_v1_2 = 0;
                var_v0_2 = var_a1 - 2;
            }
            temp_v1 = *var_v0_2;
            if ((temp_v1 == 0xA) || (var_a1_2 = temp_s3 + var_a0, (temp_v1 == 0xD))) {
                *var_v0_2 = 0;
                var_a1_2 = temp_s3 + var_a0;
            }
            func_001C4730(var_s0, var_a1_2, temp_s1);
            func_0016EC10(var_s0);
            temp_a2 = var_s0 + temp_s1;
            if (M2C_FIELD(temp_a2, s8 *, -1) != 0) {
                M2C_FIELD(temp_a2, s8 *, 0) = 0;
            }
            var_v1 = var_s2 + 1;
            var_s5 += 1;
            var_s0 = arg4 + var_s0 + 1;
            var_a0 = var_v1;
            if (var_s5 != arg3) {
                goto block_16;
            }
        } else {
block_16:
            var_s2 = var_v1;
            if (sp4 >= var_v1) {
                var_a1 = temp_s3 + var_v1;
                if (*var_a1 != 0) {
                    var_v0 = *var_a1;
                    goto loop_2;
                }
            }
        }
    }
    if (M2C_FIELD(((void *)D_00387240), s32 *, 0) == 0) {
        M2C_FIELD(((void *)D_00387240), s32 *, 0xC) = arg4;
        M2C_FIELD(((void *)D_00387240), s32 *, 8) = arg3;
        M2C_FIELD(((void *)D_00387240), s32 *, 0) = sp0;
        M2C_FIELD(((void *)D_00387240), s32 *, 4) = var_s5;
    }
    return var_s5;
}
