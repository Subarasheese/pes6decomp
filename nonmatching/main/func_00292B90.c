/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

extern char D_005A2330[];

s32 func_00292B90(void) {
    u8 var_v0;

    if (((void *)D_005A2330) != NULL) {
        var_v0 = (*(u8 *)D_005A2330);
    } else {
        var_v0 = 0;
    }
    return var_v0 == 2;
}
