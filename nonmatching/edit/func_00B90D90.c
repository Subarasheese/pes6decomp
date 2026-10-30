/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CDF8F4[];

void func_00B90D90(void) {
    M2C_UNK *var_a0;
    s32 var_a1;

    var_a1 = 0;
    var_a0 = ((void *)D_00CDF8F4);
    do {
        if ((var_a0 + 0xC) != NULL) {
            M2C_FIELD(var_a0, s32 *, 0xC) = 0;
            M2C_FIELD(var_a0, s32 *, 0x10) = 0;
            M2C_FIELD(var_a0, s32 *, 0x14) = 0;
        }
        var_a1 += 1;
        var_a0 += 0xC;
    } while (var_a1 < 8);
}
