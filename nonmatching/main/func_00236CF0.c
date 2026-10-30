/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
extern void * func_00229460(void);
s32 func_00236BA0(s32, s32);                        /* extern */

s32 func_00236CF0(s32 arg0) {
    s32 temp_v1;
    s32 var_s1;
    void *temp_s0;
    void *temp_v0;

    temp_s0 = func_00229460();
    if (func_00231240() == 1) {
        return 1;
    }
    if (temp_s0 != NULL) {
        temp_v1 = arg0 & 0xFF;
        if (temp_v1 < 0x14) {
            temp_v0 = (temp_v1 * 0xC) + temp_s0;
            var_s1 = 0;
            if ((s32) M2C_FIELD(temp_v0, u8 *, 0x4ABA) > 0) {
loop_11:
                if (func_00236BA0(arg0, var_s1 & 0xFF) != 0) {
                    var_s1 += 1;
                    if (var_s1 >= (s32) M2C_FIELD(temp_v0, u8 *, 0x4ABA)) {
                        goto block_17;
                    }
                    goto loop_11;
                }
                return 0;
            }
block_17:
            return 1;
        }
        return 1;
    }
    return 1;
}
