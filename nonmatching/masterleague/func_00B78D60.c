/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B77B10(void);
M2C_UNK func_00958000(M2C_UNK);                     /* extern */
M2C_UNK func_00B77CF0(u8, M2C_UNK);                 /* extern */

s32 func_00B78D60(void) {
    u32 temp_v0;
    u8 temp_a0;

    temp_v0 = func_00B77B10();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0x318) == 0) {
            if (M2C_FIELD(temp_v0, s32 *, 0x5C8) != 1) {
                temp_a0 = M2C_FIELD(temp_v0, u8 *, 0x319);
                if (temp_a0 != 2) {
                    M2C_FIELD(temp_v0, u8 *, 0x318) = 5U;
                    M2C_FIELD(temp_v0, s8 *, 0x31A) = 1;
                    func_00B77CF0(temp_a0, 1);
                    func_00958000(0x5F);
                }
            } else {
                M2C_FIELD(temp_v0, u8 *, 0x318) = 6U;
            }
        }
    }
    return 0;
}
