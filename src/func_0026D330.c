/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_001EDD00();                                /* extern */
M2C_UNK func_001EEF60(s32, s32);                    /* extern */
M2C_UNK func_001EF370(s32, s32);                    /* extern */
M2C_UNK func_001EF900(s32, M2C_UNK);                /* extern */

s32 func_0026D330(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    if (arg0 == 0) {
        return 0;
    }
    temp_v0 = func_001EDD00();
    func_001EF900(temp_v0, 1);
    func_001EF370(temp_v0, arg1);
    func_001EEF60(temp_v0, arg2);
    return temp_v0;
}
