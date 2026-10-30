/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00994C60(s32, s32);                      /* extern */

s32 func_00B2C0B0(s32 arg0) {
    s32 temp_s0;
    s32 var_s1;
    s32 var_s2;
    u64 temp_v1;
    void *temp_v0;

    var_s2 = 0;
    temp_s0 = arg0 & 0xFFFF;
loop_1:
    var_s1 = 0;
loop_2:
    temp_v0 = func_00994C60(var_s2, var_s1);
    if (temp_v0 != NULL) {
        if (temp_s0 != M2C_FIELD(temp_v0, u16 *, 0xA)) {
            if (temp_s0 == M2C_FIELD(temp_v0, u16 *, 4)) {
                temp_v1 = (u64) ((s64) M2C_FIELD(temp_v0, u16 *, 0) << 0x35) >> 0x3C;
                if ((temp_v1 != 6) && (temp_v1 != 5) && (temp_v1 != 4)) {
                    goto block_13;
                }
                return 1;
            }
            goto block_13;
        }
        return 1;
    }
block_13:
    var_s1 += 1;
    if (var_s1 >= 0x25) {
        var_s2 += 1;
        if (var_s2 >= 0x48) {
            return 0;
        }
        goto loop_1;
    }
    goto loop_2;
}
