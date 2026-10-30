/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00127A78(s32);                         /* extern */
extern char D_011D4450[];

void func_00127E60(void) {
    s32 *var_s1;
    s32 temp_a0;
    s32 var_s0;

    var_s1 = ((void *)D_011D4450);
    var_s0 = 0;
    do {
        temp_a0 = var_s0;
        var_s0 += 1;
        var_s1 += 4;
        if (*var_s1 != 0) {
            func_00127A78(temp_a0);
        }
    } while (var_s0 < 2);
}
