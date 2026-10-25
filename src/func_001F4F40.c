/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 **D_0052B350[];

void func_001F4F40(s32 i, s32 j) {
    D_0052B350[0][i][j] &= ~1;
}
