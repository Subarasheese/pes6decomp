/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

s32 func_00207D80(void *arg0, s32 arg1) {
    f32 value;
    f32 value2;

    if (M2C_FIELD(arg0, u16 *, 0x30) != 0) {
        if ((M2C_FIELD(arg0, u8 *, 0x4C) != 0) && (M2C_FIELD(arg0, u8 *, 0x4D) == 0)) {
            return 0;
        }
        if ((M2C_FIELD(arg0, u8 *, 0x51) != 0) && (M2C_FIELD(arg0, u8 *, 0x4D) == 0)) {
            return 0;
        }
        value2 = M2C_FIELD(arg0, f32 *, 0x28) / 2.0f;
        value = M2C_FIELD(arg0, f32 *, 0x38) - (f32)arg1;
        if ((value < value2) && !(value < -value2)) {
            return 1;
        }
        return 0;
    }

    return 0;
}
