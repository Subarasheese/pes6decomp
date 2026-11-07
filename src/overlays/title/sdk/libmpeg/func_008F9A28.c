/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern int EIntr(void);
extern s32 DIntr(void);

void func_008F9A28(u32 arg0, s32 arg1) {
    s32 en;

    en = DIntr();
    if ((arg0 >> 0x1C) == 7) {
        arg0 &= 0x0FFFFFFF;
        arg0 |= 0x80000000;
    } else {
        arg0 &= 0x0FFFFFFF;
    }
    *(volatile u32 *)0x1000B010 = arg0;
    *(volatile u32 *)0x1000B020 = arg1 >> 4;
    *(volatile u32 *)0x1000B000 = 0x100;
    if (en != 0) {
        EIntr();
    }
}
