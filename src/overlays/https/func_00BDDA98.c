/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern void func_00BB3380(s32, s32, s32, s32, s32);

s32 func_00BC0A38(M2C_UNK);

s32 func_00BDDA98(void) {
    s32 temp_v0;

    temp_v0 = func_00BC0A38(0x34);
    if (temp_v0 == 0) {
        func_00BB3380(0xB, 0xEA, 0x21, 0, 0);
    }
    return temp_v0;
}
