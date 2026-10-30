/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00936B90();                                /* extern */

void *func_00952510(s32 arg0) {
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s1;
    s8 temp_v1;
    u16 *var_v0;
    u16 var_v0_2;
    void *var_a0;

    temp_v0 = func_00936B90();
    if (temp_v0 != 0) {
        var_s1 = temp_v0 + 0x4F0;
    } else {
        var_s1 = 0;
    }
    if (var_s1 != 0) {
        temp_s0 = arg0 & 0xFFFF;
        if (temp_s0 >= 0x64) {
            var_a0 = NULL;
        } else {
            temp_v0_2 = func_00936B90();
            if (temp_v0_2 != 0) {
                var_v0 = temp_v0_2 + 0x4F0;
            } else {
                var_v0 = NULL;
            }
            if (var_v0 != NULL) {
                var_v0_2 = *var_v0;
            } else {
                var_v0_2 = 0;
            }
            if (temp_s0 < (var_v0_2 & 0xFFFF)) {
                var_a0 = var_s1 + ((arg0 & 0xFFFF) * 0x84) + 4;
            } else {
                var_a0 = NULL;
            }
        }
    } else {
        var_a0 = NULL;
    }
    if (var_a0 != NULL) {
        temp_v1 = M2C_FIELD(var_a0, s8 *, 0x7D);
        switch (temp_v1) {                          /* irregular */
        default:
            return NULL;
        case 3:
        case 2:
        case 1:
            if (M2C_FIELD(var_a0, u8 *, 0x4C) != 0) {
                return var_a0 + 0x4C;
            }
            return NULL;
        case 4:
            return NULL;
        }
    } else {
        return NULL;
    }
}
