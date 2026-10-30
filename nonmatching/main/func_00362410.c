/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00362410(s32 arg0) {
    s32 temp_a1;
    s32 temp_v1;
    s32 var_a0;

    var_a0 = arg0;
    temp_a1 = var_a0 & 0xFFFF;
    temp_v1 = temp_a1 < 0xCC;
    if ((temp_v1 == 0) && (temp_a1 != 0xDD) && (temp_a1 != 0xFFFF) && (temp_a1 != 0x110) && (temp_a1 != 0x111) && (temp_a1 != 0x127) && (temp_a1 != 0x126) && (temp_a1 != 0x11E) && (temp_a1 != 0x112) && ((temp_v1 != 0) || (temp_a1 >= 0xDD)) && ((temp_a1 < 0xFE) || (temp_a1 >= 0x10E)) && ((temp_a1 < 0x10E) || (temp_a1 >= 0x110)) && ((temp_a1 < 0xDD) || (temp_a1 >= 0xFE))) {
        var_a0 = 0xFFFF & 0xFFFF;
    }
    return var_a0;
}
