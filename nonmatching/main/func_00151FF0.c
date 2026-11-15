/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

extern char Pes6Random_State[];

void func_00151FF0(s32 arg0) {
    s32 *var_a2;
    s32 var_a3;
    s32 var_v1;

    var_a3 = 0;
    var_a2 = ((void *)Pes6Random_State);
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
