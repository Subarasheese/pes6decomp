/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
f32 func_002C7390(s32, s32);
s32 func_00970870();
f32 func_0095AC90(M2C_UNK arg0, s32 arg1) {
    f32 t = func_002C7390(func_00970870(), arg1);
    f32 v = 0.0001f * (t * t);
    if (v < 0.0f) {
        v = 0.0f;
    } else if (v > 1.0f) {
        v = 1.0f;
    }
    return v;
}
