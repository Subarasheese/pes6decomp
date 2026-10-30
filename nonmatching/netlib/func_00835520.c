/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00827B70(s32);                             /* extern */
s32 func_00828140();                                /* extern */
extern char D_008A5F7A[];
extern char D_008A5F80[];

s32 func_00835520(void) {
    if ((*(s8 *)D_008A5F7A) != 1) {
        return 0;
    }
    return func_00827B70((*(s32 *)D_008A5F80) + func_00828140());
}
