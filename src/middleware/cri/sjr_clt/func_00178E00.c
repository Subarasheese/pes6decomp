/* compiler: ee-gcc-2.96-G0-g */
/* g-guthrie/mvc2-port-and-decomp src/s3w9e.c (func_00410A80). See THIRD_PARTY.md. */
#include "types.h"
extern s32 D_00510B00[];
extern s32 DTX_CallUrpc(unsigned int command, s32 *send, s32 sendCount, s32 *receive, s32 receiveCount);

void func_00178E00(s32 a, s32 b, s32 *c) {
    s32 *d = D_00510B00;
    s32 x = c[0];
    d[0] = a;
    d[1] = b;
    d[2] = x;
    d[3] = c[1];
    DTX_CallUrpc(0x28, d, 4, 0, 0);
}
