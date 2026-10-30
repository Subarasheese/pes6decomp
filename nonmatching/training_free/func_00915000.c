/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009832C0(M2C_UNK *, s32);              /* extern */
extern char D_0058E7F0[];

void func_00915000(s32 arg0) {
    M2C_UNK *var_s1;
    s32 var_s0;

    var_s1 = ((void *)D_0058E7F0);
    var_s0 = 0;
    do {
        func_009832C0(var_s1, arg0);
        var_s0 += 1;
        var_s1 += 0x240;
    } while (var_s0 < 0x16);
}
