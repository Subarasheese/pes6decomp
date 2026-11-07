/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_002C7100(u8 *a0, s32 *a1) {
    s32 r = (a0[0x18] & 0x7F) + 2 + (a0[9] & 0x7F);
    *a1 += 200;
    return r;
}
