/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B71C80(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_00B718B0(M2C_UNK);                         /* extern */
s32 func_00B71B40(u8);                              /* extern */

s32 func_00B717D0(void) {
    u32 temp_v0;
    u32 temp_v0_2;

    temp_v0 = func_00B71C80();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0x10) == 0) {
            if ((M2C_FIELD(temp_v0, u8 *, 0x1C) == 1) || (M2C_FIELD(temp_v0, u8 *, 0x1D) == 1)) {
                if (func_00B71B40(M2C_FIELD((M2C_FIELD(temp_v0, u8 *, 0x1B) + temp_v0), u8 *, 0x11)) == 0) {
                    func_0026E840(0x8C008005);
                    return 0;
                }
                goto block_16;
            }
            temp_v0_2 = func_00B71C80();
            if ((temp_v0_2 != 0) && (func_00B71B40(M2C_FIELD((M2C_FIELD(temp_v0_2, u8 *, 0x1B) + temp_v0_2), u8 *, 0x11)) != 1) && (func_00B718B0(-1) == 1)) {
                M2C_FIELD(temp_v0_2, s8 *, 0x10) = 3;
            }
            goto block_16;
        }
        goto block_16;
    }
block_16:
    return 0;
}
