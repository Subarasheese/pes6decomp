/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern u8 D_003E1D70[][10];
extern s32 *D_003B7360[];

s32 func_00334470(s32 a, s32 b) {
    s32 v = D_003E1D70[b][a];
    if (v == 0xFE) return 0;
    return D_003B7360[a][v];
}
