/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001565A8(void *arg0) {
    s32 var_v0;
    u8 temp_a2;
    u8 temp_a2_2;

    temp_a2 = M2C_FIELD(arg0, u8 *, 0);
    if (temp_a2 == 0xB) {
        var_v0 = 1;
        if (M2C_FIELD(arg0, u8 *, 1) != 0x77) {
            goto block_3;
        }
    } else {
block_3:
        if ((temp_a2 != 0x77) || (var_v0 = 1, (M2C_FIELD(arg0, u8 *, 1) != 0xB))) {
            temp_a2_2 = M2C_FIELD(arg0, u8 *, 0x10);
            if (temp_a2_2 == 0xB) {
                var_v0 = 1;
                if (M2C_FIELD(arg0, u8 *, 0x11) != 0x77) {
                    goto block_8;
                }
            } else {
block_8:
                var_v0 = 0;
                if (temp_a2_2 == 0x77) {
                    var_v0 = 1;
                    if (M2C_FIELD(arg0, u8 *, 0x11) != 0xB) {
                        var_v0 = 0;
                    }
                }
            }
        }
    }
    return var_v0;
}
