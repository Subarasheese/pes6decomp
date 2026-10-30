/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
extern void * func_00229460(void);
s32 func_00233EF0(s32, s32);                        /* extern */
s32 func_00234E00(s32);                             /* extern */

s32 func_00236AE0(s32 arg0) {
    s32 var_s1;
    u8 temp_s0_2;
    void *temp_s0;

    temp_s0 = func_00229460();
    if (func_00231240() == 1) {
        return 1;
    }
    if (temp_s0 != NULL) {
        temp_s0_2 = M2C_FIELD((((func_00234E00(arg0) & 0xFF) * 0xC) + temp_s0), u8 *, 0x4ABA);
        var_s1 = 0;
        if ((s32) temp_s0_2 > 0) {
loop_7:
            if (func_00233EF0(arg0, var_s1 & 0xFF) != 0) {
                var_s1 += 1;
                if (var_s1 >= (s32) temp_s0_2) {
                    goto block_12;
                }
                goto loop_7;
            }
            return 0;
        }
block_12:
        return 1;
    }
    return 1;
}
