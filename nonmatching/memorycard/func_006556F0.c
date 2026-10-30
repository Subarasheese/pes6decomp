/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_002F3850(s32);                             /* extern */
M2C_UNK func_0061F880();                            /* extern */
extern char D_0065EDC0[];

s32 func_006556F0(void) {
    s32 var_s1;

    var_s1 = 0;
    if (func_002F3850(M2C_FIELD(((void *)D_0065EDC0), s32 *, 0)) == 2) {
        var_s1 = 1;
        M2C_FIELD(((void *)D_0065EDC0), s8 *, 0xBA) = 1;
    }
    if (var_s1 == 1) {
        func_0061F880();
    }
    return var_s1;
}
