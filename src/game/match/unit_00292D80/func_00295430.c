/* compiler: mwcc-3.0.1b151 */
#include "types.h"
extern f32 func_0011D468(f32);
s32 func_00295430(const f32 vector[2]) {
    f32 x = vector[0], z = vector[1];
    f32 range = func_0011D468(1.17809725f);
    if (z < -range)
        return 4;
    if (z > range)
        return 0;
    range = func_0011D468(1.96349549f);
    if (x > range)
        return 2;
    if (x < -range)
        return 6;
    if (z > 0.f) {
        if (x > 0.f)
            return 3;
        if (x < 0.f)
            return 5;
    }
    if (z < 0.f) {
        if (x > 0.f)
            return 1;
        if (x < 0.f)
            return 7;
    }
    return 8;
}
