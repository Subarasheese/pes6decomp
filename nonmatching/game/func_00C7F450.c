/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00C7F590();                            /* extern */
extern s32 D_003EA870;
extern char D_00CCC070[];

void func_00C7F450(void) {
    s32 *var_s0;
    s32 var_s1;

    var_s1 = 0;
    var_s0 = ((void *)D_00CCC070);
    do {
        D_003EA870 = var_s1;
        if (*var_s0 != 0) {
            func_00C7F590();
        }
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 2);
}
