/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00172CF8(s8 *);                        /* extern */
extern char D_00387A80[];

void func_00172368(void) {
    s32 var_s1;
    s8 *var_s0;

    var_s0 = ((void *)D_00387A80);
    var_s1 = 0x1F;
    do {
        if (*var_s0 == 1) {
            func_00172CF8(var_s0);
        }
        var_s1 -= 1;
        var_s0 += 0x238;
    } while (var_s1 >= 0);
}
