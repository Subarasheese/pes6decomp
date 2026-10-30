/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00130EA0(M2C_UNK *);                   /* extern */
extern char D_011D6DD8[];

void func_00131518(void) {
    M2C_UNK *var_s0;
    s32 var_s1;

    var_s1 = 0;
    var_s0 = ((void *)D_011D6DD8);
    do {
        var_s1 -= 1;
        func_00130EA0(var_s0);
        var_s0 += 0x14;
    } while (var_s1 >= 0);
}
