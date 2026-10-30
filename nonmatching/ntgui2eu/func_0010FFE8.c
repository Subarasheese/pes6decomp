/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001B0444(void *);                          /* extern */
extern char D_0044AA50[];

void *func_0010FFE8(void) {
    s32 temp_s2;
    s32 var_s0;
    void *var_s1;

    temp_s2 = M2C_FIELD(((void *)D_0044AA50), s32 *, 0x309C);
    var_s1 = func_001B0444(((void *)D_0044AA50) + 0x31A4) + (((void *)D_0044AA50) + 0x31A5);
    if (temp_s2 > 0) {
        var_s0 = temp_s2;
        do {
            var_s0 -= 1;
            var_s1 = var_s1 + func_001B0444(var_s1) + 2;
        } while (var_s0 != 0);
    }
    return var_s1;
}
