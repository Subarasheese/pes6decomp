/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"
s32 func_00915660(s32, s32);
M2C_UNK func_009842D0(s32, f32, f32);
M2C_UNK func_00C6A440(s32);
extern f32 D_00CB531C[];
extern f32 D_00CB5320[];
extern f32 D_00CB5324[];
void func_00C61C50(s32 arg0) {
    D_00CB531C[0] = D_00CB5324[0] * -13465.0f;
    D_00CB5320[0] = 0.0f;
    if (func_00915660(arg0, 0x34) != 0) {
        func_00C6A440(arg0);
        return;
    }
    func_009842D0(arg0, D_00CB531C[0], D_00CB5320[0]);
}
