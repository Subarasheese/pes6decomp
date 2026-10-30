/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBE70[];

void func_00B26BC0(s32 arg0, s32 arg1) {
    (*(u8 *)D_00CBBE70) = ((*(u8 *)D_00CBBE70) & ~1) | 1;
    (*(u8 *)D_00CBBE70) = ((*(u8 *)D_00CBBE70) & ~4) | ((arg1 & 1) * 4);
    (*(u8 *)D_00CBBE70) = ((*(u8 *)D_00CBBE70) & ~2) | ((arg0 & 1) * 2);
}
