/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00624740(u32);                             /* extern */
extern char D_00657088[];

s32 func_00627290(s32 arg0, s32 arg1) {
    s32 *var_v1;
    u32 var_a1;

    if (arg1 != 1) {
        if ((u32) (arg1 - 3) >= 2U) {
            return 0;
        }
        goto block_4;
    }
block_4:
    var_a1 = 0;
    var_v1 = ((void *)D_00657088);
loop_5:
    if (arg0 != *var_v1) {
        var_a1 += 1;
        var_v1 += 4;
        if (var_a1 >= 3U) {
            return func_00624740(var_a1) == 0;
        }
        goto loop_5;
    }
    return 0;
}
