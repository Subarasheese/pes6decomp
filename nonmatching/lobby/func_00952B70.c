/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00936B90();                                /* extern */

s8 func_00952B70(s32 arg0) {
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s1;
    u16 *var_v0_2;
    u16 var_v0_3;
    void *var_v0;

    temp_v0 = func_00936B90();
    if (temp_v0 != 0) {
        var_s1 = temp_v0 + 0x4F0;
    } else {
        var_s1 = 0;
    }
    if (var_s1 != 0) {
        temp_s0 = arg0 & 0xFFFF;
        if (temp_s0 >= 0x64) {
            var_v0 = NULL;
        } else {
            temp_v0_2 = func_00936B90();
            if (temp_v0_2 != 0) {
                var_v0_2 = temp_v0_2 + 0x4F0;
            } else {
                var_v0_2 = NULL;
            }
            if (var_v0_2 != NULL) {
                var_v0_3 = *var_v0_2;
            } else {
                var_v0_3 = 0;
            }
            if (temp_s0 < (var_v0_3 & 0xFFFF)) {
                var_v0 = var_s1 + ((arg0 & 0xFFFF) * 0x84) + 4;
            } else {
                var_v0 = NULL;
            }
        }
    } else {
        var_v0 = NULL;
    }
    if (var_v0 != NULL) {
        return M2C_FIELD(var_v0, s8 *, 0x81);
    }
    return 3;
}
