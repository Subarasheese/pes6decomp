/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CFF530[];

void func_00CE7830(void) {
    M2C_UNK *var_a0;
    s32 var_a1;

    var_a1 = 0;
    var_a0 = ((void *)D_00CFF530);
    do {
        if (M2C_FIELD(var_a0, s32 *, 0xDC) != 0) {

        }
        var_a1 += 1;
        var_a0 += 0x94;
    } while (var_a1 < 4);
}
