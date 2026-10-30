/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003EAE94;

s32 func_00B4DE90(s32 arg0) {
    s32 temp_v0;
    s32 var_a2;

    if (D_003EAE94 != 0) {
        var_a2 = arg0 & 0xFF;
        if (var_a2 < 8) {
loop_6:
            temp_v0 = var_a2 & 0xFF;
            if (M2C_FIELD((D_003EAE94 + temp_v0), u8 *, 0x3E4) != 0xFF) {
                var_a2 = (var_a2 + 1) & 0xFF;
                if (var_a2 >= 8) {
                    goto block_11;
                }
                goto loop_6;
            }
            return temp_v0;
        }
block_11:
        return -1;
    }
    return 0;
}
