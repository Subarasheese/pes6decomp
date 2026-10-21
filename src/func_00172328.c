/* compiler: ee-gcc-2.96 */
#include "types.h"
extern u8 D_003CAFA8[];
void func_00172820(void *);
void func_00172328(s32 *p, s32 v) { if (p == 0) { func_00172820(D_003CAFA8); return; } if (v == 1) *(u8 *)((u8 *)p + 4) = v; else *(u8 *)((u8 *)p + 4) = 0; }
