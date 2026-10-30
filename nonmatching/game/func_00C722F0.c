/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003EA820;
extern char D_00CCBD52[];
extern char D_00CCBDA2[];

void func_00C722F0(s8 arg0) {
    (*(s8 *)D_00CCBD52) = arg0;
    (*(s8 *)D_00CCBDA2) = arg0;
    D_003EA820 = 1;
}
