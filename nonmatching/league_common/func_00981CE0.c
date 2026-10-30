/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0021DF90(s32);
M2C_UNK func_001F0210(s32);                         /* extern */
extern char D_009C07F8[];

void func_00981CE0(void) {
    s32 *var_s0;
    u32 var_s1;

    var_s1 = 0;
    var_s0 = ((void *)D_009C07F8);
    do {
        func_001F0210(func_0021DF90(*var_s0));
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 2U);
}
