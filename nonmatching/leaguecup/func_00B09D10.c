/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B0A9F0(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00958000(M2C_UNK);                     /* extern */
M2C_UNK func_00B085C0(M2C_UNK);                     /* extern */

s32 func_00B09D10(void) {
    u32 temp_v0;

    temp_v0 = func_00B0A9F0();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, s32 *, 0x5DC) != 0) {
            if (M2C_FIELD(temp_v0, u8 *, 0x5E0) != 1) {
                M2C_FIELD(temp_v0, s8 *, 0x5D8) = 4;
            } else {
                func_00B085C0(0);
                M2C_FIELD(temp_v0, u8 *, 0x5E0) = 0U;
                M2C_FIELD(temp_v0, s8 *, 0x5D8) = 0;
                func_00958000(0x9A);
            }
            func_0026E840(0x84008401);
        } else {
            M2C_FIELD(temp_v0, u8 *, 0x5E0) = 0U;
            M2C_FIELD(temp_v0, s8 *, 0x5D8) = 0;
            M2C_FIELD(temp_v0, s32 *, 0x5DC) = 1;
            func_00B085C0(0);
            func_00958000(0x9A);
            func_0026E840(0x84008401);
        }
    }
    return 0;
}
