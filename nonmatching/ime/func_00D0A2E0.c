/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00D13A30(void *, s32);                     /* extern */

s32 func_00D0A2E0(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_a2;
    s32 var_v1;
    void *temp_a1;

    if (arg0 == 0) {
        goto block_24;
    }
    if (arg1 >= 0) {
        if (arg1 < 0xA) {
            var_v1 = 0;
loop_11:
            if (var_v1 < 5) {
                if (M2C_FIELD((arg0 + (var_v1 * 4)), s32 *, 0x7F4) != arg1) {
                    var_v1 += 1;
                    goto loop_11;
                }
                return 1;
            }
            var_a2 = 0;
loop_21:
            if (var_a2 < 5) {
                temp_a1 = arg0 + (var_a2 * 4);
                if ((M2C_FIELD(temp_a1, s32 *, 0x7F4) == 0xA) && (M2C_FIELD(temp_a1, s32 *, 0x7E0) == 0)) {
                    temp_v0 = func_00D13A30(temp_a1, var_a2);
                    M2C_FIELD(temp_a1, s32 *, 0x7E0) = temp_v0;
                    if (temp_v0 == 0) {
                        goto block_24;
                    }
                    M2C_FIELD(temp_a1, s32 *, 0x7F4) = arg1;
                    return 1;
                }
                var_a2 += 1;
                goto loop_21;
            }
            goto block_24;
        }
        return 0;
    }
block_24:
    return 0;
}
