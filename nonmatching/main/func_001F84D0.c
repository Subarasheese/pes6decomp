/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s16 *func_001F84D0(u8 *arg0, s16 *arg1) {
    s16 *var_a4;
    s16 temp_v1;
    s32 temp_v1_2;
    u8 *var_a0;
    u8 var_v1;

    var_a0 = arg0;
    var_v1 = *var_a0;
    var_a4 = arg1;
    if (var_v1 != 0) {
        do {
            temp_v1 = var_v1 & 0xFF;
            var_a0 += 1;
            if (temp_v1 < 0x80) {
                *var_a4 = temp_v1;
                goto block_9;
            }
            if (temp_v1 >= 0xC0) {
                if (temp_v1 < 0xE0) {
                    temp_v1_2 = M2C_FIELD(var_a0, u8 *, 0) & 0x3F;
                    var_a0 += 1;
                    *var_a4 = ((temp_v1 & 0x1F) << 6) | temp_v1_2;
                    goto block_9;
                }
                if ((temp_v1 >= 0xF0) || (*var_a4 = (M2C_FIELD(var_a0, u8 *, 1) & 0x3F) | (((temp_v1 & 0xF) << 0xC) | ((M2C_FIELD(var_a0, u8 *, 0) & 0x3F) << 6)), var_a0 += 2, ((u16) *var_a4 != 0xFEFF))) {
                    goto block_9;
                }
            } else {
block_9:
                var_a4 += 2;
            }
            var_v1 = *var_a0;
        } while (var_v1 != 0);
    }
    *var_a4 = 0;
    return arg1;
}
