/* compiler: ee-gcc-2.96-G0 */
#include "pes6/m2c.h"

extern s32 func_00BF4C90(s32);
extern void func_00BF5C98(s32, s32, s32);

s32 func_00BEBBD8(s32 arg0, s32 arg1) {
    s32 temp_v0;

    func_00BF5C98(arg0 + 4, 0, 0x18);
    temp_v0 = func_00BF4C90(arg0);
    if (temp_v0 == 0) {
        M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    }
    return temp_v0;
}
