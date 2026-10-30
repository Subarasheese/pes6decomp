/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBECC[];

void func_00B25FD0(void) {
    (*(u8 *)D_00CBBECC) = ((*(u8 *)D_00CBBECC) & ~1) | (0 & 1);
    (*(u8 *)D_00CBBECC) = ((*(u8 *)D_00CBBECC) & ~2) | 2;
}
