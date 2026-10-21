/* compiler: ee-gcc-2.96 */
#include "types.h"
extern u8 D_003C95A0[]; extern u8 D_003C95C0[];
void func_0016A550(void *);
void func_0016B1E8(s32 *p) { s32 f; if (p == 0) { func_0016A550(D_003C95A0); return; } f = *(s32 *)(*(s32 *)p + 0x28); if (f != 0) { ((void (*)(s32))f)(*(s32 *)((u8 *)p + 4)); return; } func_0016A550(D_003C95C0); }
