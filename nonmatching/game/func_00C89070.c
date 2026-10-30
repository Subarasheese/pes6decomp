/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001B4CB0(s32, M2C_UNK, M2C_UNK);       /* extern */
extern char D_00CCD4B0[];

void func_00C89070(void) {
    s32 *var_s0;
    s32 temp_a0;
    s32 var_s1;

    var_s1 = 0;
    var_s0 = ((void *)D_00CCD4B0);
    do {
        temp_a0 = *var_s0;
        if (temp_a0 != 0) {
            func_001B4CB0(temp_a0, 0x45855000, 0x449A2000);
        }
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 == 0);
}
