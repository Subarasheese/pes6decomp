/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009E6920();                                /* extern */
extern char D_00A7DF2C[];

s32 func_009E6830(void) {
    s32 var_s0;
    s32 var_s1;

    var_s0 = (*(s32 *)D_00A7DF2C);
    var_s1 = 0;
    switch (var_s0) {                               /* irregular */
    case 0:
        if (func_009E6920() == 1) {
            var_s0 += 1;
        }
        (*(s32 *)D_00A7DF2C) = var_s0;
        break;
    case 1:
        var_s1 = 1;
        break;
    }
    return var_s1;
}
