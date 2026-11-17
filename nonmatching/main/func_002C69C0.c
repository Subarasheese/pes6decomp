/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

s32 func_002C69C0(u8 *arg0, s32 *arg1) {
    s32 f;
    s32 t;
    s32 r;
    s32 b8;
    s32 b3;

    f = ((arg0[0x1E] >> 4) & 1) + ((arg0[0x1E] >> 3) & 1);
    t = ((arg0[4] & 0x7F) + 1) * 3;
    r = f * 15 + 1 + t / 2;
    b8 = arg0[8] & 0x7F;
    b3 = arg0[3] & 0x7F;
    *arg1 += 0x1E0;
    return r + (b3 + 1) * 2 + b8;
}
