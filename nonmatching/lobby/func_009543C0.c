/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0082C2A0();                                /* extern */
s32 func_00936B90();                                /* extern */

s32 func_009543C0(s32 arg0) {
    s32 temp_s0;
    s32 temp_s2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0;
    s32 var_v0;
    u16 *var_v0_2;
    u16 var_v0_3;

    temp_s0 = func_0082C2A0();
    temp_v0 = func_00936B90();
    if (temp_v0 == 0) {
        goto block_5;
    }
    if (temp_s0 != 0) {
        var_s0 = temp_v0 + 0xDC;
    } else {
block_5:
        var_s0 = 0;
    }
    if (var_s0 == 0) {
        var_v0 = 0;
    } else if (arg0 < 0) {
        var_v0 = 0;
    } else {
        temp_s2 = func_0082C2A0();
        temp_v0_2 = func_00936B90();
        if (temp_v0_2 == 0) {
            goto block_16;
        }
        if (temp_s2 != 0) {
            var_v0_2 = temp_v0_2 + 0xDC;
        } else {
block_16:
            var_v0_2 = NULL;
        }
        if (var_v0_2 != NULL) {
            var_v0_3 = *var_v0_2;
        } else {
            var_v0_3 = 0;
        }
        if (arg0 < (var_v0_3 & 0xFFFF)) {
            var_v0 = var_s0 + (arg0 * 0x68) + 2;
        } else {
            var_v0 = 0;
        }
    }
    if (var_v0 == 0) {
        var_v0 = 0;
    }
    return var_v0;
}
