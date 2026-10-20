#include "pes6/m2c.h"
s32 func_001094A8(void *arg0) {
    void *temp_a1;

    temp_a1 = M2C_FIELD(arg0, void **, 0);
    if ((temp_a1 == NULL) || (M2C_FIELD(arg0, s32 *, 4) != M2C_FIELD(temp_a1, s32 *, 0x18)) || !(M2C_FIELD(temp_a1, s32 *, 0x10) & 1)) {
        return 0;
    }
    return 1;
}
