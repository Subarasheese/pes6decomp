/* compiler: ee-gcc-2.96 */
#include "types.h"
extern u8 D_003C8C20[]; extern s32 D_00384C68[];
void func_0015B478(void *);
void func_00166B28(s32 *p, s32 v) { if (p == 0) { func_0015B478(D_003C8C20); return; } *(s32 *)((u8 *)p + 0x38) = v; D_00384C68[0] = v; }
