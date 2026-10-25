/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern f32 D_005E2FBC[];

s32 func_002BAA80(s32 *a0) {
    D_005E2FBC[0] = 0.001f * (f32)a0[1];
    return 0;
}
