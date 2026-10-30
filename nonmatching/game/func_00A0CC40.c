/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0058E7F0[];

void func_00A0CC40(s32 arg0, s32 arg1) {
    M2C_UNK *var_a2;
    s32 var_a3;

    var_a3 = 0;
    var_a2 = ((void *)D_0058E7F0);
    do {
        if ((M2C_FIELD(M2C_FIELD(var_a2, void **, 4), u8 *, 0x2C) != 0) && (M2C_FIELD(var_a2, u8 *, 0x13) == arg0) && (M2C_FIELD(var_a2, u8 *, 0x16) == arg1)) {

        }
        var_a3 += 1;
        var_a2 += 0x240;
    } while (var_a3 < 0x16);
}
