/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005E2F50[];

void func_002B8AF0(s32 arg0, s8 arg1) {
    s8 var_a1;
    void *var_a0;

    var_a1 = arg1;
    if ((arg0 >= 0) && (arg0 < 2)) {
        var_a0 = ((void *)D_005E2F50) + (arg0 * 7);
    } else {
        var_a0 = NULL;
    }
    if (var_a0 != NULL) {
        if ((var_a1 & 0xFF) >= 0xB) {
            var_a1 = 0xA;
        }
        M2C_FIELD(var_a0, s8 *, 4) = var_a1;
    }
}
