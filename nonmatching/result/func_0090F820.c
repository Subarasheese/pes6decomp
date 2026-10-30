/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00D0F610();                                /* extern */
extern char D_0058D7AA[];

s32 func_0090F820(void) {
    if ((*(s8 *)D_0058D7AA) == 0) {
        return 0;
    }
    return func_00D0F610();
}
