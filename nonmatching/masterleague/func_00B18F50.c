/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00228A80(void);
s32 func_00B18F50(s32 arg0, s32 arg1) {
    s32 temp_s2;
    s32 var_a0;
    s32 var_a1;
    s32 var_v0;
    void *temp_v0;
    void *temp_v0_2;
    void *var_a0_2;
    void *var_v1;

    temp_s2 = arg0 & 0xFF;
    if (temp_s2 >= 0x48) {
        goto block_29;
    }
    temp_v0 = func_00228A80();
    if (temp_v0 != NULL) {
        if (temp_s2 >= 0x48) {
            goto block_18;
        }
        temp_v0_2 = func_00228A80();
        if (temp_v0_2 != NULL) {
            var_a1 = 0;
            var_a0_2 = temp_v0_2 + (temp_s2 << 5);
loop_13:
            if ((arg1 & 0xFFFF) != M2C_FIELD(var_a0_2, u16 *, 0x325AE)) {
                var_a1 += 1;
                var_a0_2 += 2;
                if (var_a1 >= 0x10) {
                    goto block_18;
                }
                goto loop_13;
            }
            var_v0 = var_a1 & 0xFF;
        } else {
block_18:
            var_v0 = 0xFF;
        }
        if ((var_v0 & 0xFF) == 0xFF) {
            var_a0 = 0;
            var_v1 = temp_v0 + ((arg0 & 0xFF) << 5);
loop_24:
            if (M2C_FIELD(var_v1, u16 *, 0x325AE) != 0) {
                var_a0 += 1;
                var_v1 += 2;
                if (var_a0 >= 0x10) {
                    goto block_29;
                }
                goto loop_24;
            }
            return var_a0 & 0xFF;
        }
        return 0xFF;
    }
block_29:
    return 0xFF;
}
