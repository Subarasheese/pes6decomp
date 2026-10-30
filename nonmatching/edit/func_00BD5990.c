/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BD5A20(s32, s32);                        /* extern */
extern char D_00CBC484[];
extern char D_00CBC488[];

s32 func_00BD5990(s32 arg0) {
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;

    var_s2 = 0;
    var_s1 = 0;
    if ((*(s32 *)D_00CBC488) > 0) {
        var_s0 = 0;
        do {
            var_s2 += func_00BD5A20((*(s32 *)D_00CBC484) + var_s0, arg0);
            var_s1 += 1;
            var_s0 += 0x2C;
        } while (var_s1 < (*(s32 *)D_00CBC488));
    }
    return var_s2;
}
