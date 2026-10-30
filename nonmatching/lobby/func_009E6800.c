/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00A7DF28[];

void func_009E6800(void) {
    (*(u8 *)D_00A7DF28) = ((*(u8 *)D_00A7DF28) & ~1) | 1;
}
