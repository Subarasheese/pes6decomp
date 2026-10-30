/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00994C60(u8, u8);                        /* extern */

void func_00B19070(void *arg0, void *arg1) {
    u8 temp_s1;
    u8 var_s2;
    u8 var_s3;
    void *temp_v0;
    void *temp_v0_2;

    if ((arg0 != NULL) && (arg1 != NULL) && (M2C_FIELD(arg1, u8 *, 0) = 0xFFU, M2C_FIELD(arg1, u8 *, 1) = 0xFFU, temp_s1 = M2C_FIELD(arg0, u8 *, 0), temp_v0 = func_00994C60(temp_s1, M2C_FIELD(arg0, u8 *, 1)), (temp_v0 != NULL)) && (((u64) ((s64) M2C_FIELD(temp_v0, u8 *, 0) << 0x39) >> 0x3A) != 9)) {
        var_s3 = 0;
loop_5:
        if (temp_s1 != var_s3) {
            var_s2 = 0;
loop_7:
            temp_v0_2 = func_00994C60(var_s3, var_s2);
            if ((temp_v0_2 != NULL) && (M2C_FIELD(temp_v0_2, u16 *, 4) == M2C_FIELD(temp_v0, u16 *, 4)) && (((u64) ((s64) M2C_FIELD(temp_v0_2, u8 *, 0) << 0x39) >> 0x3A) == 9)) {
                M2C_FIELD(arg1, u8 *, 0) = var_s3;
                M2C_FIELD(arg1, u8 *, 1) = var_s2;
                return;
            }
            var_s2 += 1;
            if ((s32) var_s2 >= 0x25) {
                goto block_12;
            }
            goto loop_7;
        }
block_12:
        var_s3 += 1;
        if ((s32) var_s3 >= 0x48) {

        } else {
            goto loop_5;
        }
    }
}
