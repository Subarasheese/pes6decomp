/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CCCDCC[];
extern char D_00CCCDD0[];

void func_00C87630(s32 arg0) {
    (*(s32 *)D_00CCCDCC) = arg0;
    (*(u8 *)D_00CCCDD0) = ((*(u8 *)D_00CCCDD0) & ~1) | 1;
    (*(u8 *)D_00CCCDD0) = ((*(u8 *)D_00CCCDD0) & ~2) | 2;
}
