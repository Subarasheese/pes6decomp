/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0082C2A0();                                /* extern */
s32 func_00936B90();                                /* extern */

s32 func_0093F510(void) {
    s32 *var_a0;
    s32 *var_v0;
    s32 temp_s0;
    s32 temp_s2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0;
    s32 var_s1;
    s8 var_v0_3;
    void *var_v0_2;

    temp_s0 = func_0082C2A0();
    temp_v0 = func_00936B90();
    if (temp_v0 == 0) {
        var_v0 = NULL;
    } else if (temp_s0 != 0) {
        var_v0 = temp_v0 + 0x33258;
    } else {
        var_v0 = NULL;
    }
    if (var_v0 != NULL) {
        var_s0 = *var_v0;
    } else {
        var_s0 = 0;
    }
    var_s1 = 0;
loop_38:
    if (var_s1 >= var_s0) {
        return 0;
    }
    temp_s2 = func_0082C2A0();
    temp_v0_2 = func_00936B90();
    if (temp_v0_2 == 0) {
        var_a0 = NULL;
    } else if (temp_s2 != 0) {
        var_a0 = temp_v0_2 + 0x33258;
    } else {
        var_a0 = NULL;
    }
    if (var_a0 == NULL) {
        var_v0_2 = NULL;
    } else if (var_s1 < 0) {
        var_v0_2 = NULL;
    } else if (var_s1 < 0x1E) {
        if (var_s1 < *var_a0) {
            var_v0_2 = var_a0 + (var_s1 * 0x4D8) + 4;
        } else {
            goto block_28;
        }
    } else {
block_28:
        var_v0_2 = NULL;
    }
    if (var_v0_2 != NULL) {
        var_v0_3 = M2C_FIELD(var_v0_2, s8 *, 4);
    } else {
        var_v0_3 = 0;
    }
    if (((s64) ((s64) var_v0_3 << 0x38) >> 0x38) != 1) {
        var_s1 += 1;
        goto loop_38;
    }
    return 1;
}
