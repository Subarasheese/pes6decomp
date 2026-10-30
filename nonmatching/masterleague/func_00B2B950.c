/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00228A80(void);
s32 func_00B2B950(s32 arg0) {
    s32 temp_a0;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a2;
    void *temp_v0;

    temp_v0 = func_00228A80();
    if (temp_v0 != NULL) {
        temp_a0 = arg0 & 0xFF;
        var_a2 = 0;
        if (temp_a0 == 1) {
            var_a1 = 0;
loop_6:
            if (M2C_FIELD((temp_v0 + ((var_a1 & 0xFFFF) * 2)), u16 *, 0x336BE) != 0) {
                var_a1 = (var_a1 + 1) & 0xFFFF;
                var_a2 = (var_a2 + 1) & 0xFFFF;
                if (var_a1 >= 0x15E) {

                } else {
                    goto loop_6;
                }
            }
        } else if (temp_a0 == 2) {
            var_a1_2 = 0;
loop_14:
            if (M2C_FIELD((temp_v0 + ((var_a1_2 & 0xFFFF) * 2)), u16 *, 0x3397A) != 0) {
                var_a1_2 = (var_a1_2 + 1) & 0xFFFF;
                var_a2 = (var_a2 + 1) & 0xFFFF;
                if (var_a1_2 >= 0x32) {

                } else {
                    goto loop_14;
                }
            }
        }
        return var_a2 & 0xFFFF;
    }
    return 0;
}
