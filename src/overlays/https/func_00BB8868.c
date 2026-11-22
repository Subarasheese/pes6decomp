/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern s32 func_00B9E0B0(s32, s32, s32, s32);
extern void func_00BB3380(s32, s32, s32, s32, s32);
extern s32 func_00BB7FD8(s32);

M2C_UNK func_00B9E938(s32);
s32 func_00B9E9E0(s32, s32, s32, s32, s32);
s32 func_00BB7FF0(s32);
s32 func_00BC0A38(s32);
M2C_UNK func_00BC0A88(s32);

s32 func_00BB8868(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_s5;

    temp_v0 = func_00B9E0B0(0, 0, arg0, -1);
    var_s5 = 0;
    if (temp_v0 <= 0) {
        return 0;
    }
    temp_v0_2 = func_00BC0A38(temp_v0);
    if (temp_v0_2 == 0) {
        func_00BB3380(8, 0x64, 0x64, 0, 0);
        return 0;
    }
    temp_s0 = func_00B9E0B0(temp_v0_2, temp_v0, arg0, -1);
    temp_v0_3 = func_00B9E9E0(func_00BB7FD8(1), temp_v0_2, temp_s0, arg1, arg2);
    if (temp_v0_3 != 0) {
        var_s5 = func_00BB7FF0(temp_v0_3);
    }
    func_00B9E938(temp_v0_3);
    func_00BC0A88(temp_v0_2);
    return var_s5;
}
