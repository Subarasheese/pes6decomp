/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B5F200(void);
s32 func_00225680(u8);                              /* extern */
M2C_UNK func_009BE430();                            /* extern */
M2C_UNK func_009BECB0(u16, s32);                    /* extern */

void func_00B5F9B0(void) {
    u32 temp_v0;

    temp_v0 = func_00B5F200();
    if (temp_v0 != 0) {
        func_009BECB0(M2C_FIELD(((M2C_FIELD(temp_v0, u8 *, 0x54C) * 0x14) + temp_v0), u16 *, 0x608), func_00225680(M2C_FIELD(temp_v0, u8 *, 0x5CD)));
        func_009BE430();
    }
}
