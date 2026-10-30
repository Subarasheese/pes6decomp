/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003EA820;
extern char D_00CCBD4C[];
extern char D_00CCBD52[];
extern char D_00CCBD58[];
extern char D_00CCBD9C[];
extern char D_00CCBDA2[];
extern char D_00CCBDA8[];

void func_00C71F40(void) {
    D_003EA820 = 1;
    (*(u8 *)D_00CCBD4C) = ((*(u8 *)D_00CCBD4C) & ~1) | 1;
    (*(s8 *)D_00CCBD58) = 0;
    (*(s8 *)D_00CCBD52) = 0;
    (*(s8 *)D_00CCBDA2) = 0;
    (*(u8 *)D_00CCBD9C) = ((*(u8 *)D_00CCBD9C) & ~1) | 1;
    (*(s8 *)D_00CCBDA8) = 0;
}
