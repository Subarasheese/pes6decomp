/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005E2F50[];

void func_002B8BA0(s32 arg0, s8 arg1) {
    void *var_a0;

    if ((arg0 >= 0) && (arg0 < 2)) {
        var_a0 = ((void *)D_005E2F50) + (arg0 * 7);
    } else {
        var_a0 = NULL;
    }
    if (var_a0 != NULL) {
        if (arg1 >= 3) {
            return;
        }
        M2C_FIELD(var_a0, s8 *, 3) = arg1;
    }
}
