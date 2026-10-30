/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005E37F0[];

void func_002CA140(s32 arg0, void *arg1) {
    s32 var_a2;
    s8 temp_v1;
    void *var_a1;
    void *var_a3;

    var_a1 = arg1;
    var_a2 = 8;
    var_a3 = ((void *)D_005E37F0) + (arg0 * 0x10);
    do {
        var_a2 -= 1;
        temp_v1 = M2C_FIELD(var_a1, s8 *, 1);
        M2C_FIELD(var_a3, s8 *, 0) = (s8) M2C_FIELD(var_a1, s8 *, 0);
        var_a1 += 2;
        M2C_FIELD(var_a3, s8 *, 1) = temp_v1;
        var_a3 += 2;
    } while (var_a2 > 0);
}
