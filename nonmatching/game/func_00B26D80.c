/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBE64[];

void func_00B26D80(void) {
    (*(u8 *)D_00CBBE64) = ((*(u8 *)D_00CBBE64) & ~1) | 1;
}
