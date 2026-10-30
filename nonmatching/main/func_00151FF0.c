/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

extern char D_00376A98[];

void func_00151FF0(s32 arg0) {
    s32 *var_a2;
    s32 var_a3;
    s32 var_v1;

    var_a3 = 0;
    var_a2 = ((void *)D_00376A98);
    do {
        var_v1 = arg0;
        if (arg0 == 0) {
            var_v1 = 1;
        }
        *var_a2 = var_v1;
        var_a3 += 1;
        var_a2 += 4;
    } while (var_a3 < 2);
}
