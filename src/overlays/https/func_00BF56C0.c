/* compiler: ee-gcc-2.96-G0 */
#include "pes6/m2c.h"

extern s32 func_00BF5D10(s32, s32, s32);

s32 func_00BF56C0(void *arg0, void *arg1) {
    s32 temp_v1;
    s32 var_a3;

    var_a3 = 0;
    temp_v1 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_v1 == M2C_FIELD(arg1, s32 *, 4)) {
        var_a3 = func_00BF5D10(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg1, s32 *, 0), temp_v1) == 0;
    }
    return var_a3;
}
