/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B4DFD0(void);
s32 func_00B4C0B0(void) {
    s32 temp_a0;
    u32 temp_v0;
    u8 temp_v1;
    u8 var_v1;

    temp_v0 = func_00B4DFD0();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0x34C) == 0) {
            if (M2C_FIELD(temp_v0, u8 *, 0x34D) == 0) {
                temp_a0 = M2C_FIELD(temp_v0, s32 *, 0x350);
                if (temp_a0 != 8) {
                    temp_v1 = M2C_FIELD((temp_a0 + temp_v0), u8 *, 0x3E4);
                    if (temp_v1 != 0xFF) {
                        M2C_FIELD((temp_v1 + temp_v0), s8 *, 0x1B8) = 0;
                        var_v1 = 5;
                        M2C_FIELD((M2C_FIELD(temp_v0, s32 *, 0x350) + temp_v0), s8 *, 0x3E4) = 0xFF;
                    } else {
                        var_v1 = 6;
                    }
                } else {
                    var_v1 = 6;
                }
                M2C_FIELD(temp_v0, u8 *, 0x34C) = var_v1;
            }
        }
    }
    return 0;
}
