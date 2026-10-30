/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBF0C[];

void func_00B249E0(void) {
    (*(u8 *)D_00CBBF0C) = ((*(u8 *)D_00CBBF0C) & ~4) | ((0 & 1) * 4);
}
