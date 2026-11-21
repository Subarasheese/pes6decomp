/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_0080B280(void *arg0) {
    float zero = 0.0f;

    s32 value;

    value = 0;
    if ((M2C_FIELD(arg0, f32 *, 0x48) != zero) || (M2C_FIELD(arg0, f32 *, 0x4C) != zero) ||
        (M2C_FIELD(arg0, f32 *, 0x50) != zero)) {
        value = 1;
    }
    return value;
}
