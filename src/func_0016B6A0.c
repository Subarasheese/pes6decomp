/* compiler: ee-gcc-2.96 */
#include "types.h"
extern u8 D_003C9810[]; extern u8 D_003C9830[];
void func_0016A550(void *);
void func_0016B6A0(s32 *p) { s32 f; if (p == 0) { func_0016A550(D_003C9810); return; } f = *(s32 *)(*(s32 *)p + 0x34); if (f != 0) { ((void (*)(s32))f)(*(s32 *)((u8 *)p + 4)); return; } func_0016A550(D_003C9830); }
