/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008B09E0[];

s16 *func_00847280(s64 arg0) {
    s16 *var_v0;
    s32 var_a1;

    var_v0 = ((void *)D_008B09E0);
    var_a1 = 0;
loop_1:
    if (*var_v0 != ((s64) (arg0 << 0x30) >> 0x30)) {
        var_a1 += 1;
        var_v0 += 0x88;
        if (var_a1 >= 8) {
            return NULL;
        }
        goto loop_1;
    }
    return var_v0;
}
