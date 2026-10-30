/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_001211D0(void *arg0, void *arg1) {
    s32 var_a2;
    u8 temp_v0;
    void *var_a0;
    void *var_a1;

    var_a0 = arg0;
    var_a1 = arg1;
    var_a2 = 3;
    do {
        var_a2 -= 1;
        M2C_FIELD(var_a0, u8 *, 0) = (u8) M2C_FIELD(var_a1, u8 *, 0);
        M2C_FIELD(var_a0, u8 *, 1) = (u8) M2C_FIELD(var_a1, u8 *, 1);
        temp_v0 = M2C_FIELD(var_a1, u8 *, 2);
        M2C_FIELD(var_a0, s8 *, 3) = 0;
        var_a1 += 4;
        M2C_FIELD(var_a0, u8 *, 2) = temp_v0;
        var_a0 += 4;
    } while (var_a2 >= 0);
}
