/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

extern char D_003B2FB8[];

s32 func_002D78E0(s32 arg0) {
    u32 var_a1;
    u8 *var_v1;

    var_a1 = 0;
    var_v1 = ((void *)D_003B2FB8);
loop_1:
    if (arg0 != *var_v1) {
        var_a1 += 1;
        var_v1 += 1;
        if (var_a1 >= 7U) {
            return 0;
        }
        goto loop_1;
    }
    return 1;
}
