/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
s32 func_00225E10();                                /* extern */
s32 func_0099B6E0(M2C_UNK, s32);                    /* extern */
s32 func_00B02920(u8);                              /* extern */
s32 func_00B54300();                                /* extern */

s32 func_00B57010(void) {
    s32 temp_s0;
    s32 var_v0;

    if (func_0099B6E0(4, func_00B54300() & 0xFF) == 0) {
        return 0;
    }
    if (func_00B54300() >= 0x2B) {
        return 0;
    }
    temp_s0 = func_00225E10() & 0xFF;
    var_v0 = temp_s0 - (func_00B02920(func_00225820()) & 0xFF);
    if (var_v0 < 0) {
        var_v0 = 0;
    }
    if (var_v0 >= 0x11) {
        return 0;
    }
    return 1;
}
