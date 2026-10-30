/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00908CA0;

void func_008F9600(void) {
    s32 var_a2;
    void **var_a1;
    void *temp_a0;

    var_a2 = 0;
    var_a1 = &D_00908CA0;
    do {
        temp_a0 = *var_a1;
        if (*M2C_FIELD(temp_a0, s32 **, 4) != 0) {
            M2C_FIELD(temp_a0, s32 *, 0xE4) = 0;
        }
        var_a2 += 1;
        var_a1 += 4;
    } while (var_a2 < 0x19);
}
