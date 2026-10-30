/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
extern void * func_00229460(void);
s32 func_00229010(s32);                             /* extern */
s32 func_00233EF0(s32, s32);                        /* extern */
s32 func_00234580(s32, s32);                        /* extern */
s32 func_00236680(s32);                             /* extern */

s32 func_00236BA0(s32 arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_s4;
    s32 temp_s4_2;
    s32 var_s0;
    s32 var_s3;
    void *temp_s2;
    void *temp_v0;

    temp_s2 = func_00229460();
    if (func_00231240() == 1) {
        return 1;
    }
    if (temp_s2 != NULL) {
        if ((arg0 & 0xFF) < 0x14) {
            temp_a0 = func_00236680(arg0) & 0xFF;
            temp_v0 = ((arg0 & 0xFF) * 0xC) + temp_s2;
            var_s0 = 0;
            if ((s32) M2C_FIELD(temp_v0, u8 *, 0x4AB8) > 0) {
                var_s3 = temp_a0 & 0xFF;
loop_12:
                temp_s4 = var_s3 & 0xFF;
                if ((func_00229010(temp_s4) & 0xFF) != 0xFE) {
                    temp_s4_2 = func_00234580(arg1, temp_s4) & 0xFF;
                    if ((func_00233EF0(temp_s4, arg1) == 0) && ((temp_s4_2 & 0xFF) != 0xFE) && ((func_00229010(temp_s4_2) & 0xFF) != 0xFE)) {
                        return 0;
                    }
                }
                var_s0 += 1;
                var_s3 += 1;
                if (var_s0 >= (s32) M2C_FIELD(temp_v0, u8 *, 0x4AB8)) {
                    goto block_18;
                }
                goto loop_12;
            }
block_18:
            return 1;
        }
        return 1;
    }
    return 1;
}
