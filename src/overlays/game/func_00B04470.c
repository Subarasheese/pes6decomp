/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern u32 func_00208310(s32);
s32 func_00B04470(s32 arg0, s32 arg1, s32 arg2) {
    u32 a = M2C_FIELD(func_00208310(arg0 & 0xFFFF), u16 *, 8);
    s32 b = (arg2 & 0xFFFF) * 0xB6;
    return ((s32) (a * b * 2) / arg1) & 0xFFFF;
}
