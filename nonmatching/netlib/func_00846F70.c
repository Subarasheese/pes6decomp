/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008B09E0[];

M2C_UNK *func_00846F70(s32 arg0) {
    M2C_UNK *var_v0;
    s32 var_a1;

    var_a1 = 0;
    var_v0 = ((void *)D_008B09E0);
loop_1:
    if (M2C_FIELD(var_v0, s32 *, 8) != arg0) {
        var_a1 += 1;
        var_v0 += 0x88;
        if (var_a1 >= 8) {
            return NULL;
        }
        goto loop_1;
    }
    return var_v0;
}
