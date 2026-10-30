/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBD751[];

void func_00BF6240(s8 arg0) {
    s8 var_a0;

    var_a0 = arg0;
    if (var_a0 >= 2) {
        var_a0 = 1;
    }
    (*(s8 *)D_00CBD751) = var_a0;
}
