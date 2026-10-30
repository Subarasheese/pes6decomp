/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0018EDF0(s32, s32, s16, s16, s16, s16, s16, s16); /* extern */
extern char D_011F6F70[];

s32 func_0018EFE8(s32 arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5, s16 arg6) {
    s32 *var_v1;
    s32 var_a0;

    var_a0 = 0;
    if ((*(s32 *)D_011F6F70) == 1) {
        var_v1 = ((void *)D_011F6F70);
loop_2:
        var_v1 += 4;
        if (var_a0 >= 0x20) {
            return 0xFFFFFFFF;
        }
        var_a0 += 1;
        if (*var_v1 != 1) {
            goto block_5;
        }
        goto loop_2;
    }
block_5:
    return func_0018EDF0(var_a0, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
}
