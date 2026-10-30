/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009A8610(s32 arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 var_v0;
    s32 var_v1;

    temp_a0 = arg0 & 0xFF;
    var_v0 = 6;
    if (temp_a0 == 0) {
        temp_a1 = arg1 & 0xFF;
        switch (temp_a1) {                          /* irregular */
        case 4:
            return 1;
        case 0:
            return 3;
        case 1:
            return 3;
        default:
            var_v1 = 3;
            if (temp_a1 != 3) {
                var_v1 = 5;
                if (temp_a1 == 5) {
                    return 4 & 0xFF;
                }
                if (temp_a1 == 6) {
                    goto block_29;
                }
                /* Duplicate return node #30. Try simplifying control flow for better match */
                return var_v0;
            }
            goto block_29;
        case 2:
            return 3;
        }
    } else {
        if (temp_a0 == 1) {
            temp_a0_2 = arg1 & 0xFF;
            if (temp_a0_2 != 9) {
                var_v1 = 5;
                if (temp_a0_2 == 5) {
block_29:
                    var_v0 = var_v1 & 0xFF;
                }
                /* Duplicate return node #30. Try simplifying control flow for better match */
                return var_v0;
            }
            return 5;
        }
        return var_v0;
    }
}
