/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_005EFFA8[];
extern char D_005F0968[];
extern char D_005F096C[];

s32 func_0032EA30(void) {
    u32 *mt;
    u32 *p;
    u32 y;
    s32 i;

    (*(s32 *)D_005F0968) = 0x270;
    mt = (u32 *)D_005EFFA8;
    *(u32 **)D_005F096C = mt;
    p = mt;
    for (i = 0; i < 0xE3; i++) {
        y = (p[0] & 0x80000000) | (p[1] & 0x7FFFFFFF);
        p[0] = p[0x18D] ^ (y >> 1) ^ ((p[1] & 1) ? 0x9908B0DF : 0);
        p++;
    }
    for (i = 0; i < 0x18C; i++) {
        y = (p[0] & 0x80000000) | (p[1] & 0x7FFFFFFF);
        p[0] = p[-0xE3] ^ (y >> 1) ^ ((p[1] & 1) ? 0x9908B0DF : 0);
        p++;
    }
    y = (p[0] & 0x80000000) | (mt[0] & 0x7FFFFFFF);
    p[0] = p[-0xE3] ^ (y >> 1) ^ ((mt[0] & 1) ? 0x9908B0DF : 0);
    return 1;
}
