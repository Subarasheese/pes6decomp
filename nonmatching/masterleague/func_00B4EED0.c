/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B526C0(void);
M2C_UNK func_00958000(M2C_UNK);                     /* extern */

s32 func_00B4EED0(void) {
    u32 temp_v0;
    u8 temp_v0_2;
    u8 temp_v1;
    u8 var_v1;

    temp_v0 = func_00B526C0();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0xD10) == 0) {
            temp_v1 = M2C_FIELD(temp_v0, u8 *, 0xD11);
            if (temp_v1 != 0) {
                if ((u32) (temp_v1 - 1) < 2U) {
                    M2C_FIELD(temp_v0, u8 *, 0xD11) = 0U;
                    var_v1 = 2;
                    goto block_14;
                }
            } else {
                var_v1 = 9;
block_14:
                M2C_FIELD(temp_v0, u8 *, 0xD10) = var_v1;
            }
            temp_v0_2 = M2C_FIELD(temp_v0, u8 *, 0xD11);
            if (temp_v0_2 != 0) {
                if ((u32) (temp_v0_2 - 1) < 2U) {
                    func_00958000(0x1D);
                }
            } else {
                func_00958000(0x1C);
            }
        }
    }
    return 0;
}
