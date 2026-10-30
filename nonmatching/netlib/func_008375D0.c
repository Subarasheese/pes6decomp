/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00828160();                                /* extern */
s32 func_00D0BAF0();                                /* extern */
extern char D_008A5CB0[];

s32 func_008375D0(void) {
    M2C_UNK *var_v1;
    s32 temp_s0;
    s32 var_a0;

    temp_s0 = func_00828160();
    if (func_00D0BAF0() == 0) {
        var_v1 = NULL;
    } else {
        var_v1 = ((void *)D_008A5CB0);
    }
    if (var_v1 == NULL) {
        goto block_16;
    }
    if (temp_s0 != 0) {
        var_a0 = 0;
loop_13:
        if (var_a0 < 4) {
            if (temp_s0 != *(var_v1 + (var_a0 * 0x88))) {
                var_a0 += 1;
                goto loop_13;
            }
            return 1;
        }
        goto block_16;
    }
block_16:
    return 0;
}
