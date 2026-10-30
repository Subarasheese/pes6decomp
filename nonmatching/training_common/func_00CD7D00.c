/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00591E00[];

void func_00CD7D00(void) {
    M2C_UNK *var_a0;
    s32 var_a1;

    var_a1 = 0;
    var_a0 = ((void *)D_00591E00);
    do {
        M2C_FIELD(var_a0, s8 *, 0x4F) = 0;
        var_a1 += 1;
        M2C_FIELD(var_a0, s8 *, 0x53) = 0;
        M2C_FIELD(var_a0, s8 *, 0x50) = 0;
        M2C_FIELD(var_a0, s8 *, 0x54) = 0;
        var_a0 += 2;
    } while (var_a1 < 2);
}
