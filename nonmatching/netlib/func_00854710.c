/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u16 func_002DCE70(u16);
extern s32 D_003EA324;
extern s32 D_003EA328;

void func_00854710(s32 arg0, u16 arg1) {
    D_003EA328 = arg0;
    D_003EA324 = func_002DCE70(arg1) & 0xFFFF;
}
