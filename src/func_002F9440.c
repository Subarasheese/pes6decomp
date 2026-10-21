/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_001D5A10();                                /* extern */
M2C_UNK func_001D7C20(s32, M2C_UNK);                /* extern */
M2C_UNK func_001D7D60(s32, M2C_UNK);                /* extern */
M2C_UNK func_001D7D80(s32, M2C_UNK);                /* extern */
M2C_UNK func_001D7E40(s32, s32);                    /* extern */
s32 func_001D7F90(s32);                             /* extern */

s32 func_002F9440(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0;
    temp_v0 = func_001D5A10();
    if (temp_v0 != 0) {
        var_s0 = func_001D7F90(temp_v0);
        func_001D7E40(var_s0, arg1);
        func_001D7D80(var_s0, 0);
        func_001D7D60(var_s0, 0);
        func_001D7C20(var_s0, 1);
    }
    return var_s0;
}
