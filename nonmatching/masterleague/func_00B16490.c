/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00994C60(u8, u8);                        /* extern */

void func_00B16490(void *arg0, void *arg1, s32 arg2) {
    u8 temp_s2;
    u8 var_s3;
    u8 var_s4;
    void *temp_v0;
    void *temp_v0_2;

    M2C_FIELD(arg1, u8 *, 0) = 0xFFU;
    M2C_FIELD(arg1, u8 *, 1) = 0xFFU;
    temp_s2 = M2C_FIELD(arg0, u8 *, 0);
    temp_v0 = func_00994C60(temp_s2, M2C_FIELD(arg0, u8 *, 1));
    if (temp_v0 != NULL) {
        var_s4 = 0;
loop_2:
        if (!(arg2 & 0xFF) || (temp_s2 != var_s4)) {
            var_s3 = 0;
loop_5:
            temp_v0_2 = func_00994C60(var_s4, var_s3);
            if ((temp_v0_2 != NULL) && (M2C_FIELD(temp_v0_2, u16 *, 4) == M2C_FIELD(temp_v0, u16 *, 4)) && (((u64) ((s64) M2C_FIELD(temp_v0_2, u8 *, 1) << 0x39) >> 0x3C) == 2)) {
                M2C_FIELD(arg1, u8 *, 0) = var_s4;
                M2C_FIELD(arg1, u8 *, 1) = var_s3;
                return;
            }
            var_s3 += 1;
            if ((s32) var_s3 >= 0x25) {
                goto block_10;
            }
            goto loop_5;
        }
block_10:
        var_s4 += 1;
        if ((s32) var_s4 >= 0x48) {

        } else {
            goto loop_2;
        }
    }
}
