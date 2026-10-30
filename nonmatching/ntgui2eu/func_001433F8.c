/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00120128(M2C_UNK, s32, M2C_UNK);       /* extern */
extern char D_011DD780[];

void func_001433F8(void) {
    s32 *var_s0;
    s32 temp_a1;
    s32 var_s1;

    var_s1 = 1;
    var_s0 = ((void *)D_011DD780);
    do {
        temp_a1 = *var_s0;
        var_s0 += 4;
        func_00120128(0, temp_a1, 0);
        var_s1 -= 1;
    } while (var_s1 >= 0);
}
