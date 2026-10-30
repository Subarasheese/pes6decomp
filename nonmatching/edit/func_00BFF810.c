/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBED80[];

u32 func_00BFF810(s32 arg0) {
    s32 *var_a1;
    u32 var_v0;

    var_v0 = 0;
    var_a1 = ((void *)D_00CBED80);
loop_1:
    if (arg0 != *var_a1) {
        var_v0 += 1;
        var_a1 += 4;
        if (var_v0 >= 0xFU) {
            return 0xFU;
        }
        goto loop_1;
    }
    return var_v0;
}
