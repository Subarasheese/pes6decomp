/* compiler: ee-gcc-2.96 */
#include "types.h"
extern u8 D_003C8A40[];
void func_0015B478(void *); s32 func_00162A38(s32);
s32 func_001662F0(s32 *p) { if (p == 0) { func_0015B478(D_003C8A40); return -1; } return *(s8 *)((u8 *)p + 1) < 2 ? 0 : func_00162A38(*(s32 *)((u8 *)p + 4)); }
