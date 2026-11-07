/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_00529A70[];
s32 func_001BC7D0(s32, s32, s32);
s32 func_001BA3D0(s32, s32, s32, s32, s32);

s32 func_001BC370(s32 a, s32 b, s32 c, s32 d, s32 e) {
    s32 r = -1;

    if (d != 0) {
        r = func_001BA3D0(D_00529A70[0], func_001BC7D0(a, b, c), d, 0, e);
    }
    return r;
}
