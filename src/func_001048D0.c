/* compiler: ee-gcc-2.9 */
#include "types.h"
s32 DIntr(s32); void EIntr(void);
void func_001048D0(s32 p) { s32 r = DIntr(p); *(volatile u32 *)0x1000F590 = *(volatile u32 *)0x1000F520 | 0x10000; *(volatile u32 *)0x1000B000 = p; *(volatile u32 *)0x1000F590 = *(volatile u32 *)0x1000F520 & 0xFFFEFFFF; if (r != 0) EIntr(); }
