/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00228A80(void);
void func_00B1A5F0(s32 arg0, s16 arg1) {
    s32 temp_s3;
    s32 var_a1_2;
    s32 var_a2;
    s32 var_s0;
    s32 var_v1;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *var_a0;
    void *var_a1;

    temp_s3 = arg0 & 0xFF;
    if (temp_s3 < 0x48) {
        if (temp_s3 >= 0x48) {
            goto block_30;
        }
        temp_v0 = func_00228A80();
        if (temp_v0 != NULL) {
            if (temp_s3 >= 0x48) {
                goto block_19;
            }
            temp_v0_2 = func_00228A80();
            if (temp_v0_2 != NULL) {
                var_a2 = 0;
                var_a1 = temp_v0_2 + (temp_s3 << 5);
loop_14:
                if ((arg1 & 0xFFFF) != M2C_FIELD(var_a1, u16 *, 0x325AE)) {
                    var_a2 += 1;
                    var_a1 += 2;
                    if (var_a2 >= 0x10) {
                        goto block_19;
                    }
                    goto loop_14;
                }
                var_v1 = var_a2 & 0xFF;
            } else {
block_19:
                var_v1 = 0xFF;
            }
            if ((var_v1 & 0xFF) == 0xFF) {
                var_a1_2 = 0;
                var_a0 = temp_v0 + ((arg0 & 0xFF) << 5);
loop_25:
                if (M2C_FIELD(var_a0, u16 *, 0x325AE) != 0) {
                    var_a1_2 += 1;
                    var_a0 += 2;
                    if (var_a1_2 >= 0x10) {
                        goto block_30;
                    }
                    goto loop_25;
                }
                var_s0 = var_a1_2 & 0xFF;
            } else {
                var_s0 = 0xFF & 0xFF;
            }
        } else {
block_30:
            var_s0 = 0xFF;
        }
        if ((var_s0 & 0xFF) < 0x10) {
            temp_v0_3 = func_00228A80();
            if (temp_v0_3 != NULL) {
                M2C_FIELD((((var_s0 & 0xFF) * 2) + (((arg0 & 0xFF) << 5) + temp_v0_3)), s16 *, 0x325AE) = arg1;
            }
        }
    }
}
