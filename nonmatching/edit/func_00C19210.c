/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001DC980(s32);                         /* extern */
extern char D_00CF2030[];

void func_00C19210(void) {
    s32 *var_s0;
    u32 var_s1;

    var_s1 = 0;
    var_s0 = ((void *)D_00CF2030);
    do {
        func_001DC980(*var_s0);
        var_s1 += 1;
        *var_s0 = 0;
        var_s0 += 4;
    } while (var_s1 < 3U);
}
