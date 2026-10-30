/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001C4730(s32, s32, M2C_UNK);           /* extern */
s32 func_00231240();                                /* extern */
extern s32 D_003E77AC;

void func_002251E0(s32 arg0, s32 arg1) {
    s32 temp_v1;
    s32 var_a0;

    if (func_00231240() != 1) {
        if (D_003E77AC == 0) {
            var_a0 = 0;
        } else {
            var_a0 = D_003E77AC + 0x42A50;
        }
    } else {
        var_a0 = 0;
    }
    if (var_a0 != 0) {
        temp_v1 = arg0 & 0xFF;
        if ((temp_v1 < 0x20) && (arg1 != 0)) {
            func_001C4730(var_a0 + (temp_v1 * 0x36) + 0x1F2, arg1, 0x36);
        }
    }
}
