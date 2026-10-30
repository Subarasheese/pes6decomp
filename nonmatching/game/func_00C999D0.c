/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_003AE97A[];
extern char D_00591DEE[];

s32 func_00C999D0(void) {
    s32 var_v0;

    if (((*(s8 *)D_003AE97A) != 0xB) && ((*(s8 *)D_003AE97A) != 0xA) && ((*(s8 *)D_003AE97A) != 9)) {
        var_v0 = 0;
    } else {
        var_v0 = 1;
    }
    if (var_v0 != 0) {
        return (s32) ((*(u16 *)D_00591DEE) & 0x80) >> 7;
    }
    return (s32) ((*(u16 *)D_00591DEE) & 0x40) >> 6;
}
