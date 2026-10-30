/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0015A250(void *arg0, s32 arg1, s16 *arg2) {
    s32 var_v0;
    u16 temp_a0;
    u16 temp_v1;

    var_v0 = -1;
    if (arg1 >= 0x12) {
        temp_v1 = M2C_FIELD(arg0, u16 *, 0);
        var_v0 = -2;
        if ((((temp_v1 >> 8) | (temp_v1 << 8)) & 0xFFFF) == 0x8000) {
            var_v0 = -1;
            if ((s16) (M2C_FIELD(arg0, u8 *, 3) | ((M2C_FIELD(arg0, u16 *, 2) << 8) & ~0xFF)) >= 0xE) {
                temp_a0 = M2C_FIELD(arg0, u16 *, 0x10);
                var_v0 = 0;
                *arg2 = (temp_a0 >> 8) | ((temp_a0 << 8) & ~0xFF);
            }
        }
    }
    return var_v0;
}
