/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00273B90(M2C_UNK *);                   /* extern */
extern char D_0058E7F0[];

void func_00273E70(void) {
    M2C_UNK *var_s0;
    s32 var_s1;

    var_s1 = 0;
    var_s0 = ((void *)D_0058E7F0);
    do {
        func_00273B90(var_s0);
        var_s1 += 1;
        var_s0 += 0x240;
    } while (var_s1 < 0x16);
}
