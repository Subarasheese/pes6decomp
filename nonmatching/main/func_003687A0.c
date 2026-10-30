/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_003687A0(void *arg0) {
    s16 temp_a1;
    s16 temp_a2;
    s32 temp_v1;
    s32 var_v0;
    u8 temp_v0;

    if (!(M2C_FIELD(arg0, s32 *, 0x2C) & 1)) {
        temp_v0 = M2C_FIELD(arg0, u8 *, 0x18);
        temp_a1 = M2C_FIELD(((temp_v0 * 2) + arg0), s16 *, 0x28);
        temp_a2 = M2C_FIELD((((temp_v0 ^ 1) * 2) + arg0), s16 *, 0x28);
        if (temp_a1 != temp_a2) {
            temp_v1 = temp_a1 - temp_a2;
            if (temp_v1 != -1) {
                if (temp_a2 >= temp_a1) {
                    var_v0 = 1;
                    goto block_21;
                }
                if (temp_v1 != 0) {
                    var_v0 = 7;
                    goto block_21;
                }
            } else {
                var_v0 = 2;
                goto block_21;
            }
        } else {
            if (temp_a1 != 0) {
                var_v0 = 4;
            } else {
                var_v0 = 5;
            }
block_21:
            M2C_FIELD(arg0, s32 *, 0x20) = var_v0;
        }
        return 1;
    }
    M2C_FIELD(arg0, s32 *, 0x20) = 1;
    return 0;
}
