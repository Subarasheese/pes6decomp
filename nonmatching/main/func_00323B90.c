/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00234090();                                /* extern */
s32 func_00234370();                                /* extern */

s32 func_00323B90(void *arg0) {
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_v0;
    s32 var_v0_2;
    u32 temp_s0;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0);
    if ((temp_v1 != 6) && (temp_v1 != 7)) {
        var_v0 = 1;
        goto block_21;
    }
    if ((temp_v1 != 6) && (temp_v1 != 7) && (temp_v1 != 9) && (temp_v1 != 8)) {
        var_v0_2 = 0;
    } else {
        var_v0_2 = ((func_00234370() & 0xFF) + 1) & 0xFF;
    }
    temp_s0 = var_v0_2 & 0xFF;
    if (temp_s0 != 0) {
        if (M2C_FIELD(arg0, u8 *, 0xD) == 0) {
            var_v0 = 2;
            goto block_21;
        }
        if ((func_00234090() & 0xFF) != 1) {
            temp_v1_2 = ((s32) M2C_FIELD(arg0, u8 *, 0xD) / (s32) (((var_v0_2 & 0xFF) / 3) + (temp_s0 >> 0x1F))) + 3;
            M2C_FIELD(arg0, s32 *, 0x30) = temp_v1_2;
            if (temp_v1_2 == 6) {
                var_v0 = 5;
                goto block_21;
            }
        } else {
            var_v0 = 6;
            goto block_21;
        }
    } else {
        var_v0 = 7;
block_21:
        M2C_FIELD(arg0, s32 *, 0x30) = var_v0;
    }
    return 1;
}
