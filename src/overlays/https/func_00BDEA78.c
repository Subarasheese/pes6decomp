/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern void func_00BB3380(s32, s32, s32, s32, s32);

M2C_UNK func_00B9E938(s32);
s32 func_00BB8168(s32);
s32 func_00BDEB18(s32, s32, s32, s32);

s32 func_00BDEA78(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0_2 = func_00BB8168(arg1);
    if (temp_v0_2 == 0) {
        func_00BB3380(0xB, 0xDD, 0xA3, 0, 0);
        return 0;
    }
    temp_v0 = func_00BDEB18(arg0, temp_v0_2, arg2, arg3);
    if (temp_v0 == 0) {
        func_00B9E938(temp_v0_2);
    }
    return temp_v0;
}
