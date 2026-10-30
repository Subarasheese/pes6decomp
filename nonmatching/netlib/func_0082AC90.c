/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0082AAD0(s32, s32);                        /* extern */
extern char D_008A4398[];
extern char D_008A5F70[];

s32 func_0082AC90(s32 arg0, s32 *arg1, s32 *arg2) {
    s32 *var_v0;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_v0_2;
    s32 var_v0_3;

    if ((arg1 == NULL) || (arg2 == NULL)) {
        goto block_38;
    }
    if ((*(s32 *)D_008A4398) != 0) {
        var_v0 = (*(s32 *)D_008A4398) + 0x238;
    } else {
        var_v0 = NULL;
    }
    if (arg0 >= 0) {
        if (var_v0 != NULL) {
            var_v0_2 = *var_v0;
        } else {
            var_v0_2 = 0;
        }
        if (arg0 < var_v0_2) {
            var_s2 = 0;
loop_37:
            if (var_s2 >= 9) {
                goto block_38;
            }
            if ((*(s32 *)D_008A4398) != 0) {
                var_v0_3 = (*(s32 *)D_008A4398) + 0x238;
            } else {
                var_v0_3 = 0;
            }
            if (var_v0_3 == 0) {
                var_s0 = 0;
            } else if (var_s2 < 0) {
                var_s0 = 0;
            } else if (var_s2 >= 9) {
                var_s0 = 0;
            } else {
                var_s0 = M2C_FIELD((((void *)D_008A5F70) + (var_s2 * 4)), s32 *, 0x1B8);
            }
            var_s1 = 0;
loop_33:
            if (var_s1 < var_s0) {
                if (arg0 != func_0082AAD0(var_s2, var_s1)) {
                    var_s1 += 1;
                    goto loop_33;
                }
                *arg1 = var_s2;
                *arg2 = var_s1;
                return 4;
            }
            var_s2 += 1;
            goto loop_37;
        }
        return 1;
    }
block_38:
    return 1;
}
