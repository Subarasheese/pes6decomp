/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005E2F50[];

void func_002B8970(s32 arg0, s8 arg1) {
    s32 temp_a0;
    s8 var_a1;
    void *var_a2;

    var_a1 = arg1;
    if ((arg0 >= 0) && (arg0 < 2)) {
        var_a2 = ((void *)D_005E2F50) + (arg0 * 7);
    } else {
        var_a2 = NULL;
    }
    if (var_a2 != NULL) {
        temp_a0 = var_a1 & 0xFF;
        if ((temp_a0 >= 0x21) && (temp_a0 != 0xFF)) {
            var_a1 = 0x1F;
        }
        M2C_FIELD(var_a2, s8 *, 6) = var_a1;
    }
}
