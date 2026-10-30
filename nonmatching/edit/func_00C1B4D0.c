/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CF2764[];

void func_00C1B4D0(void) {
    (*(s32 *)D_00CF2764) = (s32) ((*(s32 *)D_00CF2764) + 4) % 5;
}
