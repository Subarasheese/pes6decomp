/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern s32 func_00134F28(s32);
extern void func_00134FB0(s32);
extern s32 func_001AE624(s32, s32, s32);

s32 func_00152D20(s32 arg0) {
    s32 value;
    s32 value2;
    s32 value3;
    s32 value4;

    value = M2C_FIELD(arg0, s32 *, 4);
    if (value > 0) {
        value4 = func_00134F28(value * 0x4B0);
        value3 = M2C_FIELD(arg0, s32 *, 0);
        if (value4 < value3) {
            func_001AE624(value4, value3, M2C_FIELD(arg0, s32 *, 0xC) * 0x4B0);
            value2 = M2C_FIELD(arg0, s32 *, 0);
            if (value2 != 0) {
                func_00134FB0(value2);
            }
            M2C_FIELD(arg0, s32 *, 0) = value4;
            return 1;
        }
        func_00134FB0(value4);
        return 0;
    }

    return 0;
}
