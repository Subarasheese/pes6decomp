/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBE61[];

void func_00B26FA0(void) {
    (*(u8 *)D_00CBBE61) = ((*(u8 *)D_00CBBE61) & ~4) | 4;
    (*(u8 *)D_00CBBE61) = ((*(u8 *)D_00CBBE61) & ~2) | 2;
    (*(u8 *)D_00CBBE61) = ((*(u8 *)D_00CBBE61) & ~1) | 1;
}
