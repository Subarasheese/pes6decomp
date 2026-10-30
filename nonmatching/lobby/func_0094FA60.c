/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00936B90();                                /* extern */
s32 func_0094FC70();                                /* extern */

void *func_0094FA60(u32 arg0) {
    s32 temp_s1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a0;
    s32 var_s0;
    u32 *var_v0;
    u32 var_v0_2;
    void *temp_v1;

    temp_s1 = func_0094FC70();
    temp_v0 = func_00936B90();
    if (temp_v0 != 0) {
        var_s0 = temp_v0 + 0x15E4C;
    } else {
        var_s0 = 0;
    }
    if (var_s0 == 0) {
        var_a0 = 0;
    } else {
        temp_v0_2 = func_00936B90();
        if (temp_v0_2 != 0) {
            var_v0 = temp_v0_2 + 0x15E4C;
        } else {
            var_v0 = NULL;
        }
        if (var_v0 != NULL) {
            var_v0_2 = *var_v0;
        } else {
            var_v0_2 = 0;
        }
        if (arg0 < var_v0_2) {
            var_a0 = var_s0 + (arg0 * 0x2F0) + 8;
        } else {
            var_a0 = 0;
        }
    }
    if (var_a0 == 0) {
        return NULL;
    }
    if (temp_s1 >= 0) {
        if (temp_s1 < 8) {
            temp_v1 = (temp_s1 * 0x31) + var_a0;
            if (M2C_FIELD(temp_v1, u8 *, 0xBC) != 0) {
                return temp_v1 + 0xBC;
            }
            return NULL;
        }
        return NULL;
    }
    return NULL;
}
