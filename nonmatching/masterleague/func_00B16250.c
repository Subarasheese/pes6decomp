/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00228A80(void);
extern u8 func_00225820(void);
s32 func_009492B0(s32, s32);                        /* extern */

s32 func_00B16250(void) {
    s32 temp_s1;
    s32 temp_v1;
    s32 var_s2;
    s32 var_s3;
    u16 temp_a0;
    void *var_s0;

    var_s0 = func_00228A80();
    temp_s1 = func_00225820() & 0xFF;
    var_s2 = 0;
    var_s3 = 0;
loop_1:
    temp_a0 = func_009492B0(temp_s1, var_s3 & 0xFF) & 0xFFFF;
    if (temp_a0 != 0) {
        temp_v1 = var_s2 < 0x20;
        if (temp_v1 != 0) {
            if (var_s2 < 0x20) {
loop_8:
                if (M2C_FIELD(var_s0, u16 *, 0x32EAE) == 0) {
                    var_s2 += 1;
                    M2C_FIELD(var_s0, u16 *, 0x32EAE) = temp_a0;
                    var_s0 += 2;
                } else if (temp_v1 != 0) {
                    goto loop_8;
                }
            }
            goto block_11;
        }
        return 0;
    }
block_11:
    var_s3 += 1;
    if (var_s3 >= 0x20) {
        return 1;
    }
    goto loop_1;
}
