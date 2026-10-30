/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_009E7960(s32);
s32 func_009E78C0();                                /* extern */
s32 func_009E7910();                                /* extern */
extern char D_00A7DF20[];

s32 func_009E6BC0(void) {
    s32 var_s1;
    s8 var_s0;

    var_s0 = (*(s8 *)D_00A7DF20);
    var_s1 = 0;
    switch (var_s0) {                               /* irregular */
    case 0:
        if (func_009E7960(0) == 1) {
            var_s0 += 1;
        }
        break;
    case 1:
        if (func_009E7910() == 1) {
            var_s0 += 1;
        }
        break;
    case 2:
        if (func_009E78C0() == 1) {
            var_s1 = 2;
        }
        break;
    }
    (*(s8 *)D_00A7DF20) = var_s0;
    return var_s1;
}
