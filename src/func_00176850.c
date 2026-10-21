/* compiler: ee-gcc-2.96 */
#include "types.h"
extern u8 D_003CC1E0[]; extern u8 D_003CC170[]; extern u8 D_003CC1F0[]; extern u8 D_003CC1A0[];
void func_00176460(void *, void *);
void func_00176850(s32 *p, s32 b, s32 c) { if (p == 0) { func_00176460(D_003CC1E0, D_003CC170); return; } if (*(s32 *)((u8 *)p + 4) == 0) { func_00176460(D_003CC1F0, D_003CC1A0); return; } *(s32 *)((u8 *)p + 0x1C) = b; *(s32 *)((u8 *)p + 0x20) = c; }
