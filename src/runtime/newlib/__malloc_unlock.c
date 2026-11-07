/* compiler: ee-gcc-2.96 */
#include "types.h"
extern s32 D_00398E84[]; extern s32 D_00398E80[]; extern s32 D_00371A20[];
void func_00105380(s32);
void __malloc_unlock(void) { if (--D_00398E84[0] != 0) return; D_00398E80[0] = -1; func_00105380(D_00371A20[0]); }
