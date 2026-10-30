/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00994C60(s32, s32);                      /* extern */

s32 func_00B16C50(s32 arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_s1;
    s32 var_s2;
    void *temp_v0;

    temp_s1 = arg0 & 0xFF;
    if (temp_s1 >= 0x48) {
        goto block_10;
    }
    temp_s0 = arg1 & 0xFFFF;
    if (temp_s0 != 0) {
        var_s2 = 0;
loop_6:
        temp_v0 = func_00994C60(temp_s1, var_s2);
        if ((temp_v0 != NULL) && (temp_s0 == M2C_FIELD(temp_v0, u16 *, 4))) {
            return 1;
        }
        var_s2 += 1;
        if (var_s2 >= 0x25) {
            goto block_10;
        }
        goto loop_6;
    }
block_10:
    return 0;
}
