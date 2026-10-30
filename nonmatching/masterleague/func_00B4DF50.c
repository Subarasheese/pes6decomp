/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003EAE94;

s32 func_00B4DF50(s32 arg0) {
    s32 temp_a3;
    s32 var_a5;
    u8 temp_v1;

    if (D_003EAE94 != 0) {
        temp_a3 = arg0 & 0xFF;
        var_a5 = 0;
loop_5:
        temp_v1 = M2C_FIELD((D_003EAE94 + var_a5), u8 *, 0x3E4);
        if (temp_v1 != 0xFF) {
            if (temp_a3 < 0x48) {
                if (M2C_FIELD((D_003EAE94 + temp_a3), u8 *, 0x1B8) == 1) {
                    return 1;
                }
                goto block_13;
            }
            if (temp_v1 == temp_a3) {
                return 1;
            }
            goto block_13;
        }
block_13:
        var_a5 += 1;
        if (var_a5 >= 8) {
            goto block_14;
        }
        goto loop_5;
    }
block_14:
    return 0;
}
