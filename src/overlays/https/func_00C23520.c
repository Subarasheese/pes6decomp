/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

void func_00C23520(s8 *arg0, s8 *arg1) {
    s32 var_a2;
    u8 temp_v0;
    s8 *var_a0;
    s8 *var_a1;

    var_a0 = arg0;
    var_a1 = arg1;
    var_a2 = 7;
    do {
        var_a2 -= 1;
        M2C_FIELD(var_a1, s8 *, 0) = (s8)(((u8)*var_a0 >> 5) + 1);
        M2C_FIELD(var_a1, s8 *, 1) = (s8)((((u8)*var_a0 >> 2) & 7) + 1);
        temp_v0 = *var_a0;
        var_a0 += 1;
        M2C_FIELD(var_a1, s8 *, 2) = (s8)((temp_v0 & 3) + 1);
        var_a1 += 3;
    } while (var_a2 >= 0);
}
