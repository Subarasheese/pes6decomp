/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00592810[];

s32 func_008188D0(u8 *arg0) {
    if (*arg0 == (*(u8 *)D_00592810)) {
        return 1;
    }
    return 0xE;
}
