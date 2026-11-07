#include "pes6/m2c.h"
s32 func_001634F8(void *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x14);
    M2C_FIELD(arg0, s32 *, 0x58) = arg1;
    if (temp_v0 < arg1) {
        M2C_FIELD(arg0, s32 *, 0x58) = temp_v0;
    }
    return M2C_FIELD(arg0, s32 *, 0x58);
}
