/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008ECA00[];

s32 func_008B2FF0(s32 arg0) {
    s16 *var_v1;
    s32 var_a1;

    var_a1 = 0;
    var_v1 = ((void *)D_008ECA00);
loop_1:
    if (*var_v1 < arg0) {
        var_a1 += 1;
        var_v1 += 8;
        if (var_a1 >= 4) {
            return 3;
        }
        goto loop_1;
    }
    return var_a1 - 1;
}
