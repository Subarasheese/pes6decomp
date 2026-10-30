/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBAA07[];

void func_009B4630(s8 arg0) {
    s8 var_a0;

    var_a0 = arg0;
    if ((var_a0 & 0xFF) >= 0xC) {
        var_a0 = 0;
    }
    (*(s8 *)D_00CBAA07) = var_a0;
}
