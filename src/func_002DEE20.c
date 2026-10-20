/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001540B0(s32, M2C_UNK);                /* extern */
s32 func_001540C0();                                /* extern */
s32 func_001E8FF0(s32, s32, s32);                   /* extern */

s32 func_002DEE20(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;

    func_001540B0(func_001540C0(), 0);
    temp_s0 = func_001E8FF0(arg0, arg1, arg2);
    func_001540B0(arg2, 0);
    return temp_s0;
}
