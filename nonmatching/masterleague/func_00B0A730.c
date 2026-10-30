/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B15370(void);
M2C_UNK func_00B0D690(u8, s32, u16, s32);           /* extern */
s32 func_00B15250(u8, s32);                         /* extern */

void func_00B0A730(s32 arg0) {
    u32 temp_v0;

    temp_v0 = func_00B15370();
    if ((temp_v0 != 0) && ((arg0 & 0xFF) == 1)) {
        func_00B0D690(M2C_FIELD(temp_v0, u8 *, 0xC0C), func_00B15250(M2C_FIELD(temp_v0, u8 *, 0xC0A), (M2C_FIELD(temp_v0, u8 *, 0xC0E) + M2C_FIELD(temp_v0, u8 *, 0xC1A)) & 0xFF) & 0xFFFF, M2C_FIELD(temp_v0, u16 *, 0xC1E), M2C_FIELD(temp_v0, s32 *, 0xC2C));
    }
}
