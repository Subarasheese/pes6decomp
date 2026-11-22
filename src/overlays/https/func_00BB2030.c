/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern void *func_00BAD1A0(void);
M2C_UNK func_00BB3380(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

s32 func_00BB2030(s32 arg0) {
    s32 (*temp_v0)(s32);

    temp_v0 = M2C_FIELD(func_00BAD1A0(), s32(**)(s32), 0x28);
    if (temp_v0 == NULL) {
        func_00BB3380(0xA, 0x6B, 0xE, 0, 0);
        return -1;
    }
    return temp_v0(arg0);
}
