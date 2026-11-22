/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

s32 func_00BC0358(s32);
s32 func_00BC0A38(M2C_UNK);
M2C_UNK func_00BC0A88(s32);

s32 func_00BC1228(void) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v0;

    temp_v0 = func_00BC0A38(0xC);
    var_v0 = 0;
    if (temp_v0 != 0) {
        temp_v0_2 = func_00BC0358(temp_v0);
        var_v0 = temp_v0_2;
        if (temp_v0_2 == 0) {
            func_00BC0A88(temp_v0);
            var_v0 = temp_v0_2;
        }
    }
    return var_v0;
}
