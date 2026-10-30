/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBEBC[];

void func_00B252E0(void) {
    (*(u8 *)D_00CBBEBC) = ((*(u8 *)D_00CBBEBC) & ~2) | 2;
    (*(u8 *)D_00CBBEBC) = ((*(u8 *)D_00CBBEBC) & ~4) | 4;
}
