/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003EAD8C;

s32 func_00B1E050(s32 arg0) {
    s32 var_v0;
    u8 temp_a1;

    if (D_003EAD8C != NULL) {
        temp_a1 = M2C_FIELD(D_003EAD8C, u8 *, 0x2F9);
        var_v0 = 0;
        if ((s32) temp_a1 > 0) {
loop_6:
            if ((arg0 & 0xFF) != M2C_FIELD((D_003EAD8C + (var_v0 & 0xFF)), u8 *, 0x2FA)) {
                var_v0 = (var_v0 + 1) & 0xFF;
                if (var_v0 >= (s32) temp_a1) {
                    goto block_12;
                }
                goto loop_6;
            }
            return var_v0;
        }
        goto block_12;
    }
block_12:
    return 0xFF;
}
