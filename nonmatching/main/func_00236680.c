/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
extern void * func_00229460(void);
s32 func_00236680(s32 arg0) {
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a0;
    s32 var_s1;
    void *var_s0;

    var_s1 = 0;
    var_s0 = func_00229460();
    if (func_00231240() == 1) {
        return 0;
    }
    if (var_s0 != NULL) {
        temp_v1 = arg0 & 0xFF;
        if (temp_v1 < 0x14) {
            var_a0 = 0;
loop_11:
            if (var_a0 < temp_v1) {
                if (var_a0 < 0x14) {
                    var_a0 += 1;
                    temp_v0 = var_s1 + M2C_FIELD(var_s0, u8 *, 0x4AB8);
                    var_s0 += 0xC;
                    var_s1 = temp_v0 & 0xFF;
                    goto loop_11;
                }
            }
            return var_s1;
        }
        return 0;
    }
    return 0;
}
