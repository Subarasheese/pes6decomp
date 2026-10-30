/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBE8A[];

void func_00B26440(void) {
    (*(u8 *)D_00CBBE8A) = ((*(u8 *)D_00CBBE8A) & ~8) | 8;
    (*(u8 *)D_00CBBE8A) = ((*(u8 *)D_00CBBE8A) & ~1) | 1;
}
