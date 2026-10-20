/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_00340880(f32, f32);                        /* extern */

s32 func_0036FE60(void *arg0) {
    if ((func_00340880(M2C_FIELD(arg0, f32 *, 0), M2C_FIELD(arg0, f32 *, 8)) != 0) && !(M2C_FIELD(arg0, f32 *, 0xC) <= 1450.0f)) {
        return 1;
    }
    return 0;
}
