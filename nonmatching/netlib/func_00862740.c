/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00862740(void *arg0, s32 arg1, s32 *arg2) {
    s32 temp_a3;
    s32 var_v0;

    if ((arg1 >= 0) && (arg1 < 0xA)) {
        if (arg2 != NULL) {
            var_v0 = *arg2;
            if ((var_v0 < 0) || (M2C_FIELD(arg0, s32 *, 0x238) < var_v0)) {
                var_v0 = 0;
            }
        } else {
            var_v0 = 0;
        }
        temp_a3 = M2C_FIELD(arg0, s32 *, 0x238);
loop_8:
        if (var_v0 < temp_a3) {
            if (M2C_FIELD((arg0 + (var_v0 << 6)), s32 *, 0x240) != arg1) {
                var_v0 += 1;
                goto loop_8;
            }
        }
        if (var_v0 == temp_a3) {
            var_v0 = -0x6E;
            if (arg2 != NULL) {
                *arg2 = -0x6E;
                goto block_14;
            }
            /* Duplicate return node #18. Try simplifying control flow for better match */
            return var_v0;
        }
        if (arg2 != NULL) {
            *arg2 = var_v0 + 1;
block_14:
            return var_v0;
        }
        return var_v0;
    }
    return -0x18;
}
