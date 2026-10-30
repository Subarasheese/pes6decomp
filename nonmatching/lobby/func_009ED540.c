/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00A7E010[];

void func_009ED540(void) {
    if ((*(u8 *)D_00A7E010) & 1) {
        (*(u8 *)D_00A7E010) = ((*(u8 *)D_00A7E010) & ~4) | 4;
    }
}
