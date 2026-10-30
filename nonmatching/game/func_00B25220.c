/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBEC0[];

void func_00B25220(void) {
    (*(u8 *)D_00CBBEC0) = ((*(u8 *)D_00CBBEC0) & ~1) | 1;
    (*(u8 *)D_00CBBEC0) = ((*(u8 *)D_00CBBEC0) & ~2) | ((0 & 1) * 2);
}
