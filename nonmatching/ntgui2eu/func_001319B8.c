/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00131870(s32);                         /* extern */
M2C_UNK func_001318D8(s32);                         /* extern */
extern char D_011D4DD8[];
extern char D_011D6DFC[];

void func_001319B8(void) {
    s32 *var_s1;
    s32 var_s0;
    s32 var_s0_2;

    if ((*(s32 *)D_011D6DFC) == 0) {
        var_s0 = 0;
        var_s1 = ((void *)D_011D4DD8) + 0x18;
        do {
            if (*var_s1 != 0) {
                func_00131870(var_s0);
            }
            var_s0 += 1;
            var_s1 += 0x20;
        } while (var_s0 < 0x100);
        var_s0_2 = 0;
        do {
            func_001318D8(var_s0_2);
            var_s0_2 += 1;
        } while (var_s0_2 <= 0);
    }
}
