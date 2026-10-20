/* compiler: mwcc-3.0.1b210 */
#include "types.h"
extern s8 D_00375C10[];
s8 func_001314B0(void *p) { return D_00375C10[(*(u32 *)((u8 *)p + 4) >> 28) & 0xF]; }
