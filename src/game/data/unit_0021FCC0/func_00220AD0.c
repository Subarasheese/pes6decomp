/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_003A98F0[][2];
s32 func_001F08B0(s32);

s32 func_00220AD0(s32 i, s32 j) {
    if (i < 29) {
        return func_001F08B0(D_003A98F0[i][j]);
    }
    return 0;
}
