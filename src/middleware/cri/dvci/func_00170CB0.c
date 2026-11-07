/* compiler: ee-gcc-2.96 */
#include "types.h"
extern u8 D_003CAC00[];
void func_00170400(s32 *, u8 *);
s32 func_00170CB0(s32 *p) { if (p == 0) { func_00170400(p, D_003CAC00); return 0; } return *(s32 *)((u8 *)p + 0x1C); }
