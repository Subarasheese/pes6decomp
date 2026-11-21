/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_002260F0(s32);
extern s32 func_002937A0(u8);
s32 func_00B2C690(s32 arg0, s32 arg1) {
    s32 value;
    s32 value2;
    s32 value3;
    s32 value4;

    if ((arg0 & 0xFF) >= 0x48) {
        return 0;
    }
    value = func_002260F0(arg0);
    if (value == 0) {
        return 0;
    }
    value3 = 0;
    value4 = 0;
    do {
        value2 = func_002937A0(M2C_FIELD((value + value3), u8 *, 0xD6)) & 0xFF;
        if ((value2 < 0xD) && ((arg1 & 0xFF) == value2)) {
            value4 = (value4 + 1) & 0xFF;
        }
        value3 += 1;
    } while (value3 < 0xB);
    return value4;
}
