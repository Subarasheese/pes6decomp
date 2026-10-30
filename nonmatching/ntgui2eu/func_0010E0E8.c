/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_0010E0E8(void *arg0, s32 arg1) {
    s32 *var_a0;
    s32 temp_v0;
    s32 var_a1;
    u8 temp_a3;
    void *var_a2;
    void *var_v0;

    var_a1 = arg1;
    temp_a3 = M2C_FIELD(arg0, u8 *, 0x11);
    var_v0 = NULL;
    if (var_a1 < (s32) temp_a3) {
        var_a2 = arg0 + M2C_FIELD(arg0, u16 *, 0xC);
        var_v0 = var_a2;
        if ((temp_a3 != 1) && (var_a1 > 0)) {
            var_a0 = arg0 + 0x40;
            do {
                temp_v0 = *var_a0;
                var_a0 += 4;
                var_a1 -= 1;
                var_a2 += temp_v0;
            } while (var_a1 != 0);
            var_v0 = var_a2;
        }
    }
    return var_v0;
}
