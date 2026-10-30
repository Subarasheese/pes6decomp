/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00120128(M2C_UNK, s32, M2C_UNK);       /* extern */
extern char D_011E0A10[];

void func_0014D788(void) {
    s32 *var_s0;
    s32 temp_a1;
    s32 var_s1;

    var_s1 = 1;
    var_s0 = ((void *)D_011E0A10);
    do {
        temp_a1 = *var_s0;
        var_s0 += 4;
        func_00120128(0, temp_a1, 0);
        var_s1 -= 1;
    } while (var_s1 >= 0);
}
