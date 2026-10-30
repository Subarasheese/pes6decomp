/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003EAF00;

s32 func_00B767B0(s32 arg0) {
    s32 temp_a0;
    s32 var_v0;
    u8 temp_v0_2;
    u8 temp_v1;
    void *temp_v0;

    if (D_003EAF00 != 0) {
        temp_a0 = arg0 & 0xFF;
        temp_v0 = temp_a0 + D_003EAF00;
        temp_v1 = M2C_FIELD(temp_v0, u8 *, 0x8F8);
        temp_v0_2 = M2C_FIELD(temp_v0, u8 *, 0x8D8);
        if ((s32) temp_v1 < (s32) temp_v0_2) {
            return 0;
        }
        if (temp_v0_2 == temp_v1) {
            goto block_16;
        }
        if (D_003EAF00 != 0) {
            var_v0 = M2C_FIELD(((temp_a0 * 4) + D_003EAF00), s32 *, 0x918);
        } else {
            var_v0 = 0;
        }
        if (var_v0 == 0) {
            return 2;
        }
        goto block_16;
    }
block_16:
    return 1;
}
