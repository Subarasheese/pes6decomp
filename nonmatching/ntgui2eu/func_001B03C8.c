/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001B03C8(u8 *arg0, s8 *arg1) {
    s8 *var_a2;
    s8 temp_v1;
    s8 temp_v1_2;
    u8 *temp_a5;
    u8 *var_a0;
    u8 var_a3;
    u8 var_a4;
    u8 var_v0;

    var_a0 = arg0;
    var_a4 = *var_a0;
    var_v0 = var_a4;
    temp_a5 = var_a0;
    if (var_v0 != 0) {
loop_1:
        var_a2 = arg1;
        temp_v1 = *var_a2;
        var_a3 = (u8) *var_a2;
        if (temp_v1 != 0) {
            if ((s8) var_v0 != temp_v1) {
loop_4:
                var_a2 += 1;
                temp_v1_2 = *var_a2;
                var_a3 = (u8) *var_a2;
                if (temp_v1_2 != 0) {
                    if ((s8) var_a4 == temp_v1_2) {
                        goto block_6;
                    }
                    goto loop_4;
                }
                goto block_7;
            }
block_6:
            if (var_a3 == 0) {
                goto block_7;
            }
        } else {
block_7:
            var_a0 += 1;
            var_v0 = *var_a0;
            var_a4 = var_v0;
            if (var_v0 != 0) {
                goto loop_1;
            }
        }
    }
    return var_a0 - temp_a5;
}
