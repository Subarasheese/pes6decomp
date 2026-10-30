/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00B8C420[];

void func_00AFCAF0(void) {
    M2C_UNK *var_a0;
    s32 var_a1;

    var_a1 = 0;
    var_a0 = ((void *)D_00B8C420);
    do {
        M2C_FIELD(var_a0, s16 *, 0) = 0;
        var_a1 += 8;
        M2C_FIELD(var_a0, s16 *, 2) = 0;
        M2C_FIELD(var_a0, s16 *, 4) = 0;
        M2C_FIELD(var_a0, s16 *, 6) = 0;
        M2C_FIELD(var_a0, s16 *, 8) = 0;
        M2C_FIELD(var_a0, s16 *, 0xA) = 0;
        M2C_FIELD(var_a0, s16 *, 0xC) = 0;
        M2C_FIELD(var_a0, s16 *, 0xE) = 0;
        var_a0 += 0x10;
    } while (var_a1 < 0x10);
}
