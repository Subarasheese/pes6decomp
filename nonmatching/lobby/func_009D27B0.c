/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00A7DE00[];

s32 func_009D27B0(s32 arg0, s8 arg1) {
    if ((*(s32 *)D_00A7DE00) == 0) {
        return 0;
    }
    if (arg0 < 0) {
        return 0;
    }
    if (arg0 < 4) {
        M2C_FIELD((arg0 + (*(s32 *)D_00A7DE00)), s8 *, 0xD) = arg1;
        return 1;
    }
    return 0;
}
