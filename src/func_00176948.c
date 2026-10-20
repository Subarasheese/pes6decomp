#include "pes6/m2c.h"
s32 func_00176948(void *arg0, s32 arg1) {
    M2C_UNK (*temp_v0)(s32, M2C_UNK);

    if (arg1 == 1) {
        return M2C_FIELD(arg0, s32 *, 0xC);
    }
    if (arg1 != 0) {
        temp_v0 = M2C_FIELD(arg0, M2C_UNK (**)(s32, M2C_UNK), 0x1C);
        if (temp_v0 != NULL) {
            temp_v0(M2C_FIELD(arg0, s32 *, 0x20), -3);
        }
    }
    return 0;
}
