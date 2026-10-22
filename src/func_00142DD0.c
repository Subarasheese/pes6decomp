/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 D_004FE070[];
extern s32 D_003E7438;

void func_00142DD0(s32 arg0) {
    *(u64 *)D_004FE070 = ((u64)arg0 << 32) | ((u64)D_003E7438 << 6);
}
