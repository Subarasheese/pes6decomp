/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_002260F0(s32);
s32 func_00B2B250(s32 arg0, s32 arg1) {
    s32 value;
    u8 value2;
    u8 value3;

    value = func_002260F0(arg0);
    value2 = M2C_FIELD(func_002260F0(arg1), u8 *, 0x4A4);
    value3 = M2C_FIELD(value, u8 *, 0x4A4);
    if (((value3 + 3) >= (s32)value2) && (((value3 - 3) <= (s32)value2))) {
        return 1;
    }
    if (!((s32)value2 >= (s32)value3)) {
        return 0;
    }
    return 2;
}
