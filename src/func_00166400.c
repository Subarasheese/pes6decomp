/* compiler: ee-gcc-2.96 */
#include "types.h"
extern u8 D_003C8AA0[];
void func_0015B478(void *); s32 func_00162CA8(s32);
s32 func_00166400(s32 *p) { if (p == 0) { func_0015B478(D_003C8AA0); return -1; } return *(s8 *)((u8 *)p + 1) < 2 ? 0 : func_00162CA8(*(s32 *)((u8 *)p + 4)); }
