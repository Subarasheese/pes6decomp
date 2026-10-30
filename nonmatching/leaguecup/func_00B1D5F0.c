/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B1DE00(void);
s32 func_00B1D7E0(M2C_UNK, M2C_UNK);                /* extern */

s32 func_00B1D5F0(void) {
    s32 temp_a0;
    u32 temp_v0;
    u32 temp_v0_2;
    u8 var_v0;

    temp_v0 = func_00B1DE00();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0x91) == 0) {
            if (M2C_FIELD(temp_v0, s32 *, 0x94) != 0) {
                if (func_00B1D7E0(-1, 0) == -1) {
                    M2C_FIELD(temp_v0, u8 *, 0x91) = 0U;
                } else {
                    var_v0 = 3;
                    goto block_22;
                }
            } else {
                temp_v0_2 = func_00B1DE00();
                if (temp_v0_2 != 0) {
                    M2C_FIELD(temp_v0_2, s32 *, 0x9C) = -1;
                    temp_a0 = M2C_FIELD(temp_v0_2, s32 *, 0xA8) - 1;
                    M2C_FIELD(temp_v0_2, s32 *, 0xA8) = temp_a0;
                    if ((s32) M2C_FIELD(temp_v0_2, u8 *, 0xB5) < temp_a0) {
                        M2C_FIELD(temp_v0_2, s32 *, 0xA8) = (s32) M2C_FIELD(temp_v0_2, u8 *, 0xB6);
                    }
                    if (M2C_FIELD(temp_v0_2, s32 *, 0xA8) < (s32) M2C_FIELD(temp_v0_2, u8 *, 0xB6)) {
                        M2C_FIELD(temp_v0_2, s32 *, 0xA8) = (s32) M2C_FIELD(temp_v0_2, u8 *, 0xB5);
                    }
                    M2C_FIELD(temp_v0_2, s32 *, 0x98) = (s32) (M2C_FIELD(temp_v0_2, s32 *, 0x98) - 1);
                }
                var_v0 = 1;
                M2C_FIELD(temp_v0, s32 *, 0x9C) = -1;
block_22:
                M2C_FIELD(temp_v0, u8 *, 0x91) = var_v0;
            }
        }
    }
    return 0;
}
