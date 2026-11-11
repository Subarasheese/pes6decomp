/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x90];
    u8 x90;
    u8 x91;
    u8 pad92[2];
    s32 x94;
    u8 pad98[0x14];
    u8 xAC;
} SB1D;

extern SB1D *func_00B1DE00(void);
extern void func_00B1C960(s32);
void func_00225C00(s32, s32);
void SD_call(s32);
void func_00B1CAE0(void);
s32 func_00B1DD50(void);

s32 func_00B1D920(void) {
    SB1D *p;

    p = func_00B1DE00();
    if (p == NULL) {
        return 0;
    }
    if (p->x94 == 0) {
        p->x94 = 1;
        func_00B1CAE0();
        p->xAC = 0;
        func_00B1C960(p->xAC);
    } else {
        func_00225C00(func_00B1DD50() & 0xFFFF, 0);
        p->x90 = 1;
        p->x91 = 4;
    }
    SD_call(0x84028400);
    return 0;
}
