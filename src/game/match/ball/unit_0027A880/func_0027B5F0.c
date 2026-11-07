/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

s32 func_0027B5F0(void *object, f32 value) {
    f32 difference;
    f32 half_width;
    void *range;

    range = M2C_FIELD(M2C_FIELD(object, void **, 0x24), void **, 4);
    half_width = M2C_FIELD(range, f32 *, 0xC) / 2.0f;
    difference = M2C_FIELD(range, f32 *, 8) - value;
    if ((difference <= half_width) && !(difference < -half_width)) {
        return 1;
    }
    return 0;
}
