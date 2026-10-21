/* compiler: ee-gcc-2.96 */
#include "types.h"
extern u8 D_003CB4D8[];
void func_00172E10(s32 *, u8 *);
s32 func_00173578(s32 *p) { if (p == 0) { func_00172E10(p, D_003CB4D8); return 0; } return *(s32 *)((u8 *)p + 0x14); }
