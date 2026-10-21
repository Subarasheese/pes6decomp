/* compiler: ee-gcc-2.96 */
#include "types.h"
extern u8 D_003CB240[];
void LSC_CallErrFunc(void *);
void func_00172790(s32 *p, s32 v) { if (p == 0) { LSC_CallErrFunc(D_003CB240); return; } *(u8 *)((u8 *)p + 3) = v; }
