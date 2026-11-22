/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern char D_008AB4C8[];

s32 func_008250A0(void) {
    s32 value;

    if (!((*(s32 *)D_008AB4C8) < 0x3C)) {
        (*(s32 *)D_008AB4C8) = 0;
        return 1;
    }
    value = (*(s32 *)D_008AB4C8) + 1;
    (*(s32 *)D_008AB4C8) = value;
    if (value < 0) {
        (*(s32 *)D_008AB4C8) = 0;
    }
    return 0;
}
