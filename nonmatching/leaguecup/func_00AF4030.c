/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00AF3B30(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_00AF3AB0(u8);                              /* extern */

s32 func_00AF4030(void) {
    u32 temp_v0;

    temp_v0 = func_00AF3B30();
    if (temp_v0 != 0) {
        if ((func_00AF3AB0(M2C_FIELD(temp_v0, u8 *, 0x84)) & 0xFFFF) != 0x35) {
            M2C_FIELD(temp_v0, s8 *, 0x8D) = 4;
            M2C_FIELD(temp_v0, s8 *, 0x8C) = 0;
            func_0026E840(0x84028400);
        } else {
            func_0026E840(0x8C008005);
        }
    }
    return 0;
}
