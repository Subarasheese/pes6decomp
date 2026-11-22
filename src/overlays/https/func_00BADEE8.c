/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

M2C_UNK func_00BB42C0(s32);

s32 func_00BADEE8(void *arg0) {
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_a0 != 0) {
        func_00BB42C0(temp_a0);
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    }
    return 0;
}
