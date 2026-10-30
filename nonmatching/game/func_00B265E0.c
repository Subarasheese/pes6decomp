/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBE8B[];

void func_00B265E0(void) {
    (*(u8 *)D_00CBBE8B) = ((*(u8 *)D_00CBBE8B) & ~4) | 4;
    (*(u8 *)D_00CBBE8B) = ((*(u8 *)D_00CBBE8B) & ~2) | 2;
    (*(u8 *)D_00CBBE8B) = ((*(u8 *)D_00CBBE8B) & ~1) | 1;
}
