/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003EA820;
extern char D_00591DEE[];
extern char D_00CCBD4C[];
extern char D_00CCBD52[];
extern char D_00CCBD58[];
extern char D_00CCBD9C[];
extern char D_00CCBDA2[];
extern char D_00CCBDA8[];

void func_00C71EC0(void) {
    s32 temp_a4;
    s32 temp_a5;

    temp_a4 = 0 & 1;
    temp_a5 = (s32) ((*(u16 *)D_00591DEE) & 0x100) >> 8;
    (*(u8 *)D_00CCBD4C) = ((*(u8 *)D_00CCBD4C) & ~1) | temp_a4;
    (*(s8 *)D_00CCBD58) = (s8) temp_a5;
    (*(s8 *)D_00CCBD52) = (s8) temp_a5;
    (*(s8 *)D_00CCBDA2) = (s8) temp_a5;
    (*(u8 *)D_00CCBD9C) = ((*(u8 *)D_00CCBD9C) & ~1) | temp_a4;
    (*(s8 *)D_00CCBDA8) = (s8) temp_a5;
    D_003EA820 = 1;
}
