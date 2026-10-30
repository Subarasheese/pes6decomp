/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00134FB0(s32);                         /* extern */
extern char D_011D4450[];

void func_00127EB8(void) {
    s32 *var_s0;
    s32 temp_v0;
    s32 var_s1;

    var_s1 = 1;
    var_s0 = ((void *)D_011D4450);
    do {
        temp_v0 = *var_s0;
        var_s1 -= 1;
        var_s0 += 4;
        if (temp_v0 != 0) {
            func_00134FB0(temp_v0);
        }
    } while (var_s1 >= 0);
}
