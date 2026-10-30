/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBE8D[];

void func_00B25BD0(void) {
    (*(u8 *)D_00CBBE8D) = ((*(u8 *)D_00CBBE8D) & ~4) | 4;
}
