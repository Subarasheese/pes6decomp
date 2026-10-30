/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBD5D0[];

void *func_00BC8D50(void) {
    M2C_UNK *var_a0;
    s32 var_a1;
    void *temp_v0;

    var_a1 = 0;
    var_a0 = ((void *)D_00CBD5D0);
loop_1:
    temp_v0 = var_a0 + 0x14;
    if ((temp_v0 != NULL) && (M2C_FIELD(var_a0, s32 *, 0x14) == 0)) {

    } else {
        var_a1 += 1;
        var_a0 += 0x3C;
        if (var_a1 >= 6) {

        } else {
            goto loop_1;
        }
    }
    if (var_a1 == 6) {
        return NULL;
    }
    return temp_v0;
}
