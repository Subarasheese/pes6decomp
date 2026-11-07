/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x6C];
    s32 x6C;
    s32 x70;
    u8 x74;
    u8 pad75[0x17];
    u8 x8C;
    u8 pad8D;
    u16 x8E;
    u16 x90;
    u16 x92;
    s32 x94;
    s32 x98;
    s32 x9C;
    s32 xA0;
} SL;

SL *func_0099C7E0(s32);

SL *func_009AC630(s32 arg0, s32 arg1) {
    SL *p;

    p = func_0099C7E0(0xA4);
    if (p == NULL) {
        return NULL;
    }
    p->x74 = 0;
    p->x6C = arg0;
    p->x70 = arg1;
    p->x8C = 0;
    p->x8E = 0xFFFF;
    p->x90 = 0xFFFF;
    p->x92 = 0xFFFF;
    p->x94 = 1;
    p->x9C = 0;
    p->xA0 = 0;
    return p;
}
