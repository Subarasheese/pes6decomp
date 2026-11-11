/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

M2C_UNK func_001B9CA0(void *, f32, f32);
f32 func_001D79A0(s32, s32);
M2C_UNK func_001D7A20(s32, void *, s32);
M2C_UNK func_001D7E40();

void func_001B9BE0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u32 sp50[3];
    f32 temp_f20;

    func_001D7E40();
    func_001D7A20(arg0, &sp50, arg2);
    temp_f20 = func_001D79A0(arg0, arg2);
    func_001B9CA0(&sp50, temp_f20, func_001D79A0(arg0, arg3));
}
