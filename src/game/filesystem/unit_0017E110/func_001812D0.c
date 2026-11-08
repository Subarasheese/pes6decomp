/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[8];
    u8 x8[0x40];
    s32 x48;
    s32 x4C;
    s32 x50;
    s32 x54;
    u8 pad58[0xC];
    s32 x64;
    u8 pad68[4];
    s32 x6C;
    u8 pad70[0x10];
    void (*x80)(void *);
} SW;

extern void func_0017FD00(s32);
extern SW *func_0017ECA0(s32);
void func_0017EDD0(SW *, s32);

void func_001812D0(void) {
    SW *p;

    while (1) {
        if ((p = func_0017ECA0(4)) != NULL) {
            if (p->x80 != NULL) {
                p->x48 = p->x54;
                p->x4C = p->x64;
                p->x50 = p->x6C;
                p->x80(p->x8);
            }
            func_0017EDD0(p, 0);
            func_0017FD00(2);
        } else {
            func_0017FD00(2);
        }
    }
}
