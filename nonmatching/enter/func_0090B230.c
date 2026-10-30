/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0090A8A0();                                /* extern */
extern char D_0092F0F0[];

s32 func_0090B230(s32 arg0) {
    if (func_0090A8A0() == 0) {
        if (!((*(s32 *)D_0092F0F0) & (1 << (arg0 & 0xFF)))) {
            return 0;
        }
        return 2;
    }
    return 1;
}
