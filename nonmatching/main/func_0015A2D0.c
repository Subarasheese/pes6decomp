/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0015A2D0(void *arg0, s32 arg1, u8 *arg2, u8 *arg3) {
    s32 var_v0;
    u16 temp_v1;

    var_v0 = -1;
    if (arg1 >= 0x14) {
        temp_v1 = M2C_FIELD(arg0, u16 *, 0);
        var_v0 = -2;
        if ((((temp_v1 >> 8) | (temp_v1 << 8)) & 0xFFFF) == 0x8000) {
            var_v0 = -1;
            if ((s16) (M2C_FIELD(arg0, u8 *, 3) | ((M2C_FIELD(arg0, u16 *, 2) << 8) & ~0xFF)) >= 0x10) {
                var_v0 = 0;
                *arg2 = M2C_FIELD(arg0, u8 *, 0x12);
                *arg3 = M2C_FIELD(arg0, u8 *, 0x13);
            }
        }
    }
    return var_v0;
}
