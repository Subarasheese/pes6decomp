/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern char D_003994F0[];
extern char D_003994F4[];
extern char D_003994F8[];
s32 func_001F6FC0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 loc[7];
    loc[3] = a1;
    *(f32 *)&loc[4] = *(f32 *)D_003994F0;
    *(f32 *)&loc[5] = *(f32 *)D_003994F4;
    *(f32 *)&loc[6] = *(f32 *)D_003994F8;
    if (a0 == 0 || a1 == 0) return 0;
    return ((s32 (*)(s32, s32 *))loc[4 + a3])(a0, &loc[3]);
}
