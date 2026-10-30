/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B2A1C0(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00B28AF0(u8);                          /* extern */

s32 func_00B29C10(void) {
    u32 temp_v0;
    u8 temp_a0;

    temp_v0 = func_00B2A1C0();
    if (temp_v0 != 0) {
        temp_a0 = M2C_FIELD(temp_v0, u8 *, 0xD0);
        if ((s32) temp_a0 < 9) {
            M2C_FIELD(temp_v0, u8 *, 0xD0) = (u8) (temp_a0 + 1);
        } else {
            M2C_FIELD(temp_v0, u8 *, 0xD0) = 0U;
        }
        func_00B28AF0(M2C_FIELD(temp_v0, u8 *, 0xD0));
        func_0026E840(0x8400F802);
    }
    return 0;
}
