/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005E2524[];

void func_002ABDE0(void *arg0) {
    M2C_UNK *var_a3;
    s32 temp_v1;
    s32 var_a2;
    void *var_a0;

    var_a0 = arg0;
    var_a2 = 0x20;
    var_a3 = ((void *)D_005E2524);
    do {
        var_a2 -= 1;
        temp_v1 = M2C_FIELD(var_a0, s32 *, 4);
        M2C_FIELD(var_a3, s32 *, 0) = (s32) M2C_FIELD(var_a0, s32 *, 0);
        var_a0 += 8;
        M2C_FIELD(var_a3, s32 *, 4) = temp_v1;
        var_a3 += 8;
    } while (var_a2 > 0);
}
