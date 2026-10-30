/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0021DF90(s32);
M2C_UNK func_001F0210(s32);                         /* extern */
extern char D_00CB52F8[];
extern char D_00CE40E0[];

void func_00B9E970(void) {
    s32 *var_s0;
    s32 var_s2;
    u8 *var_s1;

    var_s2 = 0;
    var_s1 = ((void *)D_00CE40E0);
    var_s0 = ((void *)D_00CB52F8);
    do {
        if (*var_s1 == 1) {
            func_001F0210(func_0021DF90(*var_s0));
        }
        var_s2 += 1;
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s2 == 0);
}
