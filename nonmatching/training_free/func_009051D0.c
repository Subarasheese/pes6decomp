/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0058E7F0[];
extern char D_005900B0[];

void func_009051D0(s32 arg0, s32 arg1) {
    M2C_UNK *var_a0;
    s32 var_a2;

    if (arg0 == 0) {
        var_a0 = ((void *)D_0058E7F0);
    } else {
        var_a0 = ((void *)D_005900B0);
    }
    var_a2 = 0;
    do {
        if (M2C_FIELD(var_a0, u8 *, 0x1DD) == arg1) {

        }
        var_a2 += 1;
        var_a0 += 0x240;
    } while (var_a2 < 0xB);
}
