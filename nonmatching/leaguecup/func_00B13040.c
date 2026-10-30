/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B14800(void);
void func_00B13040(s32 arg0) {
    u32 temp_v0;
    u8 temp_a0;
    u8 temp_a0_2;
    u8 temp_v1;
    u8 var_v1;

    temp_v0 = func_00B14800();
    if (temp_v0 != 0) {
        temp_v1 = M2C_FIELD(temp_v0, u8 *, 0x75D);
        if ((s32) temp_v1 >= 2) {
            var_v1 = (temp_v1 - 1) & 0xFF;
            if (arg0 < 0) {
                temp_a0 = M2C_FIELD(temp_v0, u8 *, 0x75E);
                if ((s32) temp_a0 > 0) {
                    var_v1 = temp_a0 + (arg0 & 0xFF);
                }
                goto block_10;
            }
            if (arg0 > 0) {
                temp_a0_2 = M2C_FIELD(temp_v0, u8 *, 0x75E);
                if ((s32) temp_a0_2 >= (var_v1 & 0xFF)) {
                    M2C_FIELD(temp_v0, u8 *, 0x75E) = 0U;
                } else {
                    var_v1 = temp_a0_2 + (arg0 & 0xFF);
block_10:
                    M2C_FIELD(temp_v0, u8 *, 0x75E) = var_v1;
                }
            }
            M2C_FIELD(temp_v0, s8 *, 0xBD0) = 1;
        }
    }
}
