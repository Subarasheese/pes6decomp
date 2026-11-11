/* compiler: ee-gcc-2.96 */
#include "pes6/m2c.h"

M2C_UNK func_0010C9D0(s32, s32, s32, s32);          /* extern */
M2C_UNK func_0010CA78(s32);                         /* extern */

void func_0010C998(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_16;

    temp_16 = arg0 & 0xFFFF;
    func_0010C9D0(temp_16, arg1 & 0xFFFF, arg2 & 0xFFFF, arg3 & 0xFFFF);
    func_0010CA78(temp_16);
}
