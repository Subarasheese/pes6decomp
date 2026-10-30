/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

extern char D_005A2330[];

s32 func_00292C50(void) {
    if (((void *)D_005A2330) != NULL) {
        return ((s32) M2C_FIELD(((void *)D_005A2330), u8 *, 1) >> 6) & 3;
    }
    return 0;
}
