/* compiler: mwcc-3.0.1b210 */
/* Repaired from m2c output by an agent; compiles to the original instructions exactly. */
#include "pes6/m2c.h"

extern s32 (*D_003E996C)(void *, void *, s32);

s32 func_001ED030(s32 *a0, char *a1) {
    s64 *o = (s64 *)*a0;
    s64 buf[4];
    s32 r = D_003E996C(a1 + 0x60, buf, 4);
    o[0] = ((s64 *)*(s32 *)(a1 + 0xD0))[2];
    o[1] = 6;
    o[2] = *(s64 *)(a1 + 0xB0);
    o[3] = 1;
    o[4] = *(s64 *)(a1 + 0xD8);
    o[5] = 3;
    o[6] = buf[0];
    o[7] = 13;
    o[8] = *(s64 *)(a1 + 0xE0);
    o[9] = 3;
    o[10] = buf[1];
    o[11] = 13;
    o[12] = *(s64 *)(a1 + 0xE8);
    o[13] = 3;
    o[14] = buf[2];
    o[15] = 5;
    o[16] = *(s64 *)(a1 + 0xF0);
    o[17] = 3;
    o[18] = buf[3];
    o[19] = 5;
    *a0 += 0xA0;
    return r;
}
