/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBF0C[];

void func_00B24A10(void) {
    (*(u8 *)D_00CBBF0C) = ((*(u8 *)D_00CBBF0C) & ~1) | 1;
    (*(u8 *)D_00CBBF0C) = ((*(u8 *)D_00CBBF0C) & ~4) | 4;
}
