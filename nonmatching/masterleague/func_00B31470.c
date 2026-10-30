/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B31770(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00B30B00(M2C_UNK);                     /* extern */
M2C_UNK func_00B30C50(M2C_UNK);                     /* extern */

s32 func_00B31470(void) {
    u32 temp_v0;

    temp_v0 = func_00B31770();
    if (temp_v0 != 0) {
        if ((M2C_FIELD(temp_v0, u8 *, 0xD8) == 0) && (M2C_FIELD(temp_v0, s32 *, 0xEC) == 1)) {
            M2C_FIELD(temp_v0, s32 *, 0xEC) = 2;
        } else {
            M2C_FIELD(temp_v0, s32 *, 0xEC) = 1;
            M2C_FIELD(temp_v0, u8 *, 0xD8) = 0U;
            func_00B30C50(0);
            func_00B30B00(0);
        }
        func_0026E840(0x84008401);
    }
    return 0;
}
