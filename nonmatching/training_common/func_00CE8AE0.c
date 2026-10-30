/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003E7E28;

s32 func_00CE8AE0(s32 arg0) {
    s32 var_a1;
    void *var_v1;

    var_v1 = D_003E7E28;
    var_a1 = 0;
loop_1:
    if (M2C_FIELD(var_v1, s32 *, 0x68) != arg0) {
        var_a1 += 1;
        var_v1 += 4;
        if (var_a1 >= 0x20) {
            return 0;
        }
        goto loop_1;
    }
    return 1;
}
