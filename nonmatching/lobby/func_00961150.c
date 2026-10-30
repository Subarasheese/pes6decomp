/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00936B90();                                /* extern */

s32 func_00961150(void) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0;
    s32 var_v0;
    s32 var_v0_3;
    s32 var_v1;
    void *var_v0_2;

    temp_v0 = func_00936B90();
    if (temp_v0 != 0) {
        var_v0 = temp_v0 + 0x3F6C0;
    } else {
        var_v0 = 0;
    }
    if (var_v0 != 0) {
        var_s0 = 9;
loop_32:
        if (var_s0 < 0) {
            goto block_33;
        }
        temp_v0_2 = func_00936B90();
        if (temp_v0_2 != 0) {
            var_v1 = temp_v0_2 + 0x3F6C0;
        } else {
            var_v1 = 0;
        }
        if (var_v1 == 0) {
            var_v0_2 = NULL;
        } else if (var_s0 < 0) {
            var_v0_2 = NULL;
        } else if (var_s0 < 0xA) {
            var_v0_2 = var_v1 + (var_s0 * 0x44) + 0xC;
        } else {
            var_v0_2 = NULL;
        }
        if (var_v0_2 != NULL) {
            var_v0_3 = M2C_FIELD(var_v0_2, s32 *, 0xC);
        } else {
            var_v0_3 = 0;
        }
        if ((var_v0_3 != 0) != 1) {
            var_s0 -= 1;
            goto loop_32;
        }
        return var_s0 + 1;
    }
block_33:
    return 0;
}
