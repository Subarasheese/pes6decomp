/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003EAE94;

s32 func_00B4DEF0(s32 arg0) {
    s32 var_a2;
    u8 temp_v0;

    if (D_003EAE94 != 0) {
        var_a2 = 0;
loop_5:
        temp_v0 = M2C_FIELD((D_003EAE94 + var_a2), u8 *, 0x3E4);
        if ((temp_v0 != 0xFF) && (temp_v0 == (arg0 & 0xFF))) {
            return 1;
        }
        var_a2 += 1;
        if (var_a2 >= 8) {
            goto block_9;
        }
        goto loop_5;
    }
block_9:
    return 0;
}
