/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 func_00223E00(s32);
s32 func_00AFD690(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_00223E00(arg0);
    if (temp_v0 != 0) {
        M2C_FIELD(temp_v0, u8 *, 0x13) = (u8) M2C_FIELD(temp_v0, u8 *, 0x12);
        M2C_FIELD(temp_v0, u8 *, 0x12) = (u8) M2C_FIELD(temp_v0, u8 *, 0x11);
        M2C_FIELD(temp_v0, u8 *, 0x11) = (u8) M2C_FIELD(temp_v0, u8 *, 0x10);
        return 0;
    }
    return 0xFF;
}
