/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x10];
    s32 state;
    u8 pad14[0x14];
    s16 a28;
    s16 a2A;
    u8 pad2C[0xD];
    u8 cnt[1];
    u8 pad3A[4];
    s16 a3E;
    u8 pad40[2];
    s16 a42;
} O;

s32 func_00333870(O *o, s16 v, s32 z, s32 i) {
    if (o->state == 0xD) {
        if (z == 0) {
            o->cnt[i]++;
            o->a3E = v;
        }
        o->a28 = -1;
        o->a2A = -1;
        o->a42 = 0;
    }
    return 1;
}
