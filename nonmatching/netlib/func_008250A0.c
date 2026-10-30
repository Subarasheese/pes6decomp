/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008AB4C8[];

s32 func_008250A0(void) {
    s32 temp_v1;

    if ((*(s32 *)D_008AB4C8) < 0x3C) {
        temp_v1 = (*(s32 *)D_008AB4C8) + 1;
        (*(s32 *)D_008AB4C8) = temp_v1;
        if (temp_v1 < 0) {
            (*(s32 *)D_008AB4C8) = 0;
        }
        return 0;
    }
    (*(s32 *)D_008AB4C8) = 0;
    return 1;
}
