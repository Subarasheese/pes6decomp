/* compiler: ee-gcc-2.96 */
#include "types.h"
extern u8 D_003C8B30[];
void func_0015B478(void *);
s32 func_00166600(s32 *p, s32 i) { if (p == 0) { func_0015B478(D_003C8B30); return 0; } return *(s16 *)((u8 *)p + 0x42 + i * 2); }
