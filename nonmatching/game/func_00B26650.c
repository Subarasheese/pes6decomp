/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBE8B[];

void func_00B26650(s32 arg0) {
    (*(u8 *)D_00CBBE8B) = ((*(u8 *)D_00CBBE8B) & ~2) | ((arg0 & 1) * 2);
    (*(u8 *)D_00CBBE8B) = ((*(u8 *)D_00CBBE8B) & ~1) | 1;
}
