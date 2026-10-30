/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBEEC[];

void func_00B27170(void) {
    (*(u8 *)D_00CBBEEC) = ((*(u8 *)D_00CBBEEC) & ~1) | 1;
    (*(u8 *)D_00CBBEEC) = ((*(u8 *)D_00CBBEEC) & ~4) | 4;
}
