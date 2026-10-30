/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBCC60[];

void func_00B7B8C0(s8 arg0) {
    s8 var_a0;

    var_a0 = arg0;
    if (!(var_a0 & 0xFF)) {
        var_a0 = 1;
    }
    (*(s8 *)D_00CBCC60) = var_a0;
}
