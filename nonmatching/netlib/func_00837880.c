/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00D0BAF0();                                /* extern */
extern char D_008A5CB0[];

s32 func_00837880(void) {
    M2C_UNK *var_a0;
    s32 var_a1;
    s32 var_s0;
    s32 var_s1;
    void *temp_v1;

    var_s1 = 0;
    var_s0 = 0;
    if (func_00D0BAF0() == 0) {
        var_a0 = NULL;
    } else {
        var_a0 = ((void *)D_008A5CB0);
    }
    if (var_a0 != NULL) {
        var_a1 = 0;
        do {
            temp_v1 = var_a0 + (var_a1 * 0x88);
            if (M2C_FIELD(temp_v1, s32 *, 0) != 0) {
                if (M2C_FIELD(temp_v1, s8 *, 0x80) != 0) {
                    var_s0 += 1;
                } else {
                    var_s1 += 1;
                }
            }
            var_a1 += 1;
        } while (var_a1 < 4);
        if ((var_s1 == 1) && (var_s0 == 1)) {
            return 1;
        }
        goto block_16;
    }
block_16:
    return 0;
}
