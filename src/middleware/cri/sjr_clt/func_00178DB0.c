/* compiler: ee-gcc-2.96-G0-g */
/* g-guthrie/mvc2-port-and-decomp src/s2.c (func_00410A30). See THIRD_PARTY.md. */
#include "types.h"
typedef struct {
    s32 a;
    s32 b;
    s32 c;
    s32 d;
} Q4;
extern Q4 D_00510B00;
extern s32 DTX_CallUrpc(unsigned int command, s32 *send, s32 sendCount, s32 *receive, s32 receiveCount);

s32 func_00178DB0(s32 a, s32 b, s32 *c) {
    s32 c0 = c[0];
    D_00510B00.a = a;
    D_00510B00.b = b;
    D_00510B00.c = c0;
    D_00510B00.d = c[1];
    return DTX_CallUrpc(0x27, (s32 *)&D_00510B00, 4, 0, 0);
}
