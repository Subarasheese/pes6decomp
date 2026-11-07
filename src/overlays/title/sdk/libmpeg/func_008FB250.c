/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

typedef struct {
    u8 p0[0x1C0];
    s32 f1C0;
    u8 p1C4[0x828 - 0x1C4];
    s32 f828;
} Ctx;

extern int EIntr(void);
extern s32 DIntr(void);
extern void func_00104BF8(s32, s32);

void func_008FB250(Ctx *c) {
    s32 en;

    c->f828 = 1;
    c->f1C0 = 0;
    en = DIntr();
    *(volatile u32 *)0x1000F590 = *(volatile u32 *)0x1000F520 | 0x10000;
    *(volatile u32 *)0x1000B000 = 0;
    *(volatile u32 *)0x1000B400 = 0;
    *(volatile u32 *)0x1000D400 = 0;
    *(volatile u32 *)0x1000F590 = *(volatile u32 *)0x1000F520 & 0xFFFEFFFF;
    if (en != 0) {
        EIntr();
    }
    *(volatile u32 *)0x1000B020 = 0;
    *(volatile u32 *)0x1000B420 = 0;
    *(volatile u32 *)0x1000D420 = 0;
    *(volatile u32 *)0x10002010 = 0x40000000;
    func_00104BF8(0, 0);
}
