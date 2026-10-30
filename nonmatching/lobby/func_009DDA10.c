/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0093DEC0(s32);                             /* extern */
s32 func_009D9F80();                                /* extern */
extern char D_00A7DEC0[];

s32 func_009DDA10(void) {
    if ((*(s32 *)D_00A7DEC0) == 0) {
        return 0;
    }
    return func_0093DEC0(func_009D9F80());
}
