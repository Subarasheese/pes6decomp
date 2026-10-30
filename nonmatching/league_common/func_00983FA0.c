/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00225F60(s32);
s32 func_00983FA0(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_00225F60(arg0);
    if (temp_v0 != 0) {
        M2C_FIELD(temp_v0, u8 *, 0x2A) = (u8) M2C_FIELD(temp_v0, u8 *, 0x29);
        M2C_FIELD(temp_v0, u8 *, 0x29) = (u8) M2C_FIELD(temp_v0, u8 *, 0x28);
        M2C_FIELD(temp_v0, u8 *, 0x28) = (u8) M2C_FIELD(temp_v0, u8 *, 0x27);
        return 0;
    }
    return 0xFF;
}
