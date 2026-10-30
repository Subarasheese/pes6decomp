/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002DC1D0(s32);                         /* extern */
extern char D_00924260[];

void func_00910060(void) {
    s32 *var_s0;
    s32 var_s1;

    var_s1 = 0;
    var_s0 = ((void *)D_00924260);
    do {
        func_002DC1D0(*var_s0);
        var_s1 += 1;
        *var_s0 = 0;
        var_s0 += 4;
    } while (var_s1 < 3);
}
