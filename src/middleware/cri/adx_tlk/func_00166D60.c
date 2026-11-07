/* compiler: ee-gcc-2.96 */
#include "types.h"
extern u8 D_003C8CB0[];
void func_0015B478(void *); void func_001640A8(s32, s32, s32);
void func_00166D60(s32 *p, s32 v) { if (p == 0) { func_0015B478(D_003C8CB0); return; } *(s16 *)((u8 *)p + 0x3E) = v; if (*(s32 *)((u8 *)p + 8) != 0) func_001640A8(*(s32 *)((u8 *)p + 8), (s16)v << 11, *(s16 *)((u8 *)p + 0x3C) << 11); }
