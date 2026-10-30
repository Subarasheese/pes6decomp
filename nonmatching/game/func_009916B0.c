/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003E7A08;

s32 func_009916B0(u8 *arg0) {
    s32 var_a1;
    s32 var_a2;
    void *var_a0;

    var_a1 = 0;
    var_a2 = 0;
    var_a0 = D_003E7A08;
loop_1:
    if (M2C_FIELD(var_a0, u8 *, 8) == *arg0) {
        var_a2 += 1;
        var_a1 += 1;
        var_a0 += 0x40;
        if (var_a2 < 0xA) {
            goto loop_1;
        }
    }
    return var_a1 & 0xFF;
}
