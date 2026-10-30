/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005A24A4[];

s32 func_002955A0(void) {
    s32 var_v0;

    if ((*(f32 *)D_005A24A4) >= 2.1474836e9f) {
        var_v0 = (s32) ((*(f32 *)D_005A24A4) - 2.1474836e9f) | 0x80000000;
    } else {
        var_v0 = (s32) (*(f32 *)D_005A24A4);
    }
    return var_v0 & 0xFF;
}
