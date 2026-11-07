/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern int EIntr(void);
s32 DIntr();                                /* extern */

void func_00900398(void) {
    s32 temp_v0;

    temp_v0 = DIntr();
    *(volatile u32 *)0x1000F590 = *(volatile u32 *)0x1000F520 | 0x10000;
    *(volatile u32 *)0x1000B000 = 0;
    *(volatile u32 *)0x1000B400 = 0;
    *(volatile u32 *)0x1000F590 = *(volatile u32 *)0x1000F520 & 0xFFFEFFFF;
    if (temp_v0 != 0) {
        EIntr();
    }
    *(volatile u32 *)0x1000B020 = 0;
    *(volatile u32 *)0x1000B420 = 0;
    *(volatile u32 *)0x10002010 = 0x40000000;
}
