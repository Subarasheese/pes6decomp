/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00C72620();                            /* extern */
extern s32 D_003EA820;
extern char D_00CCBD28[];

void func_00C724A0(void) {
    s32 *var_s0;
    s32 var_s1;

    var_s1 = 0;
    var_s0 = ((void *)D_00CCBD28);
    do {
        D_003EA820 = var_s1;
        if (*var_s0 != 0) {
            func_00C72620();
        }
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 2);
}
