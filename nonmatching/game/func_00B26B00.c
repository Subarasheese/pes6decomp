/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBE71[];

void func_00B26B00(void) {
    (*(u8 *)D_00CBBE71) = ((*(u8 *)D_00CBBE71) & ~1) | 1;
    (*(u8 *)D_00CBBE71) = ((*(u8 *)D_00CBBE71) & ~2) | 2;
}
