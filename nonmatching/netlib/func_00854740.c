/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u16 func_002DCE70(u16);
extern s32 D_003EA30C;
extern s32 D_003EA310;
extern s32 D_003EA314;
extern s32 D_003EA318;
extern s16 D_003EA31C;
extern s32 D_003EA324;
extern s32 D_003EA328;
extern s32 D_003EA32C;

s32 func_00854740(void) {
    s32 temp_v0;

    D_003EA328 = -1;
    D_003EA32C = 0;
    D_003EA30C = 0;
    temp_v0 = func_002DCE70(0xD96U) & 0xFFFF;
    D_003EA318 = 0;
    D_003EA324 = temp_v0;
    D_003EA314 = 0;
    D_003EA310 = -1;
    D_003EA31C = 0;
    return 0;
}
