/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00114A60(void);
extern s32 D_003EA294;

s32 func_00847760(void) {
    s32 temp_v0;
    s32 var_s0;
    s32 var_v0;

    var_s0 = 0;
    temp_v0 = func_00114A60();
    if ((temp_v0 != 0xFF) && (temp_v0 != 0xFE) && (temp_v0 != 0xFD) && (temp_v0 != 0x13) && (temp_v0 != 0x12) && (temp_v0 != 0x11) && (temp_v0 != 0x10) && (temp_v0 != 5) && (temp_v0 != 0)) {
        var_v0 = D_003EA294 & ~4;
    } else {
        var_s0 = -1;
        var_v0 = D_003EA294 | 4;
    }
    D_003EA294 = var_v0;
    return var_s0;
}
