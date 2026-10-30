/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00D0BAF0();                                /* extern */

u8 func_00840D50(void) {
    s32 *var_v0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s2;
    s32 var_v0_2;
    s32 var_v1;
    u8 var_s1;
    void *var_s0;

    var_s1 = 0;
    temp_v0 = func_00D0BAF0();
    if (temp_v0 != 0) {
        var_s0 = temp_v0 + 0xF8A4;
    } else {
        var_s0 = NULL;
    }
    if (var_s0 != NULL) {
        var_s2 = 0;
        do {
            temp_v0_2 = func_00D0BAF0();
            if (temp_v0_2 != 0) {
                var_v1 = temp_v0_2 + 0xF8A4;
            } else {
                var_v1 = 0;
            }
            if (var_v1 == 0) {
                var_v0 = NULL;
            } else if (var_s2 < 0) {
                var_v0 = NULL;
            } else if (var_s2 < 8) {
                var_v0 = var_v1 + (var_s2 * 0xB8);
            } else {
                var_v0 = NULL;
            }
            if (var_v0 != NULL) {
                var_v0_2 = *var_v0;
            } else {
                var_v0_2 = 0;
            }
            if (var_v0_2 != 0) {
                var_s1 += 1;
            }
            var_s2 += 1;
        } while (var_s2 < 8);
        M2C_FIELD(var_s0, u8 *, 0x8FE) = var_s1;
        return M2C_FIELD(var_s0, u8 *, 0x8FE);
    }
    return 0U;
}
