/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

/* Dispatch: calls handler i of the table at D_003AC330 with (a0, a2, a2, a3). */
typedef s32 (*Handler)(s32, s32, s32, s32);
extern char D_003AC330[];

s32 func_002C71F0(s32 a0, s32 i, s32 a2, s32 a3) {
    return ((Handler *)D_003AC330)[i](a0, a2, a2, a3);
}
