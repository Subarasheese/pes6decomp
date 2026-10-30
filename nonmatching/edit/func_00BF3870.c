/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00246550(s32, u32);                        /* extern */
extern char D_00CBE818[];

s32 func_00BF3870(s32 arg0) {
    s32 *var_v1;
    s32 var_a0;
    u32 var_a1;

    var_a1 = 0;
    var_v1 = ((void *)D_00CBE818);
loop_1:
    if (arg0 != *var_v1) {
        var_a1 += 1;
        var_v1 += 4;
        if (var_a1 >= 3U) {
            var_a0 = -1;
        } else {
            goto loop_1;
        }
    } else {
        var_a0 = var_a1 + 0xA5;
    }
    if (var_a0 == -1) {
        return 1;
    }
    return func_00246550(var_a0, var_a1);
}
