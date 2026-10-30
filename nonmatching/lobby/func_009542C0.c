/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0082C2A0();                                /* extern */
s32 func_00936B90();                                /* extern */

void *func_009542C0(s32 arg0) {
    s32 temp_s0;
    s32 temp_s2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0;
    u16 *var_v0;
    u16 var_v0_2;
    void *var_v1;

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
        var_v1 = NULL;
    } else if (arg0 < 0) {
        var_v1 = NULL;
    } else {
        temp_s2 = func_0082C2A0();
        temp_v0_2 = func_00936B90();
        if (temp_v0_2 == 0) {
            goto block_16;
        }
        if (temp_s2 != 0) {
            var_v0 = temp_v0_2 + 0xDC;
        } else {
block_16:
            var_v0 = NULL;
        }
        if (var_v0 != NULL) {
            var_v0_2 = *var_v0;
        } else {
            var_v0_2 = 0;
        }
        if (arg0 < (var_v0_2 & 0xFFFF)) {
            var_v1 = var_s0 + (arg0 * 0x68) + 2;
        } else {
            var_v1 = NULL;
        }
    }
    if (var_v1 != NULL) {
        if (M2C_FIELD(var_v1, u8 *, 0x26) != 0) {
            return var_v1 + 0x26;
        }
        return NULL;
    }
    return NULL;
}
