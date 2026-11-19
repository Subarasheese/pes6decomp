/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern char D_00CB539C[];

s32 func_00960F50(char *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 0xB0) == 0) {
        *(((char *)D_00CB539C) + M2C_FIELD(arg0, u8 *, 0x13)) = 1;
    }
    M2C_FIELD(arg0, s32 *, 0x1E4) = (s32) (arg1 & 0xFF);
    return arg1;
}
