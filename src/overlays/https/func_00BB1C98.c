/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

M2C_UNK func_00BBDDD0(s32, s32, s32, M2C_UNK, M2C_UNK);
s32 func_00BBDF90(s32, M2C_UNK);

s32 func_00BB1C98(void *arg0) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x14);
    if (!(temp_v1 & 0x100)) {
        M2C_FIELD(arg0, s32 *, 0x14) = (s32)(temp_v1 | 0x100);
        func_00BBDDD0(M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(arg0, s32 *, 8),
                      M2C_FIELD(arg0, s32 *, 4), 0, 0);
    }
    return func_00BBDF90(M2C_FIELD(arg0, s32 *, 0xC), 0) == 0;
}
