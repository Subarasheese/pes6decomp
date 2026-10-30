/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_0011E6C8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 *var_v1;
    s32 var_a4;
    void *var_a0;

    var_v1 = arg0 + 0x44;
    var_a4 = 0;
    var_a0 = arg0 + 0x6C;
loop_1:
    var_a4 += 1;
    if (*var_v1 == 0) {
        *var_v1 = arg1;
        M2C_FIELD(var_a0, s32 *, 0) = arg3;
        M2C_FIELD(var_a0, s32 *, -0x14) = arg2;
        return;
    }
    var_a0 += 4;
    var_v1 += 4;
    if (var_a4 >= 5) {
        return;
    }
    goto loop_1;
}
