/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_002C6A40(u8 *a0, s32 *a1) {
    s32 r = ((a0[0x11] & 0x7F) + 1) / 4;
    *a1 += 25;
    return r;
}
