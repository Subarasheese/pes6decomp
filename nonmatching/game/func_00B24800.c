/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBF0D[];

void func_00B24800(void) {
    (*(u8 *)D_00CBBF0D) = ((*(u8 *)D_00CBBF0D) & ~1) | (0 & 1);
}
