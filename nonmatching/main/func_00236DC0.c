/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
extern void * func_00229460(void);
s32 func_00236BA0(s32, s32);                        /* extern */

s32 func_00236DC0(void) {
    s32 var_s2;
    s32 var_s3;
    void *temp_s1;
    void *var_s0;

    temp_s1 = func_00229460();
    if (func_00231240() == 1) {
        return 1;
    }
    if (temp_s1 != NULL) {
        var_s2 = 0;
        if ((s32) M2C_FIELD(temp_s1, u8 *, 0x1363) > 0) {
            var_s0 = temp_s1;
loop_8:
            var_s3 = 0;
            if ((s32) M2C_FIELD(var_s0, u8 *, 0x4ABA) > 0) {
loop_9:
                if (func_00236BA0(var_s2 & 0xFF, var_s3 & 0xFF) != 0) {
                    var_s3 += 1;
                    if (var_s3 >= (s32) M2C_FIELD(var_s0, u8 *, 0x4ABA)) {
                        goto block_15;
                    }
                    goto loop_9;
                }
                return 0;
            }
block_15:
            var_s2 += 1;
            var_s0 += 0xC;
            if (var_s2 >= (s32) M2C_FIELD(temp_s1, u8 *, 0x1363)) {
                goto block_17;
            }
            goto loop_8;
        }
block_17:
        return 1;
    }
    return 1;
}
