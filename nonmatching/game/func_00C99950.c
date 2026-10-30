/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_003AE97A[];
extern char D_00591DEE[];

s32 func_00C99950(void) {
    s32 var_v0;
    s32 var_v0_2;

    if (!((*(u16 *)D_00591DEE) & 1)) {
        return 0;
    }
    if (((*(s8 *)D_003AE97A) != 0xB) && ((*(s8 *)D_003AE97A) != 0xA) && ((*(s8 *)D_003AE97A) != 9)) {
        var_v0 = 0;
    } else {
        var_v0 = 1;
    }
    if (var_v0 == 0) {
        var_v0_2 = (s32) ((*(u16 *)D_00591DEE) & 0x40) >> 6;
    } else {
        var_v0_2 = (s32) ((*(u16 *)D_00591DEE) & 0x80) >> 7;
    }
    if (var_v0_2 == 0) {
        return 1;
    }
    return 2;
}
