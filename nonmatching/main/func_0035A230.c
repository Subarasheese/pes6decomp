/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

extern char D_0061C730[];

s32 func_0035A230(void) {
    s32 var_v0;

    var_v0 = 0;
    if ((*(s32 *)D_0061C730) & 1) {
        var_v0 = 1;
        (*(s32 *)D_0061C730) = ((*(s32 *)D_0061C730) | 1) ^ 1;
    }
    return var_v0;
}
