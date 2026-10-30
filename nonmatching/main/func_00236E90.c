/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
u8 *func_00234C90(s32, s32, M2C_UNK);               /* extern */

s32 func_00236E90(s32 arg0, s32 arg1) {
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    u8 var_v1;
    u8 var_v1_2;

    if (func_00231240() == 1) {
        return 0;
    }
    if (func_00231240() != 1) {
        var_v1 = *func_00234C90(arg0, arg1, 0);
        if ((s32) var_v1 >= 0x63) {
            var_v1 = 0x63;
        }
        var_v0_2 = var_v1 & 0xFF;
    } else {
        var_v0_2 = 0;
    }
    if (func_00231240() != 1) {
        var_v1_2 = *func_00234C90(arg0, arg1, 1);
        if ((s32) var_v1_2 >= 0x63) {
            var_v1_2 = 0x63;
        }
        var_v0_3 = var_v1_2 & 0xFF;
    } else {
        var_v0_3 = 0;
    }
    var_v0 = ((var_v0_2 & 0xFF) + var_v0_3) & 0xFF;
    if (var_v0 >= 0xFE) {
        var_v0 = 0xFE;
    }
    return var_v0;
}
