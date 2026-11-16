/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

s32 func_00367E20(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x2C) & 1) {
        if (M2C_FIELD(arg0, s32 *, 0xC) == 1) {
            return 1;
        }
        if (M2C_FIELD(arg0, s32 *, 0x14) == 3) {
            return 1;
        }
        return (M2C_FIELD(arg0, s32 *, 0x38) & 0x21F) != 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x14) == 3) {
        return 1;
    }
    return M2C_FIELD(arg0, u8 *, 0x38) != 0;
}
