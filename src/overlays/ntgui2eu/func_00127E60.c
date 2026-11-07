/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"


M2C_UNK func_00127A78(s32);                         /* extern */
extern char D_011D4450[];

void func_00127E60(void) {
    s32 *var_s1;
    s32 var_s0;
    var_s1 = ((void *)D_011D4450);
    var_s0 = 0;
    do {
        if (*var_s1 != 0) {
            func_00127A78(var_s0);
        }
        var_s0 += 1;
        var_s1 += 1;
    } while (var_s0 < 2);
}
