/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00993A80(void);
M2C_UNK func_00972040(s32, s32, s32, u8);           /* extern */

void func_00991CA0(s32 arg0) {
    s32 temp_a2;
    u32 temp_v0;
    u8 temp_a3;

    temp_v0 = func_00993A80();
    if (temp_v0 != 0) {
        temp_a3 = M2C_FIELD(temp_v0, u8 *, 0x255);
        temp_a2 = arg0 & 0xFF;
        if ((temp_a3 * temp_a3) >= temp_a2) {
            func_00972040(M2C_FIELD(temp_v0, s32 *, 0x150), temp_a2 % (s32) temp_a3, temp_a2 / (s32) temp_a3, temp_a3);
        }
    }
}
