/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00D116A0(s32, s32);                        /* extern */
extern char D_00D376E8[];
extern char D_00D376F0[];

s32 func_00D10870(s32 arg0) {
    if ((*(s32 *)D_00D376E8) == 0) {
        return 0;
    }
    return func_00D116A0((*(s32 *)D_00D376F0), arg0);
}
