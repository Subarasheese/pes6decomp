/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_0080AD30(void *arg0) {
    float zero = 0.0f;

    s32 value;

    value = 0;
    if (M2C_FIELD(arg0, f32 *, 0x58) == zero) {
        value = 0x3E8;
    }
    return value;
}
