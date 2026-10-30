/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00858B20(void *arg0, s32 arg1) {
    s32 var_v1;
    void *var_a0;

    var_a0 = arg0;
    var_v1 = 1;
loop_1:
    if ((M2C_FIELD(var_a0, s8 *, 8) != 0) && (M2C_FIELD(var_a0, s32 *, 4) == arg1)) {
        return var_a0;
    }
    var_v1 += 1;
    var_a0 += 0x1C;
    if (var_v1 >= 9) {
        return NULL;
    }
    goto loop_1;
}
