/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00161A30(u8 **arg0, void *arg1) {
    s32 var_a5;
    s32 var_a6;
    u8 *temp_a3;
    u8 *var_a3;
    u8 temp_a2;
    u8 temp_a2_2;
    u8 var_a4;

    temp_a3 = *arg0;
    temp_a2 = *temp_a3;
    var_a3 = temp_a3 + 1;
    if (temp_a2 == 0) {
        return 0;
    }
    var_a4 = temp_a2;
    if (!(temp_a2 & 0x80)) {
        var_a6 = 1;
        goto block_14;
    }
    if (temp_a2 >= 0xC0U) {
        var_a4 = temp_a2 & 0x1F;
        if (temp_a2 < 0xE0U) {
            var_a5 = 1;
            var_a6 = 2;
            goto loop_12;
        }
        var_a4 = temp_a2 & 0xF;
        if (temp_a2 < 0xF0U) {
            var_a5 = 2;
            var_a6 = 3;
            goto loop_12;
        }
        var_a4 = temp_a2 & 7;
        if (temp_a2 >= 0xF8U) {
            /* Duplicate return node #10. Try simplifying control flow for better match */
            return -1;
        }
        var_a5 = 3;
        var_a6 = 4;
loop_12:
        temp_a2_2 = *var_a3;
        var_a3 += 1;
        if ((temp_a2_2 & 0xC0) == 0x80) {
            var_a5 -= 1;
            var_a4 = (var_a4 << 6) | (temp_a2_2 & 0x3F);
            if (var_a5 == 0) {
block_14:
                *arg0 = var_a3;
                if (arg1 != NULL) {
                    M2C_FIELD(arg1, s32 *, 4) = var_a6;
                    M2C_FIELD(arg1, s32 *, 0) = (s32) var_a4;
                }
                return 1;
            }
            goto loop_12;
        }
        /* Duplicate return node #10. Try simplifying control flow for better match */
        return -1;
    }
    return -1;
}
