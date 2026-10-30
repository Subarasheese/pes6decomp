/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
s32 func_002260F0();                                /* extern */

s32 func_00224310(M2C_UNK arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_s0;
    s32 var_v0;

    temp_s0 = func_002260F0();
    if (func_00231240() == 1) {
        goto block_15;
    }
    if (temp_s0 != 0) {
        temp_a0 = arg1 & 0xFF;
        if (temp_a0 < 0x20) {
            var_v0 = 0;
loop_10:
            if (temp_a0 != M2C_FIELD((temp_s0 + (var_v0 & 0xFF)), u8 *, 0x4B1)) {
                var_v0 = (var_v0 + 1) & 0xFF;
                if (var_v0 >= 0x20) {
                    goto block_15;
                }
                goto loop_10;
            }
            return var_v0;
        }
        goto block_15;
    }
block_15:
    return 0xFF;
}
