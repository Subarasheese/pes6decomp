/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0065D870[];

void func_0063E110(void) {
    M2C_UNK *var_a1;
    s32 var_a2;

    var_a2 = 0;
    var_a1 = ((void *)D_0065D870);
    do {
        M2C_FIELD(var_a1, s8 *, 0) = 0xE;
        var_a2 += 6;
        M2C_FIELD(var_a1, s8 *, 1) = 0xE;
        M2C_FIELD(var_a1, s8 *, 2) = 0xE;
        M2C_FIELD(var_a1, s8 *, 3) = 0xE;
        M2C_FIELD(var_a1, s8 *, 4) = 0xE;
        M2C_FIELD(var_a1, s8 *, 5) = 0xE;
        var_a1 += 6;
    } while (var_a2 < 0x24);
}
