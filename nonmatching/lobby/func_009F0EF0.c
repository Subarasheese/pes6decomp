/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00933490(s32);                             /* extern */
s32 func_009E0290();                                /* extern */
extern char D_00A7E018[];

s32 func_009F0EF0(void) {
    if ((*(s32 *)D_00A7E018) == 0) {
        return 0;
    }
    return func_00933490(func_009E0290());
}
