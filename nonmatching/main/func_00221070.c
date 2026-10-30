/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001C4730(s32, s32, M2C_UNK);           /* extern */
s32 func_00223BB0();                                /* extern */

s32 func_00221070(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_a0;

    temp_v0 = func_00223BB0();
    var_a0 = 0;
    if (arg0 < 0x24) {
        var_a0 = temp_v0 + (arg0 * 0x3D);
    }
    if (var_a0 == 0) {
        return 0;
    }
    if (arg1 != 0) {
        func_001C4730(var_a0, arg1, 0x3D);
        return 1;
    }
    return 0;
}
