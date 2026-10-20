/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_001331D0(void **arg0, void **arg1) {
    f32 temp_f0;
    f32 temp_f1;
    s32 var_v0;

    temp_f1 = M2C_FIELD(*arg1, f32 *, 0x1C);
    temp_f0 = M2C_FIELD(*arg0, f32 *, 0x1C);
    if (temp_f0 < temp_f1) {
        return 1;
    }
    var_v0 = 1;
    if (temp_f0 <= temp_f1) {
        var_v0 = 0;
    }
    return -var_v0;
}
