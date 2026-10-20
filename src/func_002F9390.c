/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 *func_00154060(M2C_UNK, M2C_UNK);               /* extern */
s32 func_001D5A10(s32);                             /* extern */
M2C_UNK func_001D7C20(s32, M2C_UNK);                /* extern */
M2C_UNK func_001D7D60(s32, M2C_UNK);                /* extern */
M2C_UNK func_001D7D80(s32, M2C_UNK);                /* extern */
M2C_UNK func_001D7E40(s32, s32);                    /* extern */
s32 func_001D7F90(s32);                             /* extern */

s32 *func_002F9390(s32 arg0, s32 arg1) {
    s32 *temp_s1;
    s32 temp_v0;
    s32 var_s0;

    temp_s1 = func_00154060(1, 0x10);
    var_s0 = 0;
    temp_v0 = func_001D5A10(arg0);
    if (temp_v0 != 0) {
        var_s0 = func_001D7F90(temp_v0);
        func_001D7E40(var_s0, arg1);
        func_001D7D80(var_s0, 0);
        func_001D7D60(var_s0, 0);
        func_001D7C20(var_s0, 1);
    }
    if (temp_s1 != NULL) {
        *temp_s1 = var_s0;
    }
    return temp_s1;
}
