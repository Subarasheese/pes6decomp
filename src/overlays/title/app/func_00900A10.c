/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern void *Pes6Heap_Alloc(s32, s32);
extern void *D_003EA60C;
void func_00900A10(void) { D_003EA60C = Pes6Heap_Alloc(1, 0x1C); }
