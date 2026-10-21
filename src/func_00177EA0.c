/* compiler: ee-gcc-2.96 */
#include "types.h"
extern u8 D_003CC498[]; extern u8 D_003CC428[]; extern u8 D_003CC4A8[]; extern u8 D_003CC458[];
void func_00177A80(void *, void *);
void func_00177EA0(s32 *p, s32 b, s32 c) { if (p == 0) { func_00177A80(D_003CC498, D_003CC428); return; } if (*(s8 *)((u8 *)p + 4) == 0) { func_00177A80(D_003CC4A8, D_003CC458); return; } *(s32 *)((u8 *)p + 0x28) = b; *(s32 *)((u8 *)p + 0x2C) = c; }
