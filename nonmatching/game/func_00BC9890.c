/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBD3B0[];

void func_00BC9890(void) {
    M2C_UNK *var_a0;
    s32 var_a1;
    s32 var_a2;
    u8 temp_v1;

    var_a2 = 0x7FFFFFFF;
    var_a1 = 0;
    var_a0 = ((void *)D_00CBD3B0);
    do {
        temp_v1 = M2C_FIELD(var_a0, u8 *, 0xA);
        if ((s32) temp_v1 < var_a2) {
            var_a2 = (s32) temp_v1;
        }
        var_a1 += 1;
        var_a0 += 0x34;
    } while (var_a1 < 6);
}
