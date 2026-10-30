/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
s32 func_00225940(u8);                              /* extern */
extern s32 D_003E77AC;

s32 func_0022BB90(s32 arg0) {
    s32 temp_v1;
    s32 var_s0_2;
    u8 var_s0;

    if (func_00231240() != 1) {
        if (D_003E77AC == 0) {
            var_s0_2 = 0;
        } else {
            var_s0_2 = D_003E77AC + 0xDEDC;
        }
    } else {
        var_s0_2 = 0;
    }
    if (func_00231240() == 1) {
        var_s0 = 0xFF;
    } else if (var_s0_2 != 0) {
        temp_v1 = arg0 & 0xFF;
        if (temp_v1 < 0x60) {
            var_s0 = M2C_FIELD((temp_v1 + var_s0_2), u8 *, 0xC4);
        } else {
            var_s0 = 0xFF;
        }
    } else {
        var_s0 = 0xFF;
    }
    if (func_00231240() != 1) {
        if ((var_s0 & 0xFF) < 0x50) {
            return func_00225940(var_s0);
        }
        return 0;
    }
    return 0;
}
