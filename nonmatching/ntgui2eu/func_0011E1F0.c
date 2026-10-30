/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


u8 func_0011E1F0(void *arg0) {
    s32 var_a3;
    u8 *temp_a2;
    u8 *var_a2;
    u8 temp_a1;
    u8 temp_a1_2;
    u8 var_v1;

    temp_a2 = M2C_FIELD(arg0, u8 **, 0x394);
    temp_a1 = *temp_a2;
    var_a2 = temp_a2 + 1;
    if (temp_a1 == 0) {
        return 0U;
    }
    var_v1 = temp_a1;
    if (temp_a1 & 0x80) {
        if (temp_a1 >= 0xC0U) {
            var_v1 = temp_a1 & 0x1F;
            if (temp_a1 < 0xE0U) {
                var_a3 = 1;
                goto block_11;
            }
            var_v1 = temp_a1 & 0xF;
            if (temp_a1 < 0xF0U) {
                var_a3 = 2;
                goto block_11;
            }
            var_v1 = temp_a1 & 7;
            if (temp_a1 >= 0xF8U) {
                /* Duplicate return node #9. Try simplifying control flow for better match */
                return -1U;
            }
            var_a3 = 3;
block_11:
loop_12:
            temp_a1_2 = *var_a2;
            var_a2 += 1;
            if ((temp_a1_2 & 0xC0) == 0x80) {
                var_a3 -= 1;
                var_v1 = (var_v1 << 6) | (temp_a1_2 & 0x3F);
                if (var_a3 == 0) {
                    /* Duplicate return node #14. Try simplifying control flow for better match */
                    M2C_FIELD(arg0, u8 **, 0x394) = var_a2;
                    return var_v1;
                }
                goto loop_12;
            }
            /* Duplicate return node #9. Try simplifying control flow for better match */
            return -1U;
        }
        return -1U;
    }
    M2C_FIELD(arg0, u8 **, 0x394) = var_a2;
    return var_v1;
}
