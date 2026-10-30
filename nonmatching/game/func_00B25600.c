/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBEAC[];

void func_00B25600(void) {
    (*(u8 *)D_00CBBEAC) = ((*(u8 *)D_00CBBEAC) & ~4) | 4;
    (*(u8 *)D_00CBBEAC) = ((*(u8 *)D_00CBBEAC) & ~2) | ((0 & 1) * 2);
}
