/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

void func_00122260(s8 arg0, s8 arg1, s32 arg2, s32 arg3, void *arg4) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg4, void *(**)(s32, M2C_UNK, M2C_UNK), 0x28)(M2C_FIELD(arg4, s32 *, 0x30), 1, 0x1C);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 0) = 0;
        M2C_FIELD(temp_v0, s8 *, 0x10) = arg0;
        M2C_FIELD(temp_v0, s8 *, 0x11) = arg1;
        M2C_FIELD(temp_v0, s32 *, 0x14) = arg2;
        M2C_FIELD(temp_v0, s32 *, 0x18) = arg3;
    }
}
