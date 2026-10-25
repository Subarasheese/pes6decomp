/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern s32 func_001CDA50(s32);
extern s32 D_003D79F0[];
extern s32 D_003D7650[][8];

s32 func_0021DF90(s32 a0) {
    s32 v = func_001CDA50(1);
    if (a0 >= 0x1D) return a0;
    return D_003D7650[a0][D_003D79F0[v]];
}
