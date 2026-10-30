/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00994C60(u8, u8);                        /* extern */

s32 func_00B18D50(void *arg0) {
    u16 temp_s2;
    u8 temp_s0;
    u8 var_s1;
    u8 var_s3;
    void *temp_v0;
    void *temp_v0_2;

    if (arg0 == NULL) {
        return 0xFF;
    }
    temp_s0 = M2C_FIELD(arg0, u8 *, 0);
    temp_v0 = func_00994C60(temp_s0, M2C_FIELD(arg0, u8 *, 1));
    if (temp_v0 != NULL) {
        if (((u64) ((s64) M2C_FIELD(temp_v0, u8 *, 0) << 0x39) >> 0x3A) == 9) {
            temp_s2 = M2C_FIELD(temp_v0, u16 *, 4);
            var_s1 = 0;
loop_11:
            if (temp_s0 != var_s1) {
                var_s3 = 0;
loop_13:
                temp_v0_2 = func_00994C60(var_s1, var_s3);
                if ((temp_v0_2 != NULL) && (temp_s2 == M2C_FIELD(temp_v0_2, u16 *, 4))) {
                    return 1;
                }
                var_s3 += 1;
                if ((s32) var_s3 >= 0x25) {
                    goto block_17;
                }
                goto loop_13;
            }
block_17:
            var_s1 += 1;
            if ((s32) var_s1 >= 0x48) {
                return 0;
            }
            goto loop_11;
        }
        return 0xFF;
    }
    return 0xFF;
}
