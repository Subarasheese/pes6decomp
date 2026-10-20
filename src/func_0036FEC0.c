/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_00340980(f32, f32);                        /* extern */

s32 func_0036FEC0(void *arg0) {
    if ((func_00340980(M2C_FIELD(arg0, f32 *, 0), M2C_FIELD(arg0, f32 *, 8)) != 0) && (M2C_FIELD(arg0, f32 *, 0xC) < 100.0f) && (M2C_FIELD(arg0, s32 *, 0x10) == 0) && (M2C_FIELD(arg0, u8 *, 0x14) != 0x10)) {
        return 1;
    }
    return 0;
}
