/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00994C60(s32, s32);                      /* extern */

s32 func_00B1A030(s32 arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_s1;
    s32 var_s2;
    u16 temp_v1;
    void *temp_v0;

    temp_s1 = arg0 & 0xFF;
    if (temp_s1 >= 0x48) {
        goto block_16;
    }
    temp_s0 = arg1 & 0xFFFF;
    if (temp_s0 != 0) {
        var_s2 = 0;
loop_6:
        temp_v0 = func_00994C60(temp_s1, var_s2);
        if (temp_v0 != NULL) {
            temp_v1 = M2C_FIELD(temp_v0, u16 *, 4);
            if (temp_s0 == temp_v1) {
                if (((u64) ((s64) M2C_FIELD(temp_v0, u8 *, 0) << 0x39) >> 0x3A) != 9) {
                    goto block_16;
                }
                goto block_15;
            }
            if (temp_v1 == 0) {
                return var_s2 & 0xFF;
            }
block_15:
            var_s2 += 1;
            if (var_s2 >= 0x25) {
                goto block_16;
            }
            goto loop_6;
        }
        goto block_16;
    }
block_16:
    return 0xFF;
}
