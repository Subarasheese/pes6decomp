/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 D_004FE070[];

void func_00142DB0(s32 arg0) {
    *(u64 *)D_004FE070 = ((u64)arg0 << 32) | 1;
}
