/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBE8C[];

void func_00B25D40(void) {
    (*(u8 *)D_00CBBE8C) = ((*(u8 *)D_00CBBE8C) & ~2) | 2;
    (*(u8 *)D_00CBBE8C) = ((*(u8 *)D_00CBBE8C) & ~1) | 1;
}
