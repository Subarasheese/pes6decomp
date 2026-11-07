/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_001A33F0(s32 a, s32 b) {
    s32 v;

    if (b >= 0x3000006) {
        b = 0x3000001;
    }
    v = (b & 0xFFFF) + a * 6;
    return v % 40 + ((v / 40 << 16) + 0x2000000);
}
