/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_001C4698(s32, s32, M2C_UNK);
M2C_UNK func_001C4730(s32, s32, M2C_UNK);
s32 func_00222AB0(s32);
M2C_UNK func_00C1B380(M2C_UNK);

void func_00BE47D0(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_00222AB0((arg1 & 0xFFFF) - 0x8000);
    if (func_001C4698(arg0, temp_v0, 0x7C) != 0) {
        func_001C4730(temp_v0, arg0, 0x7C);
        func_00C1B380(8);
    }
}
