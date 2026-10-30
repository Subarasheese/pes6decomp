/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

extern char D_005A2330[];

s32 func_00292BF0(void) {
    s32 var_v1;

    if (((void *)D_005A2330) != NULL) {
        var_v1 = ((s32) M2C_FIELD(((void *)D_005A2330), u8 *, 1) >> 6) & 3;
    } else {
        var_v1 = 0;
    }
    if ((var_v1 != 3) && (var_v1 != 2) && (var_v1 != 1)) {
        return 0;
    }
    return 1;
}
