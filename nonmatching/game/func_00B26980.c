/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBE73[];

void func_00B26980(void) {
    (*(u8 *)D_00CBBE73) = ((*(u8 *)D_00CBBE73) & ~2) | 2;
}
