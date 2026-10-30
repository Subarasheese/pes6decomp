/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s16 func_00198AD8(s32, s32, s32, u16);              /* extern */
extern char D_011FEDC4[];

s32 func_00198988(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u16 *arg4, u16 *arg5) {
    s32 temp_s0;
    s32 temp_v1;
    s32 var_a1;
    s32 var_s0;
    s32 var_s1;
    u16 *var_a0;
    u16 *var_v0;
    u16 *var_v0_2;
    void *temp_s3;

    temp_s3 = (*(s32 *)D_011FEDC4) + (arg0 * 0x38);
    temp_v1 = M2C_FIELD(temp_s3, s32 *, 4);
    var_a1 = 0;
    switch (temp_v1) {                              /* irregular */
    case 0:
        var_s1 = 0;
        if ((arg3 > 0) && (*arg4 != 0)) {
            var_v0 = arg4;
            var_a0 = arg5;
loop_6:
            var_s1 += 1;
            *var_a0 = *var_v0;
            if (var_s1 < arg3) {
                temp_s0 = var_s1 * 2;
                var_v0 = temp_s0 + arg4;
                var_a0 = temp_s0 + arg5;
                if (*var_v0 == 0) {

                } else {
                    goto loop_6;
                }
            }
        }
block_14:
        var_a1 = var_s1;
        break;
    case 1:
        var_s1 = 0;
        if (arg3 > 0) {
            var_s0 = 0;
            if (*arg4 != 0) {
                var_v0_2 = arg4;
loop_12:
                var_s1 += 1;
                *(var_s0 + arg5) = func_00198AD8(M2C_FIELD(temp_s3, s32 *, 8), arg1 & 0xFF, arg2 & 0xFF, *var_v0_2);
                if (var_s1 < arg3) {
                    var_s0 = var_s1 * 2;
                    var_v0_2 = var_s0 + arg4;
                    if (*(var_s0 + arg4) != 0) {
                        goto loop_12;
                    }
                }
            }
        }
        goto block_14;
    }
    return var_a1;
}
