/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

s32 func_00B9D700(s32, s32, s32, s32);
s32 func_00BA29D8(s32);
M2C_UNK func_00BA2B20(s32);
M2C_UNK func_00BA2FC0(s32, M2C_UNK, M2C_UNK, s32);
extern s32 *func_00BA92E0(void);
M2C_UNK func_00BB3380(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

s32 func_00B9D648(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_s0;
    s32 temp_v0;

    temp_v0 = func_00BA29D8(func_00BA92E0());
    if (temp_v0 == 0) {
        func_00BB3380(0xD, 0x69, 0x807, 0, 0);
        return 0;
    }
    func_00BA2FC0(temp_v0, 0x6A, 0, arg2);
    temp_s0 = func_00B9D700(arg0, arg1, temp_v0, arg3);
    func_00BA2B20(temp_v0);
    return temp_s0;
}
