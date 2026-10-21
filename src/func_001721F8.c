/* compiler: ee-gcc-2.96 */
#include "types.h"
extern u8 D_003CAF18[];
void func_00172820(void *);
void func_001721F8(s32 *p) { if (p == 0) { func_00172820(D_003CAF18); return; } if (*(s8 *)((u8 *)p + 1) != 0) return; *(s32 *)((u8 *)p + 0x1C) = 0; *(s32 *)((u8 *)p + 0x20) = 0; *(s32 *)((u8 *)p + 0x24) = 0;  }
