/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003EA184;

void func_0063E0C0(void) {
    s32 var_a2;
    void *var_v1;

    var_a2 = 0;
    do {
        var_v1 = NULL;
        if ((var_a2 >= 0) && (var_a2 < 0x24)) {
            var_v1 = D_003EA184 + (var_a2 * 0x1400);
        }
        M2C_FIELD(var_v1, s8 *, 0xC) = 0xE;
        var_a2 += 1;
    } while (var_a2 < 0x24);
}
