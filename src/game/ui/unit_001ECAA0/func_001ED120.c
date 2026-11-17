/* compiler: mwcc-3.0.1b210 */
/* Repaired from m2c output by an agent; compiles to the original instructions exactly. */
#include "pes6/m2c.h"

extern s32 (*D_003E996C)(s32 a0, s64 *a1, s32 a2);

s32 func_001ED120(s32 *a0, u8 *a1) {
    s64 *p = *(s64 **)a0;
    s64 buf[4];
    s32 r = D_003E996C((s32)(a1 + 0x60), buf, 4);
    p[0] = *(s64 *)(a1 + 0xB0);
    p[1] = 1;
    p[2] = buf[0];
    p[3] = 13;
    p[4] = buf[1];
    p[5] = 13;
    p[6] = buf[2];
    p[7] = 5;
    p[8] = buf[3];
    p[9] = 5;
    *a0 += 0x50;
    return r;
}
