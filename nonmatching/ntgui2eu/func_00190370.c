/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001907F8(s32 *, s32, M2C_UNK);         /* extern */
extern s32 *D_011FD1C0;

void func_00190370(void *arg0) {
    s32 *temp_s1;
    s32 *var_s0;
    s32 temp_v0;
    s32 var_a0;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_v1;
    s32 var_v1_2;

    var_s0 = D_011FD1C0;
    temp_s1 = arg0 - 4;
    if (var_s0 != temp_s1) {
        var_a0 = *var_s0;
        var_a1 = var_a0 & 0x7FFFFFFF;
        var_v1 = var_a1 * 4;
        if (&M2C_FIELD(&var_s0[var_a1], M2C_UNK *, 4) != temp_s1) {
loop_2:
            var_s0 += var_v1 + 4;
            if ((u32) *(u32 *)0x011FD1C4 >= (u32) var_s0) {
                var_a0 = *var_s0;
                var_a1 = var_a0 & 0x7FFFFFFF;
                var_v1 = var_a1 * 4;
                if (&M2C_FIELD(&var_s0[var_a1], M2C_UNK *, 4) == temp_s1) {
                    goto block_4;
                }
                goto loop_2;
            }
        } else {
block_4:
            if (var_a0 >= 0) {
                var_a1_2 = var_a1 + 1 + (*temp_s1 & 0x7FFFFFFF);
            } else {
                var_s0 = temp_s1;
                var_v1_2 = *var_s0;
                goto block_8;
            }
            goto block_9;
        }
    } else {
        var_v1_2 = M2C_FIELD(arg0, s32 *, -4);
block_8:
        var_a1_2 = var_v1_2 & 0x7FFFFFFF;
block_9:
        func_001907F8(var_s0, var_a1_2, 0);
        temp_v0 = M2C_FIELD(&temp_s1[*temp_s1], s32 *, 4);
        if (temp_v0 >= 0) {
            func_001907F8(var_s0, (*var_s0 & 0x7FFFFFFF) + (temp_v0 & 0x7FFFFFFF) + 1, 0);
        }
    }
}
